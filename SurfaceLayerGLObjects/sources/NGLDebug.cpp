#include "NGLDebug.h"




int GLError()
{
	GLenum code = glGetError();
	if (code != GL_NO_ERROR)
	{
		const char* codeString = GLErrorString(code);
		fprintf(stderr, "OpenGL error: %s\n", codeString);
		return 1;
		
	}
	
	return 0;
}