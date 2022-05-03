#include<string.h>
#include<stdio.h>
struct A{
    char word[30];
} typedef A;
int string_present(char string[],A a[],int size);
int nombre_carractere(char content[]){
    return (int)strlen(content);
}
int load_words(char content[],A words[]){
    int i = 0;
    int j = 0;
    int length = (int)strlen(content);
    int sub = 0;
    for(i=0;i<length;i++){
        if(content[i] == ' ' || content[j] == '\n' || content[i] == '.'){
            words[j].word[sub] = '\0';
            sub = 0;
            j += 1;
        }else{
            words[j].word[sub] = content[i];
            sub += 1;
        }
    }
    return j;
}
int nombre_mot_different(char content[]){
    A words[100];
    A words_cpy[100];
    int length = load_words(content,words);
    int length_cpy=0;
    int i;
    int cpt=0;
    for(i=0;i<length;i++){
        int state = 1;
        int j = 0;
        for(j=0;j<length_cpy;j++){
            if(strcmp(words[i].word,words_cpy[j].word)==0){
                state = 0;
                break;
            }
        }
        if(state){
            strcpy(words_cpy[cpt].word,words[i].word);
            printf("%s\n",words_cpy[cpt].word);
            cpt += 1;
            length_cpy += 1;
        }
    }
    return cpt;
}
int nombre_phrase(char content[],int size){
    int i =0;
    int cpt=0;
    for(i=0;i<size;i++){
        if(content[i] == '.'){
            cpt += 1;
        }
    }
    return cpt;
}
int plus_long_mot(char content[],int size){
    A words[100];
    int length = load_words(content,words);
    int i=0;
    int index_most_hight_word = 0;
    int max = strlen(words[0].word);
    for(i=0;i<length;i++){
        int word_length = strlen(words[i].word);
        if(word_length>=max){
            max=word_length;
            index_most_hight_word = i;
        }
    }
    printf("%s",words[index_most_hight_word].word);
    return max;
}
float longueur_moyenne(char content[],int size){
    A words[1000];
    int length = load_words(content,words);
    float sm = 0;
    int i =0;
    for(i=0;i<length;i++){
        int word_length = strlen(words[i].word);
        sm += word_length;
    }
    return sm/length;
}
int compte_alpha_numerique(char content[],int size){
    int cpt = 0;
    int i;
    for(i=0;i<size;i++){
        if(content[i]>='a' && content[i]<='z'){
            cpt += 1;
        }else if(content[i]>='A' && content[i]>='Z'){
            cpt +=1;
        }else if(content[i]>='0' && content[i]<='0'){
            cpt += 1;
        }
        
    }
    return cpt;
}