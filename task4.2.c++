Proc1
#include <iostream>
using namespace std;
void PowerA3(double A, double &B) {
    B = A * A * A;
}
int main() {
double num1, num2, num3, num4, num5;
    double result1, result2, result3, result4, result5;


    cout << "Imput 5 number ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    PowerA3(num1, result1);
    PowerA3(num2, result2);
    PowerA3(num3, result3);
    PowerA3(num4, result4);
    PowerA3(num5, result5);
    
        cout << "Third powers of numbers" ;
 cout<< result1 << " "<< endl;
        cout<< result2 << " "<< endl;
 cout << result3 << ""<< endl;
 cout << result4 << " "<< endl ;
 cout<< result5 << endl;
}

Proc5
#include <iostream>
#include <math.h>
using namespace std;
void RectPS(double x1, double y1, double x2, double y2, double &P, double &S);
int main() {

 double x1_1 = 0, y1_1 = 0, x2_1 = 3, y2_1 = 4;
    double x1_2 = -2, y1_2 = -1, x2_2 = 5, y2_2 = 3;
    double x1_3 = 1, y1_3 = -2, x2_3 = 4, y2_3 = 1;

    double P1, S1, P2, S2, P3, S3;

    RectPS(x1_1, y1_1, x2_1, y2_1, P1, S1);
    RectPS(x1_2, y1_2, x2_2, y2_2, P2, S2);
    RectPS(x1_3, y1_3, x2_3, y2_3, P3, S3);

    cout << "Rectangle 1: P = " << P1 << ", S = " << S1 <<endl;
    cout << "Rectangle 2: P = " << P2 << ", S = " << S2 <<endl;
    cout << "Rectangle 3: P = " << P3 << ", S = " << S3 <<endl;

    
}

void RectPS(double x1, double y1, double x2, double y2, double &P, double &S) {
    double a = abs(x2 - x1);
    double b = abs(y2 - y1);
    P = 2 * (a + b);
    S = a * b;
}
Proc13
#include <iostream>
using namespace std;
void SortDec3(double& a, double& b, double& c) {
    if (a < b) swap(a, b);
    if (b < c) swap(b, c);
    if (a < b) swap(a, b);
}

int main() {
double a1 = 1, b1 = 2, c1 = 3;
    double a2 = 4, b2 = 5, c2 = 6;
  
    SortDec3(a1, b1, c1);

    SortDec3(a2, b2, c2);

    cout << a1 << " " << b1 << " " << c1 << endl;
    cout << a2 << " " << b2 << " " << c2 << endl;

}
Proc18
#include <iostream>

using namespace std;
float circles(float r){
return 3.14*r*r;
}
int main() {
for(int i=1; i<=3; ++i){
float r;
cout <<"r" ;
cin>>r;
cout << "S:" << circles(r) << endl;
}
}
Proc 20
#include <iostream>
#include <math.h>
using namespace std;
float trianglep(float a, float h){
return 2*sqrt(pow(a/2,2)+pow(h,2))+a;
}
int main() {
int i;
for(i=1; i<=3; ++i){
float a,h;
cout <<"a" ;
cin>>a;
cout <<"h" ;
cin>>h;
cout << "P:" << trianglep(a,h) << endl;
}
}
