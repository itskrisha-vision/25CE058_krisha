#include<iostream>
#include<map>
#include<sstream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    map<string,int> freq;
    string word;
    stringstream ss(str);

    while(ss >> word)
        freq[word]++;

    for(auto it : freq)
        cout << it.first << " : " << it.second << endl;

    return 0;
}
