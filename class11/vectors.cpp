#include<iostream>
#include<vector>

using namespace std;

int main () {
  vector<int> v1(10);              // Create vector with capacity 10
  vector<int> v2 = {10, 20, 30};   // Initialize vector with an array
  vector<int> v3;

  v1 = {1, 2, 3, 4};

  cout << "Vector v1 size: " << v1.size() << endl;
  cout << "Vector v1 capacity: " << v1.capacity() << endl;
  cout << "Vector v2 size: " << v2.size() << endl;
  cout << "Vector v2 capacity: " << v2.capacity() << endl;
  cout << "Vector v3 size: " << v3.size() << endl;
  cout << "Vector v3 capacity: " << v3.capacity() << endl;

  // Unsafe!!
  cout << endl << "Print contents using array notation" << endl;
  //for (unsigned int ii=0; ii < v1.capacity() + 10 ;ii++) {
  for (unsigned int ii=0; ii < v1.capacity(); ii++) {
    cout << v1[ii] << ", ";
  }

  // Safe
  cout << endl << "Print contents using at()" << endl;
  //for (unsigned int ii=0; ii < v1.capacity(); ii++) {
  for (unsigned int ii=0; ii < v1.size(); ii++) {
    cout << v1.at(ii) << ", ";
  }
  cout << endl;

  //v1[4] = 5;
  for (unsigned int ii=0; ii < v1.size(); ii++) {
    cout << v1.at(ii) << ", ";
  }
  cout << "Vector v1 size: " << v1.size() << endl;
  cout << "Vector v1 capacity: " << v1.capacity() << endl << endl;

  cout << endl << "Updating v2" << endl;
  for (unsigned int ii=v2.size(); ii < 10 ; ii++) {
    v2.push_back(ii * 10);
  }
  
  for (unsigned int ii=0; ii < v2.size() ; ii++) {
    cout << v2.at(ii) << ", ";
  }
  cout << endl << "Vector v2 size: " << v2.size() << endl;
  cout << "Vector v2 capacity: " << v2.capacity() << endl << endl;

  for(unsigned int ii=0; ii<15; ii++) {
    v3.push_back(ii*5);
  }
  for (unsigned int ii=0; ii < v3.size() ; ii++) {
    cout << v3.at(ii) << ", ";
  }
  cout << endl << "Vector v3 size: " << v3.size() << endl;
  cout << "Vector v3 capacity: " << v3.capacity() << endl << endl;
  cout << "v3 front: " << v3.front() << endl;
  cout << "v3 back: " << v3.back() << endl;
  v3.pop_back();
  cout << "After pop_back: " << endl;
  for (unsigned int ii=0; ii < v3.size() ; ii++) {
    cout << v3.at(ii) << ", ";
  }

  cout << endl << "Print with for each loop: " << endl;
  // Use a for-each loop
  for (auto& ii : v3) {
    cout << ii << ", ";
  }

  cout << endl;
  return 0;
}
