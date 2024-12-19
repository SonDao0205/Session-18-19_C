#include<stdio.h>
#include<string.h>
struct Student
    {
        char name[100];
        int age;
        char phoneNumber[100];
    };
int main(){
    struct Student student1;
    printf("Nhap ten : ");
    fgets(student1.name,sizeof(student1.name),stdin);
    printf("Nhap tuoi : ");
    scanf("%d",&student1.age);
    printf("Nhap so dien thoai : ");
    fflush(stdin);
    fgets(student1.phoneNumber,sizeof(student1.phoneNumber),stdin);
    printf("Ten sinh vien : %s\n",student1.name);
    printf("Tuoi : %d\n",student1.age);
    printf("So dien thoai :%s\n",student1.phoneNumber);
}