#include<iostream>

int quotient(int top, int bot) {
  return top / bot;
}


int product(int a, int b) {
  return a * b;
}


void doStuff(int x, int y) {
  try {
    std::cout << "  " << x << " * " << y << " = " << product(x, y) << std::endl;
    
    if ( (x==13) || (y==13) ) {
      throw 13;
    }
    if ( ( y == 0) ) {
      throw 0;
    }
    std::cout << "  " << x << " / " << y << " = " << quotient(x, y) << std::endl;
  }

  catch(int e) {
    if (e == 0) {
      std::cerr << "Error: attempt to divide by 0!" << std::endl;
    }
    else if (e == 13) {
      std::cerr << "Error: unlucky number " << e << "!!!" << std::endl;
    }
    else {
      std::cerr << "Error: something unexpected happened!" << std::endl;
    }
  }
}


int main() {
  std::cout << "doStuff(2,3):" << std::endl;
  doStuff(2,3);
  std::cout << std::endl << "doStuff(2,0):" << std::endl;
  doStuff(2,0);
  std::cout << std::endl << "doStuff(2,13):" << std::endl;
  doStuff(2,13);
  return 0;
}
