#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argumento, string argv[])
{//valida o dado
    if (argumento != 2){
        printf("argumento: !\n");
        return 1;
    }
    //modulo
    string k = argv[1];
    for(int i = 0, n = strlen(k); i < n; i++){
        if (k[i] < 48 || k[i] > 57){
            printf("Numero: \n");
            return 1;
        }
    }
    
    int key = atoi(k);
    
    if(key < 0){
        printf("Numero2: \n");
        return 1;        
    }
    //cryptografando
    string plaintext = get_string("texto que ira ser criptografado: ");
    for(int i = 0, n = strlen(plaintext); i < n; i++){
        if (plaintext[i] > 65 && plaintext[i] < 90){
            plaintext[i] = 'A' + (plaintext[i] - 'A' + key) % 26;            
        }else if(plaintext[i] > 97 && plaintext[i] < 122){
            plaintext[i] = 'a' + (plaintext[i] - 'a' + key) % 26;    
        }
        
    }    
    
    
    printf("Texto criptografado: %s\n", plaintext);
    return 0;
}
