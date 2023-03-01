#include "iostream"
#include <vector>
#include <iomanip>
using namespace std;

int main(){
 
 vector<short int> perimetro;
 vector<float> vol;
 vector<short int> usa;
 vector <short int> L {25,25,25,25,30,30,30,30};
 vector <short int> W {10,10,10,10,12,12,12,12};
 vector <float> D {5,5.5,6,6.5,5,5.5,6,6.5};
 
 
 for (int i = 0; i < 8; i++){
    perimetro.push_back(2*(L[i]+W[i]));
    vol.push_back(L[i]*W[i]*D[i]);
    usa.push_back(2*(L[i]+W[i])*D[i]+L[i]*W[i]);
 }

cout << "Tablita: " << '\n'; 
cout << "Length" << "  "<<"Width" << "  "<<"Depth" << "  "<<"Perimeter" << "  "<<"Volume" << "  "<<"USA" << "  "<<'\n';
for (int i = 0; i < vol.size(); i++) {
    cout << setw(6)<< L[i] << ' ';
    cout << setw(6)<< W[i]<< ' ';
    cout << setw(6)<< fixed << setprecision(1)<< D[i]<< ' ';
    cout << setw(9)<< setprecision(0)<< perimetro[i]<< ' ';
    cout << setw(8)<< vol[i]<< ' ';
    cout << setw(4)<< usa[i]<< '\n';
}




 return 0;

}
