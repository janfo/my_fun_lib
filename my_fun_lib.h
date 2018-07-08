#ifndef MY_FUN_LIB_H_INCLUDED
#define MY_FUN_LIB_H_INCLUDED

typedef enum  Boolean{FALSE, TRUE} boolean;

//find element and return its index
int find_element_i(int element, int tab[], int n);
int find_element_f(float element, float tab[], int n);

void swap_array(void *tab[],int n1,int n2);
#endif // MY_FUN_LIB_H_INCLUDED
