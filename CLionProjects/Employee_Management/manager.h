//
// Created by apple on 2023/1/19.
//

#ifndef EMPLOYEE_MANAGEMENT_MANAGER_H
#define EMPLOYEE_MANAGEMENT_MANAGER_H

#include "worker.h"
#include "string"
#include "iostream"
using namespace std;

class Manager:public Worker
{
public:
    Manager(int id,string name,int dId);
    //��ʾ������Ϣ
    virtual void showInfo();
    //��ȡ��λ����
    virtual string getDeptName();
};

#endif //EMPLOYEE_MANAGEMENT_MANAGER_H
