//
// Created by DELL on 31/07/2025.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee {
    int id;
    char name[100];
    int age;
    char homeTown[100];
    char division[100];
    char phone[10];
    struct Employee *next;
} Employee;

typedef struct EmployeeOut {
    int id;
    char name[100];
    int age;
    char homeTown[100];
    char division[100];
    char phone[12];
    struct EmployeeOut *next;
    struct EmployeeOut *prev;
} EmployeeOut;

typedef struct {
    Employee* head;
} EmployeeList;

typedef struct {
    EmployeeOut* head;
    EmployeeOut* tail;
} EmployeeOutList;

void initEmployeeList(EmployeeList* list) {
    list->head = NULL;
}

void initEmployeeOutList(EmployeeOutList* list) {
    list->head = NULL;
    list->tail = NULL;
}

void addNv(EmployeeList* list) {
    Employee* newEmployee = malloc(sizeof(Employee));
    printf("Nhap ID: ");
    scanf("%d", &newEmployee->id);
    getchar();
    printf("Nhap ten: ");
    fgets(newEmployee->name, 100, stdin);
    newEmployee->name[strcspn(newEmployee->name, "\n")] = 0;
    printf("Nhap tuoi: ");
    scanf("%d", &newEmployee->age);
    getchar();
    printf("Nhap que quan nhan vien: ");
    fgets(newEmployee->homeTown, 100, stdin);
    newEmployee->homeTown[strcspn(newEmployee->homeTown, "\n")] = 0;
    printf("Nhap phong ban truc thuoc: ");
    fgets(newEmployee->division, 100, stdin);
    newEmployee->division[strcspn(newEmployee->division, "\n")] = 0;
    printf("Nhap so dien thoai nhan vien (10 so): ");
    fgets(newEmployee->phone, 12, stdin);
    newEmployee->phone[strcspn(newEmployee->phone, "\n")] = 0;
    newEmployee->next = list->head;
    list->head = newEmployee;
    printf("Them nhan vien thanh cong\n");
}

void displayEmployees(EmployeeList* list) {
    Employee* current = list->head;
    if (!current) {
        printf("Danh sach trong!\n");
        return;
    }
    printf("\nDanh sach nhan vien:\n");
    while (current) {
        printf("ID: %d\n"
               "Ten: %s\n"
               "Tuoi: %d\n"
               "Que: %s\n"
               "Phong ban: %s\n"
               "SDT: %s\n\n",
               current->id,
               current->name,
               current->age,
               current->homeTown,
               current->division,
               current->phone);
        current = current->next;
    }
}


void xoaNv(EmployeeList* list) {
    int id;
    printf("Nhap ID nhan vien can xoa: ");
    scanf("%d", &id);
    getchar();

    Employee* current = list->head;
    Employee* prev = NULL;

    while (current && current->id != id) {
        prev = current;
        current = current->next;
    }

    if (!current) {
        printf("Khong tim thay nhan vien voi ID %d\n", id);
        return;
    }

    if (prev) {
        prev->next = current->next;
    } else {
        list->head = current->next;
    }

    free(current);
    printf("Xoa nhan vien thanh cong\n");
}

void update(EmployeeList* list) {
    int id;
    printf("Nhap ID nhan vien can cap nhat: ");
    scanf("%d", &id);
    getchar();

    Employee* current = list->head;
    while (current && current->id != id) {
        current = current->next;
    }

    if (!current) {
        printf("Khong tim thay nhan vien voi ID %d\n", id);
        return;
    }

    printf("Nhap ten moi: ");
    fgets(current->name, 100, stdin);
    current->name[strcspn(current->name, "\n")] = 0;
    printf("Nhap tuoi moi: ");
    scanf("%d", &current->age);
    getchar();
    printf("Nhap que quan moi: ");
    fgets(current->homeTown, 100, stdin);
    current->homeTown[strcspn(current->homeTown, "\n")] = 0;
    printf("Nhap phong ban moi: ");
    fgets(current->division, 100, stdin);
    current->division[strcspn(current->division, "\n")] = 0;
    printf("Nhap so dien thoai moi: ");
    fgets(current->phone, 12, stdin);
    current->phone[strcspn(current->phone, "\n")] = 0;
    printf("Cap nhat thong tin nhan vien thanh cong\n");
}

