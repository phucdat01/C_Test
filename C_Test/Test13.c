#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    const char *arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = 1; i <= 9; i++){
        if(n == i){
            printf("%s", arr[i-1]);
        }
    }
    if(n > 9){
        printf("Greater than 9");
    }
    return 0;
}