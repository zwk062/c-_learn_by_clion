#include <iostream>
using namespace std;
class person
{
public:
    person ()
    {
        cout<<"�޲ι��캯��"<<endl;
    }
    person (int a)
    {
        age=a;
        cout<<"�вι��캯��"<<endl;
    }
    person (const person &p)//��������
    {
        age=p.age;
        cout<<"�������캯��"<<endl;
    }
    ~person()
    {
        cout<<"��������"<<endl;
    }
    int age;
};
void test1()
{
    //���ŷ�
//    person p1;
//    person p2(10);
//    person p3(p2);
    //��ʾ��
    person p1;
    person p2=person(10);
    person p3=person(p2);
    //person(10);//�����������ִ�к�����ϻ��ա�
    //person(p3);//����������Ϊperson(p3)==person p3
    //��ʽת����
    person p4 =10;
    person p5 =p4;
}
int main (){
    test1();
}