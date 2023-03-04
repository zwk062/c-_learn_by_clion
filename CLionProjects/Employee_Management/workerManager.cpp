//
// Created by apple on 2023/1/17.
//
#include "workerManager.h"

WorkerManager::WorkerManager()
{
    //1 文件不存在
    ifstream ifs;
    ifs.open(FILENAME,ios::in);//读文件
    if(!ifs.is_open())
    {
        cout<<"文件不存在！"<< endl;
        this->m_EmpNum=0;
        this->m_EmpArray=NULL;
        this->m_FileIsEmpty= true;
        ifs.close();
        return;
    }
   //2文件存在，数据为空
   char ch;
   ifs>>ch;//读走EOF之后ifs.eof()为true
   if(ifs.eof())
   {
       //文件为空
       cout<<"文件为空！"<< endl;
       this->m_EmpNum=0;
       this->m_EmpArray=NULL;
       this->m_FileIsEmpty= true;
       ifs.close();

   }
   //3文件存在 并且记录数据
   int num = this->get_EmoNum();
   //cout<<"职工人数为："<<num<< endl;
    this->m_EmpNum = num;
    //开辟空间
    this->m_EmpArray = new Worker * [this->m_EmpNum];
    //将文件数据放到数组中
    this->init_Emp();

//    for(int i=0;i< this->m_EmpNum;i++)
//    {
//        cout<<" 职工编号："<< this->m_EmpArray[i]->m_id
//        <<" 姓名："<< this->m_EmpArray[i]->m_name
//        <<" 部门编号："<< this->m_EmpArray[i]->m_DeptId<<endl;
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
    cout << "欢迎使用职工管理系统" << endl;
    cout << "0、退出管理程序" << endl;
    cout << "1、增加职工信息" << endl;
    cout << "2、显示职工信息" << endl;
    cout << "3、删除离职职工信息" << endl;
    cout << "4、修改职工信息" << endl;
    cout << "5、查找职工信息" << endl;
    cout << "6、按照编号排序" << endl;
    cout << "7、清空所有文档" << endl;
    cout << endl;
}
void WorkerManager::ExitSystem()
{
    cout << "欢迎下次使用!" << endl;
    exit(0);//退出程序
}
void WorkerManager::Add_Emp()
{
    cout<<"请输入添加职工数量： "<<endl;
    int addNum=0;
    cin>>addNum;
    if(addNum>0)
    {
        //计算添加新空间大小
        int newSize = this->m_EmpNum+addNum;
        Worker** newSpace = new Worker*[newSize+8]; //不管经理还是职工都是Worker*
        //如果有旧数据，放到新空间下
        if(this->m_EmpArray!=NULL)
        {
            for(int i=0;i< this->m_EmpNum;i++)
            {
                newSpace[i]= this->m_EmpArray[i];
            }
        }
        //添加新数据
        for(int i=0;i<addNum;i++)
        {
            int id;
            string name;
            int dSelect;
            cout << "请输入第 " << i + 1 << " 个新职工编号：" << endl;
            cin >> id;
            cout << "请输入第 " << i + 1 << " 个新职工姓名：" << endl;
            cin >> name;
            cout << "请选择该职工的岗位：" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
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
            //将创建职工指针，保存到数组中
            newSpace[this->m_EmpNum+i]=worker;


        }

        //释放原有空间
        delete [] this->m_EmpArray;  //释放数组要加[]
        //更改新空间的指向
        this->m_EmpArray=newSpace;
        //更新新的职工人数
        this->m_EmpNum=newSize;
        //保存到文件
        this->save();

        //更新职工不为空的标志
        this->m_FileIsEmpty= false;

        //提示添加成功
        cout<<"成功添加"<<addNum<<"名新职工！"<<endl;
    }
    else
    {
        cout<<"输入数据有误"<<endl;
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
    ifs.open(FILENAME,ios::in);//读文件

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
    ifs.open(FILENAME,ios::in);//读文件
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
    //判断文件是否为空
    if(this->m_FileIsEmpty)
    {
        cout<<"文件不存在或者记录为空！"<<endl;
    }
    else
    {
        for(int i;i< this->m_EmpNum;i++)
        {
            this->m_EmpArray[i]->showInfo();
        }
    }
}

//删除职工
void WorkerManager::Del_Emp()
{
    if(this->m_FileIsEmpty)
    {
        cout<<"文件不存在或者记录为空！"<<endl;
    }
    else
    {
        cout<<"请输入想要删除职工编号："<<endl;
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
            cout<<"删除成功！"<<endl;
        }
        else
        {
            cout<<"删除失败，未找到该职工！"<<endl;
        }
    }

}
//判断职工是否存在 如果存在返回职工所在数组中的位置，不存在返回-1
int WorkerManager::IsExist(int id)
{
    int index=-1;
    for(int i=0;i< this->m_EmpNum;i++)
    {
        if(this->m_EmpArray[i]->m_id==id)
        {
            //找到职工
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
        cout<<"文件不存在或者记录为空！"<<endl;
    }
    else
    {
        cout<<"请输入想要修改职工编号："<<endl;
        int id=0;
        cin>>id;
        int ret = this->IsExist(id);
        if(ret!=-1)
        {
            //找到职工
           // delete this->m_EmpArray[ret];
            int newId=0;
            string newName="";
            int dSelect=0;
            cout<<"请输入新职工编号："<<endl;
            cin>>newId;
            //判断新职工编号是否与原来的重复
            for(int i=0;i< this->m_EmpNum;i++)
            {
                if(this->m_EmpArray[i]->m_id==newId)
                {
                    cout<<"该职工编号已存在，请重新输入："<<endl;
                    cin>>newId;
                    i=-1;
                }
            }
            cout<<"请输入新职工姓名："<<endl;
            cin>>newName;
            cout<<"请选择岗位："<<endl;
            cout<<"1、普通职工"<<endl;
            cout<<"2、经理"<<endl;
            cout<<"3、老板"<<endl;
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
            cout<<"修改成功！"<<endl;
            this->save();
        }
        else
        {
            cout<<"修改失败，未找到该职工！"<<endl;
        }
    }

}

//查找职工
void WorkerManager::Find_Emp()
{
    if(this->m_FileIsEmpty)
    {
        cout<<"文件不存在或者记录为空！"<<endl;
    }
    else
    {
        cout<<"请输入查找的方式："<<endl;
        cout<<"1、按职工编号查找"<<endl;
        cout<<"2、按职工姓名查找"<<endl;
        int select=0;
        cin>>select;
        if(select==1)
        {
            int id;
            cout<<"请输入职工编号："<<endl;
            cin>>id;
            int ret = this->IsExist(id);
            if(ret!=-1)
            {
                cout<<"查找成功！该职工信息如下："<<endl;
                this->m_EmpArray[ret]->showInfo();
            }
            else
            {
                cout<<"查找失败，未找到该职工！"<<endl;
            }
        }
        else if(select==2)
        {
            string name;
            cout<<"请输入职工姓名："<<endl;
            cin>>name;
            bool flag=false;
            for(int i=0;i< this->m_EmpNum;i++)
            {
                if(this->m_EmpArray[i]->m_name==name)
                {
                    cout<<"查找成功！该职工信息如下："<<endl;
                    this->m_EmpArray[i]->showInfo();
                    flag=true;
                }
            }
            if(flag==false)
            {
                cout<<"查找失败，未找到该职工！"<<endl;
            }
        }
        else
        {
            cout<<"输入有误！"<<endl;
        }

    }


}


//按照编号排序
void WorkerManager::Sort_Emp()
{
    if(this->m_FileIsEmpty)
    {
        cout<<"文件不存在或者记录为空！"<<endl;
    }
    else
    {
        cout<<"请选择排序方式："<<endl;
        cout<<"1、按职工编号升序"<<endl;
        cout<<"2、按职工编号降序"<<endl;

        int select=0;
        cin>>select;
        //冒泡排序
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
        cout<<"排序成功！排序后的结果为："<<endl;
        this->save();
        this->Show_Emp();
    }


}

//清空文件
void WorkerManager::Clean_File()
{
    cout<<"确认是否清空？"<<endl;
    cout<<"1、确认"<<endl;
    cout<<"2、返回"<<endl;
    int select=0;
    cin>>select;
    if(select==1)
    {
        ofstream ofs(FILENAME,ios::trunc);//删除文件后重新创建
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
        cout<<"清空成功！"<<endl;
    }


}