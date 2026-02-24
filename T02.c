#include <stdio.h>

int main() {
    int N;
    
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);

    int nilai[N];
    
    printf("Masukkan deret nilai:\n");
    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    char kode;
    printf("Masukkan kode kelompok (A/B): ");
    scanf(" %c", &kode);

    int total = 0;
    for(int i = 0; i < N; i++) {
        if(kode == 'A' && (i % 2 == 0)) {
            total += nilai[i];
        }
        else if(kode == 'B' && (i % 2 == 1)) {
            total += nilai[i];
        }
    }

    printf("Total nilai kelompok %c = %d\n", kode, total);

    return 0;
}