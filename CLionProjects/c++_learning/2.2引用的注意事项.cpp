#include "iostream"
using namespace std;

int main (){
    int a=10;

    //int &b;//错误
    int &b=a;

    int c=20;
    b=c;//复制操作而不是更改引用
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;


}