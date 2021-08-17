#include "Box.h"
#include <iostream>
#include <iomanip>
using namespace std;

//Implement setters and getters
c
{
  if(l > 0)
  {
    length = l;
  }
  else
  {
    length = 10;
  }
}
void Box::setwidth(int w)
{
  if(w > 0)
  {
    width = w;
  }
  else
  {
    width = 10;
  }
}
void Box::setheight(int h)
{
  if(h > 0)
  {
    height = h;
  }
  else
  {
    height = 10;
  }
}
int Box::getlength()
{
  return length;
}
int Box::getwidth()
{
  return width;
}
int Box::getheight()
{
  return height;
}
//Implement the calcvolume() function
int Box::calcVolume() 
{
  return (length * width * height);
}
