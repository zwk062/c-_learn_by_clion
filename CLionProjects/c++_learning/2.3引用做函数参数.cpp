#include "iostream"
using namespace std;
//��������

//1ֵ����
void myswap1(int a,int b)
{
    int tmp=a;
    a=b;
    b=tmp;
    cout<<"swap1_a="<<a<<endl;
    cout<<"swap1_b="<<b<<endl;
}
//2��ַ����
void myswap2(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
//3���ô���
void myswap3(int &a,int &b)//������ԭ�����һ�� int &a=a
{
    int tmp=a;
    a=b;
    b=tmp;
}
int main (){
    int a=10;
    int b=20;
   // myswap1(a,b);//ֵ���ݣ��ββ�������ʵ��
   //myswap2(&a,&b);//��ַ���ݣ��βλ�����ʵ��
    myswap3(a,b);//���ô��ݣ��βλ�����ʵ��
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}