#include <iostream>
using namespace std;
//1.new�Ļ����﷨
int* func()
{
    //�ڶ�����������
    int* p = new int(10);//����ָ��
    return p;
}
void test1(){
    int* p = func();
    cout<<*p<<endl;
    cout<<*p<<endl;
    //�����������ɳ���Ա�ֶ��ͷ�
    delete p;
   // cout<<*p<<endl;//�ڴ��Ѿ��ͷţ��ڷ���Ϊ�Ƿ�����
}
//2.�ڶ�����new��������
void test2()
{
    int* arr = new int[10];//����10��int�����飬�����׵�ַ
    for(int i=0;i<10;i++)
    {
       arr[i]=i+100;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    delete [] arr;//�ͷ�����
}

int main(){
    //test1();
    test2();
}