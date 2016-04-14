// ConsoleApplication24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

typedef struct
{
	int year;
	double price[12];
} oil;

oil temp;

int counter;
double avg = 0;

int main()
{
	int choice = 0;
	int read();
	printf("Enter Choice:\n0 - Quit\n1 - Find the month with the highest price\n2 - Find the year with highest average price\n");
	scanf_s("%i", choice);

	switch (choice)
	{
	case '0':

		break;

	case '1':
		int month();
		break;

	case '2':
		int year();
		break;
	}
	return 0;
}

int read()
{
	FILE *fptr;
	fptr = fopen("F:\\oil.txt", "r");
	
	if (fptr == NULL)
	{
		printf("File not found\n");
	}

	int i = 0;
	char buffer[100];
	
	fgets(buffer, 100, fptr);
	fgets(buffer, 100, fptr);
	fgets(buffer, 100, fptr);

	while (!feof(fptr))
	{
		fscanf(fptr, "%i%d", temp.year, temp.price);
		counter++;
	}
	return 0;
}

int average()
{
	int i = 0;
	double sum = 0;

	for (i = 0; i < 12; i++)
	{
		sum += temp.price[i];
		avg = sum / 12;
	}

	return 0;
}

int year()
{
	int i = 0;

	for (i = 0; i < counter; i++)
	{
		if (avg > i)
		{
			avg = i;
		}
	}
	printf_s("Highest annual average price is %d", i);
	return 0;
}

int month()
{
	int i = 0;
	double high = 0;

	for (i = 0; i < counter; i++)
	{
		if (temp.price[i] > high)
		{
			temp.price[i] = high;
		}
	}
	printf_s("The highest price of petrol is %d", high);
	return 0;
}