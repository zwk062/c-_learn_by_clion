#include <iostream>
using namespace std;
int* func()
{
    //利用new关键字将数据开辟到堆区
    //p是局部变量，存放在栈区，指针保存的数据放在堆区
    int* p = new int(10);//返回地址
    return p;
}
int main()
{
    int* p=func();
    cout<<*p<<endl;
    cout<<*p<<endl;


}