#include<iostream>
#include "string"
using namespace std;
class cube
{
public:
    //设置长宽高
    void set(int l,int w,int h)
    {
        m_H=h;
        m_L=l;
        m_W=w;
    }
    int cal_S()
    {
        return 2*m_W*m_L+2*m_H*m_L+2*m_W*m_H;
    }
    //利用成员函数判断面积是否相等
    bool isSamebyclass(cube &c)
    {
        if(this->cal_S()==c.cal_S())
            return true;
        return false;
    }
private:
    int m_L;
    int m_W;
    int m_H;
};
//利用全局函数判断面积是否相等
bool isSame(cube &c1,cube &c2)
{
    if(c1.cal_S()==c2.cal_S())
        return true;
    return false;
}
int main(){
    cube c1;
    c1.set(10,10,10);
    cout<<"c1的面积为："<<c1.cal_S()<<endl;
    cube c2;
    c2.set(10,10,10);
    //全局函数
    bool ret = isSame(c1,c2);
    if(ret)cout<<"相等"<<endl;
    else cout<<"不相等"<<endl;
    //成员函数
    ret = c1.isSamebyclass(c2);
    if(ret)cout<<"c相等"<<endl;
    else cout<<"c不相等"<<endl;
}
