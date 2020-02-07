#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[],int N,double B[]){
    double avg,sd,sda,ma = A[0],mi = A[0],a;
    int i;
    while(i < N){
        a = A[i];
        avg += a;
        sd += a*a;
        if(a > ma) ma = a;
        if(mi > a) mi = a;
        i++;
    }
    
    B[0] = avg/N;
    B[1] = sqrt(sd/N - B[0]*B[0]);
    B[2] = ma;
    B[3] = mi;
    
}

