#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct idol {
    char name[20];
    int age ;
    float tall;
};
typedef struct idol LE_SSERAFIM;

void fearnot (LE_SSERAFIM *data){
    for(int i = 0 ; data->name[i] != '\0' ; i++){
        data->name[i] = toupper(data->name[i]);
    }
}


int main (){
    int cmp ; 
    LE_SSERAFIM girl[5] = {
        {{'c','h','a','e','w','o','n','\0'},23,163.0},
        {{'y','u','n','j','i','n','\0'},22,172.0},
        {{'s','a','k','u','r','a','\0'},25,163.0},
        {{'e','u','n','c','h','a','e','\0'},17,168.0},
        {{'k','a','z','u','h','a','\0'},20,170.0}
    };
    
    char ipt[10];
    fgets(ipt, 10, stdin);
    if(ipt[strlen(ipt) - 1] == '\n'){
        ipt[strlen(ipt) - 1] = '\0';
    }

    for(int i = 0 ; i < 5 ; i++){
        cmp = strcmp(ipt,girl[i].name);
        if(cmp == 0){
            for(int i = 0 ; i < 5 ; i++){
            fearnot(&girl[i]);
            }
            printf("%s is %d years old and %.1f cm tall.\n", girl[i].name, girl[i].age, girl[i].tall);
        }
    }
    system("pause");
    return 0 ;
}
