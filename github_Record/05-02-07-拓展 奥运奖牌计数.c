#include <stdio.h>

int main() {
    int n, gold, silver, bronze;
    int total_gold = 0, total_silver = 0, total_bronze = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &gold, &silver, &bronze);
        total_gold += gold;
        total_silver += silver;
        total_bronze += bronze;
    }

    int total_medals = total_gold + total_silver + total_bronze;
    printf("%d %d %d %d\n", total_gold, total_silver, total_bronze, total_medals);

    return 0;
}
