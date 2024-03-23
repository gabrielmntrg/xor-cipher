#include <stdio.h>
#include <string.h>

int main() {
    // Sets the original message
    const char *message = "Secret text";
    printf("Text: %s\n", message);

    // Calculates message length
    size_t message_len = strlen(message);

    // Generates a random key of the same size as the message
    unsigned char key[message_len];
    FILE *urandom = fopen("/dev/urandom", "r");
    fread(key, 1, message_len, urandom);
    fclose(urandom);
    printf("Key: ");
    for (size_t i = 0; i < message_len; ++i) {
        printf("%02X ", key[i]);
    }
    printf("\n");

    // Encrypts the message using the generated key
    printf("CipherText: ");
    for (size_t i = 0; i < message_len; ++i) {
        printf("%02X ", message[i] ^ key[i]);
    }
    printf("\n");

    return 0;
}