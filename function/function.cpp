/*
Nama File		: function.cpp
Deskripsi		: Mengubah operasi bagi menjadi  operasi pengurangan
Dibuat Oleh		: Dosen DDP
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 19/11/2021
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

//	prototype
void bagi(int b,int p, int *h, int s);
void inputan(int *b,int *p);
int bagiFunction(int b,int p);


//	Program Main
int main ()
{

	int bilangan,pembagi,hasil,sisa;
	char pilih;
	do
	{
		//clrscr;
		system("cls");
		hasil=0;
		sisa=0;
		
		inputan (&bilangan,&pembagi);

		if (pembagi == 0)
			printf ("Tidak Terdefinisi.. Nilai Pembagii tidak boleh sama dengan nol");
		else
		{
			//pemanggil modul//
			bagi (bilangan,pembagi,&hasil,sisa);
//			hasil=bagiFunction(bilangan,pembagi);
			printf ("\n\n main program Hasil bagi adalah = %d",hasil);
			printf ("\n main program Sisa adalah = %d",sisa);
		}
		printf ("\n\n Ulangi proses ? (Y / T) ");
		//scanf ("%c",&pilih);
		pilih=getche();
	} while ((pilih=='Y') || (pilih=='y'));
return 0;
}


//	Funtion Bagi
int bagiFunction (int b,int p)
{
	int h = 0;
	int s = 0;
	int bp,bm;  //bp = penampung nilai pembagi, bm = penampung nilai bilangan 
	bp=p;
	bm=b;
	if (b==0)
	  h=0;
	else
	{
		if (b<0)
			bm=-b;
		if (p<0)
			bp=-p;

		s=bm;

		if(bm<bp)
			h=0;

		while (s>=bp)
		{
			s=(s)-bp;
			h=(h)+1;
		}
	}

	if ((p<0) || (b<0))
	{
		if ((p<0) && (b<0))
			h=h;
		else
		{
			h=-(h);
			s=-(s);
		}	
	}
	return h;

}

//	Modul Inputan
void inputan (int *b,int *p)
{
	int bil, pem;
	printf("\n Masukkan nilai bilangan = ");
	scanf("%d", &bil);

	printf("\n Masukkan nilai pembagi = ");
	scanf("%d", &pem);
	
	*b = bil;
	*p = pem;
}

//	Modul Bagi
void bagi (int b,int p,int *h,int s)
{
	int bp,bm;  //bp = penampung nilai pembagi, bm = penampung nilai bilangan 
	bp=p;
	bm=b;
	if (b==0)
	  *h=0;
	else
	{
		if (b<0)
			bm=-b;
		if (p<0)
			bp=-p;

		s=bm;

		if(bm<bp)
			*h=0;

		while (s>=bp)
		{
			s=(s)-bp;
			*h=(*h)+1;
		}
	}

	if ((p<0) || (b<0))
	{
		if ((p<0) && (b<0))
			*h=*h;
		else
		{
			*h=-(*h);
			s=-(s);
		}	
	}
	printf("\nmodul bagi hasil bilangan:%d ",*h);
	printf("\nmodul bagi nilai sisa:%d ",s);

}


