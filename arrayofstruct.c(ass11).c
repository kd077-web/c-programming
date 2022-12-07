/* array of structure, assignment 11
name=kiran dahal,faculty= BEI077*/

/* 1. Define a structure named Student having members name, rollno and marks in 5 subjects.
WAP to read record of 10 students. Calculate total marks and percentage of each student and print them.*/
#include <stdio.h>

struct marks {
  int sub[5];
};

struct student {
  char name[20];
  int roll;
  struct marks mark;
  int total;
} p[10];

int main() {
  for (int i=0; i<10; i++) {
    p[i].total=0;
    printf("\nStudent %d\n", i+1);
    printf("Enter Name: ");
    scanf("%s", p[i].name);
    printf("Enter Roll No.: ");
    scanf("%d", &p[i].roll);
    for (int j=0; j<5; j++) {
      printf("Enter marks on Subject %c: ", 65+j);
      scanf("%d", &p[i].mark.sub[j]);
      p[i].total = p[i].total+p[i].mark.sub[j];
    }
  }
  for (int i=0; i<10; i++) {
    printf("\nStudent %d\n", i+1);
    printf("Name: \t\t %s \n", p[i].name);
    printf("Roll No.: \t %d\n", p[i].roll);
    printf("Total Marks: \t %d\n", p[i].total);
    printf("Percentage: \t %d\n", p[i].total/5);
  }
  return 0;


}



// Q2.(a) Display record of all employees who live in 'DHARAN'.
#include <stdio.h>
#include <string.h>

struct employee{
  int empid;
  char name[20];
  char address[40];
  int salary;
} p[10];

int main() {
  for (int i=0; i<10; i++) {
    printf("\nEmployee %d\n", i+1);
    printf("Enter Employee ID: ");
    scanf("%d", &p[i].empid);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    strupr(p[i].address);
    printf("Enter %s's salary: ", p[i].name);
    scanf("%d", &p[i].salary);
  }
  printf("\n\nFilter: Living in DHARAN\n");
  printf("S.No. \t ID \t Name \t Addeess \t Salary\n");
  for (int i=0; i<10; i++) {
    if (strcmp(p[i].address,"DHARAN") == 0) printf(" %d \t %d \t %s \t %s \t %d\n", i+1, p[i].empid, p[i].name, p[i].address, p[i].salary);
  }
  return 0;
}

//Q2.(b) Display record of all employees who does not live in 'DHARAN'.*/
#include <stdio.h>
#include <string.h>

struct employee{
  int empid;
  char name[20];
  char address[40];
  int salary;
} p[10];

int main() {
  for (int i=0; i<10; i++) {
    printf("\nEmployee %d\n", i+1);
    printf("Enter Employee ID: ");
    scanf("%d", &p[i].empid);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    strupr(p[i].address);
    printf("Enter %s's salary: ", p[i].name);
    scanf("%d", &p[i].salary);
  }
  printf("\n\nFilter: Not Living in DHARAN\n");
  printf("S.No. \t ID \t Name \t Addeess \t Salary\n");
  for (int i=0; i<10; i++) {
    if (strcmp(p[i].address,"DHARAN")) printf(" %d \t %d \t %s \t %s \t %d\n", i+1, p[i].empid, p[i].name, p[i].address, p[i].salary);
  }
  return 0;
}

//Q2.(c) Display record of all employees whose salary ranges between 15000 to 20000.*/
#include <stdio.h>

struct employee{
  int empid;
  char name[20];
  char address[40];
  int salary;
} p[10];

int main() {
  for (int i=0; i<10; i++) {
    printf("\nEmployee %d\n", i+1);
    printf("Enter Employee ID: ");
    scanf("%d", &p[i].empid);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    printf("Enter %s's salary: ", p[i].name);
    scanf("%d", &p[i].salary);
  }
  printf("\n\nFilter: Salary Range 15000 to 20000\n");
  printf("S.No. \t ID \t Name \t Addeess \t Salary\n");
  for (int i=0; i<10; i++) {
    if ((15000<=p[i].salary) && (p[i].salary<=20000)) printf(" %d \t %d \t %s \t %s \t %d\n", i+1, p[i].empid, p[i].name, p[i].address, p[i].salary);
  }
  return 0;
}

//Q2.(d) Display record of all employees after increasing the salaries of all employees by 10%.*/
#include <stdio.h>

struct employee{
  int empid;
  char name[20];
  char address[40];
  int salary;
} p[10];

int main() {
  for (int i=0; i<10; i++) {
    printf("\nEmployee %d\n", i+1);
    printf("Enter Employee ID: ");
    scanf("%d", &p[i].empid);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    printf("Enter %s's salary: ", p[i].name);
    scanf("%d", &p[i].salary);
  }
  printf("\n\nFilter: Salary 10% Increase\n");
  printf("S.No. \t ID \t Name \t Addeess \t Salary\n");
  for (int i=0; i<10; i++) printf(" %d \t %d \t %s \t %s \t %d\n", i+1, p[i].empid, p[i].name, p[i].address, p[i].salary);
  return 0;
}


//Q2.(e) Increase the salary by 10% of only those employees who lives in 'BIRATNAGAR' . Display record of all employees.*/
#include <stdio.h>
#include <string.h>

struct employee{
  int empid;
  char name[20];
  char address[40];
  int salary;
} p[10];

