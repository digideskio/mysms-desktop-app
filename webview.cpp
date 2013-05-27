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

#include "webview.h"

QWebView * WebView::createWindow(QWebPage::WebWindowType type)
{
    webView = new QWebView;
    QWebPage *newWeb = new QWebPage(webView);

    if (type == QWebPage::WebModalDialog)
        webView->setWindowModality(Qt::ApplicationModal);

    webView->setAttribute(Qt::WA_DeleteOnClose, true);

    webView->setPage(newWeb);
    connect(newWeb, SIGNAL(windowCloseRequested()), this, SLOT(closeMyWindow()));

    webView->showMaximized();

    return webView;
}

void WebView::closeMyWindow()
{
    webView->close();
}
