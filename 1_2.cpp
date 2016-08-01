#include <stdio.h>
#include <stdarg.h>
#define LOG(format, ...) printlog((__FILE__), (__LINE__), (__func__), format, ## __VA_ARGS__);
#define MAX_LINE 1024

void printlog(const char* filename, int lineno, const char* funcname, const char* format, ...) {
    char logInfo[MAX_LINE];
    va_list st;
    va_start(st, format);
    vsnprintf(logInfo, MAX_LINE, format, st);
    printf("[%s(%d) in %s]%s", filename, lineno, funcname,logInfo);
}

int main()
{
    LOG("i = %d, j = %d", 456, 789);
    return 0;
}
