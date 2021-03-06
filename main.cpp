//Teacher: Dr. Tyson McMillian
//Student: Ronald Angora
//Date: 04/20/2021

#include <iostream>
#include <ctype.h>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int main() 
{
  //Part 1
  //Initalize variables
  char str[] = "\nYesterday’s Doctor Who broadcast made me laugh and cry in the same episode! i can only wonder what the Doctor will get into next. My family and i are huge fans.";
  int length = 0;
  length = strlen(str);

  //Process array to capatilize any instences of i to I
  for (int i = 0; i < length; i++)
  {
    if(str[i] == 'i' && str[i+1] == ' ' && str[i-1] == ' ')
    {
      str[i] = toupper(str[i]);
    }
  }
	
  //Output sentence with capitalized i
  cout << str;
  
  //Part 2
  //Initalize variables
  vector<string> animals;
  string input = "";
  string exit = "";

  do
  {
    cout << "\n\nEnter your list of Animals(type 'end' to exit):\t ";
    cin >> input;
    animals.push_back(input);

    exit = input;
  }while(exit != "end");

  //Output the Animals list in decending order.
  cout << "\n\nYour list of Animals in Descending order: "; 
  
  sort(animals.begin(), animals.end(), greater<string>());

  for (int i = 0; i < animals.size(); i++)
  {
    cout << animals[i] << "\n ";
    cout << endl;
  }
  
  return 0;
}
