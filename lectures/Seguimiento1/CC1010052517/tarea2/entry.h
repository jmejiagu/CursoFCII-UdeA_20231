#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class entry{
public:
    float SSD( string , float , float , float , float);
    float* get_data();
    void echo_SSD();
    void echo_table_line();
private:
    string unit = "1";
    string speed_unit = "m/s";
    string d_unit = "km";
    float V = 0;
    float t = 1.5;
    float f = 1;
    float r = 1;
    float ssd = 0;
};
