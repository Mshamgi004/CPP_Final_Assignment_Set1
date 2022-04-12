// CPP Assignement - Final //
// SET - 1 //
// Q. 1 //
/*Vectors: Write a C++ program, there you take two vectors of names. The program should return a
vector that has all the names only once.
Example: vector1 = [Virendra Sachin, Saurav, Rahul, Laxman]
vector2 = [Harbhajan, Ashish, Rahul, Yuvraj, Saurav]
output = [Virendra Sachin, Saurav, Rahul, Laxman, Harbhajan, Ashish, Yuvraj] */

// MAHADEV G I //



#include <iostream>  
#include <vector>  
using namespace std;  
int main()  
 {   
                                                               
  vector<char> v1{'V','S','R','L'};                    // pass an array of integers to initialize the vector 
  
  
  cout << "The vector elements are: \n";                   // print vector elements
  for (int i = 0; i < v1.size(); i++)  
  {  
    cout << v1[i] << " ";   
  }
  cout << "\n\n"; 
  
  vector<char> v2{'H', 'A', 'R', 'Y', 'S'};              // pass an array of characters to initialize the vector 
  
  cout << "The vector elements are: \n";                    // print vector elements
  for (int i = 0; i < v2.size(); i++)  
  {  
    cout << v2[i] << " ";   
  }   
  cout << "\n\n"; 
  return 0;  
}