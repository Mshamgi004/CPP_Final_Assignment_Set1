// CPP Assignment Final //
// SET - 1 //
// Q.6 //
// Program to display the grades, based on the scores students secured in individual criteria. //
// MAHADEV G I //



#include<stdio.h>

int checkGrades(int a, float test, int total)          
{
	if(a > 50 && test > 0.70 && total > 5600)         // Checking the first condition
	{
		return 10;
	}
	else if(a > 50 && test > 0.70 && total < 5600)    // Checking the second condition
	{
		return 9;
	}
	else if(a < 50 && test > 0.70 && total > 5600)    // Checking the third condition
	{
		return 8;
	}
	else if(a > 50 && test < 0.70 && total > 5600)    // Checking the fouth condition
	{
		return 7;
	}
	else if(a > 50 || test > 0.70 || total > 5600)    // Checking the fifth condition
	{
		return 6;
	}
	else
	{
		return 5;
	}
}

int main()
{
	int att = 0;
	int tot = 0;
	int res = 0;                  
	float tes;

	printf("Enter roll no : \n");                 
	scanf("%d",&att);                          
	printf("tests scores : \n");
	scanf("%f",&tes);
	printf("total score : \n");
	scanf("%d",&tot);
	
	

	res = checkGrades(att, tes, tot);           // Calculating the result       
	printf("Grade: %d\n", res);	

	return 0;
}
