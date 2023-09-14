#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <math.h>

void solveLinearEquations(double a1, double b1, double c1, double a2, double b2, double c2) {
    double x, y;
    double epsilon = 1e-10;  // Ð? chính xác epsilon d? ki?m tra di?u ki?n d?ng
    
    // Kh?i t?o giá tr? ban d?u cho x và y
    x = 0.0;
    y = 0.0;
    
    // Vòng l?p
    while (1) {
        double x_new, y_new;
        
        // Tính giá tr? m?i c?a x và y
        x_new = (c1 - b1 * y) / a1;
        y_new = (c2 - a2 * x) / b2;
        
        // Ki?m tra di?u ki?n d?ng
        if (fabs(x_new - x) < epsilon && fabs(y_new - y) < epsilon) {
            break;  // Thoát kh?i vòng l?p n?u d?t du?c d? chính xác d?
        }
        
        // C?p nh?t giá tr? c?a x và y
        x = x_new;
        y = y_new;
    }
    
    // In k?t qu?
    printf("x = %lf\n", x);
    printf("y = %lf\n", y);
}

int main() {
    double a1, b1, c1, a2, b2, c2;
    
    printf("Nh?p a1: ");
    scanf("%lf", &a1);
    printf("Nh?p b1: ");
    scanf("%lf", &b1);
    printf("Nh?p c1: ");
    scanf("%lf", &c1);
    printf("Nh?p a2: ");
    scanf("%lf", &a2);
    printf("Nh?p b2: ");
    scanf("%lf", &b2);
    printf("Nh?p c2: ");
    scanf("%lf", &c2);
    
    solveLinearEquations(a1, b1, c1, a2, b2, c2);
    
    return 0;
}
