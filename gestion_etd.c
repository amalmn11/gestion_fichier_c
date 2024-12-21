#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compt=0;

typedef struct ETD
{
	int Id_Etd;
	char Nom[20];
	char Prenom[20];
	float noteE;
	float noteO;
}Etudiant;

Etudiant *creer_etudiant()
{
	Etudiant *NEtd=(Etudiant*)malloc(sizeof(Etudiant));
	if(!NEtd)
	{
		printf("erreur d'allocation\n");
		exit(-1);
	}
	char nom[20],prenom[20];
	float notee,noteo;
	printf("entrer le Nom l'etudiant :");
	scanf("%s",nom);
	printf("entrer le Prenom l'etudiant :");
	scanf("%s",prenom);
	printf("entrer la note de l'epreuve ecrit:");
	scanf("%f",&notee);
	fflush(stdin);
	printf("entrer la note de l'epreuve orale:");
	scanf("%f",&noteo);
	
//	NEtd->Id_Etd=id;
	
	strcpy(NEtd->Prenom,prenom);
	NEtd->noteE=notee;
	NEtd->noteO=noteo;
	return((Etudiant*)NEtd);
}


int main()
{
	
	char c;
	int Id_Etd;
	char Nom[20];
	char Prenom[20];
	float noteE;
	float noteO;
	FILE *fp=fopen("Etudiant.txt","a+");
	if(!fp)
	{
		printf("on ne peut pas entrer au ficher de donnee !!\n");
		exit(-1);
	}
//	do
//	{
//		
//		compt++;
//		Etudiant *NE=creer_etudiant();
////		NE=creer_etudiant();
//		fprintf(fp,"%d\t%s\t%s\t%f\t%f\n",compt,NE->Nom,NE->Prenom,NE->noteE,NE->noteO);
//		free(NE);
//		printf("si vous voulez inserer un etudiant veuillez saisir (Y/y) :");
//		scanf(" %c", &c);
//		fflush(stdin); // Consommer le caractère de nouvelle ligne restant
//
////		scanf("%s",)
//		
//	}while((c=='Y') || (c=='y'));
	while (fscanf(fp, "%d\t%s\t%s\t%f\t%f", &Id_Etd, Nom, Prenom, &noteE, &noteO) == 5)
{
    printf("%d\t%s\t%s\t%f\t%f", Id_Etd, Nom, Prenom, noteE, noteO);
}

if (!feof(fp))
{
    // Une erreur de lecture s'est produite, non liée à la fin du fichier
    printf("Erreur de lecture dans le fichier.\n");
}

fclose(fp);

	return((int)0);
}
