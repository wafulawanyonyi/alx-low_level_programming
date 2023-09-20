#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

void generateRandomPassword(char *password, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charsetSize = sizeof(charset) - 1;

    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetSize;
        password[i] = charset[index];
    }

    password[length] = '\0';
}

int main() {
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];

    generateRandomPassword(password, PASSWORD_LENGTH);
    printf("Generated password: %s\n", password);

    return 0;
}

