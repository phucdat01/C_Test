//Định nghĩa: Một tam giác số mà mỗi số là tổng của 2 số nằm ngay phía trên nó.
//Cách dễ nhất để lập trình là dùng công thức Tổ hợp chập K của N: $C(n, k) = \frac{n!}{k!(n-k)!}$ (với $n$ là số hàng, $k$ là số cột).
#include <stdio.h>

// Hàm tính giai thừa
long factorial(int n) {
    long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

// Hàm tính tổ hợp nCk
long nCk(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void printPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // In khoảng trắng để căn giữa (tùy chọn)
        for (int space = 1; space < rows - i; space++) printf("  ");
        
        // In các số trong hàng
        for (int j = 0; j <= i; j++) {
            printf("%4ld", nCk(i, j));
        }
        printf("\n");
    }
}

int main() {
    printPascalTriangle(5);
    return 0;
}