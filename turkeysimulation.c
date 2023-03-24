#include <stdio.h>
#include "turkeysimulation.h"

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

void Print(FILE *fptr){
	int file=fgetc(fptr);
	while(file!=EOF){
		printf("%c", file);
		file=fgetc(fptr);
	}
}

void PrintbyLine(FILE *fptr,int x){
	int count = 0;
		if (fptr != NULL){
    	char line[180]; 
    		while (fgets(line, sizeof line, fptr) != NULL){ // satýrý oku
        		if(count>x){ // x. satýrdan okumaya baþlayacak 
            		printf("%s", line);
            		count++;
						if(count==x+10){ // ve 10 satýr sonra iþlem durdurulacak bu sayede sadece x ve x+10 aralðýndaki 10 satýr basýlmýþ olacak.
			 			break;
			 			}
        		}
        		else{
            	count++;
        		}
    		}
		}
    	fclose(fptr);
}

void gotoyear(char year[5]){
	
	FILE *fptr;
	fptr=fopen(year,"r");
	if(fptr==NULL){
		printf("\ndata file error\n");
	}
	else{
	Print(fptr);
	}
	fclose(fptr);
}

void displaypresident(struct PresidentsInTurkey *s){
   printf("\n%sMisson Time=> %sDate of Death=> %s\n",s->name,s->missionTime,s->DateofDeath);
}

void viewpresident(){
		int prsdnt; // detaylý görüntülemek için tuþlanan deðer
		presidents ataturk,inonu,bayar,gursel,sunay,koruturk,evren,ozal,demirel,sezer,gul,erdogan;
		
		FILE *president;
		president=fopen("president.txt","r");
		
		char line[100],line2[100],line3[100],line4[100],line5[100],line6[180],line7[180],line8[180],line9[180];
		char line10[180],line11[180],line12[180],line13[180],line14[180],line15[180],line16[180],line17[180],line18[180];
		char line19[180],line20[180],line21[180],line22[180],line23[180],line24[180],line25[180],line26[180],line27[180];
		char line28[180],line29[180],line30[180],line31[180],line32[180],line33[180],line34[180],line35[180],line36[180];
		
		rewind(president);
		ataturk.name=fgets(line, sizeof line, president);
		ataturk.missionTime=fgets(line2, sizeof line2, president);
		ataturk.DateofDeath=fgets(line3, sizeof line3, president);
		
		inonu.name=fgets(line4, sizeof line4, president);
		inonu.missionTime=fgets(line5, sizeof line5, president);
		inonu.DateofDeath=fgets(line6, sizeof line6, president);
		
		bayar.name=fgets(line7, sizeof line7, president);
		bayar.missionTime=fgets(line8, sizeof line8, president);
		bayar.DateofDeath=fgets(line9, sizeof line9, president);
		
		gursel.name=fgets(line10, sizeof line10, president);
		gursel.missionTime=fgets(line11, sizeof line11, president);
		gursel.DateofDeath=fgets(line12, sizeof line12, president);
		
		sunay.name=fgets(line13, sizeof line13, president);
		sunay.missionTime=fgets(line14, sizeof line14, president);
		sunay.DateofDeath=fgets(line15, sizeof line15, president);
		
		koruturk.name=fgets(line16, sizeof line16, president);
		koruturk.missionTime=fgets(line17, sizeof line17, president);
		koruturk.DateofDeath=fgets(line18, sizeof line18, president);
		
		evren.name=fgets(line19, sizeof line19, president);
		evren.missionTime=fgets(line20, sizeof line20, president);
		evren.DateofDeath=fgets(line21, sizeof line21, president);
		
		ozal.name=fgets(line22, sizeof line22, president);
		ozal.missionTime=fgets(line23, sizeof line23, president);
		ozal.DateofDeath=fgets(line24, sizeof line24, president);
		
		demirel.name=fgets(line25, sizeof line25, president);
		demirel.missionTime=fgets(line26, sizeof line26, president);
		demirel.DateofDeath=fgets(line27, sizeof line27, president);
		
		sezer.name=fgets(line28, sizeof line28, president);
		sezer.missionTime=fgets(line29, sizeof line29, president);
		sezer.DateofDeath=fgets(line30, sizeof line30, president);
		
		gul.name=fgets(line31, sizeof line31, president);
		gul.missionTime=fgets(line32, sizeof line32, president);
		gul.DateofDeath=fgets(line33, sizeof line33, president);
		
		erdogan.name=fgets(line34, sizeof line34, president);
		erdogan.missionTime=fgets(line35, sizeof line35, president);
		erdogan.DateofDeath=fgets(line36, sizeof line36, president);
		
		fclose(president);
		
		printf("\nThe presidents of Republic of Turkey\n\n1.%s2.%s3.%s",ataturk.name,inonu.name,bayar.name);
		printf("4.%s5.%s6.%s7.%s8.%s",gursel.name,sunay.name,koruturk.name,evren.name,ozal.name);
		printf("9.%s10.%s11.%s12.%s",demirel.name,sezer.name,gul.name,erdogan.name);
		printf("\n\nPress any of 1 to 12 to view any president in detail.\n");
		scanf("%d", &prsdnt);
		while(prsdnt>12 || prsdnt<1){
			printf("Please enter value between 1 and 12\nTry again=>");
			scanf("%d", &prsdnt);
		}
		switch(prsdnt){
			case 1: printf("\n'NE MUTLU TURKUM DIYENE!!'\n");
			displaypresident(&ataturk);
			break;
			case 2:
			displaypresident(&inonu);
			break;    
			case 3:   
			displaypresident(&bayar);
			break;    
			case 4:   
			displaypresident(&gursel);
			break;    
			case 5:   
			displaypresident(&sunay);
			break;    
			case 6:   
			displaypresident(&koruturk);
			break;    
			case 7:   
			displaypresident(&evren);
			break;    
			case 8:   
			displaypresident(&ozal);
			break;    
			case 9:   
			displaypresident(&demirel);
			break;    
			case 10:  
			displaypresident(&sezer);
			break;    
			case 11:  
			displaypresident(&gul);
			break;    
			case 12:  
			displaypresident(&erdogan);
			break;  
		}
}


