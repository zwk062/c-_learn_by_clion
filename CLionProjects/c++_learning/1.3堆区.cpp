#include <iostream>
using namespace std;
int* func()
{
    //����new�ؼ��ֽ����ݿ��ٵ�����
    //p�Ǿֲ������������ջ����ָ�뱣������ݷ��ڶ���
    int* p = new int(10);//���ص�ַ
    return p;
}
int main()
{
    int* p=func();
    cout<<*p<<endl;
    cout<<*p<<endl;


}