#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c;
    float s,area_triangle;
    cout << "enter the sides of triangle";
    cin>>a>>b>>c;
    s = (a*b*c)/2;
    area_triangle = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"the area of triangle is equal to "<<area_triangle;

    return 0;
}
