#include "autotest-validate.h"
#include <stdbool.h>
#include <string.h>

bool this_function_returns_true()
{
    return true;
}

bool this_function_returns_false()
{
    return false;
}

const char *my_username()
{
    return "Siddjove"; // ✅ Your GitHub username
}


bool validate_username(const char *username)
{
    return (strcmp(username, my_username()) == 0);
}
