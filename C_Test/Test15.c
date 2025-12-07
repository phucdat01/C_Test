#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    int *evenList = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenList[count] = arr[i]; // Lưu vào danh sách mới
            count++; // Tăng chỉ số của danh sách mới
        }
    }
    for(int i = 0; i < count; i++){
        printf("%d ", evenList[i]);
    }
    free(arr);
    free(evenList);
    return 0;
}