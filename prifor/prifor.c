/*
Nama File		: prifor.c
Deskripsi		: Baca N, print 1 s/d N dengan FOR
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 06/09/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int i, N;
	
//	Program
	printf("Baca N, print 1 s/d N \n");
	printf("N = ");
	scanf("%d", &N);
	for(i = 1; i <= N; i++)
	{
		printf("%d \n", i);
	}
	printf("Akhir program");
	
	return 0;
}
