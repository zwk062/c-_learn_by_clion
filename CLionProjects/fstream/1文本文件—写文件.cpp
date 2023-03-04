#include <iostream>
#include "fstream"
using namespace std;
void test01(){
    ofstream ofs;
    ofs.open("test.txt",ios::out);
    ofs<<"ÕÅÈý"<<endl<<"ÄÐ"<<endl;
    ofs.close();
}
int main() {
test01();
    return 0;
}
