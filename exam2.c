#include <stdio.h>


int main()
{
	char input[42];
	int gradeNumber = 1;
	int gradeScore;
	int bestGrade;

		
		while(gradeScore != -1)
		{
			do
			{
			printf("Enter grade %d (between 0 and 100) : ",gradeNumber);
			fgets(input,sizeof(input),stdin);
			sscanf(input,"%d",&gradeScore);
			}
			while(gradeScore < -1 || gradeScore > 100);
			gradeNumber++;
		

			if (gradeScore > bestGrade)
				{
					bestGrade = gradeScore;
				}
			else
				{
					bestGrade = bestGrade;
				}
		}
		printf("The best grade in the class was %d.\n", bestGrade);
		return 0;	
}