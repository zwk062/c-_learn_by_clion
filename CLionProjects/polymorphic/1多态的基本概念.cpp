#include <iostream>
using namespace std;
class Animal
{
public:
     virtual void speak()  //�麯��,��ַ����ΪAnimal
    {
        cout<<"������˵��"<<endl;
    }
};
class Cat:public Animal
{
public:
    void speak()
    {
        cout<<"Сè��˵��"<<endl;
    }
};
//��ַ��󶨣������Ƕ�����˵��
void speak(Animal &animal)
{
    animal.speak();
}
void test1()
{
    Cat cat;
    speak(cat);
}
void test2()
{
    cout<<"sizeof Animal="<<sizeof(Animal)<<endl;//ȥ��virtual�����СΪ1
    //����virtualΪ8 ����һ��ָ��
    //vfptr ��virtual function pointer �麯������ָ��
    //ָ���麯���� vftable virtual function table
    //����ڲ���¼�麯���ĵ�ַ�� &Animal::speak
    //����̳к󣬻�ͬʱ�̳��麯��ָ��ͱ�
    //��������д������麯����������麯�����ڻ��滻��������麯����ַ &Cat::speak
    //�������ָ���������ָ���������ʱ�򣬷�����̬
    //Animal &animal =cat;
    //animal.speak;
}
int main() {
    //test1();
    test2();
    return 0;
}
