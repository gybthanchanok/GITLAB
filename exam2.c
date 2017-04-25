#include <stdio.h>


int main()
{
<<<<<<< HEAD
	char input[200];
=======
	char input[200];
>>>>>>> b6542b1a4cd01ef4ed1b665c92920cc1f38574bc
	int gradeNumber = 1;
	int gradeScore;
	int bestGrade;

		
		while(gradeScore != -1)
		{
			do
			{
			printf("Enter grade %d (between 0 and 200) : ",gradeNumber);
			fgets(input,sizeof(input),stdin);
			sscanf(input,"%d",&gradeScore);
			}
<<<<<<< HEAD
			while(gradeScore < -1 || gradeScore > 300);
=======
			while(gradeScore < -1 || gradeScore > 300);
>>>>>>> b6542b1a4cd01ef4ed1b665c92920cc1f38574bc
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