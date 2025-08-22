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
    char searchName[50];
    int i, j, found = 0;

    printf("Nhap ten sinh vien can xoa: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = 0;

    for(i = 0; i < n; i++) {
        if(strcmp(students[i].name, searchName) == 0) {
            found = 1;
            for(j = i; j < n - 1; j++) {
                students[j] = students[j + 1];
            }
            n--;
            break;
        }
    }

    if(!found) {
        printf("Khong tim thay sinh vien ten %s\n", searchName);
    }

    printf("\nDanh sach sinh vien sau khi xoa:\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}
