/* assignment 10 (DEFINING AND ACCESSING STRUCTURE AND ITS MEMBERS)
nmae=kiran dahal
faculty bei2077
roll no: 017    */

/* 1. define a structure named person, employeee, item, account, author,book,point,customer with its members.
a. person(name,age,address, contact)
b. employee(id,name, address,contact,job,designation,salary)
c. customer(id,name,address, contact)
d. item(code,name, price)
e. author(id,name,contact,email, gender)
f. book( ISBN, title,author,category,pages)
g. account(id,name,acno,acttype,balance)
h. point(x,y)
 write a program to read a record and display it.  */

 

 // a.  Define a structure named Person with its members: Person(name, age, address, contact)

#include <stdio.h>

struct person{
  char name[20];
  int age;
  char address[40];
  int contact;
};

int main() {
  int n;
  printf("Enter the data: ");
  scanf("%d", &n);
  struct person p[n];
  for (int i=0; i<n; i++) {
    printf("\nPerson %d\n", i+1);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Age: ", p[i].name);
    scanf("%d", &p[i].age);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    printf("Enter %s's Contact: ", p[i].name);
    scanf("%d", &p[i].contact);
  }
  printf("\n\ndata :\n");
  printf("S.No. \t Name \t Age \t Address \t Contact\n");
  for (int i=0; i<n; i++) printf(" %d \t %s \t %d \t %s \t\t %d \n", i+1, p[i].name, p[i].age, p[i].address, p[i].contact);
  return 0;
}

//  b. Define a structure named Employee with its members: Employee(id, name, address, contact, dob, designation, salary)
#include <stdio.h>

struct employees{
  int id;
  char name[20];
  char address[40];
  int contact;
  int dob;
  char designation[20];
  int salary;
};

int main() {
  int n;
  printf("Enter the no. Of Employees: ");
  scanf("%d", &n);
  struct employees p[n];
  for (int i=0; i<n; i++) {
    printf("\nEmployee %d\n", i+1);
    printf("Enter ID: ");
    scanf("%d", &p[i].id);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    printf("Enter %s's Contact: ", p[i].name);
    scanf("%d", &p[i].contact);
    printf("Enter %s's DOB (YYYY/MM/DD): ", p[i].name);
    scanf("%d", &p[i].dob);
    printf("Enter %s's Designation: ", p[i].name);
    scanf("%s", p[i].designation);
    printf("Enter %s's Salary: ", p[i].name);
    scanf("%d", &p[i].salary);
  }
  printf("\n\nEmployees Details:\n S.No. ID Name \t Address Contact DOB \t Designation \t Salary \n");
  for (int i=0; i<n; i++) printf(" %3d   %d  %s \t %s \t %d \t %d \t %s \t\t %d \n", i+1, p[i].id, p[i].name, p[i].address, p[i].contact, p[i].dob, p[i].designation, p[i].salary);
  return 0;
}

// c. Define a structure named Customer with its members: Customer(id, name, address, contact)
#include <stdio.h>

struct customer{
  int id;
  char name[20];
  char address[40];
  int contact;
};

int main() {
  int n;
  printf("Enter the no. Of Customers: ");
  scanf("%d", &n);
  struct customer p[n];
  for (int i=0; i<n; i++) {
    printf("\nCustomer %d\n", i+1);
    printf("Enter ID: ");
    scanf("%d", &p[i].id);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    printf("Enter %s's Contact: ", p[i].name);
    scanf("%d", &p[i].contact);
  }
  printf("\n\nEmployees Details:\n S.No. ID Name \t Address Contact\n");
  for (int i=0; i<n; i++) printf(" %2d   %d  %s \t %s \t %d\n", i+1, p[i].id, p[i].name, p[i].address, p[i].contact);

  return 0;
}

// d.  Define a structure named Item with its members: Item(code, name, price)
#include <stdio.h>

struct item{
  int code;
  char name[10];
  int price;
};

int main() {
  int k;
  printf("Enter the no. Of Item: ");
  scanf("%d", &k);
  struct item p[n];
  for (int i=0; i<k; i++) {
    printf("\nItem %d\n", i+1);
    printf("Enter Code: ");
    scanf("%d", &p[i].code);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Price: ", p[i].name);
    scanf("%d", &p[i].price);
  }
  printf("\n\nItem Details:\n S.No.\t Code\t Name\t Price\n");
  for (int i=0; i<k; i++) printf(" %d \t %d \t %s \t %d \n", i+1, p[i].code, p[i].name, p[i].price);
  return 0;
}

// e.  Define a structure named Author with its members: Author(id, name, contact. email, gender)

#include <stdio.h>

struct author{
  int id;
  char name[20];
  int contact;
  char email[30];
  char gender[2];
};

int main() {
  int n;
  printf("Enter the no. Of Author: ");
  scanf("%d", &n);
  struct author p[n];
  for (int i=0; i<n; i++) {
    printf("\nAuthor %d\n", i+1);
    printf("Enter ID: ");
    scanf("%d", &p[i].id);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Contact: ", p[i].name);
    scanf("%d", &p[i].contact);
    printf("Enter %s's Email: ", p[i].name);
    scanf("%s", p[i].email);
    printf("Enter %s's Gender (f/m): ", p[i].name);
    scanf("%s", p[i].gender);
  }
  printf("\n\nAuthor Details:\n S.No. ID    Name \t  Contact\t Email\t Gender");
  for (int i=0; i<n; i++) printf(" %d %d\t %s\t %d\t %s\t %s \n", i+1, p[i].id, p[i].name, p[i].contact, p[i].email, p[i].gender);
  return 0;
}

