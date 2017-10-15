#include<string> 
#include<vector> 
#include"bitmap.h" 
#include <iostream>
using namespace std;
int main(){
Bitmap image; 
string filename;
vector< vector <Pixel> > bmp; 
cout<< "enter an image file"; 
while(true){
  cin>> filename; 
  image.open(filename);
  if(true == image.isImage())
    break; 
  else 
    cout<< "enter another image"; 
}
return 0 ; 
} 
// 
//prompt user to enter in image
//correct for user input error 
//use a loop to test all the images pixels and find the average value of the 3 components in the pixel then assign to that average value.
