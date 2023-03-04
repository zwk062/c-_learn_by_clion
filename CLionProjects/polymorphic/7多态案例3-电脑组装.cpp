#include <iostream>
#include <string>
using namespace std;

class CPU
{
public:
    virtual void calculate()=0;
};
class VideoCard
{
public:
    virtual void display()=0;
};
class Memory
{
public:
    virtual void storage()=0;
};

class Computer
{
public:
    Computer(CPU* cpu,VideoCard* vc,Memory* mem)
    {
        m_cpu=cpu;
        m_vc=vc;
        m_mem=mem;
    }
    void work()
    {
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }
    ~Computer()
    {
        if(m_cpu!=NULL)
        {
            delete m_cpu;
            m_cpu=NULL;
        }
        if(m_vc!=NULL)
        {
            delete m_vc;
            m_vc=NULL;
        }
        if(m_mem!=NULL)
        {
            delete m_mem;
            m_mem=NULL;
        }
    }
private:
    CPU* m_cpu;
    VideoCard* m_vc;
    Memory* m_mem;
};
//Intel
class IntelCPU:public CPU
{
    virtual void calculate()
    {
        cout<<"Intel的CPU开始工作"<<endl;
    }
};
class IntelVideoCard:public VideoCard
{
    virtual void display()
    {
        cout<<"Intel的VideoCard开始工作"<<endl;
    }

};
class InterMemory:public Memory
{
    virtual void storage()
    {
        cout<<"Intel的Memory开始工作"<<endl;
    }
};
//Lenovo
class LenovoCPU:public CPU
{
    virtual void calculate()
    {
        cout<<"Lenovo的CPU开始工作"<<endl;
    }
};
class LenovoVideoCard:public VideoCard
{
    virtual void display()
    {
        cout<<"Lenovo的VideoCard开始工作"<<endl;
    }

};
class LenovoMemory:public Memory
{
    virtual void storage()
    {
        cout<<"Lenovo的Memory开始工作"<<endl;
    }
};
void test01()
{
    //第一台电脑零件
    CPU* interCpu = new IntelCPU;
    VideoCard* intelCard = new IntelVideoCard;
    Memory* intelMen = new InterMemory;
    //第一台电脑
    Computer* computer1 = new Computer(interCpu,intelCard,intelMen);
    computer1->work();
    delete computer1;

    //第二台
    Computer* computer2 = new Computer(new LenovoCPU,new IntelVideoCard,new LenovoMemory);
    computer2->work();
    delete computer2;
}
int main ()
{
    test01();
}



