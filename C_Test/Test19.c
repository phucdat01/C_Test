//FizzBuzz with a Twist (FizzBuzz biến thể)
#include <stdio.h>

// Hàm kiểm tra xem số n có chứa chữ số 3 không (ví dụ: 13, 31, 35)
int containsThree(int n) {
    while (n > 0) {
        if (n % 10 == 3) return 1;
        n /= 10;
    }
    return 0;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        int isFizz = (i % 3 == 0) || containsThree(i);
        int isBuzz = (i % 5 == 0);

        if (isFizz && isBuzz) {
            printf("FizzBuzz ");
        } else if (isFizz) {
            printf("Fizz ");
        } else if (isBuzz) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}