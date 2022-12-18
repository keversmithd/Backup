#include "NGLProgram.h"


NGLProgram::NGLProgram()
{
	m_program = 0;
	created = false;
}
int NGLProgram::CreateProgram()
{
	if (created)
	{
		printf("Program already created, delete program and continue.\n");
		return 0;
	}
	m_program = glCreateProgram();
	GetError
		if (Code) { return 0; }
	created = true;
	return 1;
}

int NGLProgram::DeleteProgram()
{
	if (created)
	{
		glDeleteProgram(m_program);
		GetError
			if (Code) { return 0; }
		created = false;
		return 1;
	}
	printf("Program object doesn't exist, generate in order to delete.\n");
	return 0;
}
int NGLProgram::GetProgramBinary(GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary)
{
	if (created)
	{
		glGetProgramBinary(m_program, bufSize, length, binaryFormat, binary);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::GetProgramInfoLog(GLsizei maxLength, GLsizei* length, GLchar* infoLog)
{
	if (created)
	{
		glGetProgramInfoLog(m_program, maxLength,length,infoLog);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::GetProgramInterfaceiv(GLenum programInterface, GLenum pname, GLint* params)
{
	if (created)
	{
		glGetProgramInterfaceiv(m_program, programInterface, pname, params);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::GetProgramiv(GLenum pname, GLint* params)
{
	if (created)
	{
		glGetProgramiv(m_program, pname, params);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::GetProgramResourceIndex(GLenum programInterface, const char* name)
{
	if (created)
	{
		glGetProgramResourceIndex(m_program, programInterface, name);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::GetProgramResourceiv(GLenum programInterface, GLuint index, GLsizei propCount, const GLenum* props, GLsizei bufSize, GLsizei* length, GLint* params)
{
	if (created)
	{
		glGetProgramResourceIndex(m_program, programInterface, index, propCount, props, bufSize, length, params);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::GetProgramResourceLocation(GLenum programInterface, const char* name)
{
	if (created)
	{
		glGetProgramResourceLocation(m_program, programInterface, name);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::GetProgramResourceLocationIndex(GLenum programInterface, const char* name)
{
	if (created)
	{
		glGetProgramResourceLocationIndex(m_program, programInterface, name);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::GetProgramResourceName(GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei* length, char* name)
{
	if (created)
	{
		glGetProgramResourceName(m_program, programInterface, index, bufSize, length, name );
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::GetProgramStageiv(GLenum pname, GLint* params)
{
	if (created)
	{
		glGetProgramiv(m_program, pname, params );
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::IsProgram()
{
	GLboolean isprgm = glIsProgram(m_program);
	return isprgm;
}
int NGLProgram::AttachShader(GLuint shader) 
{
	if (created)
	{
		glAttachShader(m_program, shader);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::DetachShader(GLuint shader)
{
	if (created)
	{
		glDetachShader(m_program, shader);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::LinkProgram()
{
	if (created)
	{
		glLinkProgram(m_program);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramBinary(GLenum binaryFormat, const void* binary, GLsizei length)
{
	if (created)
	{
		glProgramBinary(m_program, binaryFormat, binary, length);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramParamateri(GLenum pname, GLint value)
{
		glProgramParameteri(m_program, pname, value);
		GetError
			if (Code) { return 0; }
		return 1;
}
int NGLProgram::ProgramUniform1d(GLint location, GLdouble x)
{
	if (created)
	{
		glProgramUniform1d(m_program, location, x);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;

}
int NGLProgram::ProgramUniform1dv(GLint location, GLsizei count, GLdouble* x)
{
	if (created)
	{
		glProgramUniform1dv(m_program, location, count, x);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform1f(GLint location, GLfloat v0)
{
	if (created)
	{
		glProgramUniform1f(m_program, location, v0);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform1fv(GLint location, GLsizei count, GLfloat* v0)
{
	if (created)
	{
		glProgramUniform1fv(m_program, location, count, v0);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform1i(GLint location, GLint v0)
{
	if (created)
	{
		glProgramUniform1i(m_program, location, v0);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform1iv(GLint location, GLsizei count, GLint* v0)
{
	if (created)
	{
		glProgramUniform1iv(m_program, location, count, v0);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform1ui(GLint location, GLuint x)
{
	if (created)
	{
		glProgramUniform1ui(m_program, location, x);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform1uiv(GLint location, GLsizei count, GLuint* v0)
{
	if (created)
	{
		glProgramUniform1uiv(m_program, location, count, v0);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform2d(GLint location, GLdouble x, GLdouble y)
{
	if (created)
	{
		glProgramUniform2d(m_program, location, x,y);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform2dv(GLint location, GLsizei count, GLdouble* value)
{
	if (created)
	{
		glProgramUniform2dv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform2f(GLint location, GLfloat x, GLfloat y)
{
	if (created)
	{
		glProgramUniform2f(m_program, location, x,y);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform2fv(GLint location, GLsizei count, GLfloat* value)
{
	if (created)
	{
		glProgramUniform2fv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform2i(GLint location, GLint x, GLint y)
{
	if (created)
	{
		glProgramUniform2i(m_program, location, x, y);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform2iv(GLint location, GLsizei count, GLint* value)
{
	if (created)
	{
		glProgramUniform2iv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform2ui(GLint location, GLuint x, GLuint y)
{
	if (created)
	{
		glProgramUniform2ui(m_program, location, x, y);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform2uiv(GLint location, GLsizei count, GLuint* value)
{
	if (created)
	{
		glProgramUniform2uiv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
	if (created)
	{
		glProgramUniform3d(m_program, location, x, y, z);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform3dv(GLint location, GLsizei count, GLdouble* value)
{
	if (created)
	{
		glProgramUniform3dv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform3f(GLint location, GLfloat x, GLfloat y, GLfloat z)
{
	if (created)
	{
		glProgramUniform3f(m_program, location, x, y, z);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform3fv(GLint location, GLsizei count, GLfloat* value)
{
	if (created)
	{
		glProgramUniform3fv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform3i(GLint location, GLint x, GLint y, GLint z)
{
	if (created)
	{
		glProgramUniform3i(m_program, location, x, y, z);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform3iv(GLint location, GLsizei count, GLint* value)
{
	if (created)
	{
		glProgramUniform3iv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform3ui(GLint location, GLuint x, GLuint y, GLuint z)
{
	if (created)
	{
		glProgramUniform3ui(m_program, location, x, y, z);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform3uiv(GLint location, GLsizei count, GLuint* value)
{
	if (created)
	{
		glProgramUniform3uiv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	if (created)
	{
		glProgramUniform4d(m_program, location, x,y,z,w);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform4dv(GLint location, GLsizei count, GLdouble* value)
{
	if (created)
	{
		glProgramUniform4dv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform4f(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	if (created)
	{
		glProgramUniform4f(m_program, location, x, y, z, w);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform4fv(GLint location, GLsizei count, GLfloat* value)
{
	if (created)
	{
		glProgramUniform4fv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform4i(GLint location, GLint x, GLint y, GLint z, GLint w)
{
	if (created)
	{
		glProgramUniform4i(m_program, location, x, y, z, w);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform4iv(GLint location, GLsizei count, GLint* value)
{
	if (created)
	{
		glProgramUniform4iv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform4ui(GLint location, GLuint x, GLuint y, GLuint z, GLuint w)
{
	if (created)
	{
		glProgramUniform4ui(m_program, location, x, y, z, w);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniform4uiv(GLint location, GLsizei count, GLuint* value)
{
	if (created)
	{
		glProgramUniform4uiv(m_program, location, count, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, GLdouble* value)
{
	if (created)
	{
		glProgramUniformMatrix2dv(m_program, location, count, transpose, value);
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, GLfloat* value)
{
	if (created)
	{
		glProgramUniformMatrix2fv(m_program, location, count, transpose, value );
		GetError
			if (Code) { return 0; }
		return 1;
	}
	printf("Program object doesn't exist, generate in order to edit.\n");
	return 0;
}
int NGLProgram::ProgramUniformMatrix2x3dv(){}
int NGLProgram::ProgramUniformMatrix2x3fv(){}
int NGLProgram::ProgramUniformMatrix2x4dv(){}
int NGLProgram::ProgramUniformMatrix2x4fv(){}
int NGLProgram::ProgramUniformMatrix3dv(){}
int NGLProgram::ProgramUniformMatrix3fv(){}
int NGLProgram::ProgramUniformMatrix3x2dv(){}
int NGLProgram::ProgramUniformMatrix3x2fv(){}
int NGLProgram::ProgramUniformMatrix3x4dv(){}
int NGLProgram::ProgramUniformMatrix3x4fv(){}
int NGLProgram::ProgramUniformMatrix4dv(){}
int NGLProgram::ProgramUniformMatrix4fv(){}
int NGLProgram::ProgramUniformMatrix4x2dv(){}
int NGLProgram::ProgramUniformMatrix4x2fv(){}
int NGLProgram::ProgramUniformMatrix4x3dv(){}
int NGLProgram::ProgramUniformMatrix4x3fv(){}
int NGLProgram::UseProgram(){}
int NGLProgram::ValidateProgram(){}
int NGLProgram::CreateBinary(){}
int NGLProgram::ActiveShaderProgram() {}
NGLProgram::~NGLProgram(){}