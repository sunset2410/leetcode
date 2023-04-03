#include<iostream>
#include<math.h>
#include<map>
#include<string>
using namespace std;

class TimeManager {
public:
void test() {
  
}

};

class Base {
public:
  int id;
  TimeManager time;
  void check(){
    time.test();
  }
  virtual ~Base() = default;
   virtual void print() const {
    cout << "base";
  }
};


class Product : public Base {
public:
  void print() const override {
    cout << "product";
  }

};

int main() {
  Base* base = new Product();
  base->print();
  delete base;

  for(int i = 0; i< 10;){
    cout <<"test";
  }

}