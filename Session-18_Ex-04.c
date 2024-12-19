#include<stdio.h>
#include<string.h>
struct Student
    {
        int id;
        char name[100];
        int age;
        char phoneNumber[100];
    };
int main(){
    struct Student student[50];
    for (int i = 0; i < 5; i++)
    {
        printf("Nhap thong tin sinh vien thu %d\n",i+1);
        printf("Nhap ten : ");
        fgets(student[i].name,sizeof(student[i].name),stdin);
        printf("Nhap tuoi : ");
        scanf("%d",&student[i].age);
        printf("Nhap so dien thoai : ");
        fflush(stdin);
        fgets(student[i].phoneNumber,sizeof(student[i].phoneNumber),stdin);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Thong tin sinh vien thu %d\n",i+1);
        printf("ID : %d\n",i+1);
        printf("Ten : %s\n",student[i].name);
        printf("Tuoi : %d\n",student[i].age);
        printf("So dien thoai : %s\n",student[i].phoneNumber);
    }
}