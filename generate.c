#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void generateRes(char alf[], int n, char s[], int tam){
    if (n == 0){ 
        printf("%s\n", s);
        return;}
    
    for(int i= 0; i<tam;i++){
        char con[6];
        strcpy(con,s);
        strncat(con,&alf[i],1);
        generateRes(alf, n-1,con,tam);
    }
    return; 
}

void generateAllPass(char arr[], int len){ 
    char vaz[6];
    strcpy(vaz,"");
    for (int i = 1; i <= len; i++) { 
        generateRes(arr, i, vaz, len); 
    } 
} 
int main(int argc, char **argv){
    int tamanho = 0;
    sscanf(argv[1],"%d",&tamanho);
    char alfabeto[tamanho];
    strcpy(alfabeto, argv[2]);

    generateAllPass(alfabeto, tamanho);
    printf("k bye:)\n");

}