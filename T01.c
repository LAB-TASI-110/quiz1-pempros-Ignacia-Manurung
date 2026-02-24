#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    int porsi;
    int total = 0;
    int harga = 0;

    printf("=== SISTEM TRANSAKSI WARUNG MAK ROBY ===\n");

    while (1) {
        printf("\nMasukkan Kode Menu (atau END untuk selesai): ");
        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        printf("Masukkan Porsi Butet: ");
        scanf("%d", &porsi);

        // Daftar harga menu (contoh harga)
        if (strcmp(kode, "NGS") == 0) {
            harga = 15000;
        }
        else if (strcmp(kode, "AP") == 0) {
            harga = 12000;
        }
        else if (strcmp(kode, "GG") == 0) {
            harga = 10000;
        }
        else {
            printf("Kode tidak valid!\n");
            continue;
        }

        total += harga * porsi;
    }

    // Cetak Struk
    printf("\n========== STRUK PEMBAYARAN ==========\n");
    printf("Total Belanja : Rp %d\n", total);

    if (total >= 200000) {
        printf("Kupon         : Kuning\n");
    }
    else if (total >= 100000) {
        printf("Kupon         : Biru\n");
    }
    else {
        printf("Kupon         : Tidak ada\n");
    }

    printf("======================================\n");

    return 0;
}