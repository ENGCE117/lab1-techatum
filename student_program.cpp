#include <stdio.h>

#define MAX_SIZE 100  // กำหนดขนาดสูงสุดของเมทริกซ์

void GetMatrix(int value[MAX_SIZE][MAX_SIZE], int *row, int *col);
void PrintMatrix(int value[MAX_SIZE][MAX_SIZE], int row, int col);

int main() {
    int data[MAX_SIZE][MAX_SIZE]; // ใช้อาร์เรย์แบบปกติ ไม่ใช้ malloc
    int m, n;

    GetMatrix(data, &m, &n);
    PrintMatrix(data, m, n);

    return 0;
}

// ฟังก์ชันรับค่าเมทริกซ์
void GetMatrix(int value[MAX_SIZE][MAX_SIZE], int *row, int *col) {
    scanf("%d", row);
    scanf("%d", col);

    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            scanf("%d", &value[i][j]);
        }
    }
}

// ฟังก์ชันแสดงเมทริกซ์
void PrintMatrix(int value[MAX_SIZE][MAX_SIZE], int row, int col) {
    printf("Matrix (%dx%d):\n", row, col);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", value[i][j]);
        }
        printf("\n");
    }
}
