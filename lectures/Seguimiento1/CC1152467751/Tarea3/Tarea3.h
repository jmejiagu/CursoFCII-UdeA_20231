class Grupos
{
public:
    Grupos(int);
    void setNumberGroup(int);
    void setNumbers();
    void getInfo();
    int minValue();
    int maxValue();
    int sumGroup();
    float meanGroup();

private:
    int numberGroup;
    int numbers[];
};