/*  Name		     : Yash Kumar Singh
    Roll Number  	 : 1310110373
    Major		     : Computer Science and Engineering
    Program Title	 : Measuring running time in linked list search PPL L3
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node{
	char ch;
	struct node *next;
};

struct node *head = NULL;
struct node *curr = NULL;

clock_t begin, end;
double time_spent;
char c;

void createLink(){
	struct node *ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->ch = rand() % 26 + 'A';
	
	if(head == NULL){
		
		head = ptr;
		curr = ptr;
	}
	else{
		curr->next = ptr;
		curr = ptr;
	}
}

void display(){
	struct node *ptr;
	ptr = head;
	while(ptr!=NULL){
		printf("%c ", ptr->ch);
		ptr=ptr->next;
	}
}

void searchIter(char c){
	int flag =0;
	struct node *ptr;
	ptr = head;
	while(ptr!=NULL){
		if(ptr->ch == c){
			printf("\nCharacter found");
			flag = 1;
			break;
		}
	ptr = ptr->next;
	}
	if(flag == 0)
	printf("\nCharacter was not found");	
}

void searchRec(struct node *head, char c){
    if (head->ch == c){
        printf("Element found");
        return;
    }
    if (head->next == NULL){
    	printf("\nCharacter was not found");
        return;
    }
    searchRec(head->next, c);
}

void printMenu(){
	int ch,x,y;
	printf("\nMAIN MENU");
	printf("\n1.Search using recursion");
	printf("\n2.Search without using Recursion");
	printf("\nEnter your choice ");
	scanf("%d", &ch);
	switch (ch){
		case 1: begin = clock();
				searchRec(head,c);
				end = clock();
				time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
				printf("\nRun Time %f", time_spent);
				break;
		case 2: begin = clock();
				searchIter(c);
				end = clock();
				time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
				printf("\nRun Time %f", time_spent);
				break;

		default: printf("\nInvalid option ");
				 break;
	}

}

int main(){
	int n=1000,i,ch;
	time_t t;
	srand((unsigned) time(&t));
	for(i=0;i<n;i++){
		createLink();
	}
    printf("\nCurrent Linked List ");
	display();
	c = rand() % 26 + 'A';
	printf("\nCharacter to be searched: %c", c);
	do{
	printMenu();
	printf("\nDo you want to continue(1/0)");
	scanf("%d", &ch);
	}while(ch==1);
}



