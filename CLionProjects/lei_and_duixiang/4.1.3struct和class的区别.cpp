#include<iostream>
#include "string"
using namespace std;
class c1
{
    int a;//默认私有
};
struct c2
{
    int a;//默认共有
};
int main()
{
//    c1 c1;
//    c1.a=10;
     c2 c2;
     c2.a=10;
}

