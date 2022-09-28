#include "main.h"
#include <stdio.h>
#include <math.h>

float area(int volumen)
{
    float AT , radio;
    radio = 2 * volumen;
    radio = radio / 12.56;
    radio = cbrt(radio);

    AT = 2 * M_PI * pow(radio, 2) + 2 * M_PI * radio * (volumen / (M_PI * radio));
    return (AT);
}
