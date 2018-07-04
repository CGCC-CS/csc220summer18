#include<iostream>

using namespace std;

class MyClass {
  private:
    int a;
    int b;
  public:
    explicit MyClass(int x=0) {
      a = x;
      b = a * -1;
    }
    void print() const {
      cout << "  Printing: " << a << " & " << b << endl;
    }
    MyClass operator+ (const MyClass& that) const;
    MyClass operator+ (const int x) const;

    // Friend methods can see private members
    friend ostream& operator<< (ostream& strm, const MyClass& m);
    friend MyClass operator+ (int ii, const MyClass& x);
};

MyClass MyClass::operator+(const MyClass & that) const {
  return MyClass(this->a + that.a);
}

MyClass MyClass::operator+ (const int ii) const {
  return MyClass(this->a + ii);
}

// End of MyClass --------------------------------------

ostream& operator<< (ostream& strm, const MyClass& m) {
  strm << "[" << m.a << "]";
  return strm;
}

MyClass operator+ (const int ii, const MyClass& x) {
  return MyClass(x.a + ii);
}

int main () {
  MyClass c1(1);
  MyClass c2(2);

  c1.print();
  c2.print();

  //cout << "c1 + c2: " << c1.a << " + " << c2.a << " = " << c1.a + c2.a << endl;
  //cout << "c1 + c2: " << c1.a << " + " << c2.a << " = " << c1 + c2 << endl;
  cout << "c1.operator+(c2) = " << c1.operator+(c2)  << endl;
  cout << "c1.operator+(2) = " << c1.operator+(2)  << endl;
  cout << "c1 + c2: " << c1 << " + " << c2 << " = " << c1 + c2 << endl;
  cout << "c1 + 10: " << c1 << " + " << 10 << " = " << c1 + 10 << endl;
  cout << "20 + c2: " << 20 << " + " << c2 << " = " << 20 + c2 << endl;

  return 0;
}
