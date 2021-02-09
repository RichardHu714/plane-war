#include "map.h"
#include "config.h"
map::map()
{
    m_map1.load(Map_Path);
    m_map2.load(Map_Path);
    // 初始化加载地图对象

    m_map1_posY = -Game_Height;
    m_map2_posY = 0;
    //设置坐标

    m_scroll_speed = Map_Scroll_Speed;
    //设置滚动速度
}

void map::mapPosition()
{
    m_map1_posY += m_scroll_speed;
    if(m_map1_posY >= 0){
        m_map1_posY = -Game_Height;
    }//第一张图片
    m_map2_posY += m_scroll_speed;
    if(m_map2_posY >= Game_Height){
        m_map1_posY = 0;
    }//第二张图片
}
