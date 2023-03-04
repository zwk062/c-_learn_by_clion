#include "iostream"
using namespace std;

//如果自己传入数据，用自己数据，如果没有，用默认值

//注意事项
//1。如果某个位置已经有了默认参数，那么从这个位置往后，都必须有默认参数
//int func1(int a=10,int b,int c)
//{
//    return a+b+c;
//}
//2。如果函数的声明有默认参数，函数的实现就不能有默认参数
//声明和实现只能有一个有默认参数
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