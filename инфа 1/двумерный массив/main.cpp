#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int** array = (int**) malloc(sizeof(int*)*x);
    for(int i = 0; i < x; i++){
        array[i] = (int*) malloc(sizeof(int)*y);
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            array[i][j] = 1;
        }
    }
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            cout << array[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
