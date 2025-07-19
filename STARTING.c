   #include <stdio.h>

int main() { 
    printf("JAI SHREE RAM..."); 
              //here "int" is return type
  int a=5,b=10,c=a+b;    //here "int" id primitive data type b=25;
   
  printf("%d \n",c);  // we need to use ( \n ) inside this "" only for different line
  // <"FOR EVERYTHING SEMICOLON IS IMPORTANT" >,<printf is print format,in this we always print in a particular format,>
                 //(or)
  //printf("the addition of 5 and 25 is %d",c)
               // (or)  printf("the addition of %d and %d is %d",a,b,c)
  int i=15,j=5,k;
  k=i+j; //addition operator
  printf("the addition of %d and %d is %d \n",i,j,k); 
  k=i-j;//subctraction operator
  printf("the subctraction of %d and %d is %d \n",i,j,k);
  k=i*j;//multiplication operator
  printf("the multiplication of %d and %d is %d  \n",i,j,k);
  k=i/j;//division operator
  printf("the division of %d and %d is %d  \n",i,j,k);

    int l,m,n;
    printf("enter any two values for Division \n");
    scanf("%d",&l);
    scanf("%d",&m); // or else we can write both scanf in one line i.e,user input multiple input              
    n=l/m;                      //scanf("%d %d",&l &m) 
    printf("the division of %d and %d is %d \n",l,m,n);                      //printf for print
                          //scanf for scan values and at time of scanning %d is used for scanning of integer values
   //untill now we have learned about operators;right now we learn about short hand operators
  int x=15,y=12;
  x=x+19; //for short hand operators we do like " x+=19 or x-=13 or x*=12 or x/=11 "
  y*=12;

  printf("%d \n",x);
  printf("%d \n",y);

  //relational operators
  int result=5>3;   //in c lang. true is 1 &false is 0
  int answer=5<3;
  printf("%d,%d\n",result,answer);  
    int ans = 3==3;
    int answ = 3!=3;
//ippudu 3=3 ani chupinchataniki manam double equal(==) vadutham & not equalchhupinchadaniki (!=)
  printf("%d\n",ans);
  printf("%d\n",answ);
  /* ( /* for multi line comment we use this )
  relational operators: greater(>),less than(<),less(<=)&greater than(>=),equal to(==),not equal to(!=) */

//logical operators

/*
AND operation         OR operation
T T=T                   T T=T
T F=F                   T F=T
F T=F                   F T=T
F F=F                   F F=F

AND (&&)             OR ()
 first will be consider as 1st and second as 2nd for ex. in and 1st T 2nd F then. final result will be T,F=F i.e, "0" will be output


*/
int solution= 3==4 || 3>5 ; //in this we have used or ( || ) operation
printf("%d \n",solution);

/*
 Bitwise operator     {only & is called as -bitwise and operator , only | is called as-bitwise or operator}

    25- 1 1 0 0 1
    15- 0 1 1 1 1
-----------------------
(|)-31- 1 1 1 1 1                  bitwise or operation
(&)-09- 0 1 0 0 1                  bitwise and operation
*/
int res= 25 | 15,resu= 25 & 15 ;
printf("%d,%d \n",res,resu);

 /* left and right shift operator
 16== 10000
 64== 1000000
 4==  100
*/
int sai=16;
int charan1=sai<<2 ;
int charan2=sai>>2 ;                     //if we use left shift operator for examp.3 it will shift binary to left wards for 3 digits
printf("%d %d",charan1,charan2);

//if & else statements [for flow control]....BRANCHING STATEMENt
    int kanni=25;
    if(kanni>15)
      {
        printf("greater \n");
      }
    else
      {
        printf("smaller \n"); //we can use more statements with else if condition
      }
  return 0;
}