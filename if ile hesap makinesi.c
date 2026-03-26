//# C
#include<stdio.h>
int main(){
	int a,b,c;
	printf("1:toplama,2:cikartma,3:carpma,4:bolme\n");
	scanf("%d",&a);
	if(a==1){
		printf("2 sayi girin\n");
		scanf("%d %d",&b,&c);
		printf("sonuc=%d",b+c);
	}
	else if(a==2){
		printf("2 sayi girin\n");
		scanf("%d %d",&b,&c);
		printf("sonuc=%d",b-c);
	}
	else if(a==3){
		printf("2 sayi girin\n");
		scanf("%d %d",&b,&c);
		printf("sonuc=%d",b*c);
	}
	else if(a==4){
		printf("2 sayi girin\n");
		scanf("%d %d",&b,&c);
		printf("sonuc=%d",b/c);
	}
	
	return 0;
}
