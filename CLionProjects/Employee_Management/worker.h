//
// Created by apple on 2023/1/17.
//

#ifndef EMPLOYEE_MANAGEMENT_WORKER_H
#define EMPLOYEE_MANAGEMENT_WORKER_H
#include "iostream"
using namespace std;
#include "string"
//职工抽象类
class Worker
{
public:
    //显示个人信息
    virtual void showInfo()=0;
    //获取岗位名称
    virtual string getDeptName()=0;
    int m_id;
    string m_name;
    int m_DeptId;//部门编号

};

#endif //EMPLOYEE_MANAGEMENT_WORKER_H
