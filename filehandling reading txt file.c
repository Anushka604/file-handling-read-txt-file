#include <stdio.h>
#include <stdlib.h>

int main()

{

    int num;
    FILE *fptr;


       if((fptr=fopen("C:\\Users\\sai\\OneDrive\\Desktop\\program.txt","r"))==NULL){

         printf("error!!!");

         exit(1);

       }

    fscanf(fptr,"%d",&num);
    printf("value of n=%d",num);
    fclose(fptr);
    return 0;
}
