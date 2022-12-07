/* assignment 7 (1 dimensional array)
name = kiran dahal
faculty = bei, roll =PUR077BEI017  */



// 1. WAP to read 10 elements in an array and calculate the sum and average of all elements.
#include <stdio.h>

int main() {
  float a[10], b=0;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%f", &a[i]);
    b=b+a[i];
  }
  printf("The sum and average is %.1f and %.2f", b, b/10);
  return 0;
}

//2.WAP to read 10 elements in an array and count the occurence of odd and even using array.


#include <stdio.h>

int main() {
  int a[10],o=0,e=0;
  for (int i=0; i<10; i++) {
    printf("Ender a number: ");
    scanf("%d", &a[i]);
    (a[i]%2==0) ? e++ : o++;
  }
  printf("The no. of even numbers are %d and odd numbers are %d.", e, o);
  return 0;
}

//3.WAP to read 10 elements in an array and copy all the elements to another array.


#include <stdio.h>

int main() {
  int a[10],b[10];
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  for (int i=0; i<10; i++) {
    b[i]=a[i];
    printf("b[%d]=%d \n", i,b[i]);
  }
  return 0;
}

//4.WAP to read 10 elements in an array and copy all elements in reverse order in another array.


#include <stdio.h>

int main() {
  int a[10],b[10],j;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  for (int i=1; i<10; i++) {
    j=10-i;
    b[i]=a[j];
    printf("b[%d]=%d \n", i,b[i]);
  }
  return 0;
}

//5. wap to seperate odd and even integar 

#include<stdio.h>
int main() {
  int n, m, a=0, b=0;
  printf("Enter the no of inputs: ");
  scanf("%d", &n);
  int e[n], o[n];
  for (int i=0; i<n; i++) {
    printf("Enter a number: ");
    scanf("%d", &m);
    if(m%2==0) {
      e[a]=m;
      a++;
    }
    else {
      o[b]=m;
      b++;
    }
  }
  printf("The even numbers are %d, ", e[0]);
  for (int i=1; i<a; i++) printf("%d, ", e[i]);
  printf("\nThe odd numbers are %d, ", o[0]);
  for (int i=1; i<b; i++) printf("%d, ", o[i]);
  return 0;
}

//6. WAP to read 10 elements in an array and search for a particular number among the array list.


#include <stdio.h>

int main() {
  int a[10],n,t;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  printf("Enter the number you are searching for: ");
  scanf("%d", &n);
  for (int j=0; j<10; j++) {
    if (n==a[j]) {
      printf("The number %d is a[%d].\n", n, j);
      t=1;
    }
    else if (t==0) printf("The number is not on the array");
  }
  return 0;
}


//7. WAP to read 10 elements in an array and find the maximum.
#include <stdio.h>

int main() {
  int a[10],max;
  printf("Enter a number: ");
  scanf("%d", &a[0]);
  max=a[0];
  for (int i=1; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
    if (max<a[i]) max=a[i];
  }
  printf("The maximum number is %d.", max);
  return 0;
}

//8. WAP to read 10 elements in an array and find the minimum.


#include <stdio.h>

int main() {
  int a[10],min;
  printf("Enter a number: ");
  scanf("%d", &a[0]);
  min=a[0];
  for (int i=1; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
    if (min>a[i]) min=a[i];
  }
  printf("The minimum number is %d.", min);
  return 0;
}

//9. WAP to count the frequency of each element of array.


#include <stdio.h>

int main() {
  int n,count,count1;
  printf("Enter the number of input: ");
  scanf("%d", &n);
  int a[n];
  for (int i=0; i<n; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  for (int i=0; i<n; i++) {
    count=0;
    for (int j=0; j<n; j++) {
      if (a[i]==a[j]) count++;
    }
    count1=0;
    for (int j=0; j<i+1; j++) {
      if (a[i]==a[j]) count1++;
    }
    if (count1<2) printf("%d is repeated %d times.\n", a[i], count);
  }
  return 0;
}



//10. WAP to read 10 elements in an array and sort them in ascending order using array.


#include <stdio.h>

int main() {
  int a[10],min;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  min=a[0];
  for (int i=0; i<10; i++) {
    for (int j=i; j<10; j++) {
      if (a[i]>a[j]) {
        min=a[j];
        a[j]=a[i];
        a[i]=min;
      }
    }
    printf("%d, ", a[i]);
  }
  return 0;
}

//11. WAP to read 10 elements in an array and sort them in descending order using array.

#include <stdio.h>

int main() {
  int a[10],max;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  max=a[0];
  for (int i=0; i<10; i++) {
    for (int j=i; j<10; j++) {
      if (a[i]<a[j]) {
        max=a[j];
        a[j]=a[i];
        a[i]=max;
      }
    }
    printf("%d, ", a[i]);
  }
  return 0;
}


//12. WAP insert new value in the array. (sorted list)


#include <stdio.h>

int main() {
  int a[10],n,x,min;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  min=a[0];
  printf("The values are: ");
  for (int i=0; i<10; i++) {
    for (int j=i; j<10; j++) {
      if (a[i]>a[j]) {
        min=a[j];
        a[j]=a[i];
        a[i]=min;
      }
    }
    printf("%d, ", a[i]);
  }
  insert:
  printf(".\nEnter the position you want to enter the new array: ");
  scanf("%d", &n);
  if (0>n || n>10) {
    printf("Enter a positive number less than 11.");
    goto insert;
  }
  else {
    printf("Enter a number:");
    scanf("%d", &x);
    a[n-1]=x;
  }
  printf("The new order is ");
  for (int i=0; i<10; i++) {
    for (int j=i; j<10; j++) {
      if (a[i]>a[j]) {
        min=a[j];
        a[j]=a[i];
        a[i]=min;
      }
    }
    printf("%d, ", a[i]);
  }
  return 0;
}









