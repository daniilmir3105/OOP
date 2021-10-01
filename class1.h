//
// Created by Daniil on 01.10.2021.
//

#ifndef OOP_CLASS1_H
#define OOP_CLASS1_H

//#include "sfuns.h"
#include <stdlib.h>

// define class
struct class1;
typedef struct class1 t_class1;

// define events in class
typedef struct t_class1_events {
    void (*on_event_1)(t_class1* object);
    void (*on_event_2)(t_class1* object);
    void (*on_event_3)(t_class1* object);
    void (*on_event_4)(t_class1* object);
    void (*on_event_5)(t_class1* object);
} t_class1_events;

// constructor and destructor
t_class1 * class1_create (int* exception);
void class1_destroy(t_class1* object);

// define event listener
void class1_set_listener(t_class1* object, t_class1_events* listener);

// memory of the ancestors
void class1_set_parent(t_class1* object, void* parent);
void* class1_get_parent(t_class1* object);

void class1_set_value(t_class1* object, void* value);
void* class1_get_value(t_class1* object);

#endif //OOP_CLASS1_H
