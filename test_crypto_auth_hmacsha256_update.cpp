#include "crypto_auth_hmacsha256_update.h"
#include "cli_set_idle_timeout.h"

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char* msg = "Test message";
    crypto_auth_hmacsha256_update(msg, strlen(msg));  // ✅ no error now
    return 0;
}
