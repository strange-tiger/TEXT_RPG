#pragma once

#define IS_KEY_DOWN(vkey) (0x8000 & GetAsyncKeyState(vkey))

static bool s_isKeyDownOnPrevFrame[256] = { false };
static bool s_isKeyDownOnCurrentFrame[256] = { false };

class Input
{
public:
	// �Էºθ� ������Ʈ�Ѵ�.
	// ���� �������� Ű ���� ���� �� ���� �������� Ű ���¸� �����;� ��.
	static void Update(void);

	// ���� �����ӿ� Ű�� ���ȴٸ� true, �ƴϸ� false
	// vkey : ���� Ű�ڵ�
	static bool GetKeyDown(int vkey);

	// ���� �����ӿ� Ű�� �����ٸ� true, �ƴϸ� false
	// vkey : ���� Ű�ڵ�
	static bool GetKeyUp(int vkey);

	// ���� �����Ӱ� ���� �����ӿ� ��� Ű�� ���ȴٸ� true, �ƴϸ� false
	// vkey : ���� Ű�ڵ�
	static bool GetKey(int vkey);
};