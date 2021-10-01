//
// Created by Daniil on 01.10.2021.
//

#include <stdlib.h>
#include <stdio.h>

// here we import our class
#include "myclass.h"

// define class with fields
struct myclass {
    t_myclass_events* listener;
    void* parent;

    // some fields, that are can be used in object and methods
    int value;

    // doughters classes
    // some code...

    // Eventhandlers for doughterclass objects
    void class1_handler_event (t_class1* class_object) {

    }
};