void findPlateCode(int platecode){
	FILE *city;
	city=fopen("cities.txt", "r");
	int x=10;
	printf("\n");
	PrintbyLine(city,(platecode-1)*x); // kullanýcýcn girdiði þehir plakasýna göre ayarladýðýmýz aralýktaki þehir ve bilgileri basýlacak.
}

void dollarRate(int year){	
//1970-1979
double dollarRate1[10]={11.34,14.83,14.00,14.00,13.78,14.30,15.86,17.82,24.05,30.75};
//1980-1989
double dollarRate2[10]={75.12,110.25,160.85,223.95,364.35,519.52,669.43,856.23,1425.71,2120.82};
//1990-1999
double dollarRate3[10]={2606.29,4175.27,6874.39,11035.66,29788.31,45738.52,81386.16,152071.28,260974.37,420126.15};
//2000-2009
double dollarRate4[10]={623704.00,1225411.82,1505839.53,1493067.76,1422341.23,1.34,1.43,1.30,1.29,1.55};
//2010-2020
double dollarRate5[11]={1.50,1.67,1.79,1.90,2.19,2.72,3.02,3.65,4.35,6.67,7.37};	
	
int i,j1=10,j2=9; // j1 ve j2 arraylerin yýl aralýklarý için counterler
// j1 i 2010 ve 2020 arasý için kullanacaðýz çünkü arada 10 yýl var. Diðer yýl aralýklarýnda ise j2 yi kullanacaðýz çünkü arada 9 yýl var
while(year<1970||year>2020){
	if(year<1970){
		printf("We only have enough data between 1970 and 2020.Please enter a value between 1970 and 2020.\nTry again=>");
		scanf("%d",&year);
	}
	else{
		printf("We cannot predict the future.Please enter a value between 1970 and 2020.\nTry again=>");
		scanf("%d",&year);
	}
}

if(year>=2010 && year<=2020){
for(i=2020;i>2009;i--){
	if(year==i){
		printf("Dollar exchange rate at %d is %.2lf",year,dollarRate5[j1]);
	}
	j1--;
}
}

if(year>=2000 && year<=2009){
for(i=2009;i>1999;i--){
	if(year==i){
		printf("Dollar exchange rate at %d is %.2lf",year,dollarRate4[j2]);
	}
	j2--;
}
}

if(year>=1990 && year<=1999){
for(i=1999;i>1989;i--){
	if(year==i){
		printf("Dollar exchange rate at %d is %.2lf",year,dollarRate3[j2]);
	}
	j2--;
}
}

if(year>=1980 && year<=1989){
for(i=1989;i>1979;i--){
	if(year==i){
		printf("Dollar exchange rate at %d is %.2lf",year,dollarRate2[j2]);
	}
	j2--;
}
}

if(year>=1970 && year<=1979){
for(i=1979;i>1969;i--){
	if(year==i){
		printf("\nDollar exchange rate at %d is %.2lf",year,dollarRate1[j2]);
	}
	j2--;
}
}
}

