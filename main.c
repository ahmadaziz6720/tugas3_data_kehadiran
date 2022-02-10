#include <stdio.h>
#include <stdlib.h>

/*
Buatlah sebuah program dengan bahasa C yang
menerima nama, nim dan persentase kehadiran dalam
suatu kelas kemudian menampilkan ke layar nama dan
nim mahasiswa yang memiliki kehadiran kurang dari 80%.
Gunakan konsep structure dan array!
*/

/*KAMUS*/
struct mahasiswa {
    char nama[80];
    int nim;
    float kehadiran;
};
/*ALGORITMA*/

int main()
{
    int jml=0;
    printf("Masukkan Jumlah Mahasiswa: ");
    scanf("%d", &jml);

    struct mahasiswa ke[3] = {{"Ahmad Aziz", 13220034, 99.9}};

    for (int i=0; i<jml-1; ++i){
        printf("Nama: ");
        scanf("%s", &ke[i].nama);
        printf("NIM: ");
        scanf("%d", &ke[i].nim);
        printf("Kehadiran: ");
        scanf("%d", &ke[i].kehadiran);
    }

    printf("nama: %s\n", ke[1].nama);
    printf("NIM: %d\n", ke[1].nim);
    printf("kehadiran: %.2f\n", ke[1].kehadiran);

    return 0;
}
