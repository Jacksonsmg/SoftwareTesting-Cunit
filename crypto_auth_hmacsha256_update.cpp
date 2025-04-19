#include "crypto_auth_hmacsha256_update.h"
#include <iostream>
#include <cstring>
#include <cstddef>

using namespace std;

int crypto_auth_hmacsha256_update(const char* message, size_t length) {
    if (message == nullptr || length == 0) {
        cout << "Error: Invalid input" << endl;
        return -1;
    }

    cout << "Processing message of length " << length << ": ";
    for (size_t i = 0; i < length; ++i) {
        cout << message[i];
    }
    cout << endl;

    return 0;
}
