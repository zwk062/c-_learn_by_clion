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
//显示个人信息
void Employee::showInfo()
{
    cout<<"职工编号："<< this->m_id<<
    "\t职工姓名："<< this->m_name<< //\t为tab按键
    "\t职工岗位："<< this->getDeptName()<<
    "\t岗位职责：完成经理交给的任务"<<endl;
}
//获取岗位名称
string Employee::getDeptName()
{
    return string("员工");
}
