#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
	char name[1000], version[10000];
	char key[1000]="XXXX-XXXX-XXXX-XXXX";
	int num, i;
	system("title Universal Keygen Generator 2020 by github.com/dev7060");
	system("cls");
	system("color 0a");
	//goto lb;
	printf("\n Product: $ ");
	gets(name);
	printf("\n Version: $ ");
	gets(version);
	system("cls");
	printf("\n Initializing ...");
	sleep(2);
	printf("\n Connecting to database ...");
	sleep(2);	
	printf("\n Generating keys ...");
	sleep(2);
	printf("\n Validating keys ...");
	sleep(2);
	//lb:
	printf("\n\n Success! Details below.\n");
	printf(" _________________________\n");
	printf(" Product: "); puts(name);
	printf(" Version: "); puts(version);
	printf(" Keys found:\n");
	//printf(" _________________________\n");
	srand(time(0));
	num = rand()%15;
	for(i=1; i<=num; i++){
		int j;
		char alpha[30]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
		char digit[20]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
		for(j=0; j<=18; j++){
			if((j!=4)&&(j!=9)&&(j!=14)){
				int array_choice;
				char temp_alp;
				char temp_num;
				array_choice = rand()%2;
				if(array_choice==1){
					temp_alp = rand()%26;
					key[j]=alpha[temp_alp];
				}else{
					temp_num = rand()%10;
					key[j]=digit[temp_num];
				}
			}else{
				//printf("time 1");
			}
		}
		printf(" ");
		puts(key);
	}
	printf(" _________________________\n");
	printf("\n ");
	system("pause");
	return 0;
}
