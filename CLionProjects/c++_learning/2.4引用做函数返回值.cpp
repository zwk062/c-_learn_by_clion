#include "iostream"
using namespace std;
//1.��Ҫ���ؾֲ�����������
int& test01()
{
    int a=10; //�ֲ�����������ջ��
    return a;
}
//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02(){
    static int a=10;//��̬��������ȫ����,�ڳ��������ϵͳ�ͷ�
    return a;
}

int main (){
   // int &ref=test01();
    int &ref=test02();
    cout<<"ref="<<ref<<endl;
    test02()=1000;//a=1000  �����ĵ��ÿ�����Ϊ��ֵ
    cout<<"ref="<<ref<<endl;
}
