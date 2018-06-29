#include<iostream>

using namespace std;

class MyDeleteClass {
  private:
    int *a;
    int *b;
    int c;

  public:
  // Constructor
     MyDeleteClass() {
       static int counter = 1;
  
       a = new int;
       *a = counter * 5;
       b = new int[*a];
       c = *a * 10;
       for (int ii=0;ii<*a;ii++) {
         b[ii] = ii;
       }
       counter ++;
     }

  // How would you write a copy constructor for MyDeleteClass?
  
  // Destructor
  ~MyDeleteClass() {
    delete a;
    a = nullptr;
    delete[] b;    // b points to an array, so use delete[]
    b = nullptr;
  }
  
  void print() {
    cout << "  object " << *a << ", " << c << ": " ;
    for(int ii=0;ii<*a;ii++) {
      cout << b[ii] << "  "; 
    }
    cout << endl;
  }
};


int main() {
  MyDeleteClass c1;
  MyDeleteClass * c2 = new MyDeleteClass();

  cout << "c1: " << endl;
  c1.print();
  cout << endl << "c2: " << endl;
  c2->print();
  return 0;
}
