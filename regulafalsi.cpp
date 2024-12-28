#include <bits/stdc++.h>
using namespace std;
 double a,b,c,d;
 double guess1 , guess2;
double f(double x) {
    return ((a*x*x*x) + (b*x*x) + c*x + d);
    //x^3 - 4x -9;
}
void regulafalsi() {
    double tolerance = 1e-16; int maxIterations = 1000000;
    double x1=guess1,x2=guess2;
    double x3 ;
    int iteration = 0;
    while (iteration < maxIterations) {
         if (f(x1) * f(x2) > 0) {
        cout << "Invalid initial guesses. f(x1) and f(x2) must have opposite signs." << endl;
        return;
       }
        // xnew = (x1*y2 - x2*y1)/ (y2-y1);
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
// x^3 + 3x^2+ 3x+ 1 