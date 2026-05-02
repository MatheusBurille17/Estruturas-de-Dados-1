#include <stdio.h>
#include <math.h>

void function(float h, float l, float c, float *parea, float *pvolume, float *pdiagonal){
    *parea = 2 * (h * l + h * c + l * c);
    *pvolume = h * l * c;
    *pdiagonal = sqrt(pow(h, 2)+pow(l, 2)+pow(c, 2));
}


int main() {
    float h, l, c, area, volume, diagonal;
    
    scanf("%f %f %f", &h, &l, &c);
    
    function(h, l, c, &area, &volume, &diagonal);
    
    printf("area: %.1f\nvolume: %.1f\ncomprimento da diagonal: %.1f", area, volume, diagonal);
    

    return 0;
}