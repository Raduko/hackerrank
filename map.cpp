#include <iostream>
#include <map>
#include <vector>
#include <sstream>
using namespace std;

int main(){

   map<string,vector<int>> grades;

   int query_count;
   int command;
   string name;
   int score;
   int sum;
   string line;
   
   cin >> query_count;
   cin.ignore();
   for(int i= 0; i < query_count; i++){
        score = 0;
        getline(cin, line);
        stringstream ss(line);
        ss>> command >> name >> score;
        if(command == 1){
            grades[name].push_back(score);
            
        }
        else if(command == 2){
            
            grades[name].clear();
        }
        else if(command == 3){
            if(grades[name].empty()){
                cout << "0" << endl;
            }
            else{
                sum = 0;
                for(vector<int>::iterator itr = grades[name].begin(); itr != grades[name].end();){
                    sum += *itr;
                    itr++;
                    
                }
                cout << sum << endl;
            }

        }
   }

    return 0;
}