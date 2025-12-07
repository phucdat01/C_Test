//Yêu cầu: Đếm số lượng xuất hiện của mỗi từ (ví dụ: "hello world hello" -> hello: 2, world: 1). Lưu ý: Bài này trong C khá phức tạp vì C không có sẵn Map/Dictionary như Python hay Java. Ta phải dùng mảng struct để lưu từ và số lần xuất hiện.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Struct để lưu từ và số lần xuất hiện
struct WordCount {
    char word[50];
    int count;
};

void countWords(char *str) {
    struct WordCount list[100]; // Giả sử tối đa 100 từ khác nhau
    int n = 0; // Số lượng từ khác nhau đã tìm thấy
    
    // Cắt từ đầu tiên
    char *token = strtok(str, " \n\t");
    
    while (token != NULL) {
        // Kiểm tra xem từ này đã có trong list chưa
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(list[i].word, token) == 0) {
                list[i].count++;
                found = 1;
                break;
            }
        }
        
        // Nếu chưa có, thêm vào list
        if (!found) {
            strcpy(list[n].word, token);
            list[n].count = 1;
            n++;
        }
        
        // Cắt từ tiếp theo
        token = strtok(NULL, " \n\t");
    }
    
    // In kết quả
    printf("Tan suat xuat hien cac tu:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %d\n", list[i].word, list[i].count);
    }
}

int main() {
    char s[] = "hoc code c va hoc code stm32";
    countWords(s);
    return 0;
}