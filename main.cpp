#include <iostream>
using namespace std;

class Reservoir
{
    string name;
    double width;
    double length;
    double maxDepth;
    static int Count;
public:
    Reservoir()
    {
        name = "Without name";
        width = 0;
        length = 0;
        maxDepth = 0;
        Count++;
    }

    Reservoir(string n, double w, double l, double d)
    {
        name = n;
        width = w;
        length = l;
        maxDepth = d;
        Count++;
    }

    double getVolume()
    {
        return width * length * maxDepth;
    }

    double getArea()
    {
        return width * length;
    }

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Width: " << width << endl;
        cout << "Lenght: " << length << endl;
        cout << "Maximum Depth: " << maxDepth << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Volume: " << getVolume() << endl;
    }

    string getName()
    {
        return name;
    }
    void setName(string n)
    {
        name = n;
    }

    double getWidth()
    {
        return width;
    }
    void setWidth(double w)
    {
        width = w;
    }

    double getLength()
    {
        return length;
    }
    void setLength(double l)
    {
        length = l;
    }

    double getMaxDepth()
    {
        return maxDepth;
    }
    void setMaxDepth(double d)
    {
        maxDepth = d;
    }

    static int getCount()
    {
        return Count;
    }

    void Test(Reservoir b)
    {
    if (width * length > b.width * b.length)
    {
        cout << name << " Have bigger value" << endl;
    }
    else if (width * length < b.width * b.length)
    {
        cout << b.name << " Have bigger value" << endl;
    }
    else
    {
        cout << "They are same" << endl;
    }
    }
};

int Reservoir::Count = 0;


int main()
{
    Reservoir r1("Black Sea", 500, 1500, 2000);
    Reservoir r2("Prud", 10, 360, 10);

    cout << "First: " << endl;
    r1.printInfo();

    cout << endl;

    cout << "Second: " << endl;
    r2.printInfo();

    cout << endl;

    r1.Test(r2);

    cout << endl;
    cout << "Created objects: " << Reservoir::getCount() << endl;

    return 0;
}