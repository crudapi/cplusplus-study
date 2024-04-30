#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cassert>
#include <QKeyEvent>
#include <QPainter>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bool  load_result = false;
    //(4) your code. load data from data.txt file by Snake's member function LoadPlayDataFromFile

    assert(load_result);

    //(5) your code.  set window title with "Snake Game"
    //https://zhuanlan.zhihu.com/p/669799427

    //(6) your code. set window size by the col number and row number in Snake object.
    //every pixmap size is the same : width * height = m_pictureSize * m_pictureSize
    //use setFixedSize()

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<"user pressed key "<<event->key();
    bool gameover = false;
    switch (event->key())
    {
    case Qt::Key_Up :
    {
        //(3) your code. the player enter a key
        //, you have to update the game by call member function Play in Snake.


        update();//this will tell Qt to call paintEvent.
        break;
    }
    case Qt::Key_Down :
    {
        //(3) your code.

        update();
        break;
    }
    case Qt::Key_Left :
    {
        //(3) your code.

        update();
        break;
    }
    case Qt::Key_Right :
    {
        //(3) your code.

        update();
        break;
    }
    }
    if(gameover)
    {
        //(2) your code. use QMessageBox to tell the player the game is over.
        // https://zhuanlan.zhihu.com/p/671461612



    }
}


void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //(1) your code. use Snake PrintMatrix to drew the game

}
