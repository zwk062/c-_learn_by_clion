//
// Created by apple on 2023/1/19.
//

#ifndef EMPLOYEE_MANAGEMENT_BOSS_H
#define EMPLOYEE_MANAGEMENT_BOSS_H
#include "worker.h"
#include "string"
#include "iostream"
using namespace std;

class Boss:public Worker
{
public:
    Boss(int id,string name,int dId);
    //��ʾ������Ϣ
    virtual void showInfo();
    //��ȡ��λ����
    virtual string getDeptName();
};

#endif //EMPLOYEE_MANAGEMENT_BOSS_H
