#include "iostream"
using namespace std;

//同一个作用域下
//函数名称相同
//函数参数类型不同 或者 个数不同 或者 顺序不同。
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
//注意：函数的返回值类型不可以作为函数重载的条件
//int func(double a, int b)
//{
//    cout << "func(double a, int b)" << endl;
//}
int main (){
       func(10,3.14);
       func(3.14,10);
}
