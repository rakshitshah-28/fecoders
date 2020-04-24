// write a progra,m to take array as input,
// find wheteher a element is present in it with constant time complexity
// consider no collision

#include<stdio.h>

void hast(int *);
int hash_val[10];
int main(){
	
	int arr[10], i, find;
	printf("Enter array elements - \n");
	for (i=0;i<10;i++){
		scanf("%d", &arr[i]);
		hash_val[i] = -1;	//empty
	}
	hash(arr);
	printf("enter element to find - ");
	scanf("%d", &find);
	if (hash_val[find % 10] == find)
		printf("Number FOUND...\n");
	else
		printf("Number NOT FOUND...\n");
	
	return 0;
}

void hash(int *arr){
	int i, var;
	for (i=0;i<10;i++){
// no collision
		var = arr[i] % 10;
		if (hash_val[var] == -1){
			hash_val[var] = arr[i];
		}
	}
	
}
