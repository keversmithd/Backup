#ifndef NGLVERTEXARRAY
#define NGLVERTEXARRAY

#include "NGLDebug.h"

struct NGLVertexArray
{
private:
	unsigned int m_va;
	bool deleted;
public:
	NGLVertexArray();
	int GenerateVertexArray();
	int BindVertexArray();
	int UnbindVertexArray();
	int VertexArrayElementBuffer(GLuint buffer);
	int EnableVertexArrayAttrib(GLuint index);
	int DisableVertexArrayAttrib(GLuint index);
	int VertexArrayAttribBinding(GLuint attribindex, GLuint bindingindex);
	int VertexArrayAttribDivisor(GLuint index, GLuint divisor);
	int VertexAttrib(GLuint index, GLuint divisor);
	int VertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer);
	int VertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);
	int VertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);
	bool IsVertexArray();
	int GetVertexArrayiv(GLenum pname, GLint* param);
	int GetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint* param);
	int GetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64* param);
	int DeleteVertexArray();
	~NGLVertexArray();

};


#endif
