#include <stdio.h>
#include <stdint.h>

/* Moves the cursor to the beginning, then to the nth character. */
#define movex(n) "\033[50D\033[" #n "C"

#define prntsz(type) _prntsz(#type, sizeof(type))
void _prntsz(const char *type, size_t sz) {
        printf("%s:" movex(20) "%lu %s" movex(35) "%lu bits\n", type, sz, sz > 1 ? "bytes" : "byte", sz * 8); 
}

int main(int argc, const char **argv) {
        printf("Type" movex(20) "Size(bytes)" movex(35) "Size(bits)\n");
        printf("---------------------------------------------\n");

        prntsz(char);
        prntsz(short);
        prntsz(int);
        prntsz(long);
        prntsz(long long);

        printf("\n");

        prntsz(float);
        prntsz(double);
        prntsz(long double);

        printf("\n");

        prntsz(size_t);

        prntsz(int8_t);
        prntsz(int16_t);
        prntsz(int32_t);
        prntsz(int64_t);

        prntsz(uint8_t);
        prntsz(uint16_t);
        prntsz(uint32_t);
        prntsz(uint64_t);

        return 0;
}
