#pragma once

#define IS_KEY_DOWN(vkey) (0x8000 & GetAsyncKeyState(vkey))

static bool s_isKeyDownOnPrevFrame[256] = { false };
static bool s_isKeyDownOnCurrentFrame[256] = { false };

class Input
{
public:
	// 입력부를 업데이트한다.
	// 이전 프레임의 키 내용 저장 및 현재 프레임의 키 상태를 가져와야 함.
	static void Update(void);

	// 현재 프레임에 키가 눌렸다면 true, 아니면 false
	// vkey : 가상 키코드
	static bool GetKeyDown(int vkey);

	// 현재 프레임에 키가 떼졌다면 true, 아니면 false
	// vkey : 가상 키코드
	static bool GetKeyUp(int vkey);

	// 이전 프레임과 현재 프레임에 모두 키가 눌렸다면 true, 아니면 false
	// vkey : 가상 키코드
	static bool GetKey(int vkey);
};