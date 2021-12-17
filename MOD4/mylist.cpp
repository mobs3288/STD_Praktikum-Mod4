#include "mylist.h"

// Fungsi untuk membuat List
void createList_1301204289(List &L) {
    first(L) = nil;
}

// Fungsi untuk memasukan data yang akan di inputkan
infotype newMahasiswa_1301204289(string nama, string nim, float ipk) {
    infotype mhs;

    mhs.nama = nama;
    mhs.nim = nim;
    mhs.ipk = ipk;

    return mhs;
}

// Fungsi untuk membuat element baru pada list
address newElement_1301204289(infotype dataBaru) {
    address P = new elmList;
    info(P) = dataBaru;
    next(P) = nil;

    return P;
}

// Fungsi untuk memasukkan nilai - nilai ke uurtan pertama
void insertFirst_1301204289(List &L, address P) {
    if (first(L) == nil) {
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
}

// Fungsi untuk memasukkan nilai - nilai ke urutan list terakhir
void insertLast_1301204289(List &L, address P) {
    address Q;

    if (first(L) == nil) {
        first(L) = P;
    } else {
        Q = first(L);

        while (next(Q) != nil) {
            Q = next(Q);
        }
        next(Q) = P;
    }

}

// Menghapus elemen pertama pada list
address deleteFirst_1301204289(List &L) {
    address P = first(L);

    if (next(first(L)) == nil) {
        first(L) = nil;
    } else {
        first(L) = next(first(L));
    }
    next(P) = nil;

    return P;
}

// Menghapus elemen terakhir pada list
address deleteLast_1301204289(List &L) {
    address P;
    address Q;

    if (first(L) == nil) {
        cout << "LIST KOSONG" << endl;
        P = nil;
    } else if (next(first(L)) == nil) {
        P = first(L);
        first(L) = nil;
    } else {
        Q = first(L);
        while (next(next(Q)) != nil) {
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = nil;
    }

    return P;
}

// Fungsi untuk menampilkan seluruh list yang sudah di masukkan.
address printList_1301204289(List L) {
    address P;
    int i = 1;

    if (first(L) != nil) {
        P = first(L);

        while (P != nil) {
            cout << "[" << i << "]" << endl;
            cout << "Nama : " << info(P).nama << endl;
            cout << "NIM  : " << info(P).nim << endl;
            cout << "IPK  : " << info(P).ipk << endl;
            cout << "===========================" << endl;

            i++;
            P = next(P);
        }
    } else {
        cout << "List Kosong" << endl;
        cout << "---------------------------" << endl;
    }


    cout << "LIST SELESAI DITAMPILKAN!" << endl;
    cout << "===========================" << endl;

}
