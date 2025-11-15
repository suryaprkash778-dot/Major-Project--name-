#ifndef ENCRYPTION_H
#define ENCRYPTION_H

static inline void xor_encrypt(char *str, char key) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] ^= key;
    }
}

#endif // ENCRYPTION_H
