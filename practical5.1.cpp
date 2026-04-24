#include<iostream>
#include<string>
using namespace std;
int main()
{
    string paragraph;
    cout<<"enter the paragraph\n";
    getline(cin,paragraph);

    for(int i=0; paragraph[i]; i++)
    {
        if(paragraph[i]>='A' && paragraph[i]<='Z')
        {
            paragraph[i]+=32;
        }
    }

    string words[100];
    int freq[100] = {0};
    int count=0;

    string temp="";

    for(int i=0; i<=paragraph.length(); i++)
    {
        if(paragraph[i]!=' ' && paragraph[i]!='\0')
        {
            temp+=paragraph[i];
        }
        else
        {
            if(temp!="")
            {
                int found=0;
                for(int j=0; j<count; j++)
                {
                    if(words[j]==temp)
                    {
                        freq[j]++;
                        found=1;
                        break;
                    }
                }
                if(found == 0)
                {
                    words[count] = temp;
                    freq[count] = 1;
                    count++;
                }

                temp = "";

            }
        }
    }
    cout << "\nWord Frequencies:\n";
    for(int i = 0; i < count; i++)
    {
        cout << words[i] << " : " << freq[i] << endl;
    }

    return 0;


}



