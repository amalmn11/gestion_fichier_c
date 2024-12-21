#include <stdio.h>
#include <stdlib.h>


int main()
{
	char car[10];
	char nom[20];
	int age;
	float moy;
//	char c;
	FILE *fp=fopen("test.txt","w");
	if(!fp)
	{
		printf("error d'allocation!!\n");
		exit(1);
	}
	//ecrire un caractere
	/*
	do
	{
		printf("Entrer le caractere que vous voulez saisie dans le ficher :");
		scaf("%c",c);
		fflush(stdin);
		fputs(c,fp);
	}while(c!='.');*/


	//ecrire une chaine de caractere
		/*printf("Entrer le caractere que vous voulez saisie dans le ficher :");
		gets(car);
		fflush(stdin);
		fputs(car,fp);*/
		
		
	//utilisationde fprintf
	printf("entrer votre Nom :");
	gets(nom);
	fflush(stdin);
	
	printf("entrer votre Age :");
	scanf("%d",&age);
	printf("entrer votre Moyenne :");
	scanf("%f",&moy);
	fputs("Nom\tAge\tMoyenne\n",fp);
	fprintf(fp,"%s\t%d\t%.2f\n",nom,age,moy);
	
	fclose(fp);
	return 0;
}
