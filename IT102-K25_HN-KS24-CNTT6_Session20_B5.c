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
    int searchId, i, found = 0;

    printf("Nhap id sinh vien muon sua: ");
    scanf("%d", &searchId);
    getchar();

    for(i = 0; i < n; i++) {
        if(students[i].id == searchId) {
            found = 1;
            printf("Nhap ten moi: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0;

            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            getchar();
            break;
        }
    }

    if(!found) {
        printf("Khong tim thay sinh vien co id %d\n", searchId);
    }

    printf("\nDanh sach sinh vien:\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}
