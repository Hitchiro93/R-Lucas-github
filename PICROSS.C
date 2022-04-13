#include<stdio.h>

/*Initialise un tableau d'une dimension avec une valeur*/
void initArray1D(int taille,int iArray[taille], int valeur)
{
	for(int i = 0; i < taille; i++)
	{
		iArray[i] = valeur;
	}
}
