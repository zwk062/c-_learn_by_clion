#include<iostream>
#include "string"
#include "class.h"
using namespace std;
void isInCircle(Circle &c,Point &p)
{
    //��������ֱ�Ӿ���ƽ��
    int distance =
            (c.getCenter().getX()-p.getX())* (c.getCenter().getX()-p.getX())+
            (c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY());
    int rdistance =c.getR()*c.getR();
    if(distance==rdistance)
    {
        cout<<"����Բ��"<<endl;
    }
    else if(distance>rdistance)
    {
        cout<<"����Բ��"<<endl;
    }
    else
    {
        cout<<"����Բ��"<<endl;
    }
}
int main(){
    //����Բ
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    //������
    Point p;
    p.setX(10);
    p.setY(9);
    //�ж�
    isInCircle(c,p);
}