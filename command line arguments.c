#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){

int a,b,sub=a-b,add=a+b;
printf("Hello %s %s %s \n",argv[1],argv[2],argv[3]);
a=atoi(argv[4]);
b=atoi(argv[5]);
printf("addition is %d",add);
printf("subctraction is %d",sub);
return 0;
}