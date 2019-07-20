#include <iostream>
#include <cstring>
#include<stdio.h>
char s[50000];
int s_int[50000];
float s_float[50000];
int dl;
int str2int(char *s)
{
	int i;
	for(i=0;i<dl;i++)
	{
		s_int[i]=s[i];
		printf("\n%d",s_int[i]);//usun nowa linie
		//printf("\n%d",s_int[i]);
	}

}

float str2float(char *s)
{
	int i;
	for(i=0;i<dl;i++)
	{
		s_float[i]=s[i];
		printf("\n%f",s_float[i]);//usun nowa linie
		//printf("\n%d",s_int[i]);
	}

}


int main(int argc, char** argv)
{
int i;
printf("Podaj ciag znakow - ");
scanf("%s",s);
printf("Podales - %s",s);

dl = strlen(s);
printf("\nIlosc znakow w Twoim tekscie - %d",dl);
str2int(s);
str2float(s);
	return 0;
}
