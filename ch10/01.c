#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct login {
    char id[21];
    char pw[21];
};

void pa10_01() {
    struct login data;
    int i;

    printf("ID? ");
    scanf_s("%20s", data.id, (unsigned int)sizeof(data.id));

    printf("Password? ");
    scanf_s("%20s", data.pw, (unsigned int)sizeof(data.pw));

    printf("ID : %s\n", data.id);
    printf("PW : ");
    for (i = 0; data.pw[i] != '\0'; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    pa10_01();
    return 0;
}
