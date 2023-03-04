#include<iostream>
#include "string"
using namespace std;
//1.自己控制读写的权限
//2.对于写可以检测数据的有效性。
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
    p.setName("张三");
    cout<<"姓名为："<<p.getName()<<endl;
}
