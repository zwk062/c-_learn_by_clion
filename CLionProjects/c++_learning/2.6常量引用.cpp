#include "iostream"
using namespace std;
//��ӡ���ݺ���(��const��Ϊ�˷�ֹ�������޸ĺ�����a��ֵ��
void show_value(const int& val)
{
    //val =1000;
    cout<<"val="<<val<<endl;
}

int main(){
    //��������
    //����������Ҫ���������βΣ���ֹ�����

    //int a=10;
    //����const֮�󣬱������������޸�Ϊ int temp=10; const int &ref=temp;
    //const int& ref =10;
    //ref=20;//����const֮���Ϊֻ�����������޸�

    int a=100;
    show_value(a);
    cout<<"a="<<a<<endl;

}
