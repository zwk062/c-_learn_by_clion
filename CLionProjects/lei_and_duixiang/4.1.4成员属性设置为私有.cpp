#include<iostream>
#include "string"
using namespace std;
//1.�Լ����ƶ�д��Ȩ��
//2.����д���Լ�����ݵ���Ч�ԡ�
class person
{
public:
    void setName(string name)
    {
        m_name =name;
    }
    string getName()
    {
        return m_name;
    }
    void setAge(int age)
    {
        if(age<0||age>150) { return; }
        m_age=age;
    }


private:
    string m_name;
    string m_age;
    string lover;

};
int main (){
    person p;
    p.setName("����");
    cout<<"����Ϊ��"<<p.getName()<<endl;
}
