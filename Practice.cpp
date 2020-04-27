#include "Practice.h"
#include <string>
#include <iostream>
using std::string;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
void Practice::sortDescending(int & first, int & second, int & third)
{
  if( first < second )
  {
    int temp = first;
    first = second;
    second = temp;
  }
  if( second < third )
  {
    int temp = second;
    second = third;
    third = temp;
  }
  if( first < second )
  {
    int temp = first;
    first = second;
    second = temp;
  }
}

// Receive a string and return whether or not it is strictly a palindrome,
// where it is spelled the same backwards and forwards when considering every
// character in the string, but disregarding case ('x' is the same as 'X')
bool Practice::isPalindrome(string input)
{
  int l = 0; 
  int h = input.length() - 1; 

  while (h > l) 
  { 
    if (input[l++] != input[h--]) 
    { 
      return false; 
    } 
  } 
  return true;
}
