//
// Created by apple on 2023/1/19.
//
#include "manager.h"
#include "iostream"
using namespace std;
#include "string"
Manager::Manager(int id, string name, int dId)
{
    this->m_id=id;
    this->m_name=name;
    this->m_DeptId=dId;
}
//��ʾ������Ϣ
void Manager::showInfo()
{
    cout<<"ְ����ţ�"<< this->m_id<<
        "\tְ��������"<< this->m_name<< //\tΪtab����
        "\tְ����λ��"<< this->getDeptName()<<
        "\t��λְ������ϰ彻�������񣬲����·������Ա��"<<endl;
}
//��ȡ��λ����
string Manager::getDeptName()
{
    return string("����");
}
