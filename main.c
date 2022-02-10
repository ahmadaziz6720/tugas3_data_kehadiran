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
    printf("\n");

    struct mahasiswa ke[40] = {{"Ahmad Aziz", 13220034, 99.9}};

    for (int i=0; i<=jml-1; ++i){
        printf("Masukkan data mahasiswa ke-%d", i+1);
        printf("\n");
        printf("Nama: ");
        scanf("%s", &ke[i].nama);
        printf("NIM: ");
        scanf("%d", &ke[i].nim);
        printf("Kehadiran: ");
        scanf("%f", &ke[i].kehadiran);
        printf("\n");
    }
    printf("Berikut adalah data mahasiswa dengan kehadiran kurang dari 80%\n\n");

    for (int i=0; i<=jml-1; ++i){
        if(ke[i].kehadiran<80.0){
            printf("nama: %s\n", ke[i].nama);
            printf("NIM: %d\n", ke[i].nim);
            printf("kehadiran: %.2f", ke[i].kehadiran);
            printf("%");
            printf("\n");
        }
    }
    return 0;
}
