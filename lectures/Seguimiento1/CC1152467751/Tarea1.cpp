#include <iostream>
#include <iomanip>
using namespace std;

float perimeter(float length, float width)
{
    float perimeter_value;
    perimeter_value = 2.0 * (length + width);

    return perimeter_value;
}

float volume(float length, float width, float depth)
{
    float volume_value = length * width * depth;
    return volume_value;
}

float underground_surface_area(float length, float width, float depth)
{
    float area_value = 2.0 * (length + width) * depth + length * width;
    return area_value;
}

int main()
{

    float length_array[8] = {25.0, 25.0, 25.0, 25.0, 30.0, 30.0, 30.0, 30.0};
    float width_array[8] = {10.0, 10.0, 10.0, 10.0, 12.0, 12.0, 12.0, 12.0};
    float depth[8] = {5.0, 5.5, 6.0, 6.5, 5.0, 5.5, 6.0, 6.5};

    float perimeter_array[8];
    float volume_array[8];
    float surface_area_array[8];
    for (int i = 0; i < 8; i++)
    {
        perimeter_array[i] = perimeter(length_array[i], width_array[i]);
        volume_array[i] = volume(length_array[i], width_array[i], depth[i]);
        surface_area_array[i] = underground_surface_area(length_array[i], width_array[i], depth[i]);
    }

    cout << "|" << setw(5) << "Lenght"
         << "|" << setw(5) << "Width"
         << "|" << setw(5) << "Depth"
         << "|" << setw(5) << "Perimeter"
         << "|" << setw(5) << "Volume" << setw(2)
         << "|" << setw(5) << "Underground Surface Area" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "|" << setw(6) << fixed << setprecision(1) << length_array[i]
             << "|" << setw(5) << fixed << setprecision(1) << width_array[i]
             << "|" << setw(5) << fixed << setprecision(1) << depth[i]
             << "|" << setw(9) << fixed << setprecision(1) << perimeter_array[i]
             << "|" << setw(5) << fixed << setprecision(2) << volume_array[i]
             << "|" << setw(5) << fixed << setprecision(2) << surface_area_array[i] << endl;
    }
}
