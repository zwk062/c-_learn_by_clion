#include<iostream>
#include "string"
using namespace std;
class cube
{
public:
    //���ó����
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
    //���ó�Ա�����ж�����Ƿ����
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
//����ȫ�ֺ����ж�����Ƿ����
bool isSame(cube &c1,cube &c2)
{
    if(c1.cal_S()==c2.cal_S())
        return true;
    return false;
}
int main(){
    cube c1;
    c1.set(10,10,10);
    cout<<"c1�����Ϊ��"<<c1.cal_S()<<endl;
    cube c2;
    c2.set(10,10,10);
    //ȫ�ֺ���
    bool ret = isSame(c1,c2);
    if(ret)cout<<"���"<<endl;
    else cout<<"�����"<<endl;
    //��Ա����
    ret = c1.isSamebyclass(c2);
    if(ret)cout<<"c���"<<endl;
    else cout<<"c�����"<<endl;
}
