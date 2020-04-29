#include<stdio.h>
#include<stdlib.h>

struct link{
	int value;
	struct link *next;
};

struct link * start = NULL;

int main(){
	struct link *temp, *nextnode;
	int val;
	for (val = 1; val<11; val++){
		nextnode = malloc(sizeof(struct link));
		printf("\t%d\n", nextnode);
		nextnode->value = val;
		printf("\t%d\n", nextnode->value);
		printf("\t%d\n", start);
		if (start == NULL) {
			nextnode->next = NULL;
			printf("\t%d in if condition..\n", nextnode->next);
			start = nextnode;
			printf("\t%d in if condition..\n", start);
		}
		else {
			temp = start;
			printf("\t%d in else condition..\n", temp);
			while (temp->next != NULL){
				printf("\t%din else/while loop..\n", temp->next);
				temp = temp->next;
				printf("\t%din else/while loop..\n", temp);
			}
			temp->next = nextnode;
			printf("\t%din else condition..\n", temp->next);
			nextnode->next = NULL;
			printf("\t%din else condition..\n", nextnode->next);
		}
	}
	
	temp = start;
	printf("\t%d\n", temp);
	while (temp != NULL){
		printf("%d\n",temp->value);
		temp = temp->next;
		printf("\t%d\n", temp);
	}
	
	return 0;
}
