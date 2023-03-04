#include <iostream>
using namespace std;
//1.new的基本语法
int* func()
{
    //在堆区创建数据
    int* p = new int(10);//返回指针
    return p;
}
void test1(){
    int* p = func();
    cout<<*p<<endl;
    cout<<*p<<endl;
    //堆区的数据由程序员手动释放
    delete p;
   // cout<<*p<<endl;//内存已经释放，在访问为非法操作
}
//2.在堆区用new创建数组
void test2()
{
    int* arr = new int[10];//创建10个int的数组，返回首地址
    for(int i=0;i<10;i++)
    {
       arr[i]=i+100;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    delete [] arr;//释放数组
}

int main(){
    //test1();
    test2();
}