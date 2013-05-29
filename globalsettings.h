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

#ifndef GLOBALSETTINGS_H
#define GLOBALSETTINGS_H

//////////////////// App definitions ////////////////////////
#define VERSION_MAJOR       2
#define VERSION_MIDDLE      0
#define VERSION_MINOR       0

#define ORGANIZATION_NAME   "Up To Eleven"
#define APPLICATION_NAME    "mysms"

#define LANGUAGE_GERMAN     "German"
#define LANGUAGE_GERMAN_FILE "mysms_de"

//////////////////// System definitions ////////////////////
#define LIVE_SYSTEM
//#define WEBINSPECTOR
//#define CACHE_CLEAR
//#define QT5

//////////////////// Popup definitions /////////////////////

#define POPUP_TEXT_MAX_SIZE             50
#define POPUP_OVERVIEW_TEXT_MAX_SIZE    15
#define POPUP_MESSAGE_MAX_SIZE          300
#define POPUP_FADEOUT_TIME              10000
#define POPUP_START_TIME                500
#define POPUP_NUMBER                    3

//////////////////// General definitions //////////////////

#ifdef LIVE_SYSTEM
    #define SERVER_URL "https://app.mysms.com"
#else
    #define SERVER_URL "http://app.mysms.gpa.sms.co.at"
#endif

#define UPDATE_LINK "http://www.mysms.com/images/mysms/download/mysms-setup.exe"
#define UPDATE_EXECUTABLE "project_upgrade.exe"
#define UPDATE_LOCALFILE "mysms_install.exe"
#define XML_VERSION_FILE_PATH "http://www.mysms.com/images/mysms/download/padfiles/mysmspad.xml"

#define LOGFILE_PATH "C:\\DesktopApp\\myLogFile.txt"

#endif // GLOBALSETTINGS_H
