#include <stdio.h>

int main(){
    int in_hr, in_min, out_hr, out_min, hr, min, fee = 0;

    scanf("%d %d", &in_hr, &in_min);
    scanf("%d %d", &out_hr, &out_min);

    // Total minutes
    min = (out_hr * 60 + out_min) - (in_hr * 60 + in_min);
    // Transform into hour
    hr = min / 60;
    // Determine whether achieve 30 minutes
    min %= 60;
    
    if(min >= 30)
        min = 1;
    else
        min = 0;

    if(hr >= 4){ // Over 4 hours
        fee += (hr - 4) * 2 * 60 + min * 60 + 160 + 120;
    }      
    else if(hr >= 2){ // Between 2 to 4 hours
        fee += (hr - 2) * 2 * 40 + min * 40 + 120;
    }
    else // Less then 2 hours
        fee += hr * 2 * 30 + min * 30;

    printf("%d\n", fee);

    return 0;
}