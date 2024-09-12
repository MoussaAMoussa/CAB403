#include <stdio.h>
#include <stdlib.h>
#include "dbl_vector.h"
#define DV_INITIAL_CAPACITY 4
#define DV_GROWTH_FACTOR

void dv_init( dbl_vector_t* vec ) {
    typedef struct {
        double* data;
        size_t size;
        size_t capacity;
    } dbl_vector_t;

    {
        vec->size = 0;
        vec->capacity = DV_INITIAL_CAPACITY;
        vec-> data = (double*) malloc(DV_INITIAL_CAPACITY * sizeof(double));

        if (vec->data == NULL) {
        // Handle memory allocation failure
        printf("Memory allocation failed!\n");
        exit(1);
        }
        
    }
}

void dv_ensure_capacity( dbl_vector_t* vec, size_t new_size ) {
    size_t old_capacity = vec->capacity;
    size_t old_size = vec->size;
    double* old_data = vec->data;
    
    if (new_size <= old_capacity) {
        return;
    }

    size_t new_capacity = old_capacity * DV_GROWTH_FACTOR;
    if (new_capacity < new_size) {
        new_capacity = new_size;
    }
    
    double* new_data = (double*) realloc(old_data, new_capacity * sizeof(double));

    if (new_data == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    vec->data = new_data;
    vec->capacity = new_capacity;
}

void dv_destroy( dbl_vector_t* vec ) {
    // INSERT SOLUTION HERE
}

void dv_copy( dbl_vector_t* vec, dbl_vector_t* dest ) {
    // INSERT SOLUTION HERE
}

void dv_clear( dbl_vector_t* vec ) {
    // INSERT SOLUTION HERE
}

void dv_push( dbl_vector_t* vec, double new_item ) {
    // INSERT SOLUTION HERE
}

void dv_pop( dbl_vector_t* vec ) {
    // INSERT SOLUTION HERE
}

double dv_last( dbl_vector_t* vec ) {
    double result = NAN;
    // INSERT SOLUTION HERE
    return result;
}

void dv_insert_at( dbl_vector_t* vec, size_t pos, double new_item ) {
    // INSERT SOLUTION HERE
}

void dv_remove_at( dbl_vector_t* vec, size_t pos ) {
    // INSERT SOLUTION HERE
}

void dv_foreach( dbl_vector_t* vec, void (*callback)(double, void*), void* info ) {
    // INSERT SOLUTION HERE
}
