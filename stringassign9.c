/*assignment 9, string ,NAME= kiran daahal
  faculty = BEI0774
  roll no: PUR077BEI017   */


  // 1. wap to find the length of given string without  using a library function.

#include <stdio.h>

int main() {
  char string[20];
  int j=0;
  printf("Enter a string: ");
  gets(string);
  while(string[j]!='\0') j++;
  printf("\n The length of string is %d.", j);
  return 0;
}


//2. wap to copy the content of given string to another without using the library function.

#include <stdio.h>

int main() {
  char string[20],stringt[20];
  int j=0;
  printf("Enter a string: ");
  gets(string);
  while(string[j]!='\0') {
    stringt[j]=string[j];
    j++;
  }
  printf("The copied string is %s.", stringt);
  return 0;
}

//3. wap to reverse a given string without using library function.

#include <stdio.h>

int main() {
  char string[20],string1[20];
  int n=0;
  printf("Enter a string: ");
  gets(string);
  while(string[n]!='\0') n++;
  for (int j=0, i=n-1; j<n; j++,i--) {
    string1[j]=string[i];
    printf("%d %d\n", i, j);
  }
  printf("The reverse of the string is %s.", string1);
  return 0;
}

// 4. WAP to concatenate two given strings without using a library function.


#include <stdio.h>

int main() {
  char stringgone[20],stringgtwo[20],stringgthree[40];
  int n=0, m=0;
  printf("Enter a string: ");
  gets(stringgone);
  printf("Enter another string: ");
  gets(stringgtwo);
  while(stringgone[n]!='\0') n++;
  while(stringgtwo[n]!='\0') m++;
  for (int i=0; i<n+m; i++) {
    stringg3[i]=stringg1[i];
    stringg3[i+n]=stringg2[i];
  }
  printf("The concatenate of the strings is %s.", stringgthree);

  return 0;
}


//5. wap to compare two given strings without using a library function

#include <stdio.h>

int main() {
  char str1[20], str2[20];
  int n=0, m=0;
  printf("Enter a string: ");
  gets(str1);
  printf("Enter another string: ");
  gets(str2);
  while(str1[n]!='\0') n++;
  for (int i=0; i<n; i++) {
    if (str1[i]!=str2[i]) {
      printf("The strings are not same.");
      break;
    }
    else if (i==n-1) printf("The strings are same.");
  }
  return 0;
}



//  6. WAP to convert all given character in a given string to uppercase.


#include <stdio.h>
#include <string.h>

int main() {
  char str_one[20];
  printf("Enter a string: ");
  gets(str_one);
  printf("The Capitalized String is %s", strupr(str_one));
  return 0;
}

//7. wap to find the number of vowels, consonants,digits and white spaces in string.

#include <stdio.h>


int main() {
  char str1[50], vowel[]="AEIOUaeiou";
  int v=0,c=0,d=0,w=0,rough;
  printf("Enter a string: ");
  gets(str1);
  for (int i=0; str1[i]!='\0'; i++) {
    rough=0;
    for (int j=0; j<10; j++) {
      if (str1[1]==vowel[j]) {
        rough=1;
        break;
      }
    }
    if (rough=1) v++;
    else  if (str1[i]>97 && str1[i]<122) c++;
    else if (str1[i]>48 && str1[i]<57) d++;
    else w++;
  }
  printf("The no. of vowels are %d, consonants are %d, digits are %d, and white space are %d.", v, c, d, w);
  return 0;


// 8.  WAP to count the number of words in a given line of text.


#include <stdio.h>

int main() {
  char str1[100];
  int k=0;
  printf("Enter a string: ");
  gets(str1);
  for (int i=0; str1[i]!='\0'; i++) {
    if (str1[i]==32) k++;
  }
  printf("The no. of words are %d.", k+1);
  return 0;
}

//9.  WAP to check to whether a given word is palindrome or not.


#include <stdio.h>

int main() {
  char str1[20];
  int i=0;
  printf("Enter a word: ");
  gets(str1);
  while(str1[i]!='\0') i++;
  for (int j=0; j<i; j++) {
    if (str1[j]!=str1[i-j-1]) {
      printf("The word is not palindrome.");
      break;
    }
    else if(j==i-1) printf("The word is palindrome.");
  }
  return 0;
}  

// 10. WAP to sort n number of stings in lexicographical order (dictionary order).


#include <stdio.h>
#include <string.h>

int main() {
  int n,m;
  printf("Enter the number of input: ");
  scanf("%d", &n);
  char str[n][20],str1[n][20],temp[n];
  for (int i=0; i<n; i++) {
    printf("Enter a word: ");
    scanf("%s", str[i]);
    strlwr(str[i]);
  }
  for(int i=0;i<n;i++)
    for(int j=i;j<n;j++){
      if(str[i]<str[j]){
        strcpy(temp,str[i]);
        strcpy(str[i],str[j]);
        strcpy(str[j],temp);
      }
    }
  printf("Order of Sorted Strings: \n");
  for(int i=0;i<n;i++) puts(str[i]);
  return 0;
}