void diChuyenNhanVien(EmployeeList* list, EmployeeOutList* outList) {
    int id;
    printf("Nhap ID nhan vien nghi viec: ");
    scanf("%d", &id);
    getchar();

    Employee* current = list->head;
    Employee* prev = NULL;

    while (current && current->id != id) {
        prev = current;
        current = current->next;
    }

    if (!current) {
        printf("Khong tim thay nhan vien voi ID %d\n", id);
        return;
    }

    EmployeeOut* newOut = malloc(sizeof(EmployeeOut));
    newOut->id = current->id;
    strcpy(newOut->name, current->name);
    newOut->age = current->age;
    strcpy(newOut->homeTown, current->homeTown);
    strcpy(newOut->division, current->division);
    strcpy(newOut->phone, current->phone);
    newOut->next = NULL;
    newOut->prev = outList->tail;

    if (outList->head == NULL) {
        outList->head = newOut;
        outList->tail = newOut;
    } else {
        outList->tail->next = newOut;
        outList->tail = newOut;
    }

    if (prev) {
        prev->next = current->next;
    } else {
        list->head = current->next;
    }

    free(current);
    printf("Di chuyen nhan vien sang danh sach nghi viec thanh cong\n");
}

void sapXep(EmployeeList* list) {
    if (!list->head || !list->head->next) return;

    Employee* sorted = NULL;
    Employee* current = list->head;

    while (current) {
        Employee* next = current->next;
        if (!sorted || strcmp(current->division, sorted->division) <= 0) {
            current->next = sorted;
            sorted = current;
        } else {
            Employee* temp = sorted;
            while (temp->next && strcmp(temp->next->division, current->division) < 0) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = next;
    }
    list->head = sorted;
    printf("Sap xep nhan vien theo phong ban thanh cong\n");
}

void timKiem(EmployeeList* list) {
    char name[100];
    printf("Nhap ten nhan vien can tim: ");
    getchar();
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = 0;

    Employee* current = list->head;
    int found = 0;

    while (current) {
        if (strstr(current->name, name)) {
            printf("\nThong tin nhan vien:\n"
                   "ID: %d\n"
                   "Ten: %s\n"
                   "Tuoi: %d\n"
                   "Que: %s\n"
                   "Phong ban: %s\n"
                   "SDT: %s\n\n",
                   current->id,
                   current->name,
                   current->age,
                   current->homeTown,
                   current->division,
                   current->phone);
            found = 1;
        }
        current = current->next;
    }

    if (!found) {
        printf("Khong tim thay nhan vien voi ten %s\n", name);
    }
}

int main() {
    int choice;
    EmployeeList employeeList;
    EmployeeOutList employeeOutList;
    initEmployeeList(&employeeList);
    initEmployeeOutList(&employeeOutList);

    while (1) {
        printf("\n_______ EMPLOYEE MANAGER _______\n");
        printf("1. Them nhan vien\n");
        printf("2. Hien thi danh sach nhan vien\n");
        printf("3. Xoa nhan vien\n");
        printf("4. Cap nhat thong tin nhan vien\n");
        printf("5. Di chuyen nhan vien nghi viec\n");
        printf("6. Sap xep nhan vien theo phong ban\n");
        printf("7. Tim kiem nhan vien\n");
        printf("8. Hien thi danh sach nhan vien nghi viec\n");
        printf("9. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addNv(&employeeList);
                break;
            case 2:
                displayEmployees(&employeeList);
                break;
            case 3:
                xoaNv(&employeeList);
                break;
            case 4:
                update(&employeeList);
                break;
            case 5:
                diChuyenNhanVien(&employeeList, &employeeOutList);
                break;
            case 6:
                sapXep(&employeeList);
                break;
            case 7:
                timKiem(&employeeList);
                break;
            case 8:
                printf("Thoat chuong trinh\n");
                return 0;
            default:
                printf("Lua chon khong hop le\n");
                break;
        }
    }
}


