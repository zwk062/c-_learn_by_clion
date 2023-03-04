#include "iostream"
using namespace std;
//打印数据函数(加const是为了防止函数内修改函数外a的值）
void show_value(const int& val)
{
    //val =1000;
    cout<<"val="<<val<<endl;
}

int main(){
    //常量引用
    //常量引用主要用来修饰形参，防止误操作

    //int a=10;
    //加上const之后，编译器将代码修改为 int temp=10; const int &ref=temp;
    //const int& ref =10;
    //ref=20;//加入const之后变为只读，不可以修改

    int a=100;
    show_value(a);
    cout<<"a="<<a<<endl;

}
