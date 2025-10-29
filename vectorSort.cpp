#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int sizeV;
    int num;
    cin >> sizeV;
    for(int i = 0; i < sizeV; i++){
        cin >> num;
        v.push_back(num);
    }   
    sort(v.begin(),v.end());
    for(int i = 0; i < sizeV; i++){
        cout << v[i] << " ";
    }
    return 0;
}
