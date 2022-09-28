#include "main.h"
#include <stdio.h>
#include <math.h>

float costo(float radio, float area)
{
    float costo, aRec, y;
    y = (area - 2*M_PI*pow(radio, 2)) / (2 * M_PI * radio);
    arearec = y * (2 * M_PI * radio);
    costo = aRec * (0.0001);
    costo = costo * 2.45;
    return (costo);
}
