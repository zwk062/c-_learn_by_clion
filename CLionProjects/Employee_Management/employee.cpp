//
// Created by apple on 2023/1/19.
//
#include "employee.h"
#include "iostream"
using namespace std;
#include "string"
Employee::Employee(int id,string name,int dId)
{
    this->m_id=id;
    this->m_name=name;
    this->m_DeptId=dId;
}
//��ʾ������Ϣ
void Employee::showInfo()
{
    cout<<"ְ����ţ�"<< this->m_id<<
    "\tְ��������"<< this->m_name<< //\tΪtab����
    "\tְ����λ��"<< this->getDeptName()<<
    "\t��λְ����ɾ�����������"<<endl;
}
//��ȡ��λ����
string Employee::getDeptName()
{
    return string("Ա��");
}
