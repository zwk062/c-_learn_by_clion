#include "class.h"

//设置x
void Point::setX(int x)
{
    m_x=x;
}
//获取x
int Point::getX()
{
    return m_x;
}
//设置y
void Point::setY(int y)
{
    m_y=y;
}
//获取y
int Point::getY()
{
    return m_y;
}

//设置半径
void Circle::setR(int r)
{
    m_R=r;
}
//获取半径
int Circle::getR()
{
    return m_R;
}
//设置圆心
void Circle::setCenter(Point center)
{
    m_Center=center;
}
//获取圆心
Point Circle::getCenter()
{
    return m_Center;
}
