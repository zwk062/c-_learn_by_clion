#include <iostream>
using namespace std;
class Base
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son :public Base
{
public:
    int m_D;
};
void test01()
{
    //16
    //���������г�Ա���Զ��ᱻ�̳�����   ������˽�����Ա������������ˣ����ʲ�������ȷʵ���̳��ˡ�
    cout<<sizeof(Son)<<endl;
}
int main ()
{
    test01();
}