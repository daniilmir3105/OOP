//
// Created by Daniil on 30.09.2021.
//
#include <stdio.h>
#include <stdlib.h>

t_mynewclass mynewclass_create (int *exception) {
    t_mynewclass* new_object = malloc (sizeof (t_mynewclass));
    if (new_object == NULL) {
        *exception = errno;
        return NULL;
    }
    new_object -> buffer = malloc(bsize_buff*sizeof (t_buffer));
}