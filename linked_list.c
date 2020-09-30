//LinkedList
#include<stdio.h>
#include<stdlib.h>

struct link{
	int value;
	struct link *next;
};

struct link * start = NULL;

int main(){
	struct link *temp, *nextnode;
	int val = 1;
	while (val < 11){
		nextnode = malloc(sizeof(struct link));
		nextnode->value = val;
		if (start == NULL) {
			nextnode->next = NULL;
			start = nextnode;
		}
		else {
			temp = start;
			while (temp->next != NULL){
				temp = temp->next;
			}
			temp->next = nextnode;
			nextnode->next = NULL;
		}
		val ++;
	}
	temp = start;
	while (temp != NULL){
		printf("%d\n",temp->value);
		temp = temp->next;
	}
	
	return 0;
}
