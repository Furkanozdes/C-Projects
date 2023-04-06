#include<stdio.h>

int main()
{
	double average,midterm1,midterm2,midterm3,final,project;
    char des;
	printf("Enter three midterms, final and project grades:");
	scanf("%lf%lf%lf%lf%lf",&midterm1,&midterm2,&midterm3,&final,&project);
	printf("Do you receive additional bonus grade?\n");
	printf("Enter E/e for extra topic study or C/c for creating Interface:");
    scanf(" %c", &des);//desicion char for extra point

    if(des=='C' || des=='c')
	{
        printf("You receive +20 points for creating Interface.");
        project+=20;
        printf("You receive %.1lf points for project\n\n\n", project);
    }
    else if(des=='E' || des=='e')
	{
        printf("You receive +10 points for extra topic study.");
        project+=10;
        printf("You receive %.1lf points for project\n\n\n", project);
    }
   else 
   printf("You do not receive any bonus point.");
	
	//finding the average part
		if(midterm1>=midterm3 && midterm2>=midterm3)
	{
			average=((midterm1*0.2)+(midterm2*0.2)+(final*0.4)+(project*0.2));
			printf("Your average grade is %.2lf\n.",average);
	}
		else if(midterm1>=midterm2 && midterm3>=midterm2)
	{
			average=((midterm1*0.2)+(midterm3*0.2)+(final*0.4)+(project*0.2));
			printf("Your average grade is %.2lf\n.",average);
    }
    	else if(midterm2>=midterm1 && midterm3>=midterm1)
    {
    		average=((midterm3*0.2)+(midterm2*0.2)+(final*0.4)+(project*0.2));
    		printf("Your average grade is %.2lf\n.",average);
	}
     //letter  grade part
  	  		if (average>=90 && average<=104)
    {
    			printf("Your letter grade is AA.");
	}
			else if (average>=80 && average<=89)
	{
				printf("Your letter grade is BB");
	}
			else if(average>=70 && average<=79)
	{
				printf("Your letter grade is CC");
	}
			else if(average>=60 && average<=69)
    {
    			printf("Your letter grade is DD");
	}
			else if(average>=59 && average<=0) {
                printf("Your letter grade is FF");
            }
	return(0);		
}//end of main
