#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    // Kích thước của ma trận là (2*n) - 1
    int len = 2 * n - 1;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            
            // 1. Tính khoảng cách tới 4 cạnh
            int top = i;                // Khoảng cách tới cạnh TRÊN
            int left = j;               // Khoảng cách tới cạnh TRÁI
            int bottom = len - 1 - i;   // Khoảng cách tới cạnh DƯỚI
            int right = len - 1 - j;    // Khoảng cách tới cạnh PHẢI
            
            // 2. Tìm số nhỏ nhất (min) trong 4 số trên
            
            // Bước 1: Giả sử khoảng cách tới cạnh TRÊN là nhỏ nhất
            int min = top;
            
            // Bước 2: So sánh với cạnh TRÁI
            if (left < min) {
                min = left;
            }
            
            // Bước 3: So sánh với cạnh DƯỚI
            if (bottom < min) {
                min = bottom;
            }
            
            // Bước 4: So sánh với cạnh PHẢI
            if (right < min) {
                min = right;
            }

            // In ra giá trị
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}