// Chuyển vị ma trận (Nhập từ bàn phím)
#include <stdio.h>
#define MAX 100 // Giới hạn kích thước tối đa là 100x100

// Hàm chuyển vị: Nhận vào ma trận 'nguon' và lưu kết quả vào 'dich'
void transpose(int nguon[MAX][MAX], int dich[MAX][MAX], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            dich[j][i] = nguon[i][j]; // Mấu chốt: Đảo dòng i thành cột j
        }
    }
}

int main() {
    int r, c;
    int a[MAX][MAX], b[MAX][MAX]; // a là ma trận gốc, b là kết quả

    // 1. Nhập kích thước và dữ liệu
    printf("Nhap hang va cot: ");
    scanf("%d %d", &r, &c);
    
    printf("Nhap ma tran:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 2. Gọi hàm chuyển vị
    transpose(a, b, r, c);

    // 3. In kết quả (Lưu ý: in theo kích thước c dòng, r cột)
    printf("Ket qua:\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}