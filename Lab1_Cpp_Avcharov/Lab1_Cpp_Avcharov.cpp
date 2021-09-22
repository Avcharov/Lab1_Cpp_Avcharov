
#include <iostream>
#include <math.h> 
#include <cmath>  
using namespace std;
#define PI 3.14159265  
int main() {
    int a, b;
    int kut;
    cin >> a >> b >> kut;
    cout << sqrt(a * a + b * b - 2 * a * b * cos(kut * PI / 180)) << endl;

    return 0;
}


