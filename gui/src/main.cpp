/**
 * @file /src/main.cpp
 *
 * @brief Qt based gui.
 *
 * @date November 2010
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QApplication>
#include <QtQuick/QQuickView>
#include "../include/gui/main_window.hpp"
#include <QtQuick/QQuickView>
#include <QtQml/QQmlEngine>
#include<QtQuick/QQuickItem>
/*****************************************************************************
** Main
*****************************************************************************/

int main(int argc, char **argv) {
    //QDebug("HIIII");

    /*********************
    ** Qt
    **********************/
    QApplication app(argc, argv);
    gui::MainWindow w(argc,argv);
   // w.show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    int result = app.exec();

	return result;
}
