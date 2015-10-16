/*  Name		 : Yash Kumar Singh
    Roll Number  : 1310110373
    Major		 : Computer Science and Engineering
    Program Title: Generalizing the pattern PPL L1
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int x=0;
int i=0,j=0;
int A[1000][20];

int modAdd(int a,int b,int para){
	int c;
	c = a + b;
	c = c % para;
	return c;
}

void restLines(int l,int a,int b,int number,int n){
	for(i=0;i<a;i++){
		x = modAdd(x,1,3);
		for(j=0;j<pow(3,number);j++){
			A[i+j][n] = x;
		}
		i = i+(pow(3,number)-1);
	}
	x=0;
}

void pattern(int a,int b,int l){
	int number=1;
	for(i=0;i<a;i++){
		x = modAdd(x,1,3);
		A[i][b-1] = x;
	}
	x=0;
	int n = b-2;
	for(i=0;i<l,n>-1;l++,n--,number++){
		restLines(l,a,b,number,n);		
	}
}

void replace(int a,int b){
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(A[i][j]==0)
			A[i][j]=3;
			}
	}
}

void main(){
	int i=0,j=0,l,a,b;
	printf("\nEnter length: ");
	scanf("%d", &l);
	a = pow(3,l);
	b =l;
	pattern(a,b,l);
	replace(a,b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d", A[i][j]);
			}
		printf("\n");
	}
}
