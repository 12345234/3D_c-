#pragma once
class InputManager
{
private:
	char nowkey[256];
	char oldkey[256];

public:
	void Update();

	bool Press(int key);
	bool Trigger(int key);
	bool Release(int key);
};

