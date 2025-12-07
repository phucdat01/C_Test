#include <stdio.h>

int main() {
    for(int i = 1; i <= 100; i++){
        // 1. Kiểm tra số chia hết cho cả 3 và 5 TRƯỚC
        if(i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz ");
        }
        // 2. Sau đó mới kiểm tra chia hết cho 3
        else if(i % 3 == 0){
            printf("Fizz ");
        }
        // 3. Kiểm tra chia hết cho 5
        else if(i % 5 == 0){
            printf("Buzz ");
        } 
        // 4. Các trường hợp còn lại
        else {
            printf("%d ", i);
        }
    }
    return 0;
}