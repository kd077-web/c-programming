//name=kiran  dahal faculty=bei roll=017


// Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.
// A. Make a particular member function of one class as a friend function of another class for addition.
// B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.
// C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another
// class if the former class is made friend to the latter.
// Make least possible classes to demonstrate all the above in a single program without conflict.
#include <iostream>
using namespace std;
class nexty;
class Cartesian
{
    int x, y;

public:
    void getData(int a, int b)
    {
        x = a;
        y = b;
    }
    int add(Cartesian a, nexty b);
    friend int sub(Cartesian a, nexty b);
    friend int multi(Cartesian a, nexty b);
    friend int div(Cartesian a, nexty b);
};
class nexty
{
    int x, y;

public:
    void getData(int a, int b)
    {
        x = a;
        y = b;
    }
    friend int Cartesian::add(Cartesian a, nexty b);
    friend int sub(Cartesian a, nexty b);
    friend int multi(Cartesian a, nexty b);
    friend int div(Cartesian a, nexty b);
};
int Cartesian::add(Cartesian a, nexty b)
{
    int x = a.x + b.x;
    int y = a.y + b.y;
    cout << "sum is  " << x << endl
         << y;
};
int sub(Cartesian a, nexty b)
{
    int x = a.x - b.x;
    int y = a.y - b.y;
    cout << "Subtraction :- " << x << endl
         << y<<endl;
}
int multi(Cartesian a, nexty b)
{
    int x = a.x * b.x;
    int y = a.y * b.y;
    cout << "MULTIPLICATION :- " << x << endl
         << y<<endl;
}
int div(Cartesian a, nexty b)
{
    int x = a.x / b.x;
    int y = a.y / b.y;
    cout << "DIVISION :- " << x << endl
         << y<<endl;
}

int main()
{
    int m, n, y, t;
    Cartesian a, c;
    nexty b;
    cout << "Enter the x and y coordinates respectively. " << endl;
    cin >> m >> n;
    cout << "Enter the second x, y cordinate respectively." << endl;
    cin >> y >> t;
    a.getData(m, n);
    b.getData(y, t);
    c.add(a, b);
    sub(a, b);
    div(a, b);
    multi(a, b);
    return 0;
}

// Write a class to store x, y, and z coordinates of a point in three-dimensional space.
//  addition and subtraction operators for addition and subtraction of two coordinate objects.
// Implement the operator functions as non-member functions (friend operator functions).
#include <iostream>
using namespace std;
class store
{
    int x, y, z;

public:

    store(int x1 = 0, int y1 = 0, int z1 = 0)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    void print() { cout << x << endl << y << endl << z; }
    friend store operator+(store const &, store const &);
    friend store operator-(store const &, store const &);
};

store operator+(store const &c1, store const &c2)
{
    return store(c1.x + c2.x,  c1.y+c2.y, c1.z + c2.z);
}
store operator-(store const &c1, store const &c2)
{
    return store(c1.x - c2.x,  c1.y-c2.y, c1.z - c2.z);
}

int main()
{
    store c1(10, 6, 2), c2(2, 4, 3);
    store c4 = c1 + c2;
    c4.print();
    store c3= c1-c2;
    cout << endl;
    c3.print();

    return 0;
}

// Write a program to compare two objects of a class that contains an integer value as its data member.
// Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=),
//  greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.
#include <iostream>
using namespace std;

class compare
{
    int x;

public:
    compare()
    {
        x = 0;
    }
    compare(int m)
    {
        x = m;
    }
    int operator==(compare const &k)
    {
        if (x == k.x)
            return 1;
        else
            return 0;
    }
    int operator!=(compare const &l)
    {
        if (x != l.x)
            return 1;
        else
            return 0;
    }
    int operator<(compare const &l)
    {
        if (x < l.x)
            return 1;
        else
            return 0;
    }
    int operator>(compare const &l)
    {
        if (x > l.x)
            return 1;
        else
            return 0;
    }
    int operator<=(compare const &l)
    {
        if (x <= l.x)
            return 1;
        else
            return 0;
    }
    int operator>=(compare const &l)
    {
        if (x >= l.x)
            return 1;
        else
            return 0;
    }
};

int main()
{
    compare a(4), b(2);
    if (a == b)
    {
        cout << "Same" << endl;
    }
    else if (a != b)
    {
        cout << "Not Equal" << endl;
    }
    else if (a > b)
    {
        cout << "A is greater than B";
    }
    else if (a < b)
    {
        cout << "b is greater than B";
    }
    else if (a >= b)
    {
        cout << "A is greater than and equal to B";
    }
    else if (a <= b)
    {
        cout << "A is less than and equal B";
    }
    return 0;
}

#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    Date() : day(0), month(0), year(0) {}
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    Date operator++()
    {
        ++day;
        if (day > 30)
        {
            ++month;
            day -= 30;
        }
        if (month > 12)
        {
            ++year;
            month -= 12;
        }
        return Date(day, month, year);
    }
    Date operator++(int)
    {
        day++;
        if (day > 30)
        {
            month++;
            day -= 30;
        }
        if (month > 12)
        {
            year++;
            month -= 12;
        }
        return Date(day, month, year);
    }
    void showdate()
    {
        cout << "Date is: " << year << "/" << month << "/" << day << endl;
    }
};
int main()
{
    Date d(30, 12, 2010);
    d++;
    ++d;
    d.showdate();
    return 0;
}



