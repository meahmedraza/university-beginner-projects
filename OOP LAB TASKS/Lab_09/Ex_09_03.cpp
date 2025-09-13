#include <iostream>
using namespace std;
class CPolygon
{
protected:
int width, height;
public:
void setup (int first, int second)
{
width= first;
height= second;
}
void onscreen(void)
{
	cout<< this->area()<<endl;
}
virtual int area(void) = 0;
};
class CRectangle: public CPolygon
{
public:
int area(void)
{
return (width * height);
}
};
class CTriangle: public CPolygon
{
public:
int area(void)
{
return (width * height / 2);
}
};
int main ()
{
CRectangle rectangle;
CTriangle triangle;
CPolygon * ptr_polygon1 = &rectangle;
CPolygon * ptr_polygon2 = &triangle;
ptr_polygon1->setup(2,2);
ptr_polygon2->setup(2,2);
ptr_polygon1->onscreen();
ptr_polygon2->onscreen();
return 0;
}
