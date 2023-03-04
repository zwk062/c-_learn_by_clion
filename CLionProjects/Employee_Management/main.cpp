#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"
int main() {
//    //test
//    Worker *worker=NULL;
//    worker=new Employee(1,"张三",1);
//    worker->showInfo();
//    delete worker;
//    Worker *worker1=NULL;
//    worker1 = new Manager(2,"李四",2);
//    worker1->showInfo();
//    delete worker1;
//   worker = new Boss(3,"王五",3);
//   worker->showInfo();
//   delete worker;

    WorkerManager wm;
    int choice = 0;
    while (true)
    {
        wm.Show_Menu();
        cout<<"请输入你的选择："<<endl;
        cin>>choice;
        switch (choice) {
            case 0:
                wm.ExitSystem();
                break;
            case  1:
                wm.Add_Emp();
                break;
            case  2:
                wm.Show_Emp();
                break;
            case  3:
                wm.Del_Emp();
                break;
            case  4:
                wm.Mod_Emp();
                break;
            case  5:
                wm.Find_Emp();
                break;
            case  6:
                wm.Sort_Emp();
                break;
            case  7:
                wm.Clean_File();

                break;
            default:
                break;



        }

    }



    return 0;
}
