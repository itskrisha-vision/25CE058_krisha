#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    map<string, vector<string>> dir;
    int choice;

    do
    {
        cout << "\n1.Add Folder\n2.Add File\n3.Display\n4.Exit\n";
        cin >> choice;

        if(choice == 1)
        {
            string folder;
            cin >> folder;
            dir[folder];
        }
        else if(choice == 2)
        {
            string folder, file;
            cin >> folder >> file;
            dir[folder].push_back(file);
        }
        else if(choice == 3)
        {
            for(auto &p : dir)
            {
                cout << p.first << ":\n";
                for(auto &f : p.second)
                    cout << "  " << f << endl;
            }
        }

    } while(choice != 4);

    return 0;
}
