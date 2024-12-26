#include <bits/stdc++.h>
using namespace std;
 double a,b,c,d;
 double guess1 , guess2;
double f(double x) {
    return ((a*x*x*x) + (b*x*x) + c*x + d);
    //x^3 - 4x -9;
}
void regulafalsi() {
    double tolerance = 1e-17; int maxIterations = 100;
    double x1=guess1,x2=guess2;
    double x3 = x1;
    int iteration = 0;
    while (iteration < maxIterations) {
        x3 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
        printf("x--%.15lf f(x) -- %.15lf \n",x3,f(x3));
        if (fabs(f(x3)) < tolerance) {
            return;
        }
        if (f(x1) * f(x3) < 0) {
            x2 = x3; 
        } else {
            x1 = x3; 
        }
        iteration++;
    }
    
}
    

int main() {
    cin >>a>>b>>c>>d;
    cin >> guess1 >> guess2;
    regulafalsi();
}