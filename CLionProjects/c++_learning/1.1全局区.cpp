#include <iostream>
using namespace std;
//全局变量
int g_a = 10;//global
int g_b = 10;
//const修饰的全局变量，全局常量
const int c_g_a =10;
int main() {
    //全局区（局部不在全局区）
    //全局变量(在函数体外），静态变量，常量

    //创建普通的局部变量（函数体内）
    int a=10;
    int b=10;
    cout<<"局部变量a的地址为："<< (long)&a <<endl;
    cout<<"局部变量b的地址为："<< (long)&b <<endl;
    //静态变量
    static int s_a=10;
    static int s_b=10;
    cout<<"静态变量s_a的地址为："<< (long)&s_a <<endl;
    cout<<"静态变量s_b的地址为："<< (long)&s_b <<endl;
    cout<<"全局变量g_a的地址为："<< (long)&g_a <<endl;
    cout<<"全局变量g_b的地址为："<< (long)&g_b <<endl;
    //常量
        //字符串常量
        cout<<"字符串常量的地址为:"<<(long)&"hello world" << endl;
        //const修饰的变量
            //const修饰的全局变量
            cout<<"全局常量c_g_a的地址为:"<<(long)&c_g_a << endl;
            //const修饰的局部变量
            const int c_l_a=10;  //local
            cout<<"局部常量c_l_a的地址为:"<<(long)&c_l_a << endl;



    return 0;
}
