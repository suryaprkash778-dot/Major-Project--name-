#ifndef PASSWORDS_H
#define PASSWORDS_H

typedef struct {
    char website[50];
    char email[50];
    char password[50];
} Credential;

void add_credential();
void view_credentials();
void search_credential();
void delete_credential();

#endif
