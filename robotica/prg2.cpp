#include <iostream>
#include <fstream>


using namespace std;

class X
{
private:
    int x,y;

public:
    float a,b;
    
};

class Y : public X
{
    private:
    public:
    
}

int main()

{
    X a;
    Y T;
    a.a = 3.14159; a.b=exp(1);
    cout << a.a << endl << a.b << endl;
    a.setX(100);
    cout << a.getX() << endl;
    cout << "==============" << endl;
    T.a=1.4142
    cout << T.a << endl;

    return 0;

}

