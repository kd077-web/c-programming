//name=kiran dahal,ass=4 ,roll=017,bei077

// Write a program that has a class to represent time. The class should have constructors
// to initialize data members hour, minute, and second to 0 and to initialize them to values
//  passed as arguments. The class should have a member function to add time objects and return the result as a time object.
// There should be functions to display time in 12-hour and 24-hour format.
#include <iostream>
using namespace std;
class Time
{
private:
    int hour, minute, second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    int getData(int x, int y, int z)
    {
        hour = x;
        minute = y;
        second = z;
    }
    void display()
    {
        cout << "Time is \t";
        cout << hour << ":" << minute << ":" << second << endl;
    }

    void addTime(Time x, Time y)
    {
        second = x.second + y.second;
        minute = x.minute + y.minute;
        if (second > 60)
        {
            second %= 60;
            minute++;
        }
        if (minute > 60)
        {
            minute %= 60;
            hour++;
        }
        hour = x.hour + y.hour;
        int temp = hour;
        if (hour > 12 && hour < 24)
        {
            hour %= 12;
            cout << "In 12 hr format \t";
            cout << hour << ":" << minute << ":" << second << endl;
        }
        if (temp > 24)
        {
            hour %= 24;
            cout << "In 24hr format \t";
            cout << hour << ":" << minute << ":" << second << endl;
        }
    }
};
int main()
{
    // variable declaration
    int a, i, j;
    Time obj, obj2;
    obj.getData(12, 13, 34);
    obj2.getData(24, 13, 7);
    obj.display();
    obj2.display();
    obj.addTime(obj, obj2);

    return 0;
}

// Write a class that can store Department ID and Department Name with constructors to initialize its members.
// Write destructor member in the same class and display the message "Object n goes out of the scope".
//  Your program should be made such that it should show the order of constructor and destructor invocation.
#include <iostream>
#include<string.h>
using namespace std;
class Department
{
private:
    int deptId;
    char deptName[50];

public:
    Department(){
        cout << "Constructor here"<<endl;
        deptId = 12;
        char deptNae[] = "lalu  Department Store";
        strcpy(deptName, deptNae);
    }
    ~Department(){
        cout << "Object n goes out of the scope"<<endl;
    }
    char showData(){
        cout << deptName<<endl;
    }
};
int main()
{
    Department obj;
    obj.showData();
}


// Assume that one constructor initializes data member say num_vehicle, hour, and rate.
// There should be a 10% discount if num_vehicle exceeds 10.
//  Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).
#include <iostream>
using namespace std;
class Vechile
{
private:
    int num_vechile, hour;
    float rate;
public:
    Vechile(int x, int y, float z)
    {
        num_vechile = x;
        hour = y;
        rate = z;
    }
    Vechile(Vechile &a){
        num_vechile= a.num_vechile;
        hour = a.hour;
        rate = a.rate;

    }

    int total_charge()
    {
        int total = rate*hour*0.9;

        if (num_vechile > 10) return total;
        else return rate*hour;
    }
};

int main()
{
    int hour, num_vech;
    float rate;
    cout << "Enter the Vechile number, hour, rate respectively:- "<<endl;
    cin >> num_vech >>hour>>rate;
    Vechile obj(num_vech, hour, rate);
    Vechile obj2(obj);
    //displaying the copy constructor
    cout << obj.total_charge()<<endl;
    cout << obj2.total_charge()<<endl;
    cout << obj.total_charge();

    return 0;
}