void makeMatrixWithDollarRate(int nmbrofyr){
	//1970-1979
	double dollarRate1[10]={11.34,14.83,14.00,14.00,13.78,14.30,15.86,17.82,24.05,30.75};
	//1980-1989
	double dollarRate2[10]={75.12,110.25,160.85,223.95,364.35,519.52,669.43,856.23,1425.71,2120.82};
	//1990-1999
	double dollarRate3[10]={2606.29,4175.27,6874.39,11035.66,29788.31,45738.52,81386.16,152071.28,260974.37,420126.15};
	//2000-2009
	double dollarRate4[10]={623704.00,1225411.82,1505839.53,1493067.76,1422341.23,1.34,1.43,1.30,1.29,1.55};
	//2010-2020
	double dollarRate5[11]={1.50,1.67,1.79,1.90,2.19,2.72,3.02,3.65,4.35,6.67,7.37};

	int i,j,j1=10,j2=9; // j1 ve j2 arraylerin yýl aralýklarý için counterler
	// j1 i 2010 ve 2020 arasý için kullanacaðýz çünkü arada 10 yýl var. Diðer yýl aralýklarýnda ise j2 yi kullanacaðýz çünkü arada 9 yýl var
	double matrix[8000][2]; //tablomuz için ana matrisimiz. yýllarý bir elemanýncý olarak kullanacaðýmýz için sizeýný büyük tuttum.
	
	int temp[100]; // kullanýcýdan yýllarý alýrken bu arraya hapsedicez
	
	for(i=0;i<nmbrofyr;i++){
		printf("Enter the year=>");
		scanf("%d", &temp[i]);  // kullanýcýdan yýllarý alýyoruz ve geicici bir arraya hapsediyoruz
		while(temp[i]<1970||temp[i]>2020){
			if(temp[i]<1970){
				printf("We only have enough data between 1970 and 2020.Please enter a value between 1970 and 2020.\nTry again=>");
				scanf("%d",&temp[i]);
			}
			else{
				printf("We cannot predict the future.Please enter a value between 1970 and 2020.\nTry again=>");
				scanf("%d",&temp[i]);
			}
		}
	}
	
	for(i=2020;i>2009;i--){
	matrix[i][0]=i;	// ayrýca burda 1. sütun yani yýllar sütununu yine yýllara eþitliyoruz
	matrix[i][1]=dollarRate5[j1];  //burada yýllarý sanki bir arrayin basamaklarý gibi kullanýp her yýla ait kuru eþitliyoruz
	j1--;
	}
	for(i=2009;i>1999;i--){
	matrix[i][0]=i;	
	matrix[i][1]=dollarRate4[j2];  
	j2--;
	}
	j2=9; //bi sonraki iþlem için j2 yi tekrar eski hlaine getiriyoruz
	for(i=1999;i>1989;i--){
	matrix[i][0]=i;	
	matrix[i][1]=dollarRate3[j2];  
	j2--;
	}
	j2=9;
	for(i=1989;i>1979;i--){
	matrix[i][0]=i;	
	matrix[i][1]=dollarRate2[j2];  
	j2--;
	}
	j2=9;
	for(i=1979;i>1969;i--){
	matrix[i][0]=i;	
	matrix[i][1]=dollarRate1[j2];  
	j2--;
	}
	j2=9;
	
	bubbleSort(temp,nmbrofyr); //Elimizdeki yýllarý artan þekilde sýralýyoruz
	
	printf("\n");
	printf("\tYears           Dollar Exchange Rate\n");
	for(i=0;i<nmbrofyr;i++){
		for(j=0;j<2;j++){
		// burada ise gecicide tuttuðumuz yýllarý tekrar arrayin içine gönderiyoruz ve basamak olarak tuttuðumuz yýllar bize 1. sütun yýl 2. sutun dolar kuru olarak geri gleiyor.
		printf("\t%.2lf\t\t", matrix[temp[i]][j]); 
		}
		printf("\n");
	}	
}

void bubbleSort(int row[50],int nmbrofyr){
	int i,j;//yýllarý sýraladýðýmýz fonksiyon.
	for(i=0;i<nmbrofyr;i++){
		for(j=0;j<nmbrofyr-i;j++){
			if(row[j-1]>row[j]){
				int rowsayi = row[j];
				row[j]=row[j-1];
				row[j-1]=rowsayi;
			}
		}
	}
	
	
}

void Scan(FILE *fptr, char file[100]){
	int i;
	char sentence[10000];
	
	fflush(stdin);
	
	if ((fptr=fopen(file,"w")) == NULL){
	printf("Error !!!\n");
	}

	else{ 
	gets(sentence);
	
	for (i=0; sentence[i]; i++){
	putc(sentence[i], fptr);
	}
	}
	fclose(fptr);
}

void header(){
	printf("\nWELCOME TO THE REPUBLIC OF TURKEY SIMULATION\n\n");
}

void writeTicket(ticket *x){
    FILE *fptr;
    char file[50];
    fptr=fopen(x->name,"w"); // kullanýcýnýn isminde dosya oluþturulucak ve içerisnde bilet bilgileri bulunacak
    
    fprintf(fptr,"Name:%s \nSurname:%s \nE-mail adress:%s \nFlight Place:%s \nTotal Ticket Price:%d Dollar\nFlight Date:%d/%d/%d  \nNumber of Ticket:%d\n",x->name,x->surname,x->email,x->place,x->price*x->numtick,x->day,x->mounth,x->year,x->numtick);
        
    fclose(fptr);
}

void showPlaces(){
    printf("\nFLIGHT PRICES\n\n[1] - ISTANBUL at 4 o'clock - %d Dollar\n[2] - ANKARA at 5 o'clock - %d Dollar\n[3] - ANTALYA at 5 o'clock -  %d Dollar\n[4] - NEVSEHIR-KAPADOKYA at 6 o'clock - %d Dollar\n"
           "[5] - BURSA at 3 o'clock - %d Dollar\n[6] - IZMIR at 7 o'clock - %d Dollar\n[7] - MUGLA at 4 o'clock - %d Dollar\n[8] - GIRESUN at 8 o'clock - %d Dollar\n[9] - ADANA at 9 o'clock - %d Dollar\n[10] - EDIRNE at 5 o'clock - %d Dollar\n"
		   "[11] - KIRSEHIR at 10 o'clock - %d Dollar\n[12] - ERZURUM-PALANDOKEN at 6 o'clock - %d Dollar\n[13] - KOCAELI at 6 o'clock - %d Dollar\n[14] - EXIT\n",
		   price(),price()+250,price()+500,price()+700,price()+850,price()+400,price()+600,price()+875,price()+900,price()+100,price()+700,price()+1000,price()+600);
}

int price(){ // konuma göre ve anlýk biletlere göre bilet fiyatý belirleyen yapay zeka :)	
	int upper=1500;
	int lower=500;
	srand(time(0));
	int num = (rand() % (upper - lower + 1)) +lower;
	return num;
}

void ticketbooking(ticket *x){

	char placenumber[5];
	char place[50],name[50],surname[50],email[50];
	int day,mounth,year;
	int tprice;
	
	printf("Enter the your name=> ");
	scanf("%s",name);
	fflush(stdin);
	strcpy(x->name,name);
	printf("Enter the your surname=> ");
	scanf("%s",surname);
	strcpy(x->surname,surname);
	printf("Enter the your email=> ");
	scanf("%s", email);
	strcpy(x->email,email);
	date:
	printf("Which date would you like to view the flights.\nEnter the day=>");
	scanf("%d",&day);
	printf("Enter the mounth=>");
	scanf("%d",&mounth);
	printf("Enter the year=>");
	scanf("%d",&year);
	if(mounth<1 || mounth >12 || day<1 || day>31 || year<2021){
		printf("\nYou entered incorrect date.Try again\n");
		goto date;
	}
	else if(year>2022){
		printf("We just have flight on 2021 and 2022. Please try again\n");
		goto date;
	}
	x->day=day;
	x->mounth=mounth;
	x->year=year;
	printf("\nFlights on %d/%d/%d\n",day,mounth,year);
	showPlaces();
    int pricelist[]={price(),price()+250,price()+500,price()+700,price()+850,price()+400,price()+600,price()+875,price()+900,price()+100,price()+700,price()+1000,price()+600};
    printf("\nEnter the place code number you want to go\n");
    ticket:
    scanf(" %s", placenumber);  
    
    if(strcmp(placenumber,"1")==0){
	tprice=pricelist[0];  // arrayimizden kullanýcýýnýn ödeyeceði fiyatý çekiyoruz
        strcpy(place,"ISTANBUL at 4 o'clock");
	}  
    else if(strcmp(placenumber,"2")==0){
	tprice=pricelist[1];
        strcpy(place,"ANKARA at 5 o'clock");
	} 
    else if(strcmp(placenumber,"3")==0){
	tprice=pricelist[2];
        strcpy(place,"ANTALYA at 5 o'clock");
	} 
    else if(strcmp(placenumber,"4")==0){
	tprice=pricelist[3];
        strcpy(place,"NEVSEHIR-KAPADOKYA at 6 o'clock");
	}  
    else if(strcmp(placenumber,"5")==0){
	tprice=pricelist[4];
        strcpy(place,"BURSA at 3 o'clock");
	}    
    else if(strcmp(placenumber,"6")==0){
	tprice=pricelist[5];
        strcpy(place,"IZMIR at 7 o'clock");
	}    
    else if(strcmp(placenumber,"7")==0){
	tprice=pricelist[6];
        strcpy(place,"MUGLA at 4 o'clock");
	}   
    else if(strcmp(placenumber,"8")==0){
	tprice=pricelist[7];
        strcpy(place,"GIRESUN at 8 o'clock");
	}
        
    else if(strcmp(placenumber,"9")==0){
	tprice=pricelist[8];
        strcpy(place,"ADANA at 9 o'clock");
	}        
    else if(strcmp(placenumber,"10")==0){
	tprice=pricelist[9];
        strcpy(place,"EDIRNE at 5 o'clock");
	}
	else if(strcmp(placenumber,"11")==0){
		tprice=pricelist[10];
        strcpy(place,"KIRSEHIR at 5 o'clock");
	} 
	else if(strcmp(placenumber,"12")==0){
		tprice=pricelist[11];
		strcpy(place,"ERZURUM-PALANDOKEN at 6 o'clock");
	}
	else if(strcmp(placenumber,"13")==0){
		tprice=pricelist[12];
		strcpy(place,"KOCAELI at 6 o'clock");
	}
	else if(strcmp(placenumber,"14")==0){
		return 0;
	}     
    else{
        printf("There is no such code.\nTry again=>");
        goto ticket;
    }
    printf("Enter the number of tickets you want to book\n");
    scanf("%d",&x->numtick);
    
    strcpy(x->place,place);
    x->price=tprice;
    writeTicket(x); // kullanýcýnýn biletini txt olarak yazdýrýypruz
    printf("\nBooking succesful. Payment has sent to a your email. You must pay your payment within 1 week. \n");

}

