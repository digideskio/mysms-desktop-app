/****************************************************************************
**
** mysms - Send & receive all your SMS on your Notebook, PC or tablet – like on your smartphone
** Copyright (C) 2013 Up To Eleven
** All rights reserved.
**
**
** This library is free software.  either version 2.1 of the License, or (at your option) any later version.
** you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation;
** either version 2.1 of the License, or (at your option) any later version.
**
**
** This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
** Without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
** See the GNU Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public License along with this library;
** if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
**
****************************************************************************/

#include "qnetworkaccessmanagercustom.h"
#include "logger.h"

#include <QUrl>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkProxy>
#include <QNetworkReply>
#include <QMessageBox>
#include <QApplication>

QNetworkAccessManagerCustom::QNetworkAccessManagerCustom()
{}

QNetworkAccessManagerCustom::QNetworkAccessManagerCustom(QNetworkAccessManager *oldManager, QObject *parent) : QNetworkAccessManager(parent)
{
    setCache(oldManager->cache());
    setCookieJar(oldManager->cookieJar());
    setProxy(oldManager->proxy());
    setProxyFactory(oldManager->proxyFactory());
}

QNetworkReply * QNetworkAccessManagerCustom::createRequest ( Operation op, const QNetworkRequest & req, QIODevice * outgoingData)
{
    if (op == QNetworkAccessManager::GetOperation)
    {
        QString path = req.url().toString();

        if (path.contains(QString("fonts.googleapis.com")))     // due to problem with local font - overwrite user agent
        {
            QNetworkRequest request(req);
            request.setUrl(QUrl("file:///" + QApplication::applicationDirPath() + QString("\\fonts\\fontGoogle.css")));

            return QNetworkAccessManager::createRequest (op, request, outgoingData);
        }
    }

    return QNetworkAccessManager::createRequest (op, req, outgoingData);
}
