#include <iostream>
using namespace std;
//ע�������Ҫ���ؾֲ������ĵ�ַ
int* func(int b)//�β�Ҳ����ջ��
{
    b=100;
    int a=10;//�ֲ����� �����ջ����ջ���������ڳ���ִ������Զ��ͷ�
    return &a;//���ؾֲ������ĵ�ַ
}

int main ()
{
    int *p=func(1);
    cout<<*p<<endl;//���������˱�����
    cout<<*p<<endl;//���������������ˡ�
    return 0;
}
