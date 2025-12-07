//Yêu cầu: Chuyển chuỗi nhị phân (ví dụ 101) sang số thập phân (ví dụ 5).Giải thích Logic:Cách tính: $101_2 = 1 \times 2^2 + 0 \times 2^1 + 1 \times 2^0 = 4 + 0 + 1 = 5$.
#include <stdio.h>

int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    
    // Cách 1: Xử lý số nguyên (chia 10 lấy dư)
    int base = 1; // 2^0
    while (n != 0) {
        remainder = n % 10;
        decimalNumber += remainder * base;
        n /= 10;
        base *= 2; // Tăng lũy thừa của 2: 1, 2, 4, 8...
    }
    return decimalNumber;
}

int main() {
    long long bin = 1101; // 13
    printf("Binary: %lld -> Decimal: %d", bin, binaryToDecimal(bin));
    return 0;
}