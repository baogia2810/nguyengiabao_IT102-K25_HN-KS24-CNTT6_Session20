#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Student st = {"Nguyen Van A", 20, "0123456789"};
    printf("Ten: %s\n", st.name);
    printf("Tuoi: %d\n", st.age);
    printf("So dien thoai: %s\n", st.phoneNumber);
    return 0;
}
