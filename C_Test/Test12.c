#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Hàm tính tổng điểm cần hoàn thành
int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;
    int i;
    
    // 1. Xác định vị trí xuất phát
    if (gender == 'b') {
        i = 0; // Nếu là Nam, bắt đầu từ vị trí 0
    } else {
        i = 1; // Nếu là Nữ, bắt đầu từ vị trí 1
    }
    
    // 2. Vòng lặp "nhảy cóc" (bước nhảy là 2)
    // Thay vì i++, ta dùng i += 2 để nhảy qua người khác giới
    for (; i < number_of_students; i += 2) {
        sum += marks[i];
    }
    
    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = malloc(number_of_students * sizeof (int));
 
    //Cách viết theo kiểu Mảng     Cách viết theo kiểu Con trỏ                Ý nghĩa
    //    marks[i]                    *(marks + i)                    Lấy GIÁ TRỊ tại vị trí i
    //   &marks[i]                     (marks + i)                    Lấy ĐỊA CHỈ tại vị trí i
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", &marks[student]);
    }
    
    // Lưu ý: scanf(" %c") có dấu cách ở trước để bỏ qua ký tự xuống dòng thừa
    scanf(" %c", &gender);
    
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    
    free(marks);
    return 0;
}