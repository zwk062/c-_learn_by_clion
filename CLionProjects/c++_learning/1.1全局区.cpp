#include <iostream>
using namespace std;
//ȫ�ֱ���
int g_a = 10;//global
int g_b = 10;
//const���ε�ȫ�ֱ�����ȫ�ֳ���
const int c_g_a =10;
int main() {
    //ȫ�������ֲ�����ȫ������
    //ȫ�ֱ���(�ں������⣩����̬����������

    //������ͨ�ľֲ��������������ڣ�
    int a=10;
    int b=10;
    cout<<"�ֲ�����a�ĵ�ַΪ��"<< (long)&a <<endl;
    cout<<"�ֲ�����b�ĵ�ַΪ��"<< (long)&b <<endl;
    //��̬����
    static int s_a=10;
    static int s_b=10;
    cout<<"��̬����s_a�ĵ�ַΪ��"<< (long)&s_a <<endl;
    cout<<"��̬����s_b�ĵ�ַΪ��"<< (long)&s_b <<endl;
    cout<<"ȫ�ֱ���g_a�ĵ�ַΪ��"<< (long)&g_a <<endl;
    cout<<"ȫ�ֱ���g_b�ĵ�ַΪ��"<< (long)&g_b <<endl;
    //����
        //�ַ�������
        cout<<"�ַ��������ĵ�ַΪ:"<<(long)&"hello world" << endl;
        //const���εı���
            //const���ε�ȫ�ֱ���
            cout<<"ȫ�ֳ���c_g_a�ĵ�ַΪ:"<<(long)&c_g_a << endl;
            //const���εľֲ�����
            const int c_l_a=10;  //local
            cout<<"�ֲ�����c_l_a�ĵ�ַΪ:"<<(long)&c_l_a << endl;



    return 0;
}
