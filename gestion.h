#ifndef GESTION_H 
#define GESTION_H 
#include <stdio.h>
void init_file(FILE **file,char path[],char mode[2]);
void get_content(FILE *file,char content[],int *size);
#endif