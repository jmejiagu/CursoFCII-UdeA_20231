#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Tarea3.h"

using namespace std;

Grupos::Grupos(int numero)
{
    setNumberGroup(numero);
    setNumbers();
}

void Grupos::setNumberGroup(int numero)
{
    numberGroup = numero;
}

void Grupos::setNumbers()
{
    srand(time(NULL));
    numbers[numberGroup];
    for (int i = 0; i < numberGroup; i++)
    {
        int random_number = 1 + rand() % (100 + 1 - 1);
        numbers[i] = random_number;
    }
}

void Grupos::getInfo()
{
    cout << "The numbers are" << endl;
    cout << setw(100);
    for (int i = 0; i < numberGroup; i++)
    {
        cout << setw(3) << numbers[i];
    }
    cout << endl;
    cout << "Smallest: " << setw(3) << minValue() << endl;
    cout << "Largest: " << setw(3) << maxValue() << endl;
    cout << "Sum: " << setw(3) << sumGroup() << endl;
    cout << "Average: " << setw(3) << meanGroup() << endl;
    cout << endl;
}

int Grupos::minValue()
{
    int minVal = numbers[0];
    for (int i = 1; i < numberGroup; i++)
    {
        if (numbers[i] < minVal)
        {
            minVal = numbers[i];
        }
    }
    return minVal;
}

int Grupos::maxValue()
{
    int maxVal = numbers[0];
    for (int i = 1; i < numberGroup; i++)
    {
        if (numbers[i] > maxVal)
        {
            maxVal = numbers[i];
        }
    }
    return maxVal;
}

int Grupos::sumGroup()
{
    int sum = 0;
    for (int i = 0; i < numberGroup; i++)
    {
        sum += numbers[i];
    }
    return sum;
}

float Grupos::meanGroup()
{
    float mean;
    mean = sumGroup() / numberGroup;
    return mean;
}