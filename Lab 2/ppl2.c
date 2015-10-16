/*  Name		     : Yash Kumar Singh
    Roll Number  	 : 1310110373
    Major		     : Computer Science and Engineering
    Program Title	 : Measuring running time using binary search and linear search PPL L1
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int A[10000];
clock_t begin, end;
double time_spent;

void bubbleSort(int A[],int n){
	int i=0,j=0,temp=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}

void linearSearch(int A[],int x){
	int i=0,f=0;
	for(i=0;i<10000;i++){
		if(A[i] == x){
			printf("\nFound at pos %d", i+1);
			f = 1;
			break;
		}
	if(f=0)	
	printf("\nValue wasn't found");
	}
}

int reps(int A[],int x){
	int i=0,count=0;
	printf("\n");
	for(i=0;i<10000;i++){
		if(x == A[i]){
			count++;
		}
	}
	return count;
}

void binarySearch(int A[],int x){
	int l = 0;
	int r = 10000;
	int m; 
	while (l <= r){
		m = l + (r-l)/2;
		if (A[m] == x){ 
			printf("\nValue found at %d", m+1);
			break;
		}
		if (A[m] < x) l = m + 1;
		else r = m - 1;
	}
}

void printMenu(){
	int ch,x,y;
	printf("\nMAIN MENU");
	printf("\n1.Linear Search for x");
	printf("\n2.Binary Search for x");
	printf("\n3.Number of repetitions for x");
	printf("\nEnter your choice ");
	scanf("%d", &ch);
	switch (ch){
		case 1:	printf("\nEnter the number you want to search ");
				scanf("%d", &x);
				begin = clock();
				linearSearch(A,x);
				end = clock();
				time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
				printf("\nRun Time %f", time_spent);
				break;
		case 2: printf("\nEnter the number you want to search ");
				scanf("%d", &x);
				begin = clock();
				binarySearch(A,x);
				end = clock();
				time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
				printf("\nRun time %f", time_spent);
				break;
		case 3: printf("\nEnter the number you want to search ");
				scanf("%d", &x);
				begin = clock();
				y = reps(A,x);
				end = clock();
				time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
				printf("\nNumber of repetitions for the number: %d", y);
				printf("\nRun time %f", time_spent);
				break;
		default: printf("\nInvalid option ");
				 break;
	}

}

void printArray(){
	int i=0;
	printf("\n");
	for(i=0;i<10000;i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main(){
	int i=0,ch;
	time_t t;
	srand((unsigned) time(&t));
	for(i=0;i<10000;i++){
		A[i] = rand() % 100 + 1;
	}
	printArray();
	bubbleSort(A,10000);
	printArray();
	do{
	printMenu();
	printf("\nDo you want to continue(1/0)");
	scanf("%d", &ch);
	}while(ch==1);
}

