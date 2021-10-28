#include <iostream>
using namespace std;

class fraction
{
    private:
    int numerator,denominator;
    bool idenom = false; //ignore denom, be 0
    public:
    void working();
    void working(int, int);
    void improper();
    void mixed();
    float decimal();
};

void fraction::working()
{
    numerator,denominator = 1;
}

void fraction::working(int a, int b)
{
    do
    {
        cout << "Enter the numerator" << endl;
        cin >> a;
        cout << "Enter the denominator" << endl;
        cin >> b;
        if(b == 0)
        {
            cout << "Enter a defined integer" << endl;
        } //I could move the loop so that it's just covering the denominator but whatever
    } while (b==0); //if user enters defined integer it'll break out of code
    if(a == 0)
    {
        idenom = true;
    }
    numerator = a;
    denominator = b;
    cout << endl;
}

void fraction::improper()
{
    if(idenom == false)
    {
        cout << numerator << "/" << denominator << endl;
    }
    else
    cout << 0 << endl;
}

void fraction::mixed()
{
    if(idenom == false)
    {
        cout << (numerator - (numerator % denominator))/denominator << " " << numerator % denominator << "/" << denominator << endl;
    }
    else
    cout << 0 << endl;
}

float fraction::decimal()
{
    if(idenom == false)
    {
        return (float)numerator/(float)denominator; //cast int as float so it can return as cfloat
    }
    else
    {return 0;}
}

int main()
{
    fraction grubtruck;
    grubtruck.working(0,0);
    grubtruck.improper();
    grubtruck.mixed();
    cout << grubtruck.decimal() << endl;
}