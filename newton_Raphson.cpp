#include <bits/stdc++.h>
using namespace std;
double a,b,c,d;
double guess1;

double f(double x) {
    return ((a*x*x*x) + (b*x*x) + c*x + d);
}

double f1(double x) {
    return ((a*3*x*x) + (b*2*x) + c);
}


void newton() {
    double tolerance = 1e-15; int maxIterations = 1000;
    double x1=guess1;
    int iteration = 0;
    while (iteration < maxIterations) {
        printf("%lf -- %lf\n",x1, f(x1));
        if(abs(f(x1)) < tolerance) break;
        x1 = x1 - (f(x1) / f1(x1));
        iteration++;
    }
    printf("%lf\n",x1);
}
    

int main() {
    cin >>a>>b>>c>>d;
    cin >> guess1;
    newton();
}