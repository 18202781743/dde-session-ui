/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-session-ui/xml/org.deepin.dde.Gesture1.xml -a ./dde-session-ui/toolGenerate/qdbusxml2cpp/org.deepin.dde.Gesture1Adaptor -i ./dde-session-ui/toolGenerate/qdbusxml2cpp/org.deepin.dde.Gesture1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_GESTURE1ADAPTOR_H
#define ORG_DEEPIN_DDE_GESTURE1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-session-ui/toolGenerate/qdbusxml2cpp/org.deepin.dde.Gesture1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.Gesture1
 */
class Gesture1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.Gesture1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.Gesture1\">\n"
"    <signal name=\"TouchSinglePressTimeout\">\n"
"      <arg type=\"i\" name=\"time\"/>\n"
"      <arg type=\"d\" name=\"scalex\"/>\n"
"      <arg type=\"d\" name=\"scaley\"/>\n"
"    </signal>\n"
"    <signal name=\"TouchUpOrCancel\">\n"
"      <arg type=\"d\" name=\"scalex\"/>\n"
"      <arg type=\"d\" name=\"scaley\"/>\n"
"    </signal>\n"
"    <signal name=\"TouchMoving\">\n"
"      <arg type=\"d\" name=\"scalex\"/>\n"
"      <arg type=\"d\" name=\"scaley\"/>\n"
"    </signal>\n"
"    <signal name=\"TouchPressTimeout\">\n"
"      <arg type=\"i\" name=\"fingers\"/>\n"
"      <arg type=\"i\" name=\"time\"/>\n"
"      <arg type=\"d\" name=\"scalex\"/>\n"
"      <arg type=\"d\" name=\"scaley\"/>\n"
"    </signal>\n"
"    <signal name=\"TouchEdgeEvent\">\n"
"      <arg type=\"s\" name=\"direction\"/>\n"
"      <arg type=\"d\" name=\"scalex\"/>\n"
"      <arg type=\"d\" name=\"scaley\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    Gesture1Adaptor(QObject *parent);
    virtual ~Gesture1Adaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void TouchEdgeEvent(const QString &direction, double scalex, double scaley);
    void TouchMoving(double scalex, double scaley);
    void TouchPressTimeout(int fingers, int time, double scalex, double scaley);
    void TouchSinglePressTimeout(int time, double scalex, double scaley);
    void TouchUpOrCancel(double scalex, double scaley);
};

#endif
