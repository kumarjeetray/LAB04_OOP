#include <iostream>

using namespace std;
class complex
{
    int real;
    int img;
    public:
    void ed()
    {
        cout<<"Enter the real part of the complex number:";
        cin>>real;
        cout<<"Enter the imaginery part of the complex number:";
        cin>>img;
        cout<<"Comples Number="<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    
    complex c[10];
    for(int i=0;i<10;i++)
    {
        c[i].ed();
    }

    return 0;
}
