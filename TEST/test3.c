#include<stdio.h>

unsigned short int getbits(int value);
int main()
{
    int z;
   z=getbits(0000000000000001);
   printf("%d",z);
    return 0;
}


unsigned short int getbits(int value) {
unsigned short int z;
z = value & 0x8000;
if (z == 0x8000) {
printf("这是个负数\n");
// z = ~value + 1;
z = ~(value & 0x7fff) + 1;
} else {
printf("这是个正数\n");
z = value;
}
return(z);
}
