//
// Created by apple on 2023/1/17.
//

#ifndef EMPLOYEE_MANAGEMENT_WORKER_H
#define EMPLOYEE_MANAGEMENT_WORKER_H
#include "iostream"
using namespace std;
#include "string"
//ְ��������
class Worker
{
public:
    //��ʾ������Ϣ
    virtual void showInfo()=0;
    //��ȡ��λ����
    virtual string getDeptName()=0;
    int m_id;
    string m_name;
    int m_DeptId;//���ű��

};

#endif //EMPLOYEE_MANAGEMENT_WORKER_H
