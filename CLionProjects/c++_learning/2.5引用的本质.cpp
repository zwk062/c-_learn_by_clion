#include "iostream"
using namespace std;
int main(){
    int a=10;
    int &ref=a;//内部自动转换为 int* const ref=&a;
    ref = 20;//内部发现是引用，自动变成 *ref =20;
}

