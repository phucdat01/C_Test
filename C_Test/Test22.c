//Định nghĩa: Dãy số bắt đầu bằng 0, 1. Số tiếp theo bằng tổng 2 số liền trước ($F_n = F_{n-1} + F_{n-2}$).
//Dãy: 0, 1, 1, 2, 3, 5, 8, 13...
#include <stdio.h>

void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    
    printf("Day Fibonacci (%d so): ", n);
    
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2; // Tính số tiếp theo
        t1 = t2;            // Đẩy t2 xuống t1
        t2 = nextTerm;      // Đẩy số mới vào t2
    }
    printf("\n");
}

int main() {
    generateFibonacci(8); // In 8 số đầu tiên
    return 0;
}