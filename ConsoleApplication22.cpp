// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fptr;

void main(int argc, char *argv[])
{
	int i = 1;
	int inputs = argc - 1;
	while (i < inputs)
	{
		printf("%s\t\t", argv[i]);
		printf("%s\n", argv[i + 1]);
		i = i + 2;
	}

	int loc = 0;
	int h = 2;
	float high = 0;
	while (h <= inputs)
	{
		if (high < atof(argv[h]))
		{
			high = atof(argv[h]);
			loc = h;
		}
		h = h + 2;

	}

	printf("The highest temperature is: %.1f in %s", high, argv[loc - 1]);

	fptr = fopen("F://Mar 8 2016.txt", "w");
	if (fptr == NULL)
	{
		printf("Error!");
	}
	int j = 1;
	while (j < inputs)
	{
		fprintf(fptr, "%s \t\t %s \n", argv[j], argv[j + 1]);
		j = j + 2;


	}
	fprintf(fptr, "Hottest town on this day is: %s (%.1f)", argv[loc - 1], high);
}