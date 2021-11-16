/*
File Name	: Assigment
Author		: Garly Nugraha
Date		: November 16, 2021
Description	: Example Assignment and Print
*/

#include <stdio.h>
#include <limits.h>

int main()
{
//	Kamus Data
	int i;
	long int ii;
	
//	Program
	printf("Hello");
	printf("\n");
	
	i = 1234;
	ii = 123456;
	
	printf("Ini nilai i=1234 : %d", i);
	printf("\n");
	printf("Ini nilai ii=123456 : %d", ii);
	printf("\n");
	
//	Print Nilai Batas Integer
	printf("Min dan Max Integer = %d , %d", INT_MIN, INT_MAX);
	printf("\n");
	printf("Max Long Integer = %d", LONG_MAX);
}
