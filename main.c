#include<stdio.h>
#include<string.h>
#include "stat.h"
#include "cryptoROT13.h"
#include "cryptoXOR.h"
#include "gestion.h"
int main(){
    int choice;
    FILE *file;
    char path[20];
    char content[1000];int size;
    printf("\n==============================================\n");
    do{
        printf("0 pour arreter\n");
        printf("1 pour la XOR\n");
        printf("2 pour ROT13\n");
        printf("3 nombre de phrase\n");
        printf("4 nombre de mots different\n");
        printf("5 plus long mot\n");
        printf("6 nombre de carratere alphanumerique\n");
        printf("7 nombre de carractere\n");
        printf("8 longueur moyenne\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            XOR();
            break;
        case 2:
            ROT13();
            break;
        case 3:
            printf("\nentrer le nom du fichier:");
            scanf("%s",path);
            init_file(&file,path,"r+");
            get_content(file,content,&size);
            printf("nombre de phrase=%d\n",nombre_phrase(content,size));
            fclose(file);
            break;
        case 4:
            printf("\nentrer le nom du fichier:");
            scanf("%s",path);
            init_file(&file,path,"r+");
            get_content(file,content,&size);
            printf("nombre de mot different =%d\n",nombre_mot_different(content));
            fclose(file);
            break;
        case 5:
            printf("\nentrer le nom du fichier:");
            scanf("%s",path);
            init_file(&file,path,"r+");
            get_content(file,content,&size);
            printf("plus long mot =%d\n",plus_long_mot(content,size));
            fclose(file);
            break;
        case 6:
            printf("\nentrer le nom du fichier:");
            scanf("%s",path);
            init_file(&file,path,"r+");
            get_content(file,content,&size);
            printf("nombre de carractere alphanumerique =%d\n",compte_alpha_numerique(content,size));
            fclose(file);
            break;
        case 7:
            printf("\nentrer le nom du fichier:");
            scanf("%s",path);
            init_file(&file,path,"r+");
            get_content(file,content,&size);
            printf("nombre de carractere =%d\n",nombre_carractere(content));
            fclose(file);
            break;
        case 8:
            printf("\nentrer le nom du fichier:");
            scanf("%s",path);
            init_file(&file,path,"r+");
            get_content(file,content,&size);
            printf("longueur moyenne de mot =%f\n",longueur_moyenne(content,size));
            fclose(file);
            break;

        }
        printf("\n");
    }while(choice);
    return 0;
}