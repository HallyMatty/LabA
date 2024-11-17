#pragma once
#define sizeofadd sizeof(char*)

struct eeelem {
    char* str;
    struct eeelem* xor;
};
typedef struct eeelem elem_t;

struct lllist {
    int size;
    elem_t* Plist;
};
typedef struct lllist list_t;

int StrLength(char* strptr);// ���������� ����� ������

int StrEqual(char* strptr1, char* strptr2);// ���������� �������, ���� ������ �����, ����� ����

void CopyStr(char* res, char* orig, int len);// �������� ������

elem_t* OpXor(elem_t* a, elem_t* b); // ��������� ��������� ����������� ��� � �������� ���������

elem_t* ListElem(list_t* list, int num); // ���������� ����� i-�� �������� ������ (NULL, ���� ������� �� ����������)

elem_t* CreateElem(char* string); // ������� ������� 

list_t* ListCreate(char* string);// ������� ������

void ListAdd(list_t* list, char* string); // ��������� ������� � ������

elem_t* FindElem(list_t* list, char* string, int* pindex); // ������� ������� � ������ �������

void RejoinElem(list_t* list, int index); // ��������� ��� ��������, ������� ����� �������� ����� ������

void DeleteElem(list_t* list, char* string, int delindex); // ������� ������� �� ������ ��� �� ������

void PrintList(list_t* list); // �������� ������
