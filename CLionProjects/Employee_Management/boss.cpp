//
// Created by apple on 2023/1/19.
//
#include "boss.h"
#include "iostream"
using namespace std;
#include "string"
Boss::Boss(int id, string name, int dId)
{
    this->m_id=id;
    this->m_name=name;
    this->m_DeptId=dId;
}
//��ʾ������Ϣ
void Boss::showInfo()
{
    cout<<"ְ����ţ�"<< this->m_id<<
        "\tְ��������"<< this->m_name<< //\tΪtab����
        "\tְ����λ��"<< this->getDeptName()<<
        "\t��λְ�𣺹���˾��������"<<endl;
}
//��ȡ��λ����
string Boss::getDeptName()
{
    return string("�ܲ�");
}
