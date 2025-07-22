#include <stdio.h>
#include <stdlib.h> // malloc, free 함수를 사용하기 위해 필요

int main(void) {
    int N, v;
    int cnt = 0;
    scanf("%d", &N);

    int* arr = (int*)malloc(sizeof(int) * N);
       
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &v);

    for (int i = 0; i < N; i++) {
        if (arr[i] == v) {
            cnt++;
        }
    }

    printf("%d\n", cnt);
    
    free(arr);

    return 0;
}