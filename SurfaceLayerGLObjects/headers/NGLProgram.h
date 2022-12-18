#ifndef NGLPROGRAM
#define NGLPROGRAM

#include "NGLDebug.h"

struct NGLProgram 
{
private:
	unsigned int m_program;
	bool created;
public:
	NGLProgram();
	int CreateProgram();
	int DeleteProgram();
	int GetProgramBinary(GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary);
	int GetProgramInfoLog();
	int GetProgramInterfaceiv();
	int GetProgramiv();
	int GetProgramResourceIndex();
	int GetProgramResourceiv();
	int GetProgramResourceLocation();
	int GetProgramResourceLocationIndex();
	int GetProgramResourceName();
	int GetProgramStageiv();
	int GetActiveAttrib();
	int GetActiveAtomicCounterBufferiv();
	int GetActiveSubroutineName();
	int GetActiveSubroutineUniformName();
	int GetActiveUniform();
	int GetActiveUniformBlock();
	int GetActiveUniformBlockName();
	int GetActiveUniformName();

	int BindAttribLocation();
	int BindFragDataLocation();
	int BindFragDataLocationIndexed();

	bool IsProgram();

	int AttachShader();
	int DetachShader();

	int LinkProgram();
	int ProgramBinary();
	int ProgramParamateri();
	int ProgramUniform1d();
	int ProgramUniform1dv();
	int ProgramUniform1f();
	int ProgramUniform1fv();
	int ProgramUniform1i();
	int ProgramUniform1iv();
	int ProgramUniform1ui();
	int ProgramUniform1uiv();
	int ProgramUniform2d();
	int ProgramUniform2dv();
	int ProgramUniform2f();
	int ProgramUniform2fv();
	int ProgramUniform2i();
	int ProgramUniform2iv();
	int ProgramUniform2ui();
	int ProgramUniform2uiv();
	int ProgramUniform3d();
	int ProgramUniform3dv();
	int ProgramUniform3f();
	int ProgramUniform3fv();
	int ProgramUniform3i();
	int ProgramUniform3iv();
	int ProgramUniform3ui();
	int ProgramUniform3uiv();
	int ProgramUniform4d();
	int ProgramUniform4dv();
	int ProgramUniform4f();
	int ProgramUniform4fv();
	int ProgramUniform4i();
	int ProgramUniform4iv();
	int ProgramUniform4ui();
	int ProgramUniform4uiv();
	int ProgramUniformMatrix2dv();
	int ProgramUniformMatrix2fv();
	int ProgramUniformMatrix2x3dv();
	int ProgramUniformMatrix2x3fv();
	int ProgramUniformMatrix2x4dv();
	int ProgramUniformMatrix2x4fv();
	int ProgramUniformMatrix3dv();
	int ProgramUniformMatrix3fv();
	int ProgramUniformMatrix3x2dv();
	int ProgramUniformMatrix3x2fv();
	int ProgramUniformMatrix3x4dv();
	int ProgramUniformMatrix3x4fv();
	int ProgramUniformMatrix4dv();
	int ProgramUniformMatrix4fv();
	int ProgramUniformMatrix4x2dv();
	int ProgramUniformMatrix4x2fv();
	int ProgramUniformMatrix4x3dv();
	int ProgramUniformMatrix4x3fv();
	int UseProgram();
	int ValidateProgram();
	int CreateBinary();
	int ActiveShaderProgram();
	~NGLProgram();

};

#endif
