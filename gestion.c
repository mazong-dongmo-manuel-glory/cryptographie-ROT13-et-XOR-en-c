#include <stdio.h>
#include <stdlib.h>
void init_file(FILE **file,char path[],char mode[2]){
    *file = fopen(path,mode);
    if(*file == NULL){
        exit(1);
    }
}
void get_content(FILE *file,char content[],int *size){
    int i = 0;
    char c;
    while((c = fgetc(file)) != EOF){
        content[i] = c; 
        i += 1;
    }
    *size = i;
}