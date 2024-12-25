#include <stdio.h>
#include <stdlib.h>

int main() {
	char kyTu[50];
	printf("Hay nhap vao ky tu");
	fgets(kyTu,sizeof(kyTu),stdin); 
	FILE *fptr;
	fptr = fopen(" bt01.txt ","w");
	if(fptr == NULL){
		printf("loi mo tap tin\n");
		return 1;
	} 
	fprintf(fptr,"%s",kyTu);
	
	fclose(fptr);
	printf("ky tu da luu vao file bt01.txt\n");
    return 0;
}

