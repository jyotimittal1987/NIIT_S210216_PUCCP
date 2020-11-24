// friend class
#include <iostream>
using namespace std;
class CSquare;//Declaring a  class

class CRectangle {
    int width, height;
  public:
    int area ()
      {return (width * height);}
      //void sum(int a);
    void convert (CSquare a);//Declaration
};

class CSquare {
  private:
    int side;//4
  public:
    void set_side (int a)
      {side=a;}
    friend class CRectangle;
};

void CRectangle::convert (CSquare a) {
  width = a.side;
  height = a.side;
}

int main () {
  CSquare sqr;
  CRectangle rect;
  sqr.set_side(4);
  rect.convert(sqr);
  cout << rect.area();
  return 0;
}
