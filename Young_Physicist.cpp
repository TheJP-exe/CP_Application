#include <iostream>

using namespace std;

int main()
{
    int n, c1, c2, c3, c1sum=0, c2sum=0, c3sum=0; //Intialising the sum to be 0
    cin >> n;

    while (n--)
    {
        cin >> c1 >> c2 >> c3; //Obtaining each rows x,y,z components

        // Summing up with respect to each column
        c1sum += c1;
        c2sum += c2;
        c3sum += c3;
    }

    if (c1sum == 0 && c2sum == 0 && c3sum == 0) // Checking if all the sum's aer zerp
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
