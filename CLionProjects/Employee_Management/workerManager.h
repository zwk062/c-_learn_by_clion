//
// Created by apple on 2023/1/17.
//

#ifndef EMPLOYEE_MANAGEMENT_WORKERMANAGER_H
#define EMPLOYEE_MANAGEMENT_WORKERMANAGER_H
#include "iostream"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include "fstream"
#define FILENAME "empFile.txt"

using namespace std;
class WorkerManager
{
public:
    WorkerManager();
    void Show_Menu();
    void ExitSystem();
    //��¼ְ������
    int m_EmpNum;
    //ְ������ָ��
    Worker **m_EmpArray;
    //���ְ��ֱ�ӵ��ļ�
    void Add_Emp();
    //�����ļ�
    void save();
    //�ж��ļ��Ƿ�Ϊ�� ��־
    bool m_FileIsEmpty;
    //ͳ���ļ��е�����
    int get_EmoNum();
    //��ʼ��Ա��
    void init_Emp();
    //��ʾְ��
    void Show_Emp();
    //ɾ��ְ��
    void Del_Emp();
    //�ж�ְ���Ƿ���� ������ڷ���ְ�����������е�λ�ã������ڷ���-1
    int IsExist(int id);
    //�޸�ְ��
    void Mod_Emp();
    //����ְ��
    void Find_Emp();
    //���ձ������
    void Sort_Emp();
    //����ļ�
    void Clean_File();

    ~WorkerManager();

};
#endif //EMPLOYEE_MANAGEMENT_WORKERMANAGER_H
