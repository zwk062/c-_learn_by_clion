#include "iostream"
using namespace std;

//����Լ��������ݣ����Լ����ݣ����û�У���Ĭ��ֵ

//ע������
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬶�������Ĭ�ϲ���
//int func1(int a=10,int b,int c)
//{
//    return a+b+c;
//}
//2�����������������Ĭ�ϲ�����������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a=10,int b=10);


int func(int a,int b=20,int c=30)
{
    return a+b+c;
}


int main (){

    cout<<func(10,30)<<endl;
}

int func2(int a,int b)
{
    return a+b;
}