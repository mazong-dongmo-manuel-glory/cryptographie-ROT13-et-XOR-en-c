#include<stdio.h>
#include "gestion.h"
void cryptXOR(char content[],int size,char key[],int key_size){
    int i = 0;
    int ik = 0;
    for(i=0;i<size;i++){
        if(key_size-1 == ik){
            ik = 0;
        }
        char c = content[i]^key[ik];
        content[i] = c;
        ik += 1;
    }
}
void XOR(){
    printf("\n-----------------------------------------------\n");
    printf("CHIFREMENT XOR\n");
    char source_path[20];
    char dest_path[20];
    FILE *source;
    printf("\nentrer le fichier source:");
    scanf("%s",source_path);
    init_file(&source,source_path,"r+");
    FILE *dest;
    printf("\nenterer le fichier destination:");
    scanf("%s",dest_path);
    init_file(&dest,dest_path,"w+");
    char content[1000];
    int size;
    get_content(source,content,&size);
    int key_size;
    printf("\nentrer la taille de la cle:");
    scanf("%d",&key_size);
    char key[key_size];
    printf("\nentrer la cle:");
    scanf("%s",key);
    cryptXOR(content,size,key,key_size);
    fprintf(dest,"%s",content);
    printf("\n-----------------------------------------------\n");
    fclose(source);
    fclose(dest);
}