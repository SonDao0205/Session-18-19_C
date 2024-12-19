#include<stdio.h>
#include<string.h>
struct Student
    {
        char name[100];
        int age;
        char phoneNumber[100];
    };
int main(){
   
    struct Student student1 =
    {
        "Dao Truong Son",
        18,
        "0384977176"
    };
    printf("Ten sinh vien : %s\n",student1.name);
    printf("Tuoi : %d\n",student1.age);
    printf("So dien thoai :%s\n",student1.phoneNumber);
}