// f.  Define a structure named Book with its members: Book(ISBN, title, author, category, pages)


#include <stdio.h>

struct book {
  int isbn;
  char title[40];
  char author[20];
  char category[20];
  int pages;
};

int main() {
  int n;
  printf("Enter the no. Of Books: ");
  scanf("%d", &n);
  struct book p[n];
  for (int i=0; i<n; i++) {
    printf("\nBook %d\n", i+1);
    printf("Enter ISBN: ", p[i].isbn);
    scanf("%d", &p[i].isbn);
    printf("Enter The Title: ");
    scanf("%s",p[i].title);
    printf("Enter %s's The Author: ", p[i].title);
    scanf("%s",p[i].author);
    printf("Enter %s's Category: ", p[i].title);
    scanf("%s", p[i].category);
    printf("Enter %s's No. of Pages: ", p[i].title);
    scanf("%d", &p[i].pages);
  }
  printf("\n\nBooks Details:\n S.No. \tISBN \t Title \t Author \t Category \t Pages\n");
  for (int i=0; i<n; i++) printf(" %d\t %d\t %s\t %s\t\t %s\t\t %d \n", i+1, p[i].isbn, p[i].title, p[i].author, p[i].category, p[i].pages);
  return 0;
}

// g.  Define a structure named Account with its members: Account(id, name, acno, actype, balance)
#include <stdio.h>

struct account {
  int id;
  char name[20];
  int acno;
  char actype[20];
  int bal;
};

int main() {
  int n;
  printf("Enter the no. of Accounts: ");
  scanf("%d", &n);
  struct account p[n];
  for (int i=0; i<n; i++) {
    printf("\nAccount %d\n", i+1);
    printf("Enter ID: ");
    scanf("%d", &p[i].id);
    printf("Enter Name: ");
    scanf("%s", p[i].name);
    printf("Enter %s's Account No.: ", p[i].name);
    scanf("%d", &p[i].acno);
    printf("Enter %s's Account Type: ", p[i].name);
    scanf("%s", p[i].actype);
    printf("Enter %s's the Balance: ", p[i].name);
    scanf("%d", &p[i].bal);
  }
  printf("\n\nAccount Details:\nID \tName \tAccount No. \tAccount Type \tBalance \n");
  for (int i=0; i<n; i++) printf("%d \t%d \t%s \t%d \t\t%s \t\t%d \n", i+1, p[i].id, p[i].name, p[i].acno, p[i].actype, p[i].bal);
  return 0;i
}


//2. define a structure name complex having data members real and imaginary.wap to add two given complex numbers.


#include <stdio.h>

struct complex {
  int real;
  int img;
} p[2];

int main() {
  for (int i=0; i<2; i++) {
    printf("Number %c\n", 65+i);
    printf("Enter the real part of number: ");
    scanf("%d", &p[i].real);
    printf("Enter the imaginary part of number: ");
    scanf("%d", &p[i].img);
  }
  printf("\nThe sum is %d+%di.", p[1].real+p[0].real, p[1].img+p[0].img);
  return 0;
}

//3.  Define a structure name Date having data members day, month & year. Write a main program to add two given Date.
#include <stdio.h>

struct date {
  int day;
  int month;
  int year;
} d[2];

int main() {
  int year=0,month=0,day=0;
  for (int i=0; i<2; i++) {
    printf("\nNumber %c\n", 65+i);
    printf("Enter the day: ");
    scanf("%d", &d[i].day);
    printf("Enter the month: ");
    scanf("%d", &d[i].month);
    printf("Enter the year: ");
    scanf("%d", &d[i].year);
    day = day+d[i].day;
    month = month+d[i].month;
    year = year+d[i].year;
  }
  while (day>31) {
    day = day-31;
    month++;
  }
  while (month>12) {
    month = month-12;
    year++;
  }
  printf("The Sum of Dates is %d/%d/%d (Y/M/D).", year, month, day);
  return 0;
}

//4.  Define a structure name Time having data members second, minute & second. Write a main program to add two given Time.
#include <stdio.h>

struct time {
  int second;
  int minute;
  int hour;
} d[2];

int main() {
  int hour=0,minute=0,second=0;
  for (int i=0; i<2; i++) {
    printf("\nNumber %c\n", 65+i);
    printf("Enter the second: ");
    scanf("%d", &d[i].second);
    printf("Enter the minute: ");
    scanf("%d", &d[i].minute);
    printf("Enter the hour: ");
    scanf("%d", &d[i].hour);
    second = second+d[i].second;
    minute = minute+d[i].minute;
    hour = hour+d[i].hour;
  }
  while (second>=60) {
    second = second-60;
    minute++;
  }
  while (minute>=60) {
    minute = minute-60;
    hour++;
  }
  printf("The Sum of Time is %d:%d:%d.", hour, minute, second);
  return 0;
}

//5. Define a structure name Distance having data members feet & inch. Write a main program to add two given Distances .
#include <stdio.h>

struct dis {
  int inch;
  int feet;
} d[2];

int main() {
  int feet=0,inch=0;
  for (int i=0; i<2; i++) {
    printf("\nNumber %c\n", 65+i);
    printf("Enter the inch: ");
    scanf("%d", &d[i].inch);
    printf("Enter the feet: ");
    scanf("%d", &d[i].feet);
    inch = inch+d[i].inch;
    feet = feet+d[i].feet;
  }
  while (inch>=12) {
    inch = inch-12;
    feet++;
  }
  printf("The Sum of Distance is %d ft %d in.", feet, inch);
  return 0;
}

