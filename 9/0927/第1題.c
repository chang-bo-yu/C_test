#include <stdio.h>

int main()
{
    char name[4][11], id[4][11], score[4][11], bonus[4][11];
    float percent[4];

    // 讀入 4 筆資料
    for (int i = 0; i < 4; i++) {
        scanf("%10s %10s %10s %10s %f", name[i], id[i], score[i], bonus[i], &percent[i]);
    }

    // 印出表頭
    printf("%-10s %-10s %-10s %-10s %-10s\n", "名字", "學號", "分數", "加減分", "百分比");

    // 印出資料
    for (int i = 0; i < 4; i++) {
        printf("%-10s %-10s %-10s %-10s %-9.1f%%\n", name[i], id[i], score[i], bonus[i], percent[i]);
    }

    return 0;}
