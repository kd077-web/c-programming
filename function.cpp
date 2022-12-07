/* assignment 5 using user defined function
Name= kiran dahal
faculty= electronics 077
PUR077BEI017*/


// 1. WAP to find square of any number using the function.

#include<stdio.h>
int func(int z);
int main(){
    int square,x;
    printf(" \n enter any number ");
    scanf("%",&x);
    square = (x);
    printf(" the square of a number is %d",square);
    return 0;

}
  
int func(int z) 
{
    int c;
    z=c*c;
    return z;
} 

//2.  WAP to swap two numbers using function.

#include<stdio.h>
int swap_func (int, int);
int main(){
    int x,swapp,y;
    printf( "\n enter one number");
    printf("\n enter second number");
    scanf("%d",&x);
    scanf("%d",&y);
    swapp= swap_func(x,y);
    printf("the swapped number is %d", swapp);


}
int swap_func(int a,int b)
{
    int swap;
    a=b;
    b=a;
    return a,b;


}

// 3. wap to check a given number is odd or even

#include<stdio.h>
int odd_even(int n);
int main(){
    
    int func;
    func= odd_even();
    return 0;
    
}
odd_even(int n)
{   int x;
    printf('enter any number');
    scanf("%d",x);
    if(x%2==0){
        printf("the number is even %d",x );
    else{
        printf("the number is odd %d", x );
    }     
    }


}

//4. WAP to read a positive integar and find sum of digits using function.
#include<stdio.h>


int getSum(int n)

{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
 

int main()
{
    int n = 687;
    printf(" %d ", getSum(n));
    return 0;
}

//5. wap to find the factorial of a number using function.

#include<stdio.h>

int fact(int);
 
void main()
{
 int no,factorial;
 
  	printf("Enter a number to calculate it's factorial\n");
  	scanf("%d",&no);
  	factorial=fact(no);
    printf("Factorial of the num(%d) = %d\n",no,factorial);

}
 
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

//6  wap to convert letter from lowercase to uppercase




//7. wap to reverse a number using function 

#include<stdio.h>
#include<conio.h>
Reverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }
   return sum;
}
void main()
{  
   int rev, num;
   clrscr();
   printf("Enter a Positive Number: ");
   scanf("%d", &num);
   rev = Reverse(num);
   printf("The Reverse of given number %d is: %d", num, rev);
   getch();
}


// 8. wap to find hcf of two given numbers using function.


#include<stdio.h> 
 int hcf(int x,int y); 
 void main() 
 { 
     int a,b,d; 
     
     printf("Enter 2 Numbers : "); 
     scanf("%d%d",&a,&b); 
     if(a>b) 
       { 
            d=hcf(a,b); 
       } 
     else 
      { 
            d= hcf(b,a); 
      } 
            printf("HCF is= %d",d); 
            getch(); 
 } 
     int hcf(int x,int y) 
     { 
        int r=1; 
        while(r!=0) 
           { 
                r=x%y; 
                x=y; 
                y=r; 
           } 
                return(x); 
     }  


//9. wap to find the lcm of two given numbers using function.

#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,lcm;
	int LCM (int no1, int no2);
	
	printf("Enter two numbers:");
	scanf("%d %d",&no1,&no2);
	lcm=LCM(no1,no2);
	printf("LCM=%d",lcm);
	getch();
}
int LCM (int no1, int no2)
{
	int lcm;
	if(no1>no2)
	lcm=no1;
	else
	lcm=no2;
	while(lcm%no1!=0 || lcm%no2!=0)
	{
		lcm++;
	}
	return lcm;
}

//10. wap to find value of one number raised to another using function.

#include<stdio.h>
int power_func(int);
int main(){
    int x,y,power;
    printf("enter a number");
    printf("enter second number");
    scanf("%d",x);
    scanf("%d",y);
    power=power_func(x,y);
    printf()"the required ans is %d",power);
    return 0;

    
}

power_func(int z)
{
    int f,d;
    z=f^d
    retuen z;
}





// 11.  wap to convert decimal number into binary 

#include <stdio.h>
#include <math.h>

long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

int main()
{
    int decimalnum;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);
    printf("Equivalent Binary Number is: %ld", decimalToBinary(decimalnum));
    return 0;
}

//12. wap to check wheather a number is prime or not using function.

#include <stdio.h>
#include <conio.h>
void main()
{
	int num,res=0;
	
	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	res=prime(num);
	if(res==0)
		printf("\n%d IS A PRIME NUMBER",num);
	else
		printf("\n%d IS NOT A PRIME NUMBER",num);
	getch();
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}


 

