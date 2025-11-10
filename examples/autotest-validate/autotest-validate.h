#ifndef AUTOTEST_VALIDATE_H
#define AUTOTEST_VALIDATE_H

#include <stdbool.h>

bool this_function_returns_true();
bool this_function_returns_false();
const char *my_username();
bool validate_username(const char *username);   // ← Add this line

#endif

