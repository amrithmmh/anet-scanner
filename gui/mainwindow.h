#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtDebug>
#include <QCamera>
#include <QCameraInfo>
#include <QActionGroup>
#include <QAction>
#include <QVideoProbe>

#include "calibrationencoder.h"
#include "printercontroller.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    PrinterController* m_thread;
};

#endif // MAINWINDOW_H
