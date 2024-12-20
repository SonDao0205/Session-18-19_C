#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Student {
    int id;
    char name[100];
    int age;
    char phoneNumber[100];
};

void showStudent(struct Student student[], int count);
void insertStudent(struct Student student[], int *count, int position, struct Student newStudent);

int main() {
    struct Student student[50]; 
    int count = 5; 
    student[0].id = 1;
    strcpy(student[0].name, "Dao Truong Son");
    student[0].age = 18;
    strcpy(student[0].phoneNumber, "0384977176");

    student[1].id = 2;
    strcpy(student[1].name, "Son Truong Dao");
    student[1].age = 19;
    strcpy(student[1].phoneNumber, "0384977177");

    student[2].id = 3;
    strcpy(student[2].name, "Son Dao Truong");
    student[2].age = 20;
    strcpy(student[2].phoneNumber, "0384977178");

    student[3].id = 4;
    strcpy(student[3].name, "Truong Son Dao");
    student[3].age = 21;
    strcpy(student[3].phoneNumber, "0384977179");

    student[4].id = 5;
    strcpy(student[4].name, "Dao Son Truong");
    student[4].age = 22;
    strcpy(student[4].phoneNumber, "0384977180");
    showStudent(student,count);
    int position;
    struct Student newStudent;
    printf("Nhap vi tri can chen : ");
    scanf("%d", &position);
    if (position < 0 || position > count) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
    printf("Nhap ID: ");
    scanf("%d", &newStudent.id);
    fflush(stdin);
    printf("Nhap ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);
    fflush(stdin);
    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    insertStudent(student, &count, position, newStudent);
    showStudent(student,count);

}
void showStudent(struct Student student[], int count) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < count; i++) {
        printf("ID : %d\n", student[i].id);
        printf("Ten : %s\n", student[i].name);
        printf("Tuoi : %d\n", student[i].age);
        printf("So dien thoai : %s\n", student[i].phoneNumber);
        printf("\n");
    }
}
void insertStudent(struct Student student[], int *count, int position, struct Student newStudent) {
    for (int i = *count; i > position; i--) {
        student[i] = student[i - 1];
    }
    student[position] = newStudent;
    (*count)++;
}