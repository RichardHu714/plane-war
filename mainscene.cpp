#include "mainscene.h"
#include "config.h"
#include <QApplication>
#include <QIcon>
#include <QPainter>

MainScene::MainScene(QWidget *parent)
    : QWidget(parent)
{

    initScene();                                     //调用初始化场景
}

MainScene::~MainScene()
{
}

void MainScene::initScene()
{
    setFixedSize(Game_Width,Game_Height);           //初始窗口大小
    setWindowTitle(Game_Title);                     //设置窗口标题
    setWindowIcon(QIcon(Game_Icon));                //游戏图标
    m_Timer.setInterval(Game_Rate);                 //定时器间隔
}

void MainScene::playHome()
{

}

void MainScene::playGame()
{
    m_Timer.start();                                //启动定时器
    connect(&m_Timer,&QTimer::timeout,[=](){
        updatePosition();//更新坐标
        update();//绘制元素
    });
}

void MainScene::updatePosition()
{

}

void MainScene::paintEvent(QPaintEvent *event)
{

}
