#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "turkeysimulation.h" // our library
#define MAX_YEAR 2020
#define MIN_YEAR 1923
#define MAX_PLATE_CODE 81
#define MIN_PLATE_CODE 1

typedef struct PresidentsInTurkey{
	int name;
	int missionTime;
	int DateofDeath;	
}presidents;

typedef	struct ticket{
		char name[50];
    	char surname[50];
    	char place[50];
    	char email[50];
    	int day,mounth,year;
    	int price;
    	int numtick;
}ticket;

struct travel{  	
	int season;
	int region; 
	int money;
};

int main(void){
	int enteredvalue;
	char year[5];
	int cntne; //continue
	printf("\nWELCOME TO THE REPUBLIC OF TURKEY SIMULATION\n\n");
	options:
	printf("\nPress 1 to teleport to any year.\n");
	printf("Press 2 to view past presidents are in Turkey.\n");
	printf("Press 3 to search plate code\n");
	printf("Press 4 to view dollar rates by year\n");
	printf("Press 5 to write The Future\n");
	printf("Press 6 to teleport to Your Future\n");
	printf("Press 7 to take a suggestion about holiday in Turkey\n");
	printf("Press 8 to buy a flight ticket to Turkey\n");
	printf("Press 9 to exit the program\n");
	scanf("%d",&enteredvalue);
	//kullanýcýnýn seçenekler haricinde bir deðer girmesini istemiyoruz
	while(enteredvalue!=1 && enteredvalue!=2 && enteredvalue!=3 && enteredvalue!=4 && enteredvalue!=5 && enteredvalue!=6 && enteredvalue!=7&& enteredvalue!=8&& enteredvalue!=9){ 
		printf("Please only enter value between 1 and 8.Try again\n\n");
		printf("Press 1 to teleport to any year.\n");
		printf("Press 2 to view past presidents are in Turkey.\n");
		printf("Press 3 to search plate code\n");
		printf("Press 4 to view dollar rates by year\n");
		printf("Press 5 to write The Future\n");
		printf("Press 6 to teleport to Your Future\n");
		printf("Press 7 to buy a flight ticket to Turkey\n");
		printf("Press 8 to exit the program\n");
		scanf("%d",&enteredvalue);
	}
	
	////OPTÝON11111111111111
	if(enteredvalue==1){
	printf("......................................................\n");
	printf("WELCOME TO THE TIME MACHINE\n");	
	printf("Enter the year you want to go.(Please enter a value between 1923 and 2020.)\n");
	tmachine:
	scanf(" %s", year);
	int yearcontrol;
	yearcontrol=atoi(year); 
	 // girilen yýl deðerini kontrol etmek için atoi fonksiyonuyla character dizimizi integera çeviriyoruz
		while((yearcontrol>MAX_YEAR)||(yearcontrol<MIN_YEAR)){
			if(yearcontrol<MIN_YEAR){	
			printf("\nYou entered an incorrect value. The Republic of Turkey was proclaimed in 1923.\n");
			printf("Please try again\n");
			printf("Enter the year you want to go.(Please enter a value between 1923 and 2020.)\n");
			scanf(" %s", year);
			yearcontrol=atoi(year);
			}
			if(yearcontrol>MAX_YEAR){
			printf("\nYou entered an incorrect value. We can not predict the future\n");
			printf("Please try again\n");
			printf("Enter the year you want to go.(Please enter a value between 1923 and 2020.)\n");
			scanf(" %s", year);
			yearcontrol=atoi(year);
			}
		}
		
		printf("--------------------------------------------------------\n");
		gotoyear(year);
		printf("\n--------------------------------------------------------\n");
		printf("\n\nPress 1 to teleport another year.");
		printf("\nPress 2 to return to the options screen.");
		printf("\nPress 3 to exit the program.\n");
		scanf("%d",&cntne); //kullanýcýnýn devam edip etmeyeceðini sorguluyoruz.
		while(cntne!=1&&cntne!=2&&cntne!=3){
			printf("\nPlease only enter value between 1 and 3.Try again");
			printf("\n\nPress 1 to teleport another year.");
			printf("\nPress 2 to return to the options screen.");
			printf("\nPress 3 to exit the program.\n");
			scanf("%d",&cntne);
		}
		switch(cntne){ 
			case 1:
			printf("Enter the year you want to go.(Please enter a value between 1923 and 2020.)\n");
			goto tmachine;
			break;
			case 2:
			system("cls");
			header();
			goto options;
			break;
			case 3:
			system("cls");
			header();
			printf("The program quits...");
			return 0;
			break;
		}
	}
	
	///OPTÝON222222222
	if(enteredvalue==2){
		
		
		president:
			
		viewpresident(); // cumhurbaþkaný fonksiyonu
		
		
		
		printf("\n--------------------------------------------------------\n");
		printf("\n\nPress 1 to view another president.");
		printf("\nPress 2 to return to the options screen.");
		printf("\nPress 3 to exit the program.\n");
		scanf("%d",&cntne); //kullanýcýnýn devam edip etmeyeceðini sorguluyoruz.
		while(cntne!=1&&cntne!=2&&cntne!=3){
			printf("\nPlease only enter value between 1 and 3.Try again\n\n");
			printf("\n\nPress 1 to view another president.");
			printf("\nPress 2 to return to the options screen.");
			printf("\nPress 3 to exit the program.\n");
			scanf("%d",&cntne);
		}
		
		switch(cntne){ 
			case 1:
			goto president;
			break;
			case 2:
			system("cls");
			header();
			goto options;
			break;
			case 3:
			system("cls");
			header();	
			printf("The program quits...");
			return 0;
			break;
		}	
	}
	
	///OPTÝON333333333333
	if(enteredvalue==3){
		int platecode;
		printf("Please enter the plate code you want to search.\n(Please enter a value between 1 and 81.)\n");
		cplate:
		scanf("%d",&platecode);
		while(platecode>MAX_PLATE_CODE || platecode<MIN_PLATE_CODE ){
			printf("You entered incorrect value.There are 81 cities in Turkey.\nTry Again=>");
			scanf("%d",&platecode);
		}
		findPlateCode(platecode); // araba plakasý bulan fonksiyonumuzu kullanýyoruz
		printf("\n\nPress 1 to find the another plate code");
		printf("\nPress 2 to return to the options screen.");
		printf("\nPress 3 to exit the program.\n");
		scanf("%d",&cntne); //kullanýcýnýn devam edip etmeyeceðini sorguluyoruz.,
		
		while(cntne!=1&&cntne!=2&&cntne!=3){
			printf("\nPlease only enter value between 1 and 3.Try again\n\n");
			printf("Press 1 to find the another plate code");
			printf("\nPress 2 to return to the options screen.");
			printf("\nPress 3 to exit the program.\n");
			scanf("%d",&cntne);
		}
		
		switch(cntne){ 
			case 1:	
			printf("Enter the plate code you want to search.\n(Please enter a value between 1 and 81.)\n");
			goto cplate; 
			break;
			case 2:
			system("cls");
			header();	
			goto options;
			break;
			case 3:
			system("cls");
			header();	
			printf("The program quits...");
			return 0;
			break;
		}
	}
	
	///OPTÝON44444444444
	if(enteredvalue==4){
	int searchormatrix; // yýla göre aramamý yapacak matrixmi oluþturacak
	printf("\n-------------------------------------------------------------------------------------------------\n");
	printf("If you want searching by year, press to 1\nIf you want to make a matrix chart with years and dollar exchange rates, press to 2\n");
	scanf("%d",&searchormatrix);
	while(searchormatrix!=1 && searchormatrix!=2){
		printf("Please enter a value 1 or 2.\nTry again=>");
		scanf("%d",&searchormatrix);
	}
	if(searchormatrix==1){
	int yr; // öðrenmek istenilen dolar kurunun yýlý
	printf("\n-------------------------------------------------------------------------------------------------\n");
	printf("1923-1945(avarage)=> 1.55\n1946-1959(fixed exchange rate)=> 2.80\n1960-1969(avarage)=> 8.01\n");
	printf("\n-------------------------------------------------------------------------------------------------\n");
	printf("Enter the year for the dollar exchange rate you want to learn.\n(We only have clear data between 1970 and 2020,so please enter a value between 1970 and 2020.)\n");
	drate:
	scanf("%d", &yr);
	printf("\n-------------------------------------------------------------------------------------------------\n");
	dollarRate(yr); // dolar kuru bulan fonksiyonumuzu kullanýyoruz
	}
	
	if(searchormatrix==2){
	goto jump;	
	}
	cntne:
	printf("\n\nPress 1 to find the dollar exhange rate for another year.");
	printf("\nPress 2 to make a matrix chart with years and dollar exchange rates. ");
	printf("\nPress 3 to return to the options screen.");
	printf("\nPress 4 to exit the program.\n");
	scanf("%d",&cntne); //kullanýcýnýn devam edip etmeyeceðini sorguluyoruz.
	while(cntne!=1&&cntne!=2&&cntne!=3&&cntne!=4){
			printf("-------------------------------------------------------------------------------------\n");
			printf("\nPlease only enter value between 1 and 4.Try again\n\n");
			printf("\nPress 1 to find the dollar exhange rate for another year.");
			printf("\nPress 2 to make a matrix chart with years and dollar exchange rates. ");
			printf("\nPress 3 to return to the options screen.");
			printf("\nPress 4 to exit the program.\n");
			scanf("%d",&cntne);
		}
	
		switch(cntne){ 
			case 1:	
			printf("Enter the year for the dollar exchange rate you want to learn.(Please enter a value between 1970 and 2020.)\n");
			goto drate;
			break;
			case 2:	
			goto jump;
			break;
			case 3:
			system("cls");
			header();	
			goto options;
			break;
			case 4:
			system("cls");
			header();	
			printf("The program quits...");
			return 0;
			break;
		}	
		int nmbrofyr;
		jump:
		printf("-------------------------------------------------------------------------------------------------\n");
		printf("How many years will the matrix chart consist?\n");
		scanf("%d",&nmbrofyr);
		
		while(nmbrofyr>51 || nmbrofyr<1){
			printf("You entered incorrect value. We have 51 years between 1970 and 2020.\nPlease try again=>");
			scanf("%d",&nmbrofyr);
		}
		printf("-------------------------------------------------------------------------------------------------\n");
		makeMatrixWithDollarRate(nmbrofyr);
		goto cntne;
	}
	
	//OPTION5555
	if(enteredvalue==5){
	
	FILE *dosyaninAdresi;
	char future[10];	
	
	designf:	
	printf("Enter the year to write the future=> ");
	scanf("%s",future);
	int future2;
	future2=atoi(future); // karakteri integer deðere çevirmek için
	while(future2<2020){
		printf("You cannot change the history\nPlease try again=>");
		scanf("%s",future);
		future2=atoi(future);
	}
	dosyaninAdresi=fopen(future,"w+");
	printf("Desing the future\n");
	
	Scan(dosyaninAdresi,future);
	fclose(dosyaninAdresi);
	
	printf("\n\nPress 1 to write the another year");
	printf("\nPress 2 to teleport to your future");
	printf("\nPress 3 to return to the options screen.");
	printf("\nPress 4 to exit the program.\n");
	scanf("%d",&cntne); //kullanýcýnýn devam edip etmeyeceðini sorguluyoruz.
	while(cntne!=1&&cntne!=2&&cntne!=3&&cntne!=4){
			printf("-------------------------------------------------------------------------------------\n");
			printf("\nPlease only enter value between 1 and 4.Try again\n\n");
			printf("\n\nPress 1 to write the another year");
			printf("\nPress 2 to teleport to your future");
			printf("\nPress 3 to return to the options screen.");
			printf("\nPress 4 to exit the program.\n");
			scanf("%d",&cntne);
		}
	
		switch(cntne){ 
			case 1:	
			printf("\nDesing the future\n");
			goto designf;
			break;
			case 2:	
			goto teleportf;
			break;
			case 3:
			system("cls");
			header();	
			goto options;
			break;
			case 4:
			system("cls");
			header();	
			printf("The program quits...");
			return 0;
			break;
		}	
	}
	
	
		
	//OPTION6666
	if(enteredvalue==6){
		int step;
		teleportf:
		printf("\nPlease enter year\n");
		scanf("%s",year);
	
		
		FILE *fptr;
		fptr=fopen(year,"r+");
		
		while ((fptr=fopen(year,"r")) == NULL){
			printf("\nIt was not created yet this year.\n\n");
			printf("If you want to create this year press to 1 \n");
			printf("If you want to try again press to 2 \n");
			printf("If you want to exit the program press to 3\n");
			scanf("%d",&step);
		
			switch(step){
				case 1: 
				printf("\nDesing the future\n"); goto designf; break;
				case 2: 
				goto teleportf; break;
				case 3: 	
				system("cls");
				header();
				return 0; break;
			}
		}
			printf("\n");
			Print(fptr);
			printf("\n--------------------------------------------------------------------------\n");
		
			printf("\n\nPress 1 to write the another year");
			printf("\nPress 2 to teleport to your future");
			printf("\nPress 3 to return to the options screen.");
			printf("\nPress 4 to exit the program.\n");
			scanf("%d",&cntne); //kullanýcýnýn devam edip etmeyeceðini sorguluyoruz.
			while(cntne!=1&&cntne!=2&&cntne!=3&&cntne!=4){
				printf("-------------------------------------------------------------------------------------\n");
				printf("\nPlease only enter value between 1 and 4.Try again\n\n");
				printf("\n\nPress 1 to write the another year");
				printf("\nPress 2 to teleport to your future");
				printf("\nPress 3 to return to the options screen.");
				printf("\nPress 4 to exit the program.\n");
				scanf("%d",&cntne);
			}
	
		switch(cntne){ 
			case 1:
			printf("\nDesing the future\n");
			goto designf;
			break;
			case 2:
			goto teleportf;
			break;
			case 3:
			system("cls");
			header();
			goto options;
			break;
			case 4:
			system("cls");
			header();
			printf("The program quits...");
			return 0;
			break;
		}	
	
		
	}
	
	///OPTION7777
	if(enteredvalue==7){
		
	struct travel user;
	
	//choice(user);

	FILE *fptr3;
	tsuggest:
    if ((fptr3 = fopen("holiday.txt", "r")) == NULL){
        printf("Error! opening file");
	}
    	
	travelsuggest(user,fptr3);
	fclose(fptr3);
	
	int buyticket;
	printf("Would you like buy a ticket?\n[1] YES, [2]NO\n");
	scanf("%d", &buyticket);
	while(buyticket!=1&&buyticket!=2){
		printf("Please enter the 1 or 2\nTry again=>");
		scanf("%d", &buyticket);
	}
	switch(buyticket){
		case 1:
		system("cls");
		header();
		goto bookticket;
		case 2: 
		printf("\n\nPress 1 to take the another suggestion");
		printf("\nPress 2 to return to the options screen.");
		printf("\nPress 3 to exit the program.\n");
		scanf("%d",&cntne); //kullanýcýnýn devam edip etmeyeceðini sorguluyoruz.,
		
		while(cntne!=1&&cntne!=2&&cntne!=3){
			printf("\nPlease only enter value between 1 and 3.Try again\n\n");
			printf("\n\nPress 1 to take the another suggestion");
			printf("\nPress 2 to return to the options screen.");
			printf("\nPress 3 to exit the program.\n");
			scanf("%d",&cntne);
		}
		
	switch(cntne){ 
			case 1:	
			goto tsuggest; 
			break;
			case 2:
			system("cls");
			header();	
			goto options;
			break;
			case 3:
			system("cls");
			header();	
			printf("The program quits...");
			return 0;
			break;
		}	
			
	}	
	}
	
	/////OPTÝON8888
	if(enteredvalue==8){
		ticket *traveller;
		bookticket:
		printf("\n<<<AMAT AIRLINES>>>\n\n");
		printf("WELCOME\n\n");
		ticketbooking(&traveller);
		
		printf("\n\nPress 1 to buy the another flight ticket");
		printf("\nPress 2 to return to the options screen.");
		printf("\nPress 3 to exit the program.\n");
		scanf("%d",&cntne); //kullanýcýnýn devam edip etmeyeceðini sorguluyoruz.,
		
		while(cntne!=1&&cntne!=2&&cntne!=3){
			printf("\nPlease only enter value between 1 and 3.Try again\n\n");
			printf("\n\nPress 1 to buy the another flight ticket");
			printf("\nPress 2 to return to the options screen.");
			printf("\nPress 3 to exit the program.\n");
			scanf("%d",&cntne);
		}
		
	switch(cntne){ 
			case 1:	
			goto bookticket; 
			break;
			case 2:
			system("cls");
			header();	
			goto options;
			break;
			case 3:
			system("cls");
			header();	
			printf("The program quits...");
			return 0;
			break;
		}	
	}
	
	
	//OPTÝON999
	if(enteredvalue==9){
		system("cls");
		header();
		printf("The program quits...");
		return 0;
	}
	
	
	return 0;
}


