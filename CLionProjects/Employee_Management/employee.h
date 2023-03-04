//
// Created by apple on 2023/1/19.
//

#ifndef EMPLOYEE_MANAGEMENT_EMPLOYEE_H
#define EMPLOYEE_MANAGEMENT_EMPLOYEE_H
//普通员工
#include "worker.h"
#include "string"
#include "iostream"
using namespace std;

class Employee:public Worker
{
public:
    Employee(int id,string name,int dId);
    //显示个人信息
    virtual void showInfo();
    //获取岗位名称
    virtual string getDeptName();
};

#endif //EMPLOYEE_MANAGEMENT_EMPLOYEE_H
