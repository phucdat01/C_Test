//Kiểm tra số nguyên tố (Prime Number Check)
#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0; // 0 và 1 không phải số nguyên tố
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0; // Chia hết cho số khác -> Không phải nguyên tố
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isPrime(n)) printf("%d la so nguyen to", n);
    else printf("%d khong phai so nguyen to", n);
    return 0;
}