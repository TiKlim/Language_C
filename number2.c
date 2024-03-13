#include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv){

printf("sizeof uint8_t   (char)                        : %lu\n", sizeof(uint8_t)); //char (bytes)
printf("sizeof int8_t    (signed char)                 : %lu\n", sizeof(int8_t)); //signed char (bytes)
printf("sizeof uint8_t   (unsigned char)               : %lu\n", sizeof(uint8_t)); //unsigned char (bytes)
printf("sizeof int16_t   (short)                       : %lu\n", sizeof(int16_t)); //short (bytes)
printf("sizeof int16_t   (signed short)                : %lu\n", sizeof(int16_t)); //signed short (bytes)
printf("sizeof uint16_t  (unsigned short)              : %lu\n", sizeof(uint16_t)); //unsigned short (bytes)
printf("sizeof int16_t   (short int)                   : %lu\n", sizeof(int16_t)); //short int (bytes)
printf("sizeof uint16_t  (unsigned short int)          : %lu\n", sizeof(uint16_t)); //unsigned short int (bytes)
printf("sizeof int16_t   (int)                         : %lu\n", sizeof(int16_t)); //int (bytes)
printf("sizeof int16_t   (signed)                      : %lu\n", sizeof(int16_t)); //signed (bytes)
printf("sizeof int16_t   (signed int)                  : %lu\n", sizeof(int16_t)); //signed int (bytes)
printf("sizeof uint16_t  (unsigned)                    : %lu\n", sizeof(uint16_t)); //unsigned (bytes)
printf("sizeof uint16_t  (unsigned int)                : %lu\n", sizeof(uint16_t)); //unsigned int (bytes)
printf("sizeof float     (float)                       : %lu\n", sizeof(float)); //float (bytes)
printf("sizeof int32_t   (long)                        : %lu\n", sizeof(int32_t)); //long  (bytes)
printf("sizeof int32_t   (long int)                    : %lu\n", sizeof(int32_t)); //long int (bytes)
printf("sizeof int32_t   (signed long)                 : %lu\n", sizeof(int32_t)); //signed long (bytes)
printf("sizeof int32_t   (signed long int)             : %lu\n", sizeof(int32_t)); //signed long int (bytes)
printf("sizeof uint32_t  (unsigned long)               : %lu\n", sizeof(uint32_t)); //unsigned long (bytes)
printf("sizeof uint32_t  (unsigned long int)           : %lu\n", sizeof(uint32_t)); //unsigned long int (bytes)
printf("sizeof uint64_t  (unsigned long long)          : %lu\n", sizeof(uint64_t)); //unsigned long long (bytes)
printf("sizeof uint64_t  (unsigned long long int)      : %lu\n", sizeof(uint64_t)); //unsigned long long int (bytes)
printf("sizeof int64_t   (long long)                   : %lu\n", sizeof(int64_t)); //long long (bytes)
printf("sizeof int64_t   (long long int)               : %lu\n", sizeof(int64_t)); //long long int (bytes)
printf("sizeof int64_t   (signed long long)            : %lu\n", sizeof(int64_t)); //signed long long (bytes)
printf("sizeof int64_t   (signed long long int)        : %lu\n", sizeof(int64_t)); //signed long long int (bytes)
printf("sizeof double    (double)                      : %lu\n", sizeof(double)); //double (bytes)
printf("sizeof double    (long double)                 : %lu\n", sizeof(double)); //long double (bytes)

return 0;
}
