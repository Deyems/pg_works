#include <stdio.h>

float toCelsius(float fahr){
    return ((5.0/9.0) * (fahr - 32.0));
}

int main(int argc, char const *argv[])
{
    float fahrVal = 222.0;
    printf("The equivalent of this fahrenheit value %.1f in celsius is %f", fahrVal, toCelsius(fahrVal));
    /* code */
    return 0;
}
