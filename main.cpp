#include<string> 
#include<vector> 
#include"bitmap.h" 
#include <iostream>
using namespace std;
int main(){
Bitmap image; 
string filename;
vector< vector <Pixel> > bmp; 
vector< vector <Pixel> > newImage; 
cout<< "enter an image file"; 
while(true){
  cin>> filename; 
  image.open(filename);
  if(true == image.isImage())
    break; 
  else 
    cout<< "enter another image"; 
} 
bmp = image.toPixelMatrix(); 
Pixel rgb_old, rgb_new;
int pixelAverage;
newImage.resize(bmp.size());
for (int row=0;row< bmp.size();row++){
  newImage[row].resize(bmp[row].size());
  for(int col=0;col< bmp[row].size(); col++){ 
    rgb_old = bmp[row][col];
    pixelAverage = (rgb_old.red + rgb_old.green + rgb_old.blue)/3;
    rgb_new.red = pixelAverage; 
    rgb_new.blue = pixelAverage; 
    rgb_new.green = pixelAverage; 
    newImage[row][col] = rgb_new;
  }  
}
image.fromPixelMatrix(newImage);
image.save("oldtimey.bmp"); 
return 0 ; 
} 
// 
//prompt user to enter in image
//correct for user input error 
//use a loop to test all the images pixels and find the average value of the 3 components in the pixel then assign to that average value.
