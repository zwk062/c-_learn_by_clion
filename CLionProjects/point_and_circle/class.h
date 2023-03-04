//
// Created by apple on 2023/1/14.
//

#ifndef LEI_AND_DUIXIANG_4_1_5_POINT_H
#define LEI_AND_DUIXIANG_4_1_5_POINT_H
//点类
class Point
{
public:
    //设置x
    void setX(int x);

    //获取x
    int getX();

    //设置y
    void setY(int y);

    //获取y
    int getY();

private:
    int m_x;
    int m_y;
};

class Circle
{
public:
    //设置半径
    void setR(int r);

    //获取半径
    int getR();

    //设置圆心
    void setCenter(Point center);

    //获取圆心
    Point getCenter();

private:
    int m_R;
    //别的类可以做成员
    Point m_Center;
};
#endif //LEI_AND_DUIXIANG_4_1_5_POINT_H
