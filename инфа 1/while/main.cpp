#include <iostream>

using namespace std;

int main()
{
    int array[5];
    int i = 0;
    while(i < 5) {
        cin >> array[i];
        ++i;
    }
    int j = 0;
    while(j < 5) {
        cout << array[j] << " ";
        ++j;
    }
    return 0;
}
