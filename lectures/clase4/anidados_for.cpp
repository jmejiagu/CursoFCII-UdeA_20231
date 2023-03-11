#include <iostream>
using namespace std;

int main()
{
    int i=1,j;
    
    for(i; i <= 5;i++)
    {
        j=1;
        for (j; j <= i; j++ )
        {
            cout <<j;
        }
        cout << endl;
    }
    
    return 0;
}
