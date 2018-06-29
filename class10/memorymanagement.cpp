#include<iostream>

using namespace std;

class MyBase {
  public:
    MyBase() { cout << "    MyBase Constructor " << endl; }
    virtual ~MyBase() { cout << "    MyBase Destructor " << endl; }
};

class MyClass : public MyBase {
  public:
    int * a;
  private:
    int b;

  public:
    // Constructor
    MyClass(int x) {
       a = new int;
       *a = x;
       b = getCounter();
       cout << "  Constructor " << b << ": " << *a << " (" << a << ")" << endl;
    }

    // Copy Constructor
    MyClass(const MyClass & original) {
       a = new int;
       *a = *(original.a);
       b = getCounter();
       cout << "  Copy Constructor " << b << ": " << *a << " (" << a << ")" << endl;
    }

    // Destructor
    ~MyClass() {
       cout << "  Destructor " << b << ": " << *a << " (" << a << ")" << endl;
       delete a;
       a = nullptr;
    }
    void print() {
       cout << "    Print " << b << ": " << *a << " (" << a << ")" << endl;
    }

  private:
    int getCounter() {
       static int counter = 1;
       return counter++;
    }
};

void func(MyClass k) {
  cout << "  FUNC: begin declare c3" << endl;
  MyClass c3(30);
  cout << "  FUNC: end declare c3" << endl;
  cout << "  FUNC: k->a = 40" << endl;
  *(k.a) = 40;
  cout << "  FUNC: print k: ";
  k.print();
  cout << "  FUNC: print c3: ";
  c3.print();
  cout << "  FUNC: end" << endl;
}

int main() {
  cout << "MAIN: begin declare c1" << endl;
  MyClass c1(10);        // Stack variable (value semantics)
  cout << "MAIN: end declare c1" << endl;

  cout << "MAIN: begin declare c2" << endl;
  MyClass * c2;
  cout << "MAIN: end declare c2" << endl;

  cout << "MAIN: begin declare c4" << endl;
  MyBase * c4;
  cout << "MAIN: end declare c4" << endl;

  cout << "MAIN: begin allocate c2" << endl;
  c2 = new MyClass(20);  // Heap object (reference semantics)
  cout << "MAIN: end allocate c2" << endl;
 
  cout << "MAIN: begin allocate c4" << endl;
  c4 = new MyClass(200);  // Heap object (reference semantics)
  cout << "MAIN: end allocate c4" << endl;
 
  cout << "MAIN: call func(c1)" << endl; 
  func(c1);
  cout << "MAIN: return from func(c1)" << endl; 

  cout << "MAIN: begin delete c2" << endl;
  delete c2;
  cout << "MAIN: end delete c2" << endl;

  cout << "MAIN: begin delete c4" << endl;
  delete c4;
  cout << "MAIN: end delete c4" << endl;

  cout << "MAIN: return" << endl;
  return 0;
}
