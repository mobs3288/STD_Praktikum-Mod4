#include "mylist.h"

int main()
{
    List L;
    address P;
    infotype mhs;

    string nama;
    string nim;
    float ipk = 0;

    createList_1301204289(L);
    printList_1301204289(L);

    /*
    mhs = newMahasiswa_1301204289("Alice", "1301190202", 3.5);
    P = newElement_1301204289(mhs);
    insertFirs_1301204289t(L, P);

    mhs = newMahasiswa_1301204289("Bob", "1301190203", 4);
    P = newElement_1301204289(mhs);
    insertFirst_1301204289(L, P);

    printList_1301204289(L);

    mhs = newMahasiswa_1301204289("Chihaya", "1301190204", 3.6);
    P = newElement_1301204289(mhs);
    insertLast_1301204289(L, P);

    mhs = newMahasiswa_1301204289("Delta", "1301190205", 2.7);
    P = newElement_1301204289(mhs);
    insertLast_1301204289(L, P);

    mhs = newMahasiswa_1301204289("Euniche", "1301190201", 3.9);
    P = newElement_1301204289(mhs);
    insertFirst_1301204289(L, P);

    printList_1301204289(L);

    //deleteFirst_1301204289(L);
    //deleteLast_1301204289(L);

    //printList_1301204289(L);
    */

    // Perulangan yang akan terjadi apabila user tidak menginputkan nama = -
    while (nama != "-") {
        cout << "Nama : ";
        cin >> nama;

        // Kondisi yang akan terjadi apabila nama != -
        if (nama != "-") {
            cout << "Nim  : ";
            cin >> nim;

            cout << "Ipk  : ";
            cin >> ipk;

            mhs = newMahasiswa_1301204289(nama, nim, ipk);
            P = newElement_1301204289(mhs);
            insertLast_1301204289(L, P);
        }

        cout << endl;
    }

    printList_1301204289(L);
    cout << "####################" << endl;
    cout << "DELETE SAMPE KOSONG" << endl;
    cout << "####################" << endl;

    // Perulangan yang berfungsi untuk menghapus seluruh element pada list
    while (first(L) != nil) {
        deleteLast_1301204289(L);
        printList_1301204289(L);
    }


    return 0;
}
