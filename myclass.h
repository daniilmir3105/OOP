//
// Created by Daniil on 01.10.2021.
//

#ifndef OOP_MYCLASS_H
#define OOP_MYCLASS_H

//#include "sfuns.h"
#include <stdlib.h>

// define class
struct myclass;
typedef struct myclass t_myclass;

// define events in class
typedef struct myclass_events {
    void (*on_event_1)(t_myclass* object);
    void (*on_event_2)(t_myclass* object);
    void (*on_event_3)(t_myclass* object);
    void (*on_event_4)(t_myclass* object);
    void (*on_event_5)(t_myclass* object);
} t_myclass_events;

// constructor and destructor
t_myclass * myclass_create (int* exception);
void myclass_destroy(t_myclass* object);

// define event listener
void myclass_set_listener(t_myclass* object, t_myclass_events* listener);

// memory of the ancestors
void myclass_set_parent(t_myclass* object, void* parent);
void* myclass_get_parent(t_myclass* object);

void myclass_set_value(t_myclass* object, void* value);
void* myclass_get_value(t_myclass* object);

#endif //OOP_MYCLASS_H
