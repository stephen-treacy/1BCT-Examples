// ConsoleApplication23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <stdarg.h>
#include "string.h"
#include "conio.h"


void sortStrings(int numStrings, char*strings[]);
void writeToFile(int numStrings, char *filename, char*strings[]);

int main(int argc, char *argv[])
{
	FILE *fptr;

	sortStrings(argc, argv);
	writeToFile(argc, argv[1], argv);
	return 0;
}

void sortStrings(int numStrings, char*string[])
{
	int i, j, k;
	char *strings[20];
	char *temp;

	for (i = 2; i < numStrings; i++)
	{
		for (k = 2; k < numStrings - 1; k++)
		{
			if (strcmp(string[k], string[k + 1])> 0)
			{
				temp = string[k];
				string[k] = string[k + 1];
				string[k + 1] = temp;
			}
		}
	}

	printf("Sorted Strings:\n");
	for (j = 2; j < numStrings; j++)
	{
		printf("%s\n", string[j]);
	}
	printf(" \n");

}


void writeToFile(int numStrings, char *filename, char*string[])
{
	int i = 0;
	FILE*fptr;
	fptr = fopen(filename, "w+");
	for (i = 2; i < numStrings; i++)
	{

		fprintf(fptr, "%s\n", string[i]);

	}

}