#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "cli_set_idle_timeout.h"  // ✅ not the .cpp file

void test_valid_timeout() {
    CU_ASSERT(cli_set_idle_timeout(10) == 0);
}

void test_invalid_timeout() {
    CU_ASSERT(cli_set_idle_timeout(-5) == -1);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("IdleTimeoutSuite", 0, 0);
    CU_add_test(suite, "Test valid timeout", test_valid_timeout);
    CU_add_test(suite, "Test invalid timeout", test_invalid_timeout);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return 0;
}
