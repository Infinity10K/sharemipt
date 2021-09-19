#include <stdio.h>
#include <math.h>

void findRoots(float a, float b, float c){
    if (a == 0)
        printf("It is not quadratic equation!");
        
    else {
        float D = b * b - 4 * a * c;
        float aa = 2 * a;
        
        if (D == 0)
            printf("x1 = x2 = %.3f", - b / aa);
            
        else if (D > 0) {
            float sD = sqrt(D);
            float x1 = (-b + sD) / aa;
            float x2 = (-b - sD) / aa;
            
            printf("x1 = %.3f\nx2 = %.3f", x1, x2);
        }

        else {
            printf("No real roots");
        }
    }
    printf("\n\n");
}


int main(){
    float a, b, c;
    
    /*
    printf("Input a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    findRoots(a, b, c);
    */

    findRoots(0, 1, 2);
    findRoots(1, 2, 1);
    findRoots(1, 2, 3);
    findRoots(1, 3, 2);
    findRoots(.15, .41, .187);
    findRoots(1, 0, 0);

    return 0;
}
