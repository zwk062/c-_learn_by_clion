
#include <iostream>
#include <string>
using namespace std;

class Animal1
{
public:
    Animal1()
    {
        cout<<"Animal1���캯��"<<endl;
    }
    virtual void speak()=0;
//    virtual ~Animal1()//������
//    {
//        cout<<"Animal1����������"<<endl;
//    }
   virtual ~Animal1()=0;//��������
};
Animal1::~Animal1() {
    cout<<"Animal1������������"<<endl;
}

class Cat1:public Animal1
{
public:
    Cat1(string name)
    {
        cout<<"Cat���캯��"<<endl;
        m_Name= new string(name);
    }
    virtual void speak()
    {
        cout<<*m_Name<<"Сè��˵��"<<endl;
    }
    ~Cat1()
    {
        cout<<"Cat��������"<<endl;
        if(m_Name!=NULL)
        delete m_Name;
        m_Name=NULL;
    }
    string *m_Name;
};
void test01()
{
    Animal1 *animal1 = new Cat1("Tom");
    animal1->speak();
    //����ָ����������ʱ�򣬲����������������������������������ж������ԣ������ڴ�й©��
    delete animal1;
}
int main (){
    test01();
}