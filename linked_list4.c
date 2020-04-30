#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct link{
	char name[100];
	struct link *next;
};

struct link * start = NULL;

int main(){
	struct link *temp, *nextnode;
	char Name[100];
	int i = 0;
	printf("Enter your Name - ");
	scanf("%s", &Name);
	while (Name[i] != '\0'){
		nextnode = malloc(sizeof(struct link));
		nextnode->name = Name[i];
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
		i++;
	}
	
	temp = start;
	while (temp != NULL){
		printf("%d\n", temp->name);
		temp = temp->next;
	}
	
	return 0;
}
