#ifndef MYLIST_H_INCLUDED
#define MYLIST_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P)     (P) -> info
#define next(P)     (P) -> next
#define first(L)    ((L).first)
#define last(L)     ((L).last)
#define alokasi(P)  (P) -> alokasi
#define nil NULL

struct mahasiswa {
    string nama;
    string nim;
    float ipk;
};

typedef mahasiswa infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList_1301204289(List &L);
infotype newMahasiswa_1301204289(string nama, string nim, float ipk);
address newElement_1301204289(infotype dataBaru);
void insertFirst_1301204289(List &L, address P);
void insertLast_1301204289(List &L, address P);
address deleteFirst_1301204289(List &L);
address deleteLast_1301204289(List &L);
address printList_1301204289(List L);
void insertData_1301204289(List &L, int x);


#endif // MYLIST_H_INCLUDED
