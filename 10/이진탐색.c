#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1; // 배열의 마지막 인덱스

    while (start <= end) { // start가 end보다 작거나 같을 때까지 반복
        int mid = (start + end) / 2; // 중간 인덱스 계산

        if (arr[mid] == target) { // target을 찾으면 mid 인덱스 반환
            return mid;
        } else if (arr[mid] < target) { // target이 mid보다 크면 오른쪽 절반 탐색
            start = mid + 1;
        } else { // target이 mid보다 작으면 왼쪽 절반 탐색
            end = mid - 1;
        }
    }

    return -1;
}

int main(void)
{
    int arr[100];
    int size;
    int target;

    printf("배열의 크기를 입력하세요: ");
    scanf("%d", &size);

    printf("오름차순으로 정렬된 배열을 입력하세요:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("찾을 값을 입력하세요: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result == -1) {
        printf("찾는 값이 없습니다.\n");
    } else {
        printf("%d은(는) 배열의 %d번 인덱스에 있습니다.\n", target, result);
    }

    return 0;
}