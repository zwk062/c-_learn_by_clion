#include<iostream>
#include "string"
#include "class.h"
using namespace std;
void isInCircle(Circle &c,Point &p)
{
    //计算两点直接距离平方
    int distance =
            (c.getCenter().getX()-p.getX())* (c.getCenter().getX()-p.getX())+
            (c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY());
    int rdistance =c.getR()*c.getR();
    if(distance==rdistance)
    {
        cout<<"点在圆上"<<endl;
    }
    else if(distance>rdistance)
    {
        cout<<"点在圆外"<<endl;
    }
    else
    {
        cout<<"点在圆内"<<endl;
    }
}
int main(){
    //创建圆
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    //创建点
    Point p;
    p.setX(10);
    p.setY(9);
    //判断
    isInCircle(c,p);
}