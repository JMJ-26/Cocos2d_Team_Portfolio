#pragma once

#include "cocos_framework.h"
#include "Hero.h"
#include "HeroUnit.h"

class HeroControl : Scene
{
	SpriteFrameCache* cache; // ĳ��
	Hero* _hero; // ����� ��ü
	HeroUnit* _heroUnit; // ����� ���ְ�ü
	vector<HeroUnit*> _heroUnitVec; // ����

	EventListenerTouchOneByOne* listener;

	Scene* _scene;
	Sprite* _leftButton; // ����Move��ư
	Sprite* _rightButton; // ������Move��ư
	Sprite* _mainDashbord; // �뽬����
	Sprite* _mainDashbordCase; // �뽬���� ���̽�
	Sprite* _skillOneButton;
	Sprite* _skillTwoButton;
	Sprite* _skillThreeButton;

	bool _right;
	bool _left;

	bool _skillOneClick;
	bool _skillTwoClick;
	bool _skillThreeClick;

public:
	HeroControl(Scene* scene, Hero* hero);
	void HeroMove();
	void UnitMove();
	void HeroManaRegen();

	bool onTouchBegan(Touch* touch, Event* event);
	void onTouchMoved(Touch* touch, Event* event);
	void onTouchEnded(Touch* touch, Event* event);

	vector<HeroUnit*> getHeroUnitVec() { return _heroUnitVec; }
};