//Yêu cầu: Kiểm tra xem 2 chuỗi có phải là hoán vị của nhau không (cùng ký tự, cùng số lượng). Cách giải: Dùng mảng đếm tần suất ký tự (bảng mã ASCII).
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkAnagram(char s1[], char s2[]) {
    int count[256] = {0}; // Mảng đếm cho bảng mã ASCII
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) return 0; // Khác độ dài thì sai luôn

    for (int i = 0; i < len1; i++) {
        count[(int)s1[i]]++; // Tăng đếm cho s1
        count[(int)s2[i]]--; // Giảm đếm cho s2
    }

    // Nếu là Anagram thì mảng count phải toàn số 0
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) return 0;
    }
    return 1;
}

int main() {
    char a[] = "listen";
    char b[] = "silent";
    if (checkAnagram(a, b)) printf("La Anagram\n");
    else printf("Khong phai Anagram\n");
    return 0;
}