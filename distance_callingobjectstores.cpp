#include <iostream>

using namespace std;


 
class Distance
{
    private:
        int feet;
        int inch;
    public:
        void getDist  (Distance &d);
        void showDist (Distance &d);
        void addDist( Distance d1,Distance d2 );
};
 
 
void Distance:: getDist(Distance &d)
{
    cout << "Enter Value of feets : "; 
    cin >> d.feet;
    cout << "Enter value of inches : "; 
    cin >> d.inch;
     
}
 
void Distance:: showDist(Distance &d)
{
    cout << endl << "\tFeets : " << d.feet;
    cout << endl << "\tInches: " << d.inch;
}
 
 
void Distance:: addDist( Distance d1,Distance d2 )
{
 
    feet = d1.feet + d2.feet;
    inch = d1.inch + d2.inch;
 
    if( inch >= 12)
    {
        feet++;
        inch -= 12;        
    }
    
}
 

 
int main()
{
    Distance d1;
    Distance d2;
    Distance d3;
 
    cout << "Enter Distance1 : " << endl;
    d3.getDist(d1);
     
    cout << "Enter Distance2 : " << endl;
    d3.getDist(d2);
 
    d3.addDist(d1,d2);
 
    cout << endl << "Distance1 : " ;
    d3.showDist(d1);
 
    cout << endl << "Distance2 : " ;
    d3.showDist(d2);
 
    cout << endl << "Adding : " ;
    d3.showDist(d3);
 
 
    cout << endl;         
    return 0;
}
