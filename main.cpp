#include <stdio.h>

void GenerateCheckSum( char *buf, long bufLen )
{
        unsigned sum = 0;
        long i;
        for( i = 0L; i < bufLen; i++ )
        {
            unsigned val = (unsigned)buf[i];
            sum += val;
            printf("Char: %02c Val: %3u\n", buf[i], val); // print value of each byte
        }
        printf("CheckSum = %03d\n", (unsigned)( sum % 256 ) ); // print result
}

int main()
{
    char msg[] = "8=FIX.4.2\0019=49\00135=5\00134=1\00149=ARCA\00152=20150916-04:14:05.306\00156=TW\001";
    int len = sizeof(msg) / sizeof(msg[0]);
    GenerateCheckSum(msg, len);
}
