/*
Smallest multiple
Problem 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "pch.h"
//#include <iostream>

int run(unsigned long long max)
{
	unsigned long long value = max;
	unsigned long long dividor = max;
	int stop = 0;
	while(!stop)
	{
		while((value % dividor) == 0)
		{
			//printf("\nstart-wert: %d: %d ", value, dividor);
			dividor -= 1;
			if (dividor == 1)
			{

				printf("\n\n BINGO : %d", value);
				stop = 1;
				break;
			}
		}
		printf("\n");
		value += max;
		dividor = max;
		//printf("\n%d: %d", value, dividor);
		if (dividor > value)
			break;
	}
	return 0;

}


int main(int argc, char *argv[])
{
	int para = 0;
	if(argc < 2)
	{
		printf("Kommandozeilen-Parameter fehlen!");
		exit(1);
	} else
	{
		if (argc > 2)
		{

		printf("Zu viele Kommandozeilen-Parameter!");
		exit(1);
		}
		else
		{
			para = atoi(argv[1]);
		}
	}

	printf("\nEingabe: %i\n", para);
	run(para);
	//run(10);
	return 0;
}
