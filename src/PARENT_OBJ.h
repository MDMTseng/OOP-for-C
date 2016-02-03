
#ifndef PARENT_OBJ_H_
#define PARENT_OBJ_H_

#include "OBJECT_MACRO.h"

#define PARENT_OBJ_PUBLIC_MEMBER_\
        int pub;
#define PARENT_OBJ_PRIVATE_MEMBER_\
        int __priv;


#define PARENT_OBJ_PUBLIC_METHOD_(PREFIX,MACRO_X)\
        MACRO_X(PREFIX,int,GetPublic, PARENT_OBJ* a)\
        MACRO_X(PREFIX,int,GetPrivate, PARENT_OBJ* a)

#define PARENT_OBJ_PRIVATE_METHOD_(PREFIX,MACRO_X)\
        MACRO_X(PREFIX,int,__GetPrivate, PARENT_OBJ* a)


#define PARENT_OBJ_OVERRIDE_METHOD_(PREFIX,MACRO_X)\


OBJECT_INHERIT(PARENT_OBJ,NULL_OBJ)
#define PARENT_OBJ_INH_  \
        NULL_OBJ_INH_\
        OBJECT_INHERIT_STRUCT_PRIDELCAREX_(PARENT_OBJ)



//OBJECT_INHERIT_STRUCT_PRIDELCARE_(PARENT_OBJ,NULL_OBJ)

#endif