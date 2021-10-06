//
// Created by Daniil on 01.10.2021.
//

#include <stdlib.h>
#include <stdio.h>

// here we import our class
#include "myclass.h"
#include "class1.h"
#include "class2.h"

// define class with fields
struct myclass {
    t_myclass_events* listener;
    void* parent;

    // some fields, that are can be used in object and methods
    int value;

    // doughters classes
    // some code...

    // Eventhandlers for doughterclass objects
    void class1_handler_event (t_class1* class1_object) {
        t_myclass* parent = (t_myclass*) class1_get_parent (class1_object);
    }

    void class2_handler_event (t_class2* class2_object) {
        t_myclass* parent = (t_myclass*) class2_get_parent (class2_object);
    }

    // constructor
    t_myclass* myclass_create (int* exception)
     {
         int error;

         t_myclass* new_object = malloc(sizeof(t_myclass))

         if (new_object == NULL) {
             *exception = errno;
             return NULL;
         }
         // initialisation of variablles
         new_object->value = "something";

         // initialisation if doughters-objects
         new_object->object1 = class1_create(&error);
         if (new_object->object1 == NULL) {
             *exeption = error;
             free(new_object);
             return NULL;
         }

         new_object->object2 = class2_create(&error);
         if (new_object->object2 == NULL) {
             *exeption = error;
             free(new_object);
             return NULL;
         }

         // in construct describe the parent
         class1_set_parent(new_object->object1, (void*)new_object);
         class2_set_parent(new_object->object2, (void*)new_object);

         // describe functions-describers
         new_object->listener_1->on_event = class1_handler_event;
         new_object->listener_2->on_event = class2_handler_event;

         return new_object

    }

    void myclass_destroy (t_myclass* object) {
        class1_destroy(object->object1);
        class2_destroy(object->object2);

        // something

        free(object->object1);
        free(object->object1);
        object = NULL;
    }


};
