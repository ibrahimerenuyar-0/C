#include<stdio.h>
int main(){
	int sayi1,sayi2,i;
	char islem;
	printf("islem seciniz(+,-,/,*)");
	scanf("%s", &islem);
	printf("iki adet sayi giriniz:");
	scanf("%d %d",&sayi1,&sayi2);
	if (islem == '+'){
		printf("%d",sayi1+sayi2);
	}
	else if(islem=='-'){
		printf("%d",sayi1-sayi2);
	}
	else if(islem=='/'){
		for(i=0;i==0;)
		if(sayi2==0){
			printf("sayi2 yi 0dan farkli giriniz");
			scanf("%d",&sayi2);
			continue;
		}
		else{
			printf("%d",sayi1/sayi2);
			break;
		}
	}
	else if(islem=='*'){
		printf("%d",sayi1*sayi2);
	}
	else{
		printf("!!!gecerli islem girin!!!");
		
	}
	return 0;
}
