#include "solution.h"

SinglyLinkedList::SinglyLinkedList(const std::vector<int> &inputs, int i) {
    std::vector<int>::const_iterator ptr = inputs.begin();

    ListNode *node = new ListNode(*ptr);
    head_ = node;

    ListNode *temp = head_;
    
    for(ptr = inputs.begin()+1; ptr!=inputs.end(); ptr++) {
            ListNode *newNode = new ListNode(*ptr);
            temp->next = newNode;
            temp = newNode;
    }
    
    // to see if list is a cyclic or acyclic linked by value of i
    if(i==-1) {
        temp->next = nullptr;
    }
    else if(i > inputs.size()) {
        temp->next = nullptr;
    }
    else {
        int target = inputs.size()-i;
        int n = 1;
        ListNode *tmp = head_;
        while (n < target) {
            tmp = tmp->next;
            n++;
        }
        temp->next = tmp;
    }
}

bool SinglyLinkedList::empty() {
  ListNode *node = head_;
  if(node == NULL) {
    return 1;
  }
  else
    return 0;
}

int SinglyLinkedList::size() {
  ListNode *node = head_;
  int nodeSize = 1;
  // No elements in linked list
  if(node==NULL) {
      return 0;
  }
  while(node -> next != nullptr) {
      node = node -> next;
      nodeSize++;
  }
  return nodeSize;
}

void SinglyLinkedList::push_back(int i) {
  ListNode *lastNode = new ListNode(i);
  if(head_ == NULL) {
    head_ = lastNode;
  }
  else {
    ListNode *temp = head_;
    // uses temp to find the last node
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    // appends the last node with last
        temp->next = lastNode;
  }
}

void SinglyLinkedList::push_front(int i) {
    ListNode *node = new ListNode(i);
    node->next = head_;
    head_= node;
}

void SinglyLinkedList::insert_after(ListNode *p, int i) {
     ListNode *newNode = new ListNode(i);
     newNode->next = p->next;
     p->next = newNode;
}

void SinglyLinkedList::erase(ListNode *p) {
    if(p==head_) {
        ListNode *FirstNode = head_;
        head_ = head_->next;
        delete FirstNode;
    }
    else {
        ListNode *temp = head_;
        ListNode *temp_prev = temp;
        while(temp != p) {
            temp_prev = temp;
            temp = temp->next;
        }
        temp_prev->next = temp->next;
        delete temp;
    }
}

void SinglyLinkedList::pop_front() {
    if(head_) {
        ListNode *FirstNode = head_;
        head_ = head_->next;
        delete FirstNode;
    }
}

void SinglyLinkedList::pop_back() {
    ListNode *p = head_;
    ListNode *p_prev = 0; 
    while (p->next != nullptr) {
        p_prev = p;
        p = p->next;
    }
    p_prev->next = NULL;
    delete p;
}

int SinglyLinkedList:: front() {
    // No return value in empty list 
    if(head_==NULL) {
        std::cout << "The list is empty!" << std::endl;
        return 0;
    }
    else {
        ListNode *first = head_;
        return first->val;
    }
}

int SinglyLinkedList:: back() {
    // No return value in empty list
    if(head_==NULL) {
        std::cout << "The list is empty!" << std::endl;
        return 0;
    }
    else {
        ListNode *p = head_;
        while (p->next != nullptr) {
            p = p->next;
        }
        return p->val;
    }
}

ListNode *SinglyLinkedList:: GetBackPointer() {
     ListNode *p = head_;
     while(p->next != nullptr) {
         p = p->next;
     }
    return p;
}

ListNode *SinglyLinkedList:: GetIthPointer(int i) {
    ListNode *p = head_;
    int n = 1;
    while(n < i) {
        p = p->next;
        n++;
    }
    return p;
}

void SinglyLinkedList::print() {
    ListNode *node = head_;
    int n = 0;
    while(node != NULL) {
        std::cout << node->val << " ";
        node = node->next;
        n++;
        if(n > 1000) {
            std::cout << "\nIt's a cyclic list!" << std::endl;
            break;
        }
    }
}

SinglyLinkedList::~SinglyLinkedList() {
    ListNode *temp = head_;
    ListNode *temp_prev = temp;
    while(temp != nullptr) {
        temp_prev = temp;
        delete temp_prev;
        temp = temp->next;
    }
}