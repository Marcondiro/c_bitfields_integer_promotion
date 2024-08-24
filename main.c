#include <stdio.h>

struct s1{
  unsigned int a: 20;
  unsigned int _: 12;
};

struct s2 {
  unsigned long long b: 40;
  unsigned long long _: 24;
};

int main()
{
    struct s1 s1;
    struct s2 s2;
    
    s1.a = 2;
    s2.b = 2;
    
    unsigned int a = s1.a << 19;
    unsigned long long b = s2.b << 39;

    printf("0x%x\n", a);    //both gcc and clang: 0x100000
    printf("0x%llx\n", b);  //gcc: 0x0  clang: 0x10000000000

    return 0;
}

/*
Debian clang version 18.1.8
gcc (Debian 12.2.0-14) 12.2.0
*/
