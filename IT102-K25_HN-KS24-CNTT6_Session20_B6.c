#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Student students[50] = {
        {1, "An", 20, "0123456789"},
        {2, "Binh", 21, "0987654321"},
        {3, "Cuong", 22, "0909090909"},
        {4, "Dung", 19, "0911222333"},
        {5, "Hien", 23, "0922334455"}
    };
    int n = 5;

    printf("Nhap thong tin sinh vien moi:\n");
    students[n].id = n + 1;

    printf("Nhap ten: ");
    fgets(students[n].name, sizeof(students[n].name), stdin);
    students[n].name[strcspn(students[n].name, "\n")] = 0;

    printf("Nhap tuoi: ");
    scanf("%d", &students[n].age);
    getchar();

    printf("Nhap so dien thoai: ");
    fgets(students[n].phoneNumber, sizeof(students[n].phoneNumber), stdin);
    students[n].phoneNumber[strcspn(students[n].phoneNumber, "\n")] = 0;

    n++;

    printf("\nDanh sach sinh vien:\n");
    for(int i = 0; i < n; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}
