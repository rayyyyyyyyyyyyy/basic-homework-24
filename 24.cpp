#include <stdio.h>

#include <stdlib.h>

struct course

{
	char name[10];  

	int cc;

	int pc;

	int program;
} p;

int main(void)

{
    FILE *pFile;

	printf("讀取內容：\n");

	pFile=fopen("course.txt", "r");


    if (pFile==NULL)

    {
        printf("檔案開啟失敗!!\n");

        exit(1);
	}   

    else

    {
    	while (fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.cc, &p.pc, &p.program)!=EOF) 

    	    printf("%s\t %d\t %d\t %d", p.name, p.cc, p.pc, p.program); 
	}
	printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}


