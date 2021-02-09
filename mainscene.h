#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QTimer>
#include "map.h"

class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

    void initScene();          //初始化场景
    void playHome();
    void playGame();
    void updatePosition();
    void paintEvent(QPaintEvent *event);

    map m_map;

    QTimer m_Timer;             //定时器
};

#endif // MAINSCENE_H
