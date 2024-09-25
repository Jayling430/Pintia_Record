#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[20];
    scanf("%s", input);

    char *token = strtok(input, "-");
    char *parts[3];
    int index = 0;

    while (token != NULL) {
        parts[index++] = token;
        token = strtok(NULL, "-");
    }

    if (strlen(parts[2]) == 4) {
        printf("%s-%02d-%02d\n", parts[2], atoi(parts[0]), atoi(parts[1]));
    } else if (strlen(parts[0]) == 4) {
        printf("%s-%02d-%02d\n", parts[0], atoi(parts[1]), atoi(parts[2]));
    } else {
        printf("%s-%02d-%02d\n", parts[1], atoi(parts[0]), atoi(parts[2]));
    }

    return 0;
}
