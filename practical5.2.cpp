#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream fin("input1.txt");

    if(!fin)
    {
        cout<<"file cannot be opened\n";
    }
    string line;
    int lines=0,words=0,charactors=0;

    while(getline(fin,line))
    {
        lines++;
        charactors+=line.length();
        bool inword=false;

    for(int i=0;i<line.length();i++)
    {
        if(line[i]!=' ' && line[i]!='\0')
        {
            if(!inword)
            {
                words++;
                inword=true;
            }
            else
            {
                inword=false;
            }
        }
    }
    charactors++;
    }
    cout<<"charactors="<<charactors;
    cout<<"words="<<words;
    cout<<"lines="<<lines;

}
