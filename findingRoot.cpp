#include <bits/stdc++.h>
using namespace std;
//ax^3 + bx^2 + c^x + d = 0

double bs(int a, int b, int c, int d) {
   double l = -2.0 , r = 2.0;
   int t= 400;
   double oldboy = 0;
   while(t--) {
    //x^3 - 4x - 9
     double m = (l+r)/2.0;
     double ans = (a*(m*m*m)) + (b * (m*m)) + (c*m) + d;
     double ansr = (a*((r)*(r)*(r))) + (b * ((r)*(r))) + (c*(r)) + d;
     double ansl =  (a*((l)*(l)*(l))) + (b * ((l)*(l))) + (c*(l)) + d;
     double err ;
    if(oldboy != 0) err = (ans - oldboy)/ans;
    oldboy = ans;
     cout << "l == " << l << " r == " << r << " x == " << m << " f(x) == " << ans << " error == " << err << endl ;
     if(ans == 0) break;
     else if(ansr==0) l = m;
     else if(ansl == 0) r=m; 
     if( ans*ansr <= 0) {
         l = m;
        //  r -= 1e-8;
     } else {r = m; } ;
   }
   return 1.0;
}
int main() {
   cout << bs(1.0,3.0,3.0,1.0);
}