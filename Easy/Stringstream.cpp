#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss;
    ss << str;
    char ch;
    int x;
    vector <int> integers;
    for(int i=0; i<400000; i++)
    {
        ch = '0';
        ss >> x >> ch;
        integers.push_back(x);
        if(ch == ',')
        {continue;}
        else if(ch == '0')
        {break;}
    }
    return integers;
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
