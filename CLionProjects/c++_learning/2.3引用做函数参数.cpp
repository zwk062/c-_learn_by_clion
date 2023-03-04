#include "iostream"
using namespace std;
//交换函数

//1值传递
void myswap1(int a,int b)
{
    int tmp=a;
    a=b;
    b=tmp;
    cout<<"swap1_a="<<a<<endl;
    cout<<"swap1_b="<<b<<endl;
}
//2地址传递
void myswap2(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
//3引用传递
void myswap3(int &a,int &b)//别名和原名起的一样 int &a=a
{
    int tmp=a;
    a=b;
    b=tmp;
}
int main (){
    int a=10;
    int b=20;
   // myswap1(a,b);//值传递，形参不会修饰实参
   //myswap2(&a,&b);//地址传递，形参会修饰实参
    myswap3(a,b);//引用传递，形参会修饰实参
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}