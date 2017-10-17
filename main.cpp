#include <vector>
#include <iostream>
#include "bitmap.h" 

using namespace std;

int main()

{

Bitmap image;
vector <vector <Pixel> > bmp;
Pixel rgb;
string filename;

 int avg;
 int width;
 int height;
 bool cond = true;

 while (cond)
 {

 cout<<"Enter the file name of an image( put extension .bmp after filename) : ";
cin >> filename;

image.open(filename);

bool validBmp = image.isImage();

if( validBmp == true )
{

bmp = image.toPixelMatrix();

height = bmp.size();

width = bmp[0].size();

cout << filename <<" has been loaded. It is "<< width <<" pixels wide and "<<height<<" pixels high."<<endl;

for(int i=0;i<bmp.size();i++)
{

   for(int j=0;j<bmp[i].size();j++)
   {

          rgb = bmp[i][j];

   avg = (rgb.red +rgb.green+rgb.blue) / 3;

       rgb.red = avg;

       rgb.green = avg;

       rgb.blue = avg;

       bmp[i][j] = rgb;

       }
       }

       image.fromPixelMatrix(bmp);

       image.save("oldtimey.bmp");

       cond = false;

       }
       else
       {
       cond = true;
       }
       }

return 0;
}


