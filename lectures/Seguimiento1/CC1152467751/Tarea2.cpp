#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double SSD(float conversion_factor, float velocity, float reaction_time, float grav_acc, float coeff_friction, float road_grade)
{

    return conversion_factor * (velocity * reaction_time + (conversion_factor * pow(velocity, 2)) / (2 * grav_acc * (coeff_friction + road_grade)));
}

double prompt_SSD()
{
    float c, v, t, f, G, g;
    double SSD_value;
    int units;

    cout << "Ingrese las unidades en las que quiere el resultado. Escriba:\n1 para unidades métricas: m-hr/km-s \n2 para unidades estadounidenses (ft-hr/mi-sec)" << endl;
    cin >> units;

    switch (units)
    {
    case 1:
        c = 0.278;
        g = 9.81;
        break;
    case 2:
        c = 1.47;
        g = 32.2;
        break;

    default:
        cout << "Ingrese por favor alguno de los valores permitidos y enunciados" << endl;
        break;
    }

    cout << "Ya que ha escogio las unidades en las que desea obtener el SSD, por favor ingrese los siguientes datos:" << endl;
    cout << "Ingrese la velocidad: ";
    cin >> v;
    cout << "Ingrese el tiempo de reacción: ";
    cin >> t;
    cout << "Ingrese la fricción de las llantas con el piso: ";
    cin >> f;
    cout << "Ingrese la inclinación de la ruta: ";
    cin >> G;

    SSD_value = SSD(c, v, t, g, f, G);

    cout << "El valor del SSD para los parámetros que ingresó es: " << SSD_value << (units == 1) ? "m" : "ft";
    cout << endl;

    return SSD_value;
}

int main()
{
    bool val = 1;
    int MAXVALUE, cont = 0;
    float t = 1.5, f = 0.47;

    cout << "Ingrese la cantidad máxima de SSD que desea obtener: " << endl;
    cin >> MAXVALUE;

    float v_array[MAXVALUE] = {30, 30, 60, 60, 80, 80, 40, 40, 65, 65, 90, 90};
    float G_array[MAXVALUE] = {-0.03, 0.03, -0.03, 0.03, -0.03, 0.03, -0.03, 0.03, -0.03, 0.03, -0.03, 0.03};
    float SSD_array[MAXVALUE];

    while (cont < MAXVALUE)
    {
        SSD_array[cont] = prompt_SSD();
        cont++;
    }

    cout << "|" << setw(5) << "Speed"
         << "|" << setw(5) << "Reaction Time (s)"
         << "|" << setw(5) << "Coefficient of friction"
         << "|" << setw(5) << "Road Grade"
         << "|" << setw(5) << "SSD"
         << endl;
    for (int i = 0; i < MAXVALUE; i++)
    {
        cout << "|" << setw(6) << fixed << setprecision(1) << v_array[i]
             << "|" << setw(5) << fixed << setprecision(2) << t
             << "|" << setw(5) << fixed << setprecision(3) << f
             << "|" << setw(9) << fixed << setprecision(1) << G_array[i]
             << "|" << setw(5) << fixed << setprecision(2) << SSD_array[i]
             << endl;
    }

    return 0;
}