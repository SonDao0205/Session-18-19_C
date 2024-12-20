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
void deleteStudent(struct Student student[], int *count, char nameToDelete[]);

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
    printf("Nhap ten sinh vien can xoa : ");
    char deleteName[100];
    fgets(deleteName, sizeof(deleteName), stdin);
    deleteName[strcspn(deleteName, "\n")] = 0;
    deleteStudent(student, &count, deleteName);
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
void deleteStudent(struct Student student[], int *count, char deleteName[]) {
    int found = 0;
    for (int i = 0; deleteName[i]; i++) {
        deleteName[i] = toupper(deleteName[i]);
    }

    for (int i = 0; i < *count; i++) {
        char tempName[100];
        strcpy(tempName, student[i].name);
        for (int j = 0; tempName[j]; j++) {
            tempName[j] = toupper(tempName[j]);
        }

        if (strcmp(tempName, deleteName) == 0) {
            found = 1;
            for (int j = i; j < *count - 1; j++) {
                student[j] = student[j + 1];
            }
            (*count)--;
            return;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co ten '%s'.\n", deleteName);
    }
}