void travelsuggest(struct travel human,FILE *fptr){       

	printf("Which season would you like to go?\n",human.season);
	printf("1.Summer\n2.Winter\n");
	scanf("%d",&human.season);
	while(human.season!=1 && human.season!=2){ 
	printf("Please only enter value between 1 and 2.Try again\n\n");
	printf("1.Summer\n2.Winter\n");
	scanf("%d",&human.season);
	}
	
	printf("What kind of holiday do you prefer?\n",human.region);
	printf("1.Cultural\n2.Sea-Camp\n3.Skying\n");
	scanf("%d",&human.region);
	while(human.region!=1 && human.region!=2 && human.region!=3){ 
	printf("Please only enter value between 1 and 3.Try again\n\n");
	printf("1.Cultural\n2.Sea-Camp\n3.Skying\n");
	scanf("%d",&human.region);
	}
	
	printf("Which one is your budget suitable for?\n",human.money);
	printf("1. 0 < dollar <= 500\n2. 500+ dollar\n");
	scanf("%d",&human.money);
	while(human.money!=1 && human.money!=2){ 
	printf("Please only enter value between 1 and 2.Try again\n\n");
	printf("1. 0 < dollar <= 500\n2. 500+ dollar\n");
	scanf("%d",&human.money);
	}

	if(human.season ==1 && human.region == 1 && human.money == 1 ){

	char c[1000];
	fseek(fptr, 0 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==1 && human.region == 1  && human.money == 2 ){
	char c[1000];
	fseek(fptr, 59 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==1 && human.region == 2 && human.money == 1 ){
	char c[1000];
	fseek(fptr, 127 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==1 && human.region == 2 && human.money == 2 ){
	char c[1000];
	fseek(fptr, 184 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==1 && human.region == 3 && human.money == 1 ){
	char c[1000];
	fseek(fptr, 249 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==1 && human.region == 3 && human.money == 2 ){
	char c[1000];
	fseek(fptr, 321 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==2 && human.region == 1 && human.money == 1 ){
	char c[1000];
	fseek(fptr, 393 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==2 && human.region == 1 && human.money == 2 ){
	char c[1000];
	fseek(fptr, 459 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==2 && human.region == 2 && human.money == 1 ){
	char c[1000];
	fseek(fptr, 528 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==2 && human.region == 2 && human.money == 2 ){
	char c[1000];
	fseek(fptr, 588 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==2 && human.region == 3 && human.money == 1 ){
	char c[1000];
	fseek(fptr, 653 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}
	
	if(human.season ==2 && human.region == 3 && human.money == 2 ){
	char c[1000];
	fseek(fptr, 702 , SEEK_SET);
    fscanf(fptr, "%[^\n]", c);
	printf("\n%s", c);
	}	
}
