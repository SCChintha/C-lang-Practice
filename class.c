#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   /*  
    char ch,s[100],sen[122];
   scanf("%c\n%s\n%[^\n]",&ch,&s,&sen);
   printf("%c\n%s\n%s\n",ch,s,sen); 

   */

/*   int a,b;
float c,d;
a = 15;
b = a / 2;
printf("%d\n",b);
printf("%3d\n",b);
printf("%03d\n",b);
c = 15.3;
d = c / 3;
printf("%3.2f\n",d);
return 0;     
    */

  /* 
  int a,b,c,d,e,sum,avg;
printf("enter value a =\n");
   scanf("%d",&a);
printf("enter value b =\n");
   scanf("%d",&b);
printf("enter value c =\n");
   scanf("%d",&c);                              //post lab 1
printf("enter value d =\n");
   scanf("%d",&d);
printf("enter value e=\n");
   scanf("%d",&e);

   sum=a+b+c+d+e;
   avg=sum/5;

   printf("the average is=%d \n",avg);
   
   printf("the sum is =%d",sum);

   */

  /* float F,C;
  printf("enter celsius value : ");
  scanf("%f \n",&C);
  F=((C*9)/5)+32 ;
  printf("fahrenheit value is : %f",F);

*/

/*
int a, *p;
char b, *q;
float c, *r;
double d,*s;

printf("%d <--> %d\n", sizeof(a), sizeof(p));
printf("%d <--> %d\n", sizeof(b), sizeof(q));
 printf("%d <--> %d\n", sizeof(c), sizeof(r));
printf("%d <--> %d\n", sizeof(d), sizeof(s));

*/

/*
int x = 2*8*6/15%13;
printf("%d",x);
*/

/*
int  IV,FV,A,T;
scanf("%d %d %d",&IV,&A,&T);
FV=IV+(A*T);
printf("%d",FV);
*/

/*
float F,C;
printf("enter c value");
scanf("%f",&C);
F=(C*(9/5))+32;
printf("temp in farh.. %f \n",F);
return 0;
*/
/*

int a[9]={1,2,3,4,5,6,7,8,9};
int i;
for(i=0;i<9;i++){
   printf("%d",a[i]);
}

printf("\n");

for(i=8;i>=0;i--){
   printf("%d",a[i]);
}

printf("\n");

int sai[23]={0,[5]=15};
printf("%d",sai[5]);

*/

/*
   //leap year
   int y;
   printf("enter year : ");
   scanf("%d",&y);
   if(y%4==0){
      printf("it is leap year");
   }
   else{
      printf("not a leap year");
   }


   return 0;

*/

/*
   int a=10,b=20;
   printf("a=%d,b=%d",a,b);
   int *a1=&b;
   int *b1=&a;
    printf("a=%d,b=%d",*a1,*b1);
    return 0;
    */

    /* int a,b,c;
    a=10;
    b=20;
    c;
    printf("before swapping a=%d , b =%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n after swapping a=%d, b=%d", a,b);
    return 0;
    */
   

   /*
    int a,b,c;
    int *a1=&a;
    int *b1=&b;
    a=10;
    b=20;
    printf("before swapping a=%d , b =%d",a,b);
    c=*a1;
    *a1=*b1;
    *b1=c;
    printf("\n after swapping a=%d, b=%d", *a1,*b1);
    return 0;
    */

   /*
    int a=10,b=4;
    float c=4.0,d=2.0;
    printf("%d %d \n",a+b,a-b);
    printf("%.1f %.1f",c+d,c-d);
    */

  /* int a=5,b=10,c=20,d=30,e=40;
   ++a;
   printf("%d \n",a);
   b++;
   printf("%d \n",b);
   c--;
   printf("%d \n",c);
   --d;
   printf("%d \n",d); */

   /*
   int a=5;
   printf("%d \n",++a);
   printf("%d \n",a++);
   printf("%d \n",--a);
   printf("%d \n",a--);
  */

/*
  float F,C;
  printf("enter celsius value : ");
  scanf("%f \n",&C);
  F=((C*9)/5)+32 ;
  printf("fahrenheit value is : %.2f",F);

*/

/*
char a=65,b=66,c=67;
printf("%c%c%c",a,b,c);?/>jklkk
*/

/*  // SWITCH STATEMENT:

      int i;
      printf("enter i value : "); 
      scanf("%d",&i);
      switch (i)                      
      {
        case 0:
        printf("zero \n");
        break;

        case 1:
        printf("one \n");
        break;

        case 2:
        printf("two \n");
        break;

        case 3:
        printf("three \n");
        break;
      
      default:
      printf(" not a valid number \n");
        break;
      }
      */ 
    
  /*  //TERENARY OPERATOR  *  condition?exp1:exp2  * 
    int i=1,j;
        j = i!=2?5:6 ;
        printf("%d",j);

        */
    
/*
   // if else condition
        int age;
        printf("enter your age",age);
        scanf("%d",&age);
        if (age>=18)
        {
          printf("you are eligible to vote");
        }
        else
        {
          printf("you are not eligible to vote");
        }
  */

/* 
//   switch statements

int number;
printf("enter values from 1 to 7");
scanf("%d",&number);
switch (number)
{

case 1:
case 2:
case 3:
case 4:
case 5:
printf("weekdays \n");
break;  

case 6:
case 7:
printf("weekend");
break;

default:
printf("invalid");
  break;
}
*/

  /*loops___ while loop      
 int i;             //initiliasation
 scanf("%d",&i);     
 while (i<=5)      //condition
 {
  printf("hi ra \n");
 i++ ;        //increment or decrement
 }

  */      

/*___do while loop*/

return 0;

}