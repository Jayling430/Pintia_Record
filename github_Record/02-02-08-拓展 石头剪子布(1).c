#include <stdio.h>

int main() {
    int user, computer;
    scanf("%d", &user);
    scanf("%d", &computer);

    if (user == computer) {
        printf("平局");
    } else if ((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1)) {
        printf("You Win!");
    } else {
        printf("Computer Win!");
    }

    return 0;
}
