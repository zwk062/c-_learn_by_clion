//
// Created by apple on 2023/1/14.
//

#ifndef LEI_AND_DUIXIANG_4_1_5_POINT_H
#define LEI_AND_DUIXIANG_4_1_5_POINT_H
//����
class Point
{
public:
    //����x
    void setX(int x);

    //��ȡx
    int getX();

    //����y
    void setY(int y);

    //��ȡy
    int getY();

private:
    int m_x;
    int m_y;
};

class Circle
{
public:
    //���ð뾶
    void setR(int r);

    //��ȡ�뾶
    int getR();

    //����Բ��
    void setCenter(Point center);

    //��ȡԲ��
    Point getCenter();

private:
    int m_R;
    //������������Ա
    Point m_Center;
};
#endif //LEI_AND_DUIXIANG_4_1_5_POINT_H
