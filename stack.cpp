/*  STACK IMPLEMENTATION WITH PUSH,POP AND DELETE OPERATION USING ARRAY IN C++ */
#include <iostream>
/* MAX ELEMENT IN STACK */
#define MAX 10

using namespace std;

int STACK[MAX], TOP;
/* FUNCTION DEFINITION */
void SHOW(int []);
void PUSH(int [], int);
void POP();
int main() {
  /* code */
  int CHOICE;
  /* WHILE LOOP */
  bool k = true;
  /* TOP INDEX OF STACK */
  TOP = -1;

  while (k) {
    /* DISPLAYS CHOICE OPTIONS IN CONSOLE */
    std::cout << "\nEnter your choice : \n 1:SHOW \n 2:PUSH \n 3:POP \n 4:EXIT \n" << '\n';
    /* TAKES USER INPUT OF CHOICE */
    std::cin >> CHOICE;
    switch (CHOICE) {
      case 1:
          SHOW(STACK);
          break;
      case 2:
      int item;
        std::cout << "Enter element to push = ";
        std::cin >> item;
        PUSH(STACK, item);
        break;
      case 3:
          POP();
          break;
      case 4:
          k=false;
          printf("\nFuck off");
          break;
      default:
          k=false;
          printf("\nFuck off");
          break;
    }
  }
  return 0;
}
/* TO DISPLAY ELEMENTS OF STACK */
void SHOW(int stack[]){
  int i;
    if (TOP == -1) {
      std::cout << "Stack is empty" << '\n';
    } else{
      std::cout << "Elements in stack = " << '\n';
      std::cout << "[ ";
      for(i=TOP;i>=0;i--){
        std::cout <<stack[i] << ' ' ;
      }
      std::cout << " ]" << '\n';
    }
}
/* TO ADD ELEMENT IN STACK */
void PUSH(int stack[], int item){
  if(TOP == MAX-1){
    std::cout << "Stack is full" << '\n';
  } else{
    TOP++;
    STACK[TOP] = item;
  }
}
/* USED TO DELETE ELEMENTS FROM STACK */
void POP(){
int deletedItem;
  if(TOP == -1){
    std::cout << "Stack is empty" << '\n';
  } else{
    deletedItem = STACK[TOP];
    TOP--;
    std::cout << "Deleted Item = "<< deletedItem << '\n';
  }
}
