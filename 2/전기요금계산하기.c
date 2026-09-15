#include <stdio.h>

int main()
{
    int powerCosumed, costPerW;

    printf("사용한 전력량(kW)을 입력하세요: ");
    scanf("%d", &powerCosumed);
    printf("1kW당 요금을 입력하세요: ");
    scanf("%d", &costPerW);

    int totalCost = powerCosumed * costPerW;
    printf("총 전기 요금은 %d원입니다.\n", totalCost);

    return 0;
}