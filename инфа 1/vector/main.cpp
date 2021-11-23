#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> my_vector;
    for(int i = 0; i < n; ++i){
        char k;
        cin >> k;
        my_vector.push_back(k);
    }

    for(int j = 0; j < n; ++j){
        cout << my_vector[j];
    }
    return 0;
}
