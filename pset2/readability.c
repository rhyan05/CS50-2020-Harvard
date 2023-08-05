#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void){
    
    string s = get_string("Texto: ");
    
    float letras = 0;
    float palavras = 1;
    float sentencas = 0;
  
    //contasr as letras
    for (int i = 0, n = strlen(texto); i < n; i++){
        if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?'){
            sentencas++;
        }else if(texto[i] == ' '){
            palavras++;
        }else{
            letras++;
        }
    }
    //contar as sentenças
    float L = 100 * (letras/palavras);
    float S = 100 * (sentencas/palavras);
    int indice = round(0.0588 * L - 0.296 * S - 15.8);
    
    if (indice < 1){
        printf("Before grade 1\n");
    }else if(indice > 16){
        printf("Grade 16\n");
    }else{
        printf("Grade %i\n", indice);
    }
    
}
