#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]){
 if(argc !=2){
    printf("Usage: ./caesar key\n");
    return 1;
 }
 for(int i = 0; argv[1][i]!='\0';i++){
    if(isdigit(argv[1][i])==0){
        printf("the key needs to be a number");
        return 1;
    }
 }
 const int key = atoi(argv[1]);
 string plainText = get_string("plaintext: ");
 printf("ciphertext: ");
 for(int i=0,length = strlen(plainText); i<length;i++){
    if(islower(plainText[i])){

        printf("%c",(((plainText[i]-97)+key)%26) +97);
    }
    else if(isupper(plainText[i])){

        printf("%c",(((plainText[i]-65)+key)%26) +65);
    }
    else{
        printf("%c",plainText[i]);
    }
 }
 printf("\n");
}
