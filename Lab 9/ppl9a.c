/*  Name		 : Yash Kumar Singh
    Roll Number  	 : 1310110373
    Major		 : Computer Science and Engineering
    Program Title	 : Matrix Multiplication PPL L9
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	time_t t;
	srand((unsigned) time(&t));
	int n,i,j,k,sum=0;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	int A[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			A[i][j] = rand() % 10 + 1;
		}
	}
	int result[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				sum = sum + A[i][k]*A[k][j];
			}
			result[i][j] = sum;
			sum = 0;
		}
    }

	//Displaying the contents of both A and result matrix	
	
	printf("Original Matrix: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d ",A[i][j]);
		}	
		printf("\n");
	}
	
	printf("\n");
	printf("Result Matrix: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d ",result[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
