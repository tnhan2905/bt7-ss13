#include <stdio.h>
#include <stdlib.h>

void tao_ma_tran(int hang, int cot, float** ma_tran) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap gia tri cho phan tu o vi tri [%d,%d]: ", i+1, j+1);
            scanf("%f", &ma_tran[i][j]);
        }
    }
}
void in_ma_tran(int hang, int cot, float** ma_tran) {
    printf("\nMa tran vua nhap la :\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%.2f ", ma_tran[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int hang, cot;

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &hang);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cot);

    float** ma_tran = (float**)malloc(hang * sizeof(float*));
    for (int i = 0; i < hang; i++) {
        ma_tran[i] = (float*)malloc(cot * sizeof(float));
    }
    tao_ma_tran(hang, cot, ma_tran);

    in_ma_tran(hang, cot, ma_tran);
    for (int i = 0; i < hang; i++) {
        free(ma_tran[i]);
    }
    free(ma_tran);

    return 0;
}