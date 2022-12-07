// assignment 12 ,data files, name: kiran dahal, faculty = bei077, roll no =017


// 1.  WAP to write “Purwanchal Campus” to a file, read the content from the file and display it on the screen.
#include <stdio.h>

int main() {
  FILE *fpc = fopen("output.txt", "w");
  if (fpc == NULL) {
    printf("Error!");
    return 1;
  }

  fputs("Purwanchal Campus", fpc);
  fclose(fpc);

  fpc = fopen("output.txt", "r");
  printf("You have written:\n");
  while((ch = fgetc(fpc)) != EOF) putchar(ch);
  fclose(fpc);

  return 0;
}


// 2. WAP to read numbers from a file and write even, odd to separate file.
#include <stdio.h>

int main() {
  FILE *fnum = fopen("q02.txt","w");
  int n=0;
  if (fnum == NULL) {
    printf("Error: could not open file");
    return 1;
  }

  printf("Enter numbers with space for new number [Enter negative number to exit]: \n");
  while (n>=0) {
    scanf("%d", &n);
    putw(n, fnum);
  }
  fclose(fnum);

  FILE *fodd = fopen("q02odd.txt", "w");
  FILE *feven = fopen("q02even.txt", "w");

  fnum = fopen("q02.txt","r");
  while((n = getw(fnum)) >=0) {
    if (n%2 == 0) putw(n, feven);
    else putw(n, fodd);
  }
  fclose(fnum);
  fclose(feven);
  fclose(fodd);

  feven = fopen("q02even.txt", "r");
  printf("\n\nEven Number File:\n");
  while((n = getw(feven)) != EOF) printf("%d, ", n);
  fclose(feven);

  fodd = fopen("q02odd.txt", "r");
  printf("\n\nEven Number File:\n");
  while((n = getw(fodd)) != EOF) printf("%d, ", n);
  fclose(fodd);

  return 0;
}

// 3. WAP to merge two file to third file.
#include <stdio.h>

int main() {
  FILE *f1 = fopen("sample1.txt", "r");
  FILE *f2 = fopen("sample2.txt", "r");
  FILE *f3 = fopen("output.txt", "w");
  char ch;
  if (f1 == NULL || f2 == NULL || f3 == NULL ) {
    printf("Error!");
    return 1;
  }

  f1 = fopen("sample1.txt", "r");
  while((ch = fgetc(f1)) != EOF) fputc(ch,f3);
  fclose(f1);

  f2 = fopen("sample2.txt", "r");
  while((ch = fgetc(f2)) != EOF) fputc(ch,f3);
  fclose(f1);
  fclose(f3);

  printf("You Merged Text is:\n");
  f3 = fopen("output.txt", "r");
  while((ch = fgetc(f3)) != EOF) putchar(ch);
  fclose(f3);

  return 0;
}

// 4. WAP to copy a content of one file to another file.
#include <stdio.h>

int main() {
  FILE *f1 = fopen("sample1.txt", "r");
  FILE *f2 = fopen("output.txt", "w");
  char ch;
  if (f1 == NULL || f2 == NULL) {
    printf("Error!");
    return 1;
  }

  f1 = fopen("sample1.txt", "r");
  while((ch = fgetc(f1)) != EOF) fputc(ch,f2);
  fclose(f1);
  fclose(f2);

  printf("You Copied Text is:\n");
  f2 = fopen("output.txt", "r");
  while((ch = fgetc(f2)) != EOF) putchar(ch);
  fclose(f2);

  return 0;
}

//  5. WAP to count characters, words and lines in a text file.
#include <stdio.h>

int main() {
  FILE *f1 = fopen("sample1.txt", "r");
  char ch;
  int chara=0, word=0, lines=0;
  if (f1 == NULL) {
    printf("Error!");
    return 1;
  }

  printf("The Text is :\n");
  f1 = fopen("sample1.txt", "r");
  while((ch = fgetc(f1)) != EOF){
    if(ch != ' ') chara++;
    if(ch == ' ') word++;
    if(ch == '\n') lines++;
    putchar(ch);
  }
  fclose(f1);

  printf("There are %d characters, %d word and %d lines.\n", chara-2, word, lines);

  return 0;
}

// 6. WAP to write name, roll no and age of five students into a disk filename “STUDENT.DAT”.
#include <stdio.h>

struct student {
  char name[20];
  int roll;
  int age;
} details ;

int main() {
  FILE *dat = fopen("STUDENT.DAT", "w");

  if (dat == NULL) {
    printf("Error!");
    return 1;
  }

  for (int i=0; i<5; i++) {
    printf("\nStudent %c\n", i+65);
    printf("Enter Name:");
    scanf("%s", details.name);
    printf("Enter Roll:");
    scanf(" %d", &details.roll);
    printf("Enter Age:");
    scanf(" %d", &details.age);
    fprintf(dat,"%s %d %d", details.name, details.roll, details.age);
  }
  fclose(dat);

  dat = fopen("STUDENT.DAT", "r");
  printf("\nNo.\tName\tRoll\tAge\n");
  int i=0;
  while (fscanf(dat, "%s%d%d", details.name, &details.roll, &details.age) != EOF) {
    printf("%d\t%s\t%d\t%d\n", i+1, details.name, details.roll, details.age);
    i++;
  }
  fclose(dat);

  return 0;
}

/* 7. WAP to read to store Employees(id, name, address, salary) detail in a text file. Read data from the text file, sort them in ascending order of
salary and store the sorted record in a binary file. Display the details of all employees. */
#include <stdio.h>

struct emp {
  int id;
  char name[20];
  char address[20];
  int salary;
} e;

int main() {
  FILE *output = fopen("details.bin", "wb");
  int n;

  printf("Enter the no. of employees: ");
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    printf("\nEmployee %c\n", i+65);
    printf("Enter ID:");
    scanf("%d", &e.id);
    printf("Enter Name:");
    scanf("%s", e.name);
    printf("Enter Address:");
    scanf("%s", e.address);
    printf("Enter Salary:");
    scanf("%d", &e.salary);
    fprintf(output,"%d\n%s\n%s\n%d\n", e.id, e.name, e.address, e.salary);
  }
  fclose(output);

  output = fopen("details.bin","rb");
  printf("\nID.\tName\tAddress\tSalary\n");
  while (fscanf(output, "%d\n%s\n%s\n%d\n", &e.id, e.name, e.address, &e.salary) != EOF) {
    printf("%d\t%s\t%s\t%d\n", e.id, e.name, e.address, e.salary);
  }
  fclose(output);

  return 0;
}


// 8.WAP to read record of 10 Students(name, rollno, marks) and store in a file “ioe.txt”. Print all the record of students who obtained greater or equals to 40 marks.
#include <stdio.h>

struct student {
  char name[20];
  int roll, marks;
} details ;

int main() {
  FILE *ioe = fopen("ioe.txt", "w");

  if (ioe == NULL) {
    printf("Error!");
    return 1;
  }

  for (int i=0; i<10; i++) {
    printf("\nStudent %c\n", i+65);
    printf("Enter Name:");
    scanf("%s", details.name);
    printf("Enter Roll:");
    scanf(" %d", &details.roll);
    printf("Enter Marks:");
    scanf(" %d", &details.marks);
    fprintf(ioe,"%s\n%d\n%d\n", details.name, details.roll, details.marks);
  }
  fclose(ioe);

  ioe = fopen("ioe.txt", "r");
  printf("\nNo.\tName\tRoll\tMarks\n");
  int i=0;
  while (fscanf(ioe, "%s\n%d\n%d\n", details.name, &details.roll, &details.marks) != EOF) {
    printf("%d\t%s\t%d\t%d\n", i+1, details.name, details.roll, details.marks);
    i++;
  }
  fclose(ioe);

  return 0;
}