#include <cstdio>
#define _STR(_x_) #_x_
#define STR(_x_) _STR(_x_)
#define LOG(_fmt_, _args_...)                         \
        printf("["__FILE__"("STR(__LINE__)") in %s at "\
          __DATE__" "__TIME__"]" _fmt_, __func__, ##_args_)

void test() {
    LOG("i = %d, j = %d\n", 123, 456);
}

int main() {
    test();
    return 0;
}
