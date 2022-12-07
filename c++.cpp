#include<iostream>
using namespace std;
class raj{
    private:
        int rol;
        char name[23];
    public:
        void displa( char name[24],int roll){
            rol=roll;
            name[23]=name[24];
        }   
        void show() {
            cout<<"enter student name:";
            cin>>roll>>name[24];
            cout<<"the details is:"<<show();
        }

};
int main(){
    raj o1;
    o1.displa(rajan,44);
    o1.show();
    return 0;

}