#ifndef __SWAP_H
#define __SWAP_H

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a + *b;
}
