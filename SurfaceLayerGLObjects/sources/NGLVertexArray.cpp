#include "NGLVertexArray.h"


NGLVertexArray::NGLVertexArray() 
{
	m_va = 0;
	deleted = true;
}
int NGLVertexArray::GenerateVertexArray()
{
	if (deleted)
	{
		glGenVertexArrays(1, &m_va);
		GetError
			if (Code) { return 0; }
		deleted = false;
		return 1;
	}

	printf("Vertex array is no deleted, delete before regenerating.\n");
	return 0;
}
int NGLVertexArray::BindVertexArray()
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
		return 0;
	}
	glBindVertexArray(m_va);
	GetError
		if (Code) { return 0; }

	return 1;

}
int NGLVertexArray::UnbindVertexArray()
{
	
	glBindVertexArray(0);
	GetError
		if (Code) { return 0; }
	return 1;
}
int NGLVertexArray::VertexArrayElementBuffer(GLuint buffer)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glVertexArrayElementBuffer(m_va, buffer);
	GetError
		if (Code) { return 0; }

	return 1;
}
int NGLVertexArray::EnableVertexArrayAttrib(GLuint index)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glEnableVertexArrayAttrib(m_va, index);
	GetError
		if (Code) { return 0; }

	return 1;

}
int NGLVertexArray::DisableVertexArrayAttrib(GLuint index)
{
	
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glDisableVertexArrayAttrib(m_va, index);
	GetError
		if (Code) { return 0; }

	return 1;
}
int NGLVertexArray::VertexArrayAttribBinding(GLuint attribindex, GLuint bindingindex)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glVertexArrayAttribBinding(m_va, attribindex, bindingindex);
	GetError
		if (Code) { return 0; }

	return 1;
}
int NGLVertexArray::VertexArrayAttribDivisor(GLuint index, GLuint divisor)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glVertexAttribDivisor(index, divisor);
	GetError
		if (Code) { return 0; }

	return 1;
}
int NGLVertexArray::VertexAttrib(GLuint index, GLuint divisor)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glVertexAttribDivisor(index, divisor);
	GetError
		if (Code) { return 0; }

	return 1;
}
int NGLVertexArray::VertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glVertexAttribPointer(index, size, type, normalized, stride, pointer);
	GetError
		if (Code) { return 0; }

	return 1;
}
int NGLVertexArray::VertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glVertexAttribIPointer(index, size, type, stride, pointer);
	GetError
		if (Code) { return 0; }

	return 1;
}
int NGLVertexArray::VertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glVertexAttribLPointer(index, size, type, stride, pointer);
	GetError
		if (Code) { return 0; }

	return 1;
}
bool NGLVertexArray::IsVertexArray()
{
	GLboolean isvertexarray = glIsVertexArray(m_va);
	return isvertexarray;
}
int NGLVertexArray::GetVertexArrayiv(GLenum pname, GLint* param)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glGetVertexArrayiv(m_va, pname, param);
	GetError
		if (Code) { return 0; }

	return 1;
}
int NGLVertexArray::GetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint* param)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glGetVertexArrayIndexediv(m_va, index,pname,param);
	GetError
		if (Code) { return 0; }
	return 1;
}
int NGLVertexArray::GetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64* param)
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, generate before editing. \n");
		Status
			return 0;
	}
	glGetVertexArrayIndexed64iv(m_va, index, pname, param);
	GetError
		if (Code) { return 0; }
	return 1;
}
int NGLVertexArray::DeleteVertexArray()
{
	if (deleted)
	{
		printf("Vertex array is currently deleted, cannot delete again. \n");
		Status
			return 0;
	}
	glDeleteVertexArrays(1, &m_va);
	GetError
		if (Code) { return 0; }
	deleted = true;
	return 1;

}
NGLVertexArray::~NGLVertexArray()
{
	DeleteVertexArray();
}