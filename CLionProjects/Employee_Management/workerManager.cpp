//
// Created by apple on 2023/1/17.
//
#include "workerManager.h"

WorkerManager::WorkerManager()
{
    //1 �ļ�������
    ifstream ifs;
    ifs.open(FILENAME,ios::in);//���ļ�
    if(!ifs.is_open())
    {
        cout<<"�ļ������ڣ�"<< endl;
        this->m_EmpNum=0;
        this->m_EmpArray=NULL;
        this->m_FileIsEmpty= true;
        ifs.close();
        return;
    }
   //2�ļ����ڣ�����Ϊ��
   char ch;
   ifs>>ch;//����EOF֮��ifs.eof()Ϊtrue
   if(ifs.eof())
   {
       //�ļ�Ϊ��
       cout<<"�ļ�Ϊ�գ�"<< endl;
       this->m_EmpNum=0;
       this->m_EmpArray=NULL;
       this->m_FileIsEmpty= true;
       ifs.close();

   }
   //3�ļ����� ���Ҽ�¼����
   int num = this->get_EmoNum();
   //cout<<"ְ������Ϊ��"<<num<< endl;
    this->m_EmpNum = num;
    //���ٿռ�
    this->m_EmpArray = new Worker * [this->m_EmpNum];
    //���ļ����ݷŵ�������
    this->init_Emp();

//    for(int i=0;i< this->m_EmpNum;i++)
//    {
//        cout<<" ְ����ţ�"<< this->m_EmpArray[i]->m_id
//        <<" ������"<< this->m_EmpArray[i]->m_name
//        <<" ���ű�ţ�"<< this->m_EmpArray[i]->m_DeptId<<endl;
//    }




}
WorkerManager::~WorkerManager()
{
   if(this->m_EmpArray!=NULL)
   {
       for(int i=0;i<this->m_EmpNum;i++)
       {
           if(this->m_EmpArray[i]!=NULL)
           {
               delete this->m_EmpArray[i];
               this->m_EmpArray[i]=NULL;
           }
       }
       delete [] this->m_EmpArray;
       this->m_EmpArray=NULL;
   }

}
void WorkerManager::Show_Menu()
{
    cout << "��ӭʹ��ְ������ϵͳ" << endl;
    cout << "0���˳��������" << endl;
    cout << "1������ְ����Ϣ" << endl;
    cout << "2����ʾְ����Ϣ" << endl;
    cout << "3��ɾ����ְְ����Ϣ" << endl;
    cout << "4���޸�ְ����Ϣ" << endl;
    cout << "5������ְ����Ϣ" << endl;
    cout << "6�����ձ������" << endl;
    cout << "7����������ĵ�" << endl;
    cout << endl;
}
void WorkerManager::ExitSystem()
{
    cout << "��ӭ�´�ʹ��!" << endl;
    exit(0);//�˳�����
}
void WorkerManager::Add_Emp()
{
    cout<<"���������ְ�������� "<<endl;
    int addNum=0;
    cin>>addNum;
    if(addNum>0)
    {
        //��������¿ռ��С
        int newSize = this->m_EmpNum+addNum;
        Worker** newSpace = new Worker*[newSize+8]; //���ܾ�����ְ������Worker*
        //����о����ݣ��ŵ��¿ռ���
        if(this->m_EmpArray!=NULL)
        {
            for(int i=0;i< this->m_EmpNum;i++)
            {
                newSpace[i]= this->m_EmpArray[i];
            }
        }
        //���������
        for(int i=0;i<addNum;i++)
        {
            int id;
            string name;
            int dSelect;
            cout << "������� " << i + 1 << " ����ְ����ţ�" << endl;
            cin >> id;
            cout << "������� " << i + 1 << " ����ְ��������" << endl;
            cin >> name;
            cout << "��ѡ���ְ���ĸ�λ��" << endl;
            cout << "1����ְͨ��" << endl;
            cout << "2������" << endl;
            cout << "3���ϰ�" << endl;
            cin >> dSelect;

            Worker *worker =NULL;
            switch (dSelect) {
                case 1:
                    worker = new Employee(id,name,1);
                    break;
                case 2:
                    worker = new Manager(id,name,2);
                    break;
                case 3:
                    worker = new Boss(id,name,3);
                    break;
                default:
                    break;
            }
            //������ְ��ָ�룬���浽������
            newSpace[this->m_EmpNum+i]=worker;


        }

        //�ͷ�ԭ�пռ�
        delete [] this->m_EmpArray;  //�ͷ�����Ҫ��[]
        //�����¿ռ��ָ��
        this->m_EmpArray=newSpace;
        //�����µ�ְ������
        this->m_EmpNum=newSize;
        //���浽�ļ�
        this->save();

        //����ְ����Ϊ�յı�־
        this->m_FileIsEmpty= false;

        //��ʾ��ӳɹ�
        cout<<"�ɹ����"<<addNum<<"����ְ����"<<endl;
    }
    else
    {
        cout<<"������������"<<endl;
    }


}

void WorkerManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME,ios::out);
    for(int i=0;i< this->m_EmpNum;i++)
    {
        ofs<< this->m_EmpArray[i]->m_id<<" "
        <<this->m_EmpArray[i]->m_name<<" "
        <<this->m_EmpArray[i]->m_DeptId<<endl;
    }
    ofs.close();
}

int WorkerManager::get_EmoNum()
{
    ifstream ifs;
    ifs.open(FILENAME,ios::in);//���ļ�

    int id;
    string name;
    int dId;
    int num=0;
    while (ifs>>id && ifs>>name && ifs>>dId)
    {
        num++;
    }
    return num;


}

void WorkerManager::init_Emp()
{
    ifstream ifs;
    ifs.open(FILENAME,ios::in);//���ļ�
    int id;
    string name;
    int dId;
    int index=0;
    while (ifs>>id && ifs>>name && ifs>>dId)
    {
        Worker *worker = NULL;
        if(dId==1)
        {
            worker= new Employee(id,name,dId);
        }
        else if(dId==2)
        {
            worker= new Manager(id,name,dId);
        }
        else
        {
            worker= new Boss(id,name,dId);
        }
        this->m_EmpArray[index]=worker;
        index++;
    }
    ifs.close();
}

void WorkerManager::Show_Emp()
{
    //�ж��ļ��Ƿ�Ϊ��
    if(this->m_FileIsEmpty)
    {
        cout<<"�ļ������ڻ��߼�¼Ϊ�գ�"<<endl;
    }
    else
    {
        for(int i;i< this->m_EmpNum;i++)
        {
            this->m_EmpArray[i]->showInfo();
        }
    }
}

//ɾ��ְ��
void WorkerManager::Del_Emp()
{
    if(this->m_FileIsEmpty)
    {
        cout<<"�ļ������ڻ��߼�¼Ϊ�գ�"<<endl;
    }
    else
    {
        cout<<"��������Ҫɾ��ְ����ţ�"<<endl;
        int id=0;
        cin>>id;
        int index = this->IsExist(id);
        if(index!=-1)
        {
            for(int i=index;i< this->m_EmpNum-1;i++)
            {
                this->m_EmpArray[i]= this->m_EmpArray[i+1];
            }
            this->m_EmpNum--;
            this->save();
            cout<<"ɾ���ɹ���"<<endl;
        }
        else
        {
            cout<<"ɾ��ʧ�ܣ�δ�ҵ���ְ����"<<endl;
        }
    }

}
//�ж�ְ���Ƿ���� ������ڷ���ְ�����������е�λ�ã������ڷ���-1
int WorkerManager::IsExist(int id)
{
    int index=-1;
    for(int i=0;i< this->m_EmpNum;i++)
    {
        if(this->m_EmpArray[i]->m_id==id)
        {
            //�ҵ�ְ��
            index=i;
            break;
        }

    }
    return index;


}
void WorkerManager::Mod_Emp()
{
    if(this->m_FileIsEmpty)
    {
        cout<<"�ļ������ڻ��߼�¼Ϊ�գ�"<<endl;
    }
    else
    {
        cout<<"��������Ҫ�޸�ְ����ţ�"<<endl;
        int id=0;
        cin>>id;
        int ret = this->IsExist(id);
        if(ret!=-1)
        {
            //�ҵ�ְ��
           // delete this->m_EmpArray[ret];
            int newId=0;
            string newName="";
            int dSelect=0;
            cout<<"��������ְ����ţ�"<<endl;
            cin>>newId;
            //�ж���ְ������Ƿ���ԭ�����ظ�
            for(int i=0;i< this->m_EmpNum;i++)
            {
                if(this->m_EmpArray[i]->m_id==newId)
                {
                    cout<<"��ְ������Ѵ��ڣ����������룺"<<endl;
                    cin>>newId;
                    i=-1;
                }
            }
            cout<<"��������ְ��������"<<endl;
            cin>>newName;
            cout<<"��ѡ���λ��"<<endl;
            cout<<"1����ְͨ��"<<endl;
            cout<<"2������"<<endl;
            cout<<"3���ϰ�"<<endl;
            cin>>dSelect;
            Worker *worker =NULL;
            switch (dSelect) {
                case 1:
                    worker = new Employee(newId,newName,1);
                    break;
                case 2:
                    worker = new Manager(newId,newName,2);
                    break;
                case 3:
                    worker = new Boss(newId,newName,3);
                    break;
                default:
                    break;
            }
            this->m_EmpArray[ret]=worker;
            cout<<"�޸ĳɹ���"<<endl;
            this->save();
        }
        else
        {
            cout<<"�޸�ʧ�ܣ�δ�ҵ���ְ����"<<endl;
        }
    }

}

//����ְ��
void WorkerManager::Find_Emp()
{
    if(this->m_FileIsEmpty)
    {
        cout<<"�ļ������ڻ��߼�¼Ϊ�գ�"<<endl;
    }
    else
    {
        cout<<"��������ҵķ�ʽ��"<<endl;
        cout<<"1����ְ����Ų���"<<endl;
        cout<<"2����ְ����������"<<endl;
        int select=0;
        cin>>select;
        if(select==1)
        {
            int id;
            cout<<"������ְ����ţ�"<<endl;
            cin>>id;
            int ret = this->IsExist(id);
            if(ret!=-1)
            {
                cout<<"���ҳɹ�����ְ����Ϣ���£�"<<endl;
                this->m_EmpArray[ret]->showInfo();
            }
            else
            {
                cout<<"����ʧ�ܣ�δ�ҵ���ְ����"<<endl;
            }
        }
        else if(select==2)
        {
            string name;
            cout<<"������ְ��������"<<endl;
            cin>>name;
            bool flag=false;
            for(int i=0;i< this->m_EmpNum;i++)
            {
                if(this->m_EmpArray[i]->m_name==name)
                {
                    cout<<"���ҳɹ�����ְ����Ϣ���£�"<<endl;
                    this->m_EmpArray[i]->showInfo();
                    flag=true;
                }
            }
            if(flag==false)
            {
                cout<<"����ʧ�ܣ�δ�ҵ���ְ����"<<endl;
            }
        }
        else
        {
            cout<<"��������"<<endl;
        }

    }


}


//���ձ������
void WorkerManager::Sort_Emp()
{
    if(this->m_FileIsEmpty)
    {
        cout<<"�ļ������ڻ��߼�¼Ϊ�գ�"<<endl;
    }
    else
    {
        cout<<"��ѡ������ʽ��"<<endl;
        cout<<"1����ְ���������"<<endl;
        cout<<"2����ְ����Ž���"<<endl;

        int select=0;
        cin>>select;
        //ð������
        for(int i=0;i<this->m_EmpNum;i++)
        {
            for(int j=0;j<this->m_EmpNum-i-1;j++)
            {
                if(select==1)
                {
                    if(this->m_EmpArray[j]->m_id>this->m_EmpArray[j+1]->m_id)
                    {
                        Worker *temp=this->m_EmpArray[j];
                        this->m_EmpArray[j]=this->m_EmpArray[j+1];
                        this->m_EmpArray[j+1]=temp;
                    }
                }
                else
                {
                    if(this->m_EmpArray[j]->m_id<this->m_EmpArray[j+1]->m_id)
                    {
                        Worker *temp=this->m_EmpArray[j];
                        this->m_EmpArray[j]=this->m_EmpArray[j+1];
                        this->m_EmpArray[j+1]=temp;
                    }
                }
            }
        }
        cout<<"����ɹ��������Ľ��Ϊ��"<<endl;
        this->save();
        this->Show_Emp();
    }


}

//����ļ�
void WorkerManager::Clean_File()
{
    cout<<"ȷ���Ƿ���գ�"<<endl;
    cout<<"1��ȷ��"<<endl;
    cout<<"2������"<<endl;
    int select=0;
    cin>>select;
    if(select==1)
    {
        ofstream ofs(FILENAME,ios::trunc);//ɾ���ļ������´���
        ofs.close();
        if(this->m_EmpArray!=NULL)
        {
            for(int i=0;i<this->m_EmpNum;i++)
            {
                if(this->m_EmpArray[i]!=NULL)
                {
                    delete this->m_EmpArray[i];
                    this->m_EmpArray[i]=NULL;
                }
            }
            delete [] this->m_EmpArray;
            this->m_EmpArray=NULL;
            this->m_EmpNum=0;
            this->m_FileIsEmpty=true;
        }
        cout<<"��ճɹ���"<<endl;
    }


}