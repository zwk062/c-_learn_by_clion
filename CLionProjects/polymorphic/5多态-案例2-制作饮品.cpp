#include <iostream>
#include <string>
using namespace std;

class AbstractDrinking
{
public:
    virtual void Boil()=0;//煮水
    virtual void Brew()=0;//冲泡
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
        cout<<"煮农夫山泉"<<endl;
    }
    virtual void Brew()
    {
        cout<<"冲泡咖啡"<<endl;
    }
    virtual void PourInCup()
    {
        cout<<"倒入杯中"<<endl;
    }
    virtual void PutSomething()
    {
        cout<<"加入糖和牛奶"<<endl;
    }

};
class Tea:public AbstractDrinking
{
    virtual void Boil()
    {
        cout<<"煮开水"<<endl;
    }
    virtual void Brew()
    {
        cout<<"冲泡茶叶"<<endl;
    }
    virtual void PourInCup()
    {
        cout<<"倒入杯中"<<endl;
    }
    virtual void PutSomething()
    {
        cout<<"加入柠檬"<<endl;
    }

};
void doWork(AbstractDrinking *abs)
{
    abs->makeDrink();
    delete abs;
}
void test01()
{
    //制作咖啡
    doWork(new Coffee);
    //制作茶叶
    doWork(new Tea);
}

int main ()
{
    test01();
}