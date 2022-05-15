#include <iostream>
using namespace std;

class Sort{
public:
  virtual void processData(){
    readData();
    sortData();
    writeData();
  }
private:
  virtual void readData(){}
  virtual void sortData() = 0;
  virtual void writeData(){}
};


class QuickSort: public Sort{
public:
  void readData(){
    std::cout << "readData" << std::endl;
  }
  void sortData(){
    std::cout <<  "sortData" << std::endl;
  }
  void writeData(){
    std::cout << "writeData" << std::endl;
  }
};


int main(){

  std::cout << std::endl;

  Sort* sort = new QuickSort;
  QuickSort q;
  sort->processData();

  std::cout << std::endl;
  q.readData();

}

