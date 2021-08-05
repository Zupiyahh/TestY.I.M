#include <bits/stdc++.h>
using namespace std;

int Pair(int number[], int data,int len)
{
    int num = 0;
    int ans;

    for (int j = 0; j < len; j++)
    {
        for (int i = j + 1; i < len; i++)
        {
            ans = number[j] * number[i];
            if (ans == data)
            {
                num++;
            }
        }
    }
    return num;
}

int main()
{
    int i, length, data;

    cout << "\nInput number of int array data = ";
    cin >> length;
    int n[length];
    cout << "\n Input is : ";
    for (i = 0; i < length; i++)
    {
        cin >> n[i];
    }

    cout << "\nInput number of int data = ";
    cin >> data;

    int a = Pair(n, data,length);
    cout << "\nNumber is: ";
    cout << a ;
    cout << " pair " << endl;
    return 0;
}