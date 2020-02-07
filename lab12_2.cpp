#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;    
}

// Write definition of updateImage() and showImage() here
void updateImage(bool a[][M],int s,int x,int y){
    int i = 0,j = 0;
    while(i < N){
        j=0;
        while(j < M){
            if(sqrt(pow((i-x),2)+pow((j-y),2)) <= s-1){
                a[i][j]=1;
            }
            j++;
        }
        i++;
    }
}

void showImage(const bool a[][M]){
    int j=0;
    while(j < M){
        cout << "-";
        j++;
    }
    cout << "\n";
    for(int i=0; i<N;i++){
        cout << "|";
        j=0;
        while(j < M){
            if(a[i][j] == 0) cout << " ";
            if(a[i][j] == 1) cout << "*";
            j++;
        }
        cout << "|" << "\n";
    }
    j=1;
    while(j <= M){
        cout << "-";
        j++;
    }
    cout << "\n";

   
}
