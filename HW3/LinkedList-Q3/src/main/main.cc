#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  SinglyLinkedList list;
  const std::vector<int> &inputs = {1,2,3,4,5};
  SinglyLinkedList mylist(inputs,-1);

  std::cout << "mylist: " ;
  mylist.print();
  std::cout << "\nListSize: " << mylist.size() << std::endl;
  mylist.pop_front();
  std::cout << "--pop_front--" << std::endl;
  mylist.print();
  std::cout << "\nListSize: " << mylist.size() << std::endl;
  mylist.pop_back();
  std::cout << "--pop_back--" << std::endl;
  mylist.print();
  std::cout << "\nListSize: " << mylist.size() << std::endl;
  mylist.push_front(100);
  mylist.push_back(200);
  std::cout << "--push_front_back--" << std::endl;
  mylist.print(); std::cout << "" << std::endl;
  std::cout << "--erase_GetBackPointer--" << std::endl;
  mylist.erase(mylist.GetBackPointer());
  mylist.print(); std::cout << "" << std::endl;
  std::cout << "--insert after 2th with 69" << std::endl;
  mylist.insert_after(mylist.GetIthPointer(2),69);
  mylist.print();

  std::cout << list.front() << std::endl;

  std::cout << "" << std::endl;


    
  return 0;
}