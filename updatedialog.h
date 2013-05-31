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

#ifndef UPDATEDIALOG_H
#define UPDATEDIALOG_H

#include <QWidget>
#include <QProcess>
#include <QLabel>
#include <QVBoxLayout>

#include "filedownloader.h"

class UpdateDialog : public QWidget
{
    Q_OBJECT
public:
    explicit UpdateDialog(QWidget *parent = 0);
    ~UpdateDialog();

signals:

private slots:
    void loadFile();
    void processError(QProcess::ProcessError err);
    void processStarted();
    
public slots:
    void accept();
    void reject();
    
private:
    FileDownloader * m_pFile;
    QLabel m_updatePic;
    QLabel m_updateText;
    QHBoxLayout m_mainLayout;
    QVBoxLayout m_contentLayout;
};

#endif // UPDATEDIALOG_H
