#include <stdio.h>
#include <string.h>

int main() {

    int pilihan;
    char hari[20];
    char lanjut;

    int jumlahOrang;
    int totalOrangHarian = 0;

    // Penanda cluster
    int cluster1 = 0; // Kapernaum, Silo, Kana
    int cluster2 = 0; // Mamre, Nazareth
    int cluster3 = 0; // Pniel, Jati

    printf("===== SISTEM OPERASIONAL LAUNDRY DEL =====\n");

    printf("Masukkan hari operasional (Senin-Jumat): ");
    scanf("%s", hari);

    if (strcmp(hari, "Sabtu") == 0 || strcmp(hari, "Minggu") == 0) {
        printf("Laundry tidak beroperasi pada %s.\n", hari);
        return 0;
    }

    do {
        printf("\nDaftar Asrama:\n");
        printf("1. Kapernaum\n");
        printf("2. Silo\n");
        printf("3. Pniel\n");
        printf("4. Jati\n");
        printf("5. Mamre\n");
        printf("6. Nazareth\n");
        printf("7. Kana\n");

        printf("Pilih nomor asrama: ");
        scanf("%d", &pilihan);

        // CEK CLUSTER
        if (pilihan == 1 || pilihan == 2 || pilihan == 7) {
            if (cluster1 == 1) {
                printf("ERROR: Asrama berdekatan sudah dijadwalkan hari ini!\n");
                continue;
            }
            cluster1 = 1;
        }
        else if (pilihan == 5 || pilihan == 6) {
            if (cluster2 == 1) {
                printf("ERROR: Asrama berdekatan sudah dijadwalkan hari ini!\n");
                continue;
            }
            cluster2 = 1;
        }
        else if (pilihan == 3 || pilihan == 4) {
            if (cluster3 == 1) {
                printf("ERROR: Asrama berdekatan sudah dijadwalkan hari ini!\n");
                continue;
            }
            cluster3 = 1;
        }
        else {
            printf("Asrama tidak valid!\n");
            continue;
        }

        printf("Masukkan jumlah orang di asrama tersebut: ");
        scanf("%d", &jumlahOrang);

        totalOrangHarian += jumlahOrang;

        printf("Pengambilan untuk asrama berhasil dijadwalkan.\n");

        printf("Tambah jadwal lagi? (y/n): ");
        scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');

    printf("\n===== LAPORAN HARI %s =====\n", hari);
    printf("Total Orang Terjadwal Hari Ini: %d\n", totalOrangHarian);
    printf("=================================\n");

    return 0;
}