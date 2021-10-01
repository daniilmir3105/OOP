//
// Created by Daniil on 01.10.2021.
//

#ifndef OOP_CLASS2_H
#define OOP_CLASS2_H

//#include "sfuns.h"
#include <stdlib.h>

// define class
struct class2;
typedef struct class2 t_class2;

// define events in class
typedef struct myclass_events {
    void (*on_event_1)(t_class2* object);
    void (*on_event_2)(t_class2* object);
    void (*on_event_3)(t_class2* object);
    void (*on_event_4)(t_class2* object);
    void (*on_event_5)(t_class2* object);
} t_class2_events;

// constructor and destructor
t_class2 * class2_create (int* exception);
void class2_destroy(t_class2* object);

// define event listener
void class2_set_listener(t_class2* object, t_class2_events* listener);

// memory of the ancestors
void class2_set_parent(t_class2* object, void* parent);
void* class2_get_parent(t_class2* object);

void class2_set_value(t_class2* object, void* value);
void* class2_get_value(t_class2* object);

#endif //OOP_CLASS2_H
