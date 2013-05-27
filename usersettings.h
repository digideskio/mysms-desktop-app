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


#ifndef USERSETTINGS_H
#define USERSETTINGS_H

#include <QSettings>

class TCommonTabData
{
public:
    TCommonTabData(){}

    bool startExecSelector;
    bool showInTaskbarAfterExitSelector;
};

class TNotificationTabData
{
public:
    bool displayNotificationsSelector;
    bool privacyModeNotificationsSelector;
};

class TNetworkTabData
{
public:
    int portNumber;
    bool alternativePortsSelector;
    int proxyRecognitionComboIndex;
    QString hostEdit;
    QString portEdit;
    bool proxyAuth;
    QString userEdit;
    QString passwordEdit;
    bool uPnpSelector;
};

class TShortcutsTabData
{
public:
    bool mysmsOpenAutoEnableSelector;
    bool mysmsOpenAutoShiftSelector;
    bool mysmsOpenAutoCtrlSelector;
    bool mysmsOpenAutoAltSelector;
    QString mysmsOpenAutoKeyEdit;

    bool mysmsSendEnableSelector;
    bool mysmsSendShiftSelector;
    bool mysmsSendCtrlSelector;
    bool mysmsSendAltSelector;
    QString mysmsSendKeyEdit;
};

class TSoundTabData
{
public:
    bool singleMessageSelector;
    bool groupMessageSelector;

    bool messageSoundOnlyFirst;
    bool messageSoundEnable;

    int  singleSoundIndex;
    int  groupSoundIndex;
} ;

class userSettingsData
{


public:
    void SetTabData(userSettingsData const & passedUserSettingsData);

    TCommonTabData commonTabData;
    TNotificationTabData notificationTabData;
    TNetworkTabData networkTabData;
    TShortcutsTabData shortcutsTabData;
    TSoundTabData soundTabData;
};

class userSettings
{
public:
    static userSettings* getInstance();
    void saveSettings(userSettingsData const & passedUserSettingsData);
    void loadSettings();
    void removeObsoleteVersionSettings();
    void setDefaultData();
    bool areSettingsAvailable();

    userSettingsData GetUserSettingsData() const;

private:
    userSettings();
    ~userSettings();

    void setStartup();
    void loadStartup();

    static userSettings* muserSettings;
private:
    QSettings settings;
    userSettingsData muserSettingsData;
};

#endif // USERSETTINGS_H
