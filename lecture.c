#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp=fopen("test.txt","r");
	char c[20],car;
	int i=0;
	if(!fp)
	{
		printf("error d'allocation!!\n");
		exit(1);
	}
	//lectue car par car
	/*while(!feof(fp))
	{
		car=fgetc(fp);
		printf("%c",car);
	}*/
	
	while(fgets(c,19,fp),!feof(fp))
	{
		printf("%s",c);
	}
	

	fclose(fp);
	return 0;
}
