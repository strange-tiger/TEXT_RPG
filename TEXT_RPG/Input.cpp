#include "Input.h"
#include "Common.h"

void Input::Update(void)
{
	memcpy(s_isKeyDownOnPrevFrame, s_isKeyDownOnCurrentFrame, sizeof(s_isKeyDownOnCurrentFrame));

	for (int vkey = 0; vkey < 256; ++vkey)
	{
		if (IS_KEY_DOWN(vkey))
		{
			s_isKeyDownOnCurrentFrame[vkey] = true;
		}
		else
		{
			s_isKeyDownOnCurrentFrame[vkey] = false;
		}
	}
}

bool Input::GetKeyDown(int vkey)
{
	if (false == s_isKeyDownOnPrevFrame[vkey] && true == s_isKeyDownOnCurrentFrame[vkey])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Input::GetKeyUp(int vkey)
{
	if (true == s_isKeyDownOnPrevFrame[vkey] && false == s_isKeyDownOnCurrentFrame[vkey])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Input::GetKey(int vkey)
{
	if (true == s_isKeyDownOnPrevFrame[vkey] && true == s_isKeyDownOnCurrentFrame[vkey])
	{
		return true;
	}
	else
	{
		return false;
	}
}
