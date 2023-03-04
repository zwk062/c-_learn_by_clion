#include <iostream>
using namespace std;
//ºÃ≥– µœ÷“≥√Ê
class Basic
{
public:
    void head()
    {
        cout<<"head"<<endl;
    }
    void foot()
    {
        cout<<"foot"<<endl;
    }

};
class Java:public Basic
{
public:
    void content()
    {
        cout<<"Java"<<endl;
    }
};
class Python:public Basic
{
public:

    void content()
    {
        cout<<"Python"<<endl;
    }

};
void test01()
{
    Java ja;
    ja.head();
    ja.content();
    ja.foot();
    Python py;
    py.head();
    py.content();
    py.foot();
}
int main() {
    test01();
    return 0;
}