int main() {
  for (int i=0; i<10; i++) {
    printf("\nEmployee %d\n", i+1);
    printf("Enter Employee ID: ");
    scanf("%d", &p[i].empid);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    strupr(p[i].address);
    printf("Enter %s's salary: ", p[i].name);
    scanf("%d", &p[i].salary);
  }
  printf("\n\nFilter:For Living in BIRATNAGAR Salary 10% Increase\n");
  printf("S.No. \t ID \t Name \t Addeess \t Salary\n");
  for (int i=0; i<10; i++) {
    if (strcmp(p[i].address,"BIRATNAGAR")==0) p[i].salary=p[i].salary*11/10;
    printf(" %d \t %d \t %s \t %s \t %d\n", i+1, p[i].empid, p[i].name, p[i].address, p[i].salary);
    }
  return 0;
}


/* Q3. Define a structure:
Name(fname, mname, lastname)
Person(age, contact, address)
WAP to nest the structure Name within structure Person and read the record of 10 persons and display it.*/
#include <stdio.h>

struct name {
  char fname[15];
  char mname[15];
  char lastname[15];
};

struct person {
  struct name fullname;
  int age;
  int contact;
  char address[15];
} p[10];

int main() {
  for (int i=0; i<10; i++) {
    printf("\nPerson %d\n", i+1);
    printf("Enter First Name: ");
    scanf("%s", p[i].fullname.fname);
    printf("Enter Middle Name: ");
    scanf("%s", p[i].fullname.mname);
    printf("Enter Surname: ");
    scanf("%s", p[i].fullname.lastname);
    printf("Enter Age: ");
    scanf("%d", &p[i].age);
    printf("Enter Contact No.: ");
    scanf("%d", &p[i].contact);
    printf("Enter Address: ");
    scanf("%s", p[i].address);
    }
  for (int i=0; i<10; i++) {
    printf("\nPerson %d\n", i+1);
    printf("First Name: \t %s \n", p[i].fullname.fname);
    printf("Middle Name: \t %s \n", p[i].fullname.mname);
    printf("Surname: \t %s \n", p[i].fullname.lastname);
    printf("Age: \t\t %d \n", p[i].age);
    printf("Contact No.: \t %d \n", p[i].contact);
    printf("Address: \t %s \n", p[i].address);
  }
  return 0;
}

/*  Q4. Define a structure name Complex with its member real and img.
Write a user defined function named addComplex() to add two given Complex numbers.
The function should take two Complex type arguments and also return Complex type.
WAP to implement the UDF in main program.*/
#include <stdio.h>

struct complex {
  int real;
  int img;
} p[3];

struct complex addcomplex(struct complex, struct complex);

int main() {
  for (int i = 0; i<2; i++) {
    printf("Number %c\n", 65+i);
    printf("Enter the real part of number: ");
    scanf("%d", &p[i].real);
    printf("Enter the imaginary part of number: ");
    scanf("%d", &p[i].img);
  }
  p[2] = addcomplex(p[0], p[1]);
  printf("The sum is %d+%di", p[2].real, p[2].img);
  return 0;
}

struct complex addcomplex(struct complex x, struct complex y) {
  struct complex z;
  z.real = x.real+y.real;
  z.img = x.img+y.img;
  return z;
}

/* Q.5 Define a structure name Time with its member hr, min and sec.
Write a user defined function named timeDiff() to calculate the difference between two time periods.
The function should take two Time type arguments and also return Time type. WAP to implement the UDF in main program.*/
#include <stdio.h>

struct time {
  int sec;
  int min;
  int hr;
} p[3];

struct time timediff(struct time, struct time);

int main() {
  for (int i = 0; i<2; i++) {
    printf("Time %c\n", 65+i);
    printf("Enter the secs: ");
    scanf("%d", &p[i].sec);
    printf("Enter the minutes: ");
    scanf("%d", &p[i].min);
    printf("Enter the hour: ");
    scanf("%d", &p[i].hr);
  }
  if (p[1].hr<p[0].hr) p[2] = timediff(p[0], p[1]);
  else if (p[1].hr == p[0].hr) {
    if (p[1].min<p[0].min) p[2] = timediff(p[0], p[1]);
    else if (p[1].min == p[0].min) {
      if (p[1].sec<=p[0].sec) p[2] = timediff(p[0], p[1]);
      else p[2] = timediff(p[1], p[0]);
    }
  }
  else p[2]=timediff(p[0], p[1]);
  printf("The diff is %d:%d:%d", p[2].hr, p[2].min, p[2].sec);
  return 0;
}

struct time timediff(struct time x, struct time y) {
  struct time z;
  z.hr=x.hr-y.hr;
  if (x.min<y.min) {
    z.hr--;
    x.min+=60;
  }
  z.min=x.min-y.min;
  if (x.sec<y.sec) {
    z.min--;
    x.sec+=60;
  }
  z.sec=x.sec-y.sec;
  return z;
}

/* Q.6 Define a structure named Student having members name and rollno.
WAP to read record of 10 students. Sort the students record in ascending order according to their roll numbers.*/
#include <stdio.h>




struct student {
  char name[20];
  int roll;
} p[10],q[10],tmp;

int main() {
  for (int i=0; i<10; i++) {
    printf("\nStudent %d\n", i+1);
    printf("Enter Name: ");
    scanf("%s", p[i].name);
    printf("Enter Roll No.: ");
    scanf("%d", &p[i].roll);
  }
  for (int i=0; i<10; i++) {
    q[i] = p[i];
    for (int j=i; j<10; j++) {
      if (q[i].roll>p[j].roll) {
        tmp = q[i];
        q[i] = p[j];
        p[j] = tmp;
      }
    }
  }
  for (int i=0; i<10; i++) {
    printf("\nStudent %d\n", i+1);
    printf("Name: \t\t %s \n", q[i].name);
    printf("Roll No.: \t %d\n", q[i].roll);
  }
  return 0;
}
