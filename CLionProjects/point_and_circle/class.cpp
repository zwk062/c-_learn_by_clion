#include "class.h"

//����x
void Point::setX(int x)
{
    m_x=x;
}
//��ȡx
int Point::getX()
{
    return m_x;
}
//����y
void Point::setY(int y)
{
    m_y=y;
}
//��ȡy
int Point::getY()
{
    return m_y;
}

//���ð뾶
void Circle::setR(int r)
{
    m_R=r;
}
//��ȡ�뾶
int Circle::getR()
{
    return m_R;
}
//����Բ��
void Circle::setCenter(Point center)
{
    m_Center=center;
}
//��ȡԲ��
Point Circle::getCenter()
{
    return m_Center;
}
