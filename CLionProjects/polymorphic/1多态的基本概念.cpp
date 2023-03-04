#include <iostream>
using namespace std;
class Animal
{
public:
     virtual void speak()  //虚函数,地址不绑定为Animal
    {
        cout<<"动物在说话"<<endl;
    }
};
class Cat:public Animal
{
public:
    void speak()
    {
        cout<<"小猫在说话"<<endl;
    }
};
//地址早绑定，所以是动物在说话
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
    cout<<"sizeof Animal="<<sizeof(Animal)<<endl;//去掉virtual空类大小为1
    //加上virtual为8 多了一个指针
    //vfptr ：virtual function pointer 虚函数（表）指针
    //指向虚函数表 vftable virtual function table
    //表的内部记录虚函数的地址， &Animal::speak
    //子类继承后，会同时继承虚函数指针和表，
    //当子类重写父类的虚函数，子类的虚函数表内会替换成子类的虚函数地址 &Cat::speak
    //当父类的指针或者引用指向子类对象时候，发生多态
    //Animal &animal =cat;
    //animal.speak;
}
int main() {
    //test1();
    test2();
    return 0;
}
