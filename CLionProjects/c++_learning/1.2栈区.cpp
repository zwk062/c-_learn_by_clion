#include <iostream>
using namespace std;
//注意事项：不要返回局部变量的地址
int* func(int b)//形参也放在栈区
{
    b=100;
    int a=10;//局部变量 存放在栈区，栈区的数据在程序执行完后自动释放
    return &a;//返回局部变量的地址
}

int main ()
{
    int *p=func(1);
    cout<<*p<<endl;//编译器做了保留。
    cout<<*p<<endl;//编译器不做保留了。
    return 0;
}
