#include<stdio.h>
int main(){
	int i,j,k;
	char kelime[99];
	printf("bir kelime girin:");
	scanf("%s",&kelime);
	for(k=0 ; kelime[k] != '\0'; ){
		k++;
	}
	for(i=1;k>=i;i++){
		for(j=1;i>=j;j++){
			printf("x");
		}
		printf("\n");
	}
	
	
	return 0;
}
