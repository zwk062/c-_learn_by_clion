#include "iostream"
using namespace std;

int main (){
    int a=10;

    //int &b;//����
    int &b=a;

    int c=20;
    b=c;//���Ʋ��������Ǹ�������
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;


}