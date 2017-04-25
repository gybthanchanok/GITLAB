#include <stdio.h>

int main()
{
	char input[40];
	int countStation;
	int count;
	int price = 0;
	int totalPrice = 0;

	while(countStation > 0)
	{
				printf("How many stations do you want to travel? : ");
				fgets(input,sizeof(input),stdin);
				sscanf(input,"%d",&countStation);
			
	price = 0;
	if(countStation >= 1 && countStation <= 2)
	{
		price = 15;
	}
	else if(countStation >= 3 && countStation <= 4)
	{
		price = 25;
	}
	else if(countStation >= 5 && countStation <= 6)
	{
		price = 35;
	}
	else if(countStation >= 7 && countStation <=22)
	{
		price = 45;
	}
	else
	{
		price = 0;
	}

		if(price > 0)
		{
		printf ("Your ticket costs %d baht. Please insert coins or bills into the machine.\n",price);
		totalPrice = totalPrice + price;
		}
		
	}
	
	printf("Total fares received: %d\n",totalPrice );
	return 0;


}