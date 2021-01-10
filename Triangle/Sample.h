#pragma once
class SampleApp
{
public:
	//virtual ~SampleApp();

	virtual void Initialize(int width, int height) = 0;
	virtual void Terminate() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void OnEventKey(int keyID) = 0;

	virtual void SetResourcePath(const char* _path) = 0;
};