#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int arr[10] = {0};
    char *s = malloc(1024 * sizeof(int));
    fgets(s, 1024, stdin);
    s[strcspn(s, "\n")] = 0;
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        if (s[i] >= '0' && s[i] <= '9'){
            // MẸO QUAN TRỌNG: Trừ đi '0' để lấy giá trị thực
            int digit = s[i] - '0'; 
            
            // Tăng biến đếm tại vị trí tương ứng
            arr[digit]++;
        }
    }
    for(int i = 0; i <10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
} 