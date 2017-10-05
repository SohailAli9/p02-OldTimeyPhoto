#include <vector>
#include <string>
#include <iostream>
#include "bitmap.h" 

using namespace std;

int main()

{

Bitmap image;
vector <vector <Pixel> > bmp;
Pixel rgb;

image.open("green.bmp");
bmp = image.toPixelMatrix();

cout<<"green.bmp was uploaded. it's "<<bmp[0].size()<<" pixels wide and "<<bmp.size()<<" pixels high "<<endl;


return 0;
}


