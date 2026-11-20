#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student {
    char name[21];
    int score[3];
    int total;
};

void input(struct Student arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        if (scanf("%20s", arr[i].name) != 1) return;
        arr[i].total = 0;
        for (j = 0; j < 3; j++) {
            if (scanf("%d", &arr[i].score[j]) != 1) return;
            arr[i].total += arr[i].score[j];
        }
    }
}

void sort(struct Student arr[], int n) {
    int i, j;
    struct Student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].total < arr[j + 1].total) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void output(struct Student arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", arr[i].name, arr[i].score[0], arr[i].score[1], arr[i].score[2], arr[i].total);
    }
}

int main(void) {
    struct Student arr[10] = {0};
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) return 0;
    input(arr, n);
    sort(arr, n);
    output(arr, n);
    return 0;
}
