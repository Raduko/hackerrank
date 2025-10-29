#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n;
    int nums;
    cin >> n; 
    for(int i= 0; i<n; i++){
        cin >> nums;
        v.push_back(nums);
        
    } 
    cin >> n;
    v.erase(v.begin()+n-1);
    int j;
    cin >> n >> j;
    v.erase(v.begin()+n-1,v.begin()+j-1);
    cout << v.size() << endl;
    for(int i= 0; i < v.size(); i++){
        cout << v[i]<< " ";
    }
    
    
    return 0;
}
