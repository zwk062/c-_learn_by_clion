#include "iostream"
using namespace std;
//1.������Ϊ���ص�����
void func(int &a)
{
    cout << "func(int &a)" << endl;
}
void func(const int &a)
{
    cout << "func(const int &a)" << endl;
}
//2.������������Ĭ�ϲ���
void func2(int a,int b=10)
{
    cout << "func2(int a,int b=10)" << endl;
}
void func2(int a)
{
    cout << "func2(int a=10)" << endl;
}

int main ()
{
//    int a=10;
//    func(a);
//     func(10);//const int &a=10  ->>  int tmp=10; const int &a=tmp;
     //func2(10);//����

}
