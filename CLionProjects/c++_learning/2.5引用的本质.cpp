#include "iostream"
using namespace std;
int main(){
    int a=10;
    int &ref=a;//�ڲ��Զ�ת��Ϊ int* const ref=&a;
    ref = 20;//�ڲ����������ã��Զ���� *ref =20;
}

