#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"



int main(void)
{
	char buff[10];
	do
	{
		printf("1 -	Fundamentals\n");
		printf("2 – Manipulation\n");
		printf("3 - Converting\n");
		printf("4 – Tokenizing\n");
		printf("0 - Exit\n");
		printf("Which module to run? \n");
		fgets(buff, 10, stdin);
		switch (buff[0])
		{
		case '1': fundamentals();
			break;
		case '2': 
			break;
		case '3': 
			break;
		case '4': 
			break;
		}
	} while (buff[0] != '0');
	return 0;
}