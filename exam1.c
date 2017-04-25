/**/

#include <stdio.h>
int reAskRoomWidth(int count)
{
	char inputLine[100];
	double roomWidth=0;
	while(roomWidth <= 0)
	{
			printf("Width in meters for room %d  :   ",count);
			fgets(inputLine,sizeof(inputLine),stdin);
			sscanf(inputLine,"%lf",&roomWidth);
	}
	return roomWidth;
}
int reAskRoomLength(int count)
{
	char input[45];
	double roomLength=0;
	while(roomLength <= 0)
		{

			printf("Length in meters for room %d  :   ",count);
			fgets(input,sizeof(input),stdin);
			sscanf(input,"%lf",&roomLength);
		}
	return roomLength;
}							

int main()
{
		char input[120];
		int roomCount = 0;
		int count = 0;
		double roomWidth = 0;
		double roomLength = 0;
		double roomArea = 0;
		double totalArea = 0;

		while(roomCount <= 0)
		{
		printf("How many roooms in your house? : "); 
		fgets(input,sizeof(input),stdin);
		sscanf(input,"%d",&roomCount);
		}
			for( count = 1 ; count <= roomCount ; count++ )
			{
				roomWidth = reAskRoomWidth(count);
				roomLength = reAskRoomLength(count);
				roomArea = roomWidth * roomLength;
				totalArea = totalArea + roomArea;
			}
				
				printf("Total area of the house is %lf square meters.\n",totalArea);
	

			return 0;

	


}