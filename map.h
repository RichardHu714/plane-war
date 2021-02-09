#ifndef MAP_H
#define MAP_H
#include<QPixmap>

class map
{
public:
    map();                  //构造函数
    void mapPosition();     //地图滚动坐标计算

public:
    QPixmap  m_map1;
    QPixmap  m_map2;
    //两张地图

    int m_map1_posY;
    int m_map2_posY;
    //Y轴坐标

    int m_scroll_speed;
    //地图滚动幅度
};

#endif // MAP_H
