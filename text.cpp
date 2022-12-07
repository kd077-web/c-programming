// assignment 4 printing patterns(nested looping)
//name kiran dahal
//roll no PUR077BEI017
// faculty beice


/*a .
*
**
***
****
*****   */

#include<stdio.h>
int main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      printf("*");

    }
    printf("\n");
  }
  return 0;
}

/* b.

*****
****
***
**
*        */


#include<stdio.h>
int main(){
  int i,j;
  for(i=5;i>=1;i--){
    for(j=1;j<=i;j++){
      printf("*");

    }
    printf("\n");
  }
  return 0;
}


/*c 
    *
   **
  ***
 ****
*****    */

#include<stdio.h>
int main(){
  int i,j,k;
  for(i=1;i<=5;i++){
    
    for(j=5-1;j>=i;j--){
      printf(" ");

    }
    for(k=1;k<=i,k++){
      printf("*")
    }
    printf("\n");
  }
  return 0;
}

/* d. 
              *****
               ****
                ***
                 **
                  *       */
#include<stdio.h>               
int main(){
  int i,j,k;
  for(i=1;i<=5;i++){
    
    for(j=5-1;j>=i;j--){
      printf(" ");

    }
    for(k=1;k<=i,k++){
      printf("*")
    }
    printf("\n");
  }
  return 0;
}





/*e.
               *
              ***
             *****
            *******
           *********     */


   #include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}   

/* f.                 A B C D E F G F E D C B A 
                      A B C D E F   F E D C B A
                      A B C D E       E D C B A
                      A B C D           D C B A
                      A B C               C B A
                      A B                   B A
                      A                       A        */


#include<stdio.h>
int main()  {
  int i,j,k,n,sp,m;
  char x;
  n=7;
  printf("\n");
  for(i=0;i<n;i++){
    x='A'
    m=0;

    for(j=1;j<=n-i;j++){
      printf("%c",x++);
    }
    for(sp=1;sp<=(2*i)-1;sp++){
      printf(" ");
    }
    if(i<1){
      x-=2;
      m=1;
    }
    else{
      x--;
    }
    for(k=n-i-m;k>=1;k--)[
      printf("%c",x--);
    ]
    printf("\n");

      
  }
  printf("\n");
  return 0;

} 


/* g.  
       1
       11
       111
       1111
       11111   */

#include<stdio.h>
int main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      printf("%d",1);

    }
    printf("\n");
  }
  return 0;
}


/* h.  
         1
         12
         123
         1234
         12345   */



   #include<stdio.h>
int main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      printf("%d",j);

    }
    printf("\n");
  }
  return 0;
} 

/* i.      
           1
           22
           333
           4444
           55555    */

#include<stdio.h>
int main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      printf("%d",i);

    }
    printf("\n");
  }
  return 0;
} 


/* j.      
           1
           2 3
           4 5 6
           7 8 9 10
           11 12 13 14 15     */



#include <stdio.h>
int main() {
   int rows, i, j, number = 1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
   return 0;
} 


/* k.                   1
                       121
                      12321
                     1234321
                    123454321   */ 


  #include<stdio.h>
int main(){
 for(int i=1;i<6;i++);{
   for(int k=0;k<6-1;k++){
   printf(" ");
 }
 int j=0;
 for(j=1;j<i+1;j++){
   printf("%d",j);
 }
 j-=2;
 for(int i=1;1<i;1++){
   printf("%d",j--);
 }
 printf("\n");
 }
 return 0;
}

 
 
               





/* l.            1
                 2 6
                 3 7 10
                 4 8 11 13
                 5 9 12 14 15       */

#include<stdio.h>
int main(){
  
  for( int i=1;i<6;i++){
    
      printf("%d",i);

    
    int a=4,k=1;
    for(int j=1;j<i;j++){
      printf("d",k=k+a);
      a--;   
    
  }
  printf("\n");}
  return 0;
} 





/*m.              1 3 5 7 9
                  3 5 7 9
                  5 7 9
                  7 9 
                  9        */


#include<stdio.h>
int main(){
   for(int i=2;i<12;i+=2){
     for( int j=i-1;j<10; j+=2){
       printf("\n");
     }
   }
   return 0;
}

/* n.             1 2 3 4 5
                  2 3 4 5
                  3 4 5
                  4 5
                  5           */


#include<stdio.h>
int main() {
  for (int i=1;i<6;i++){
    int a=i;
    for(int j=7;j>i+1;j--){
      printf("%d",a);
      a++
    }
  }
  return 0;
}                 

/* o.             1 1 1 1 1
                  0 0 0 0 0
                  1 1 1 1 1
                  0 0 0 0 0 
                  1 1 1 1 1    */


#include<stdio.h>
int main(){
  for(int i=1;i<=6;j++){
    for(int j=1;j<6;j++){
      printf("%d",i%2);

    }
    printf('\n');

  }
  return 0;
}                  

/* p.             1 0 1 0 1
                  0 1 0 1 0
                  1 0 1 0 1
                  0 1 0 1 0
                  1 0 1 0 1        */ 

 #include<stdio.h>                 
int main(){
  for(int i=0;i<5;i++){
    for(int j=i+1;j<i+6;j++){
      printf("%d",j%2);}

    
    printf("\n");

  }
  return 0;
}        


















          












