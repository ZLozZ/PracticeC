#include <stdio.h>

void generateBinaryStrings(int n, char *str, int index) {
    if (index == n) {
        // Đã đạt được độ dài mong muốn, in chuỗi và kết thúc hàm
        printf("%s\n", str);
        return;
    }

    // Đặt '0' và thực hiện đệ quy
    str[index] = '0';
    generateBinaryStrings(n, str, index + 1);

    // Đặt '1' và thực hiện đệ quy
    str[index] = '1';
    generateBinaryStrings(n, str, index + 1);
}

int main() {
    int n;
    printf("Nhap vao do dai chuoi n: ");
    scanf("%d", &n);

    char binaryString[n + 1]; // +1 để lưu ký tự kết thúc chuỗi '\0'
    binaryString[n] = '\0';   // Đặt ký tự kết thúc chuỗi

    printf("Cac chuoi nhi phan co do dai %d la:\n", n);
    generateBinaryStrings(n, binaryString, 0);

    return 0;
}
