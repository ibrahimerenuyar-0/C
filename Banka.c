#include<stdio.h>
int main(){
	int bakiye,tutar,islem,sifre,a,b;
	char c;
	bakiye=9999;
	printf("Sifre Girin\n");
	scanf("%d",&sifre);
	if(sifre==123456){
		for(a=1;a==1;){
			printf("1-Para Yatir\n");
			printf("2-Para Cek\n");
			printf("3-Havale\n");
			printf("4-Bakiye\n");
			printf("5-Cikis\n");
			printf("islem seciniz:");
			scanf("%d",&islem);
			switch(islem){
			case 1:
				printf("Yatiracaginiz Miktar=");
				scanf("%d",&tutar);
				printf("%d TL Yatirildi\n",tutar);
				bakiye=bakiye+tutar;
				continue;
			case 2:
				printf("Cekeceginiz Miktar=");
				scanf("%d",&tutar);
				printf("%d TL Cekildi\n",tutar);
				bakiye=bakiye-tutar;
				continue;
			case 3:
				printf("1-Erdem\n");
				printf("2-Omer Riza Ucuncu\n");
				printf("3-Can\n");
				printf("Havale Yapacaginiz Kisiyi Secin:");
				scanf("%d",&b);
				switch(b){
					case 1:
						printf("Gondereceginiz Miktar=");
						scanf("%d",&tutar);
						printf("%d TL Gonderiliyor\n",tutar);
						printf("%d TL Gonderildi\n",tutar);
						bakiye=bakiye-tutar;
						break;
					case 2:
						printf("Gondereceginiz Miktar=");
						scanf("%d",&tutar);
						printf("%d Gonderiliyor\n",tutar);
						printf("%d TL Gonderildi\n",tutar);
						bakiye=bakiye-tutar;
						break;
					case 3:
						printf("Gondereceginiz Miktar=");
						scanf("%d",&tutar);
						printf("%d Gonderiliyor\n",tutar);
						printf("%d TL Gonderildi\n",tutar);
						bakiye=bakiye-tutar;
						break;
				}
				continue;
			case 4:
				printf("Bakiyeniz = %d\n",bakiye);
				continue;
			case 5:
				printf("Cikis Yapiliyor");
				a=0;
				continue;
			}
		}	
	}
	else{
		printf("Yanlis Sifre");
		
	}
	return 0;
}

