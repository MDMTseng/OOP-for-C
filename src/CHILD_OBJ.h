
#ifndef CHILD_OBJ_H_
#define CHILD_OBJ_H_

#include "CxOOP.h"
#include "PARENT_OBJ.h"

#define CHILD_OBJ_PUBLIC_MEMBER_\
        int child_ID;

#define CHILD_OBJ_PRIVATE_MEMBER_\

#define CHILD_OBJ_PUBLIC_METHOD_(COBJ,MACRO_X)\

#define CHILD_OBJ_PRIVATE_METHOD_(COBJ,MACRO_X)\

#define CHILD_OBJ_OVERRIDE_METHOD_(COBJ,MACRO_X)\
        MACRO_X(COBJ,int,DoAction, COBJ* self)\

#define CHILD_OBJ_DNA_(X1,COBJ)  \
        PARENT_OBJ_DNA_(X1,COBJ)\
        X1(PARENT_OBJ,COBJ)

CxOOP_OBJECT_DECLARE(CHILD_OBJ)


#endif
