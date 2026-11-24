
#include <stdio.h>

int main()
{
    int A[2][4], B[4][5], C[2][5] = {0};

    // 輸入矩陣 A
    printf("請輸入矩陣 A (2x4)：\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // 輸入矩陣 B
    printf("請輸入矩陣 B (4x5)：\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // 計算矩陣 C = A x B
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // 輸出矩陣 C
    printf("\n矩陣 C (A x B) 的結果：\n");

    for (int i = 0; i < 2; i++)
    {
        printf("row%d ->. ", i + 1);

        for (int j = 0; j < 5; j++)
        {
            printf("%d", C[i][j]);

            if (j < 4)
            {
                printf(", ");
            }
        }

        printf("\n");
    }

    return 0;
}

