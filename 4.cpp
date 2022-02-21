#include <iostream>
using namespace std;

struct Vector {
    double x;
    double y;
    Vector (double _x, double _y){
        x = _x;
        y = _y;
    }
    void printVector(){
        cout << x << " " << y << endl;
    }
};

Vector addVector(Vector v1, Vector v2)
{
   cin>>v1.x>>v1.y;
  // cin>>v2.x>>v2.y;
   return v1;
}

int main()
{
   
	double x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
    Vector v1(x1,y1),v2(x2,y2);
   Vector v(x1+x2,y1+y2);
  v.printVector();
    return 0;
}