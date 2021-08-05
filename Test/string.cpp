#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter Data : ";
    cin >> str;
    cout << endl;

    int len = str.length();
    int num = 0; 
    int cnum = 0;

    char ch = str[0];
    for (int i = 0; i < len; i++)
    {
        cnum = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] != str[j])
                break;
            cnum++;
        }

        if (cnum > num){
            num = cnum;
            ch = str[i];
        }
    }
cout << "\nCharacter is: ";
cout << ch << endl;
cout << "\nNumber is: ";
cout << num << endl;
}