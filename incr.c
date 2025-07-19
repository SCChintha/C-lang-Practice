/*
#include<stdio.h>
int main()
{
    int a=10;
    printf("%d %d %d %d",++a,a++,--a,a--);
    return 0;
}
*/

/*
#include<stdio.h>
include<stdlib.h>
int main(){
    FILE *fptr;
    int num;
    printf("emter num : ");
    scanf("%d",&num);
    fptr=fopen("program.txt","a");
    if(fptr == num){
        printf("ERROR!");
        exit(1);
    }

    fprintf(fptr,"%d",num);
    fscanf(fptr,"%d",num);
    printf("%d",num);
    fclose(fptr);
    
    return 0;

}
*/

/*
#include<stdio.h>
void main(){
                int i=0,j=1,k=2,m;
                m=i++ || j++ || k++ ;
                printf("%d %d %d %d",m,i,j,k);
}
*/

                                                    //patterns

/*

#include<stdio.h>
void main(){

    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
}
*/

/*
#include<stdio.h>
void main(){

    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    
}
*/
/*
#include<stdio.h>
void main(){

    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
}
*/

/*

// Linear Search in C
#include <stdio.h>

int search(int array[], int n, int x) {
  
  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int array[] = {2, 4, 0, 1, 9};
  int x = 1;
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}

*/
/**
 * C program to multiply two matrices
 */

#include <stdio.h>

#define SIZE 3 // Size of the matrix

int main()
{
    int A[SIZE][SIZE]; // Matrix 1 
    int B[SIZE][SIZE]; // Matrix 2
    int C[SIZE][SIZE]; // Resultant matrix
    
    int row, col, i, sum;


    /* Input elements in first matrix from user */
    printf("Enter elements in matrix A of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input elements in second matrix from user */
    printf("\nEnter elements in matrix B of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    /*
     * Multiply both matrices A*B
     */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            sum = 0;
            /*
             * Multiply row of first matrix to column of second matrix
             * and store sum of product of elements in sum.
             */
            for(i=0; i<SIZE; i++)
            {
                sum += A[row][i] * B[i][col];
            }

            C[row][col] = sum;
        }
    }

    /* Print product of the matrices */
    printf("\nProduct of matrix A * B = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}
