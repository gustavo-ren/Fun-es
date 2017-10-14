#include <iostream>
#include <math.h>

using namespace std;

int potencia(int i);
int r;

int main()
{
    cin >> r ;
    cout << potencia(r) << endl;
    return 0;
}

int potencia(int i){
    return pow(i, 2);
}
