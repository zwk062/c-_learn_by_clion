#include "iostream"
using namespace std;

//ͬһ����������
//����������ͬ
//�����������Ͳ�ͬ ���� ������ͬ ���� ˳��ͬ��
void func()
{
cout << "func()" << endl;
}
void func(int a)
{
    cout << "func(int a)" << endl;
}
void func(double a)
{
    cout << "func(double a)" << endl;
}
void func(int a, double b)
{
    cout << "func(int a, double b)" << endl;
}
void func(double a, int b)
{
    cout << "func(double a, int b)" << endl;
}
//ע�⣺�����ķ���ֵ���Ͳ�������Ϊ�������ص�����
//int func(double a, int b)
//{
//    cout << "func(double a, int b)" << endl;
//}
int main (){
       func(10,3.14);
       func(3.14,10);
}
