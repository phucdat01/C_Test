#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char txt[64];
    fgets(txt, sizeof(txt), stdin);
    txt[strcspn(txt, "\n")] = 0;
    for(int i = 0; i < strlen(txt); i++){
        if(txt[i] == ' '){
            printf("\n");
        } else {
            printf("%c", txt[i]);
        }
    }
    return 0;
}