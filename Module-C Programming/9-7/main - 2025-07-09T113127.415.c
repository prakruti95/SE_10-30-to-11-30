#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 5;
	int b = 7;

	// Performing Bitwise AND on a and b
	int c = a & b;
	printf("%d",c);

	// Performing Bitwise OR on a and b
	int d = a | b;
	printf("%d",d);

	// Performing Bitwise XOR on a and b
	int e = a ^ b;
	printf("%d",e);

	// Performing Bitwise NOT on a
	int f = ~a;
	printf("%d",f);

	// Performing left shift on a
	int g = a << b;
    printf("%d",g);

	// Performing right shift on a
	int h = a >> b;
    printf("%d",h);
	
	getch();
}