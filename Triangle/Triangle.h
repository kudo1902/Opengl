#include "Sample.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Triangle : public SampleApp
{
public:
	Triangle();
	virtual ~Triangle();

	virtual void Initialize(int width, int height);
	virtual void Terminate();
	virtual void Update();
	virtual void Draw();
	virtual void OnEventKey(int keyID);

	virtual void SetResourcePath(const char* _path);
private:
	unsigned int VBO;
	unsigned int VAO;
	unsigned int EBO;
	unsigned int shaderProgram;
};
