#ifndef turkeysimulation_h_
#define turkeysimulation_h_

struct PresidentsInTurkey;
struct travel;
struct ticket;
void Print(FILE *fptr);  
void gotoyear(char year[5]); 
void findPlateCode(int platecode);  
void viewpresident();  
void displaypresident(struct PresidentsInTurkey *s); 
void dollarRate(int year); 
void makeMatrixWithDollarRate(int nmbrofyr); 
void PrintbyLine(FILE *fptr,int x); // x, ka��nc� sat�rdan itibaren bas�lmaya ba�lanacak bilgisi   
void bubbleSort(int row[50],int nmbrofyr);  
void Scan(FILE *fptr, char file[100]);  
void header();  
void writeTicket(struct ticket *x); 
void showPlaces();  
int price(); // konuma g�re ve anl�k biletlere g�re bilet fiyat� belirleyen yapay zeka :)  
void ticketbooking(struct ticket *x); 
void travelsuggest(struct travel human,FILE *fptr); 


#endif
