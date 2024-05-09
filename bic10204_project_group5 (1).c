#include<stdio.h>		//preprocessor directive
#include<string.h>
#include<stdlib.h>

void calBMR(char gender, char LevelOfActivity, float weight, float height, int age, int* add_BMR, int* add_DCR)		//function definition
{
	int a, b;
	if((gender=='m')||(gender=='M'))		//if else statement when user prompt in m or M
	{
		a = 66 + (13.7 * weight) + (5 * height)  - (6.8 * age);		//calculation for BMR
		*add_BMR=a;													//value of a is sotred in pointer
		
		if(LevelOfActivity==1)	//condition for level of activity
		{
			b=a*1.2;			//calculation for DMR
			*add_DCR=b;			//value of b is stored in pointer
		}
		else if(LevelOfActivity==2)
		{
			b=a*1.375;
			*add_DCR=b;
		}
		else if(LevelOfActivity==3)
		{
			b=a*1.55;
			*add_DCR=b;
		}
		else if(LevelOfActivity==4)
		{
			b=a*1.725;
			*add_DCR=b;
		}
		else if(LevelOfActivity==5)
		{
			b=a*1.9;
			*add_DCR=b;
		}
		else
		{
			printf("\tInvalid input");
			exit(0);
		}
	}
	
	else if ((gender=='f')||(gender=='F'))
	{
		a = 655 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
		*add_BMR=a;
		
		if(LevelOfActivity==1)
		{
			b=a*1.2;
			*add_DCR=b;
		}
		else if(LevelOfActivity==2)
		{
			b=a*1.375;
			*add_DCR=b;
		}
		else if(LevelOfActivity==3)
		{
			b=a*1.55;
			*add_DCR=b;
		}
		else if(LevelOfActivity==4)
		{
			b=a*1.725;
			*add_DCR=b;
		}
		else if(LevelOfActivity==5)
		{
			b=a*1.9;
			*add_DCR=b;
		}
		else
		{
			printf("\tInvalid Input");
			exit(0);
		}
	}
	
	else
	{
		printf("\tInvlid input");
		exit(0);
	}
}
int main()
{
	char name, gender;
	float weight, height;
	int age, BMR, DCR, LevelOfActivity;
	printf("\n\t=======================================================================");		//display table of level of activity
	printf("\n\tLevel of activity                DCR");
	printf("\n\t=======================================================================");
	printf("\n\t1.Sedentary                      little or no exercise, desk job");
	printf("\n\t2.Light Activity                 light exercise/sports 1-3 days/wk");
	printf("\n\t3.Moderate Activity              moderate exercise/sports 3-5 days/wk");
	printf("\n\t4.Very Active                    hard exercise/sports 6-7 days/wk");
	printf("\n\t5.Extra Active                   hard daily exercise/sports & physical job");
	printf("\n\t                                 or 2xdaytraining, i.e. marathon, contest");
	printf("\n\t=======================================================================");
	
	printf("\n\tName : ");
	scanf("%s",&name);
	printf("\n\tAge : ");
	scanf("%d",&age);
	printf("\n\tWeight (kg): ");
	scanf("%f",&weight);
	printf("\n\tHeight (cm): ");
	scanf("%f",&height);
	printf("\n\tGender (m/f): ");
	scanf("%s",&gender);
	printf("\n\tLevel of Activity (choose from 1 to 5): ");
	scanf("%d",&LevelOfActivity);
	
	calBMR(gender,LevelOfActivity,weight,height,age,&BMR, &DCR);	//function call
	
	printf("\n\tBMR : %d",BMR);		//display BMR
	printf("\n\tDCR : %d",DCR);		//display DCR
	printf("\n\tNote : Based on this calculation, you would need %d calories from food to sustain your daily activities.",DCR);		//display DCR
	
	return 0;
}


