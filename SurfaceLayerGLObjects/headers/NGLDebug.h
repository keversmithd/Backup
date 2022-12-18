#ifndef NGLDebug
#define NGLDebug

#include <GL/glew.h>
#include <stdio.h>

#define GetError int Code = GLError(); if(Code){ fprintf(stderr, "Found in  %s \n at line :  %d \n", __FUNCTION__ __FILE__, __LINE__);}
#define Status printf(__FILE__ "\n" __FUNCTION__ "\n" "%d \n", __LINE__ );

const char* GLErrorString(GLenum Code)
{

    const char* ErrorString;
    switch (Code)
    {
    case GL_INVALID_ENUM:                  ErrorString = "INVALID_ENUM"; break;
    case GL_INVALID_VALUE:                 ErrorString = "INVALID_VALUE"; break;
    case GL_INVALID_OPERATION:             ErrorString = "INVALID_OPERATION"; break;
    case GL_STACK_OVERFLOW:                ErrorString = "STACK_OVERFLOW"; break;
    case GL_STACK_UNDERFLOW:               ErrorString = "STACK_UNDERFLOW"; break;
    case GL_OUT_OF_MEMORY:                 ErrorString = "OUT_OF_MEMORY"; break;
    case GL_INVALID_FRAMEBUFFER_OPERATION: ErrorString = "INVALID_FRAMEBUFFER_OPERATION"; break;
    default: ErrorString = "No Error";
    }

    return ErrorString;
}

int GLError();


#endif
