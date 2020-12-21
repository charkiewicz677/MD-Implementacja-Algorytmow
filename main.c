#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define bity 16


struct new_int {
    char x[bity];
};

void print_int(struct new_int x){
    printf("%.16s", x.x);
}

int convert_to_decimal(struct new_int x){
    int decimal = 0;
    if(x.x[0] == '0'){
        for(int i=0; i<15; i++) if(x.x[15-i]!='0') decimal += pow(2, i);
    }

    return decimal;
}




int main()
{
    struct new_int a = {"0000000001010010"};
    printf("%d", convert_to_decimal(a));
}
