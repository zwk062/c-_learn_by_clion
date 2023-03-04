#include <iostream>
using namespace std;
class person
{
public:
    person ()
    {
        cout<<"构造函数"<<endl;
    }
    ~person()
    {
        cout<<"析构函数"<<endl;
    }
};
void test1()
{
    person p;//局部对象，在栈上，执行完会自动释放，释放前会调用析构函数
}
int main() {
    //test1();
    person p;

}
