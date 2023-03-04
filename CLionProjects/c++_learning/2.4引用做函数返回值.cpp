#include "iostream"
using namespace std;
//1.不要返回局部变量的引用
int& test01()
{
    int a=10; //局部变量存在在栈区
    return a;
}
//2.函数的调用可以作为左值
int& test02(){
    static int a=10;//静态变量存在全局区,在程序结束后系统释放
    return a;
}

int main (){
   // int &ref=test01();
    int &ref=test02();
    cout<<"ref="<<ref<<endl;
    test02()=1000;//a=1000  函数的调用可以作为左值
    cout<<"ref="<<ref<<endl;
}
