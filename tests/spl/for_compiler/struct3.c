/*
 * Includes
 */
#include <stdbool.h>
#include <stdlib.h>

/*
 * Preloaded Code
 */
typedef struct SPLArray {
  int length;
  void* arr[];
} SPLArray;

void freeSPLArray (SPLArray* a) {
  free(a->arr);
  free(a);
}

/*
 * Structs
 */
struct First_1;
struct Second_1;

typedef struct First_1 {
  struct Second_1* a_1;
} First_1;

typedef struct Second_1 {
  struct First_1* b_1;
} Second_1;

int main() {return 0;}
