#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));

	int arr[10];
	int i;

	for(i=0;i<9;i++){
		arr[i]=rand();
	}
	arr[9] = 0;

	printf("{");
	for(i=0;i<10;i++){
		if(i==9) printf("%d", arr[i]);
		else printf("%d, ", arr[i]);
	}
	printf("}\n");

	int arr2[10];
	int * ip;
	ip = &arr[9];
	for(i=0;i<10;i++){
		arr2[i]=*ip;
		ip--;
	}

	printf("{");
	for(i=0;i<10;i++){
		if(i==9) printf("%d", arr2[i]);
		else printf("%d, ", arr2[i]);
	}
	printf("}\n");







	return 0;
}
