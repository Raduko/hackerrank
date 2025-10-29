#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int query_count,x_type,num;
    set<int>s;
    cin >> query_count;
    for(int i =0; i < query_count; i++){
        cin >> x_type >> num;
        
        if(x_type == 1){
            s.insert(num);
        }
        else if (x_type == 2) {
            s.erase(num);
        }
        else if (x_type == 3) {
            set<int>::iterator itr = s.find(num);
            if(itr != s.end()){
                cout << "Yes" <<endl;
                
            }
            else{
                cout << "No"<< endl;
            }
        }
            
    
    }   
    return 0;
}



