#include <stdio.h>
#include <stdlib.h>


int main()
{

	char nom[20];
	int age;
	float moy;
//	char c;
	FILE *fp=fopen("test.txt","a+");
	if(!fp)
	{
		printf("error d'allocation!!\n");
		exit(1);
	}
	
	//utilisationde fprintf
//	printf("entrer votre Nom :");
//	gets(nom);
//	fflush(stdin);
	
//	printf("entrer votre Age :");
//	scanf("%d",&age);
//	printf("entrer votre Moyenne :");
//	scanf("%f",&moy);
//	fputs("Nom\tAge\tMoyenne\n",fp);
//	fprintf(fp,"%s\t%d\t%.2f\n",nom,age,moy);
	rewind(fp);
	while((fscanf(fp,"%s\t%d\t%f",nom,&age,&moy))==3,!feof(fp))
	{
		
		//	puts(nom);
		printf("%s\t%d\t%.2f\n",nom,age,moy);
	}
	
	fclose(fp);
	return 0;
}
