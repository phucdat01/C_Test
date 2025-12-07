#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Hàm tính toán và in kết quả
void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    // Vòng lặp ngoài: duyệt số a từ 1 đến n
    for (int i = 1; i <= n; i++) {
        // Vòng lặp trong: duyệt số b từ i + 1 đến n
        // (Bắt đầu từ i+1 để đảm bảo a < b và không lặp lại cặp số cũ)
        for (int j = i + 1; j <= n; j++) {
            
            // Tính toán các giá trị bitwise
            int current_and = i & j;
            int current_or = i | j;
            int current_xor = i ^ j;

            // Cập nhật Max AND (nếu < k và lớn hơn max hiện tại)
            if (current_and < k && current_and > max_and) {
                max_and = current_and;
            }

            // Cập nhật Max OR
            if (current_or < k && current_or > max_or) {
                max_or = current_or;
            }

            // Cập nhật Max XOR
            if (current_xor < k && current_xor > max_xor) {
                max_xor = current_xor;
            }
        }
    }

    // In kết quả ra từng dòng
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}