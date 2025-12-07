#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//sắp xếp dùng bubble sort
typedef struct{
    int a;
    int b;
    int c;
} triangle;

float area(triangle tr){
    float p = (tr.b + tr.a + tr.c) / 2.0f;
    float s = sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c)); 
    return s;
}

//sắp xếp dùng bubble sort
void sort_by_area(triangle* tr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(area(tr[i]) > area(tr[j])){
              triangle temp = tr[i];
                       tr[i] = tr[j];
                       tr[j] = temp;
            }
        }
    }    
}

//sắp xếp dùng quick sort
int compare_triangles(const void *a, const void *b) {
    // Ép kiểu con trỏ void* về con trỏ triangle*
    const triangle *trA = (const triangle *)a;
    const triangle *trB = (const triangle *)b;

    // Tính diện tích
    float areaA = area(*trA);
    float areaB = area(*trB);

    // Trả về kết quả so sánh
    if (areaA < areaB) {
        return -1; // trA nên đứng trước trB (sắp xếp tăng dần)
    } else if (areaA > areaB) {
        return 1;  // trA nên đứng sau trB
    } else {
        return 0;  // Hai diện tích bằng nhau
    }
}

void sort_by_area(triangle* tr, int n) {
    qsort(tr, n, sizeof(triangle), compare_triangles);
}

int main() {
    int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
    free(tr);
	return 0;
}