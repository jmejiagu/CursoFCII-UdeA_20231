#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    cout<<"|"<<" Length "<<"|"<<" Width "<<"|"<<" Depth "<<"|"<<" Perimeter "<<"|"<<" Volume "<<"|"
	<<" Underground surface area "<<"|"<<endl;
    cout<< "--------------------------------------------------------------------------" <<endl;

    vector<int> L(8), W(8);
    vector<float> D(8);
    L = {25, 25, 25, 25, 30, 30, 30, 30};
    W = {10, 10, 10, 10, 12, 12, 12, 12};
    D = {5.0, 5.5, 6.0, 6.5, 5.0, 5.5, 6.0, 6.5};
    
    float avgDepth{0};
    for(int i=0; i <= 7; i++){
        avgDepth = D[i];
    }
    avgDepth = avgDepth/8;
    
    for(int i=0; i <= 7; i++){
        cout << setprecision(5) << "|" << setw(8) <<  L[i] << "|" << setw(7) << W[i] << "|" << setw(7)
	     << D[i] << "|" << setw(11) << 2*(L[i]+W[i]) << "|" << setw(8) << L[i]*W[i]*avgDepth
	     << "|" << setw(26) << 2*(L[i]+W[i])*avgDepth + L[i]*W[i] << "|" << endl;
    }
    cout<< "--------------------------------------------------------------------------" <<endl;

    return 0;
}
