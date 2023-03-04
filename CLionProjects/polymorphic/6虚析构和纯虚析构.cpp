
#include <iostream>
#include <string>
using namespace std;

class Animal1
{
public:
    Animal1()
    {
        cout<<"Animal1构造函数"<<endl;
    }
    virtual void speak()=0;
//    virtual ~Animal1()//虚析构
//    {
//        cout<<"Animal1虚析构函数"<<endl;
//    }
   virtual ~Animal1()=0;//纯虚析构
};
Animal1::~Animal1() {
    cout<<"Animal1纯虚析构函数"<<endl;
}

class Cat1:public Animal1
{
public:
    Cat1(string name)
    {
        cout<<"Cat构造函数"<<endl;
        m_Name= new string(name);
    }
    virtual void speak()
    {
        cout<<*m_Name<<"小猫在说话"<<endl;
    }
    ~Cat1()
    {
        cout<<"Cat析构函数"<<endl;
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
    //父类指针在析构的时候，不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏。
    delete animal1;
}
int main (){
    test01();
}