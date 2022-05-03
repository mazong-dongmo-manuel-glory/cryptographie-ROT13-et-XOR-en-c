#include<stdio.h>
#include "gestion.h"
char A[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
'Q','R','S','T','U','V','W','X','Y','Z'};
char a[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
'q','r','s','t','u','v','w','x','y','z'};

void cryptROT13(char content[],int size){
    int i = 0;
    for(i =0;i<size;i++){
        int j = 0;
        int isU = 0;
        int isL = 0;
        int pos = 0;
        for(j=0;j<26;j++){
            if(A[j] == content[i]){
                isU = 1;
                break;
            }
            if(a[j] == content[i]){
                isL = 1;
                break;
            }
        }
        if(isU){
            int new_pos = (j+13)%26;
            content[i] = A[new_pos];
        }else if(isL){
            int new_pos = (j+13)%26;
            content[i] = a[new_pos];
        }else{
            content[i] = content[i];
        }
    }

}
void decryptROT13(char content[],int size){
    int i = 0;
    for(i =0;i<size;i++){
        int j = 0;
        int isU = 0;
        int isL = 0;
        int pos = 0;
        for(j=0;j<26;j++){
            if(A[j] == content[i]){
                isU = 1;
                pos = j;
                break;
            }
            if(a[j] == content[i]){
                isL = 1;
                pos = 1;
                break;
            }
        }
        if(isU){
            int new_pos = (j+13)%26;
            content[i] = A[new_pos];
        }else if(isL){
            int new_pos = (j+13)%26;
            content[i] = a[new_pos];
        }else{
            content[i] = content[i];
        }
    }
}
void ROT13(){
    printf("\n-----------------------------------------------\n");
    printf("CHiFREMENT ROT13\n");
    printf("1 pour chifrer\n");
    printf("2 pour dechifrer\n");
    int choice;
    scanf("%d",&choice);
    FILE *source;
    FILE *dest;
    char source_path[20];
    char dest_path[20];
    char content[2000];
    int size = 0;
    if(choice == 1){
        printf("entrer le chemin fichier a chiffrer:");
        scanf("%s",source_path);
        printf("entrer le nom du fichier une fois chiffrer: ");
        scanf("%s",dest_path);
        init_file(&source,source_path,"r");
        init_file(&dest,dest_path,"w");
        get_content(source,content,&size);
        cryptROT13(content,size);
        fprintf(dest,"%s",content);

    }
    if(choice == 2){
        printf("entrer le chemin fichier a dechiffrer:");
        scanf("%s",source_path);
        printf("entrer le nom du fichier une fois dechiffrer: ");
        scanf("%s",dest_path);
        init_file(&source,source_path,"r");
        init_file(&dest,dest_path,"w");
        get_content(source,content,&size);
        decryptROT13(content,size);
        fprintf(dest,"%s",content);
    }

    fclose(source);
    fclose(dest);
    printf("\n-----------------------------------------------\n");
}