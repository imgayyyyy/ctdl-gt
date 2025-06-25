//
// Created by DELL on 24/06/2025.
//
#include<stdio.h>
struct Student {
    int id;
    char name[50];
    int age;
};
int main() {
    struct Student student[5];
    for(int i = 0; i < 5; i++) {
        printf("thong tin sinh vien %d",i+1);
        printf("\nnhap ID:");
        scanf("%d", &student[i].id);
        getchar();
        printf("\nnhap name:");
        fgets(student[i].name, sizeof(student[i].name), stdin);
        fflush(stdin);
        printf("\nnhap age");
        scanf("%d", &student[i].age);
    }
    printf("\nnhap ID sinh vien can tim");
    int idSearch;
    int find=-1;
    scanf("%d",&idSearch);
    for (int i=0;i<5;i++) {
        if (student[i].id==idSearch) {
            printf("\nthong tin sinh vien %d",i+1);
            printf("\nname : %s",student[i].name);
            printf("\nage : %d",student[i].age);
            find=i;
            break;
        }
    }
    if (find==-1) {
        printf("\nkhong tim thay thong tin sinh vien");
    }



    return 0;
}