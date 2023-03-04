#include <iostream>
#include <string>
using namespace std;

class AbstractDrinking
{
public:
    virtual void Boil()=0;//��ˮ
    virtual void Brew()=0;//����
    virtual void PourInCup()=0;
    virtual void PutSomething()=0;
    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }

};
class Coffee:public AbstractDrinking
{
    virtual void Boil()
    {
        cout<<"��ũ��ɽȪ"<<endl;
    }
    virtual void Brew()
    {
        cout<<"���ݿ���"<<endl;
    }
    virtual void PourInCup()
    {
        cout<<"���뱭��"<<endl;
    }
    virtual void PutSomething()
    {
        cout<<"�����Ǻ�ţ��"<<endl;
    }

};
class Tea:public AbstractDrinking
{
    virtual void Boil()
    {
        cout<<"��ˮ"<<endl;
    }
    virtual void Brew()
    {
        cout<<"���ݲ�Ҷ"<<endl;
    }
    virtual void PourInCup()
    {
        cout<<"���뱭��"<<endl;
    }
    virtual void PutSomething()
    {
        cout<<"��������"<<endl;
    }

};
void doWork(AbstractDrinking *abs)
{
    abs->makeDrink();
    delete abs;
}
void test01()
{
    //��������
    doWork(new Coffee);
    //������Ҷ
    doWork(new Tea);
}

int main ()
{
    test01();
}