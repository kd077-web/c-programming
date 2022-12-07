/*assignment 6 recursive function 
name -kiran dahal
bei077 roll 17*/


// 1.WAP to find sum of digits of a given number using recursion.


#include <stdio.h>

int sum(int, int);

int main() {
  int x,y;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("Enter another number: ");
  scanf("%d", &y);
  printf("The sum is %d.", sum(x,y));
  return 0;
}

int sum(int a, int b) {
  if(b==0) return 1;
  return a+sum(1,b-1);
}

// 2.WAP to find the product of two given number.


#include <stdio.h>

int product(int, int);

int main() {
  int n,p;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter second: ");
  scanf("%d", &p);
  printf("The product is %d.",product(n,p));
  return 0;
}

int product(int x, int y) {
  if (y==1) return x;
  else return x+product(x,y-1);
}

// 3.WAP to find the sum of all numbers between 1 to n using recursion.


#include <stdio.h>

int sum(int x);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The output is %d.",sum(n));
  return 0;
}

int sum(int x) {
  if (x==0) return 0;
  else return x+sum(x-1);
}

// 4. WAP to find reverse of any number using recursion.

#include <stdio.h>

int rev_num(int x);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The reverse of %d is %d.", n,rev_num(n));
  return 0;
}

int rev_num(int x) {
  int y,z=1;
  if(x==0) return 0;
  for (int i=x; i>0; i/=10) {
    y=i%10;
    z*=10;
  }
  return y+rev(x%(z/10))*10;
}

//5. wap to find digits of  given number.

#include <stdio.h>

int sum(int, int);

int main() {
  int x,y;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("Enter another number: ");
  scanf("%d", &y);
  printf("The sum is %d.", sum(x,y));
  return 0;
}

int sum(int a, int b) {
  if(b==0) return 1;
  return a+sum(1,b-1);
}

// 6. WAP to find factorial of any number using recursion.


#include <stdio.h>

int fac(int);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The factorial of %d is %d.", n, fac(n));
  return 0;
}

int fac(int x) {
  if (x==0) return 1;
  return x*fac(x-1);
}


// 7.WAP to generate nth fibonacci term using recursion.



#include <stdio.h>

int fibo(int);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The %dth term is %d.", n, fibo(n));
  return 0;
}

int fibo(int x) {
  if(x==0) return 0;
  else if(x==1) return 1;
  return fibo(x-1)+fibo(x-2);
}