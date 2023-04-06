#include<stdio.h>
int main(){
	int codes, drinks, customer_num;
	double bill;
	char guests;
    float espresso=4.5, latte=5.5, cappucino=6.5, tea=3.5;
    int es=0, lat=0, cap=0, te=0;
	printf("Welcome! How many drinks will be ordered?");
	scanf("%d", &drinks);
	customer_num=drinks;
	printf("\nMENU\n1. Espresso 4.5$ \n2. Latte 5.5$   \n3. Cappuccino 6.5$   \n4. Tea 3.5$\n");



    for(drinks=drinks-1; drinks>=0; drinks--){  //asking again and again part//
        	scanf("%d", &codes);

	switch(codes)
	{
		case 1:
			printf("You have ordered one Espresso, which costs 4.5$\n");
            es++;
			break;
		case 2:
			printf("You have ordered one Latte, which costs 5.5$\n");
            lat++;
			break;
		case 3:
			printf("You have ordered one Cappuccino, which costs 6.5$\n");
            cap++;
			break;
		case 4:
			printf("You have ordered one Tea, which costs 3.5$\n");
            te++;
			break;
		default:
			printf("\nPlease enter the correct codes!");				
			
	}
		    bill = ((4.5)*es)+((5.5)*lat)+((6.5)*cap)+((3.5)*te);

    }
	
	printf("\n\nWould you like to split the bill between %d guests?\n", customer_num);
	
	scanf(" %c", &guests); 									//I dont know why it needs y or Y twice//
	if(guests=='Y' || guests=='y')
	{
	    bill=bill/customer_num;
		
		printf("The amount that each guest needs to pay is: %2.3f$", bill);

	}
		else
	{
		printf("The total amount that you need to pay is: %2.3f$", bill);
	}
	return(0);
}
//BATTAL FURKAN ÖZDEÞ 20244710027//
