#include<iostream>
using namespace std;
class addcomplex{
    private:
    int real;
    float imag;
    public:
    void input(){
        cout<<"enter the real part:"<<endl;
        cin>>real;
        cout<<"enter the imaginary part:"<<endl;
        cin>>imag;
    }
    void output(){
        cout<<"("<<real<<","<<imag<<")";
    }
    addcomplex complex(addcomplex c){
        addcomplex temp;
        temp.real=c.real+real;
        temp.imag=c.imag+imag;
        return temp;
    }
    

};
int main(){
    addcomplex c1,c2,c3;
    c1.input();
    c2.input();
    
    
    c3=c1.complex(c2);

    c1.output();
    cout<<"+";
    c2.output();
    c3.output();

    
    return 0;


}