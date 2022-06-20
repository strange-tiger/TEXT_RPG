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
		
		player.SetName("용사");
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
		player.Setjob("프로그래머");
		cout << "\n\n엔터를 눌러 넘어가기";
		while (!Input::GetKeyDown(VK_RETURN));
		cnt++;
		break;
	case 6:
		/*Monster orc;
		orc.SetName("오크");
		orc.SetHp(100);
		orc.SetAtt(9);
		cout << "1. 공격 2. 스킬 3. 도망";*/
		select = (int)(getchar() - '0');
		if (select > 0 && select < 4)
		{
			cnt += select;
		}
	default:
		cout << "\n\n엔터를 눌러 넘어가기";
		while (!Input::GetKeyDown(VK_RETURN));
		cnt++;
		break;
	}
}

string_view sceneScript[] =
{
	"당신은 왕의 의뢰를 받고 마국의 왕,\n마왕을 암살하러 가는 중입니다.",
	"당신의 이름은 무엇입니까? : ",
	"...외우기 귀찮네요. 용사로 하죠.\n그럼 당신의 직업은 뭐죠?\n1. 검사\t2. 기사\t3. 프로그래머",
	"검사요? 그럼 로스쿨을 나오셨나요?\n아니라구요? 그럼 검사가 아니죠~\n다시 한번 생각해보세요.\n\n1. 검사\t2. 기사\t3. 프로그래머",
	"기사요? 바둑 기사? 그럼 바둑 기원을 나오셨나요?\n아니라구요? 그럼 프로 기사가 아니죠~\n다시 한번 생각해보세요.\n\n1. 검사\t2. 기사\t3. 프로그래머",
	"프로그래머요? 훌륭한 직업이네요!\n마왕을 암살하기에 딱 적당해요!\n그럼 당장 출발해볼까요?",
	"먼저 상점을 들러야겠는데, 안 좋은 소식입니다.\n웬 오크가 상점을 박살내고 있네요.\n당장 오크를 무찔러 주세요!",


};
void InGame::Render()
{
	system("cls");

	cout << "*********************************" << endl;
	cout << "**  귀찮아서 대충 만든 알피지  **" << endl;
	cout << "*********************************" << endl;

	cout << "| 이름 : " << player.GetName() << endl;
	cout << "|" << endl;
	cout << "| 직업 : " << player.Getjob() << endl;
	cout << "|" << endl;
	cout << "| 체력 : " << player.GetHp() << endl;
	cout << "|" << endl;
	cout << "| 공격력 : " << player.GetAtt() << endl;
	cout << "|" << endl;
	cout << "| 소지금 : " << player.GetMoney() << endl;
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
