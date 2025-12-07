//Định nghĩa trong bài: Số Armstrong (theo đề bài này) là số mà tổng các lập phương (mũ 3) của các chữ số bằng chính nó.
//Ví dụ: $153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153$.

#include <stdio.h>
#include <stdbool.h>

bool checkArmstrong(int n) {
    int originalNum = n;
    int sum = 0;
    
    while (n > 0) {
        int digit = n % 10;      // Lấy chữ số cuối
        sum += digit * digit * digit; // Cộng lập phương vào tổng
        n /= 10;                 // Bỏ chữ số cuối đi
    }
    
    return (sum == originalNum);
}

int main() {
    int num;
    scanf("%d", &num);
    if (checkArmstrong(num)) 
        printf("%d la so Armstrong.\n", num);
    else 
        printf("%d khong phai so Armstrong.\n", num);
    return 0;
}