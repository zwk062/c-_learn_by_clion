#include <iostream>
#include "fstream"
#include "string"
using namespace std;
//�ı��ļ�-���ļ�
void test01()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout<<"�ļ���ʧ�ܣ�"<<endl;
        return;
    }
    //������
    //��һ��
//    char buf[1024]={0};
//    while(ifs>>buf)
//    {
//        cout<<buf<<endl;
//    }
    //�ڶ���
//    char buf[1024]={0};
//    while (ifs.getline(buf,sizeof(buf)))
//    {
//        cout<<buf<<endl;
//    }
//    ifs.close();
    //������
//    string buf;
//    while (getline(ifs,buf))
//    {
//        cout<<buf<<endl;
//    }
    //�����֣���̫�Ƽ���
    char c;
    while ((c=ifs.get())!=EOF) //end of file
    {
        cout<<c;
    }
}
int main()
{
    test01();
}
