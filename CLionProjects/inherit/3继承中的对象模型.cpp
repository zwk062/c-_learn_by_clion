#include <iostream>
using namespace std;
class Base
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son :public Base
{
public:
    int m_D;
};
void test01()
{
    //16
    //父类中所有成员属性都会被继承下来   父类中私有属性被编译器隐藏了，访问不到，但确实被继承了。
    cout<<sizeof(Son)<<endl;
}
int main ()
{
    test01();
}