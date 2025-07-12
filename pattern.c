
#include <stdio.h>
#include <conio.h>

void main()
{
	int row,colom,space,loop;

	printf("Enter the Row for the Pyramid : ");
	scanf("%d",&row);

	for (loop=1;loop <=row;loop++)
	{
		for (space=1;space<row-loop+2;space++)
			printf(" ");

		for (colom=1; colom <= loop; colom++)
			printf("* ");

		printf("\n");
	}
	getch();
}
