#pragma once

#include "cocos_framework.h"

enum HeroKind
{
	���� = 100,
	��,
	Ļ�ŷ�,
};

class HeroUnit
{
	SpriteFrameCache* cache;

	vector<HeroUnit*> _unitVec; // ����

	Sprite* _UnitSprite; // ���ֽ�������Ʈ

	float _Hp; // ü��
	float _Atk; // ���ݷ�
	float _Speed; // ���ǵ�
	HeroKind _unitKind; // ��������
	HeroUnit* _heroUnit; // ���ְ�ü

public:
	HeroUnit(Scene* scene, HeroKind herokind);

	vector<HeroUnit*> getUnitVec() { return _unitVec; }
	HeroKind getHeroKind() { return _unitKind; }
	Sprite* getSprite() { return _UnitSprite; }
	void setSprite(Sprite* pSprite) { _UnitSprite = pSprite; }
	float getHp() { return _Hp; }
	void setHp(float hp) { _Hp = hp; }
	float getAtk() { return _Atk; }
	void setAtk(float atk) { _Atk = atk; }
	float getSpeed() { return _Speed; }
	void setSpeed(float speed) { _Speed = speed; }

};