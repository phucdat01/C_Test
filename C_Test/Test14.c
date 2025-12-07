#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void string_reversal(char str[]){
    int len = strlen(str);
    int start = 0;
    int end = len -1;
    char temp;
    while(start < end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main (){
    char *txt = malloc(1024 * sizeof(char));
    fgets(txt, 1024, stdin);
    txt[strcspn(txt, "\n")] = 0;
    string_reversal(txt);
    printf("%s", txt);
    free(txt);
    return 0;
}