#include "Scene.h"

Title title;
InGame inGame;
End endGame;
Scene* scene = &title;

void Scene::Update()
{
	
}

void Scene::Render()
{

}

bool Scene::IsSetNextScene()
{
	if (SCENE_NULL == scene->s_next)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Scene::SetNext(SceneID sceneID)
{
	scene->s_next = sceneID;
}

void Scene::Change()
{
	switch (scene->s_next)
	{
	case SCENE_TITLE:
		scene = &title;
		break;
	case SCENE_GAME:
		scene = &inGame;
		break;
	case SCENE_END:
		scene = &endGame;
		break;
	}

	SetNext(SCENE_NULL);
}

void Title::Update()
{
	if (IS_KEY_DOWN(VK_RETURN))
	{
		SetNext(SCENE_GAME);
	}
}

void Title::Render()
{
	system("cls");
	printTitle();
}

Player player;
int16 cnt = 0;

void InGame::Update()
{
	int select = 0;
	string name = "";

	switch (cnt)
	{
	case 1:	
		cin >> name;
		player.SetName(name);
		cnt++;
		break;
	case 2:
		select = (int)(getchar() - '0');
		if (select >= 0 && select < 4)
		{
			cnt += select;
		}
		
		player.SetName("���");
		break;
	case 3:
		select = (int)(getchar() - '0' - 1);
		if (select > -1 && select < 3)
		{
			cnt += select;
		}
		
		break;
	case 4:
		select = (int)(getchar() - '0' - 2);
		if (select > -2 && select < 2)
		{
			cnt += select;
		}
		
		break;
	case 5:
		player.Setjob("���α׷���");
		cout << "\n\n���͸� ���� �Ѿ��";
		while (!Input::GetKeyDown(VK_RETURN));
		cnt++;
		break;
	case 6:
		/*Monster orc;
		orc.SetName("��ũ");
		orc.SetHp(100);
		orc.SetAtt(9);
		cout << "1. ���� 2. ��ų 3. ����";*/
		select = (int)(getchar() - '0');
		if (select > 0 && select < 4)
		{
			cnt += select;
		}
	default:
		cout << "\n\n���͸� ���� �Ѿ��";
		while (!Input::GetKeyDown(VK_RETURN));
		cnt++;
		break;
	}
}

string_view sceneScript[] =
{
	"����� ���� �Ƿڸ� �ް� ������ ��,\n������ �ϻ��Ϸ� ���� ���Դϴ�.",
	"����� �̸��� �����Դϱ�? : ",
	"...�ܿ�� �����׿�. ���� ����.\n�׷� ����� ������ ����?\n1. �˻�\t2. ���\t3. ���α׷���",
	"�˻��? �׷� �ν����� �����̳���?\n�ƴ϶󱸿�? �׷� �˻簡 �ƴ���~\n�ٽ� �ѹ� �����غ�����.\n\n1. �˻�\t2. ���\t3. ���α׷���",
	"����? �ٵ� ���? �׷� �ٵ� ����� �����̳���?\n�ƴ϶󱸿�? �׷� ���� ��簡 �ƴ���~\n�ٽ� �ѹ� �����غ�����.\n\n1. �˻�\t2. ���\t3. ���α׷���",
	"���α׷��ӿ�? �Ǹ��� �����̳׿�!\n������ �ϻ��ϱ⿡ �� �����ؿ�!\n�׷� ���� ����غ����?",
	"���� ������ �鷯�߰ڴµ�, �� ���� �ҽ��Դϴ�.\n�� ��ũ�� ������ �ڻ쳻�� �ֳ׿�.\n���� ��ũ�� ���� �ּ���!",


};
void InGame::Render()
{
	system("cls");

	cout << "*********************************" << endl;
	cout << "**  �����Ƽ� ���� ���� ������  **" << endl;
	cout << "*********************************" << endl;

	cout << "| �̸� : " << player.GetName() << endl;
	cout << "|" << endl;
	cout << "| ���� : " << player.Getjob() << endl;
	cout << "|" << endl;
	cout << "| ü�� : " << player.GetHp() << endl;
	cout << "|" << endl;
	cout << "| ���ݷ� : " << player.GetAtt() << endl;
	cout << "|" << endl;
	cout << "| ������ : " << player.GetMoney() << endl;
	cout << "|" << endl;
	cout << "|" << endl;
	cout << sceneScript[cnt] << endl;

}

void End::Update()
{
	if (IS_KEY_DOWN(VK_RETURN))
	{
		SetNext(SCENE_TITLE);
	}
}

void End::Render()
{
	system("cls");
	printEnd();
}
