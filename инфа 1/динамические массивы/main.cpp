#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int* array = (int*)malloc(k * sizeof(int));
    //int* array = (int*)malloc(5 * sizeof(int));
    for (int i = 0; i < k; ++i){
        cin >> array[i];
    }
    for (int i = 0; i < k; ++i){
        cout << array[i] << " ";
    }
    return 0;
}
