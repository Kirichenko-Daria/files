#include <iostream>

using namespace std;


void Swap(int* x, int* y){
    int k = *x;
    *x = *y;
    *y = k;
}

double Sum(double x, double y){
    return x+y;
}

void GetValue(int* c){
    *c = 5;
}


int main()
{
    int a = 7;
    int b = 3;
    Swap(&a, &b);
    cout << a << " " << b;
    return 0;
}
