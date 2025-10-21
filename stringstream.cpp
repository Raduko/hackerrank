#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector <int> niceVec;
    int readInt;
    char trashComma;
    std::stringstream ss(str);
	while( ss >> readInt){
        niceVec.push_back(readInt);
        ss >> trashComma;
    }
    return niceVec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}