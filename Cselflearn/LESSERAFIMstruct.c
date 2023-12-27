#include <stdio.h>
#include <ctype.h>

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

    LE_SSERAFIM girl[5] = {
        {{'c','h','a','e','w','o','n','\0'},23,163.0},
        {{'y','u','n','j','i','n','\0'},22,172.0},
        {{'s','a','k','u','r','a','\0'},25,163.0},
        {{'e','u','n','c','h','a','e','\0'},17,168.0},
        {{'k','a','z','u','h','a','\0'},20,170.0}
    };

    for(int i = 0 ; i < 5 ; i++){
        fearnot(&girl[i]);
        printf("%7s|%d|%.1f\n", girl[i].name, girl[i].age, girl[i].tall);
    }
    
}
