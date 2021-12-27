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
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
} 

void showImage(const bool pic[][M]) 
{
    cout << "------------------------------------------------------------------------\n";
    for(int q = 0; q < N; q++){
        cout << "|";
        for(int w = 0; w < M ; w++){
            if(pic[q][w] == 0) cout << " ";
            if(pic[q][w] == 1) cout << "*";
        }
        cout << "|" << endl;
    }
    cout << "------------------------------------------------------------------------\n";
} 

void updateImage(bool lol[][M],int a,int b,int c)
{
    for(int q = 0; q < N; q++)
    {
        for(int w = 0; w < M ; w++)
        {
         if (sqrt(pow(q - b, 2) + pow(w - c, 2)) + 1 <= a )
         {
             lol[q][w]=1;
         }
        }
    }
}
