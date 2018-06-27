#include<iostream>

using namespace std;

class Animal {
  protected:
    string id;
  public:
    Animal(string s = "Generic Animal") {
      id = s;
    }

    // Pure virtual method - must be overridden by any non-abstract
    //  derrived class.
    virtual void speak () = 0;

    // Virtual method - can be overridden by a derrived class.  The
    //  type of the object being pointed to determines the method
    //  that gets called.
    virtual void move () {
      cout << id << ": I'm moving like an animal!" << endl;
    } 

    // Non-virtual method - can be overridden by a derrived class.
    //  The type of the pointer determines the method that gets called.
    void name () {
      cout << "I am " << id << endl;
    } 
};

class Dog : public Animal {
  public:  
    Dog(string s="Good Boy") : Animal(s) {}  // Call Animal constructor

    void speak () {
      cout << "Woof! " << endl;
    } 

    void move () {
      cout << id << ": Run around, run around!"  << endl;
    } 

    void name () {
      cout << "My tag says " << id << endl;
    } 
};

class Cat : public Animal {
  public:
    Cat(string s="Bad Cat!") : Animal(s) {}   // Call Animal constructor

    void speak () {
      cout << "Meow! " << endl;
    } 
};

int main() {

/* Cannot instantiate an abstract class;
 * Animal a;
 */
  Animal *aptr;
  Dog d("Bob");
  Dog *(dptr);
  Cat c("Precious");
  Cat *(cptr);

/* Cannot instantiate an abstract class;
  cout << endl << "Animal object:" << endl;
  a.move();
  a.name();

  aptr = &a;
  cout << endl << "Animal pointer:" << endl;
  aptr->move();
  aptr->name();
*/

  cout << endl << "Dog object:" << endl;
  d.speak();
  d.move();
  d.name();

  dptr = &d;
  cout << endl << "Dog pointer to Dog object:" << endl;
  dptr->speak();
  dptr->move();
  dptr->name();

  aptr = &d;
  cout << endl << "Animal pointer to Dog object:" << endl;
  aptr->speak();
  aptr->move();
  aptr->name();

  cout << endl << "Cat object:" << endl;
  c.speak();
  c.move();
  c.name();

  cptr = &c;
  cout << endl << "Cat pointer to Cat object:" << endl;
  cptr->speak();
  cptr->move();
  cptr->name();


  Dog & dogRef = d;
  cout << endl << "Dog reference to Dog object:" << endl;
  dogRef.speak();
  dogRef.move();
  dogRef.name();

  cout << endl << "Array of animal pointers:" << endl;
  Animal * pets[2];
  pets[0] = &d;
  pets[1] = cptr;
  for (int ii=0;ii<2;ii++){
     pets[ii]->speak();   
     pets[ii]->move();   
     pets[ii]->name();   
  }
  return 0;
} 
