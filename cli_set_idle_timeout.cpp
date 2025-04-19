#include "cli_set_idle_timeout.h"

int cli_set_idle_timeout(int timeout) {
    if (timeout < 0) return -1;
    return 0;
}
