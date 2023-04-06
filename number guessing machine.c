#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void guess(int *guess_number){
	srand(time(NULL));				// generating number part//
	*guess_number=rand() %99+1;
}
void game(int *player_number,int *guess_number,int *account,int *bet){
	int f=1;
     while(1){ 
     if(*player_number>100){
      while (*player_number>100){
     	 printf("Enter a number between 0 to 100:\n");		//checking the number and playing game part//
     	 scanf("%d",player_number);}}
	else{
     if(*player_number==*guess_number){
     	printf("You win the game! The number was %d",*guess_number);
     	printf("Your account %d$\n",*account+=*bet);
     	break;}
	 else if(*guess_number<*player_number){
	 printf("Try a smaller number!\n");
	 printf("Enter a number between 0 to 100:\n");
	scanf("%d",player_number);}
	else {
	 printf("Try a bigger number!\n");
	 printf("Enter a number between 0 to 100:\n");
	scanf("%d",player_number);}
	  f++;
	 if(f==3 && *player_number !=*guess_number){
	 	printf("\nYou lost the game! \nThe number was %d\n",*guess_number);
	 	printf("Your account %d$\n",*account-=*bet);
	 		if(*account==0){	
			printf("\nThank you for playing. See you next time!\n");
            break;	}
	 	break;
	  while(f==3 && *player_number ==*guess_number){
	  		printf("Your account %d$\n",*account+=*bet);}}	 }}}
int main(){
	int round,guess_number,player_number,account,bet;
	char status;
	do{
		 guess(&guess_number);
		printf("Enter a start account for the game $:\n ");
	scanf("%d",&account);
	printf("Enter the bet amount:\n");
	scanf("%d",&bet);							//getting information from user part//
	while(account<bet){
		do{
		printf("You can't bet more than your balance.\n");
		printf("Enter the bet amount:\n");
	scanf("%d",&bet);
	}while(account<bet);
	}
 printf("Enter a number between 0 to 100:\n");
	scanf("%d",&player_number);
	game(&player_number,&guess_number,&account,&bet);
		if(account>0){
		printf("Do you want to play again?\n");
		scanf(" %c",&status);}
		if(status=='y'||status=='Y'){		
		do{
			printf("Enter the bet amount:\n");
	        scanf("%d",&bet);
	        	if(account<bet){
		do{
		printf("You can't bet more than your balance.\n");
		printf("Enter the bet amount:\n");
	scanf("%d",&bet);
	}while(account<bet);
	}
			printf("Enter a number between 0 to 100:\n");
			scanf("%d",&player_number);
		    game(&player_number,&guess_number,&account,&bet);
		    if(account>0){
		printf("Do you want to play again?\n");}
		scanf(" %c",&status);
		}while(status=='y'||status=='Y');
		break;
		}
	}while(status=='Y'||status=='y');
	printf("\nThank you for playing. See you next time!\n");
	return (0);
}
