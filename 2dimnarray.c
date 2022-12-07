/* two dimensional array assignment 8
name=kiran dahal
roll no: PUR077BEI017    */ 


//1.WAP to read elements in an array (3x3) and calculate the sum and average of all elements.(2d)


#include <stdio.h>

int main() {
  float a[3][3], summm=0, avgt;
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%f", &a[i][j]);
      summm=summm+a[i][j];
    }
  }
  printf("The summm and average is %.2f and %.2f.", summm, summm/9);
  return 0;
}

//2.WAP to read elements in an array(2x3) and calculate the sum of rows.

#include <stdio.h>

int main() {
  int a[2][3],sum[]={0,0};
  for (int i=0; i<2; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
      sum[i]=sum[i]+a[i][j];
    }
  }
  for (int i=0; i<2; i++) printf("The sum of row %d is %d.\n", i+1, sum[i]);
  return 0;
}


//3.WAP to read elements in an array(3x5) and calculate the sum of rows.

#include <stdio.h>

int main() {
  int a[3][5],sum[]={0,0,0,0,0};
  for (int j=0; j<5; j++) {
    for (int i=0; i<3; i++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
      sum[j]=sum[j]+a[i][j];
    }
  }
  for (int j=0; j<5; j++) printf("The sum of column %d is %d.\n", j+1, sum[j]);
  return 0;
}

//q4.WAP to find the maximum number in an array (3x3) and replace all the elements with the maximum.


#include <stdio.h>

int main() {
  int a[3][3], max;
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
      if (i==0 && j==0) max=a[i][j];
      if (a[i][j]>max) max=a[i][j];
    }
  }
  printf("The maximum number in array is %d and the replaced output is ", max);
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      a[i][j]=max;
      printf(" %d,", a[i][j]);
    }
  }
  return 0;
}

//5. WAP to read elements in an array (3x3) and calculate the sum of diagonal matrix.

#include <stdio.h>


int main() {
  int a[3][3], sum=0;
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
      if (i==j) sum=sum+a[i][j];
    }
  }
  printf("The sum of diagonal matrix is %d.", sum);
  return 0;
}

//6.WAP to read elements in an array (3x3) and find the transpose of a matrix.

#include <stdio.h>

int main() {
  int a[3][3];
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
    }
  }
  printf("The transpose of matrix is :\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) printf("%2d ", a[i][j]);
    if (i==1) printf("-> ");
    else printf("   ");
    for (int j=0; j<3; j++) {
      printf("%2d ", a[j][i]);
      if (j==2) printf("\n");
    }
  }
  return 0;
}

//7. WAP to add two given matrix (3x3) and print the resultant matrix.(2D)


#include <stdio.h>

int main() {
  int a[3][3],b[3][3],c[3][3];
  printf("For Matrix A\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
    }
  }
  printf("For Matrix B\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &b[i][j]);
    }
  }
  printf("The Sum is: \n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) printf("%2d ", a[i][j]);
    if (i==1) printf(" + ");
    else printf("   ");
    for (int j=0; j<3; j++) printf("%2d ", b[i][j]);
    if (i==1) printf(" = ");
    else printf("   ");
    for (int j=0; j<3; j++) {
      printf("%2d ", a[i][j]+b[i][j]);
      if (j==2) printf("\n");
    }
  }
  return 0;
}

//8. WAP to multiply two given matrices (3x3) and print the resultant matrix.


#include <stdio.h>

int main() {
  int a[3][3],b[3][3],c[3][3];
  printf("For Matrix A\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nFor Matrix B\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &b[i][j]);
    }
  }
  printf("\nThe resultant matrix is: \n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) printf("%2d ", a[i][j]);
    if (i==1) printf(" * ");
    else printf("   ");
    for (int j=0; j<3; j++) printf("%2d ", b[i][j]);
    if (i==1) printf(" = ");
    else printf("   ");
    for (int j=0; j<3; j++) {
      printf("%3d ", a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j]);
      if (j==2) printf("\n");
    }
  }
  return 0;
}