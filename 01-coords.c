// Template Solution Code
#include <stdio.h>

int main() {

    // Variables Initialization
     int x = 0, y = 0;
    
    // Read Input
    scanf("%d %d", &x, &y);
    
    
    // Logic and print output
    
    if(x == 0 && y== 0)
    {
        printf("Origin");
    }
    else if(x>0 && y>0)
    {
        printf("Quadrant 1");
    }
    else if(x < 0 && y > 0)
    {
        printf("Quadrant 2");
    }
    else if(x < 0 && y < 0)
    {
        printf("Quadrant 3");
    }
    else if(x>0 && y< 0)
    {
        printf("Quadrant 4");
    }


    return 0;
}