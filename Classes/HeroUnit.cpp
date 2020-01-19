#include "HeroUnit.h"

HeroUnit::HeroUnit(Scene * scene, HeroKind herokind)
{
	cache = SpriteFrameCache::getInstance();
	cache->addSpriteFramesWithFile("Player/Unit/u_01.plist");
	cache->addSpriteFramesWithFile("Player/Unit/u_02.plist");
	cache->addSpriteFramesWithFile("Player/Unit/u_03.plist");

	switch (herokind)
	{
	case ����:
		_UnitSprite = Sprite::createWithSpriteFrameName("u01_walk_0001.png");
		_UnitSprite->setPosition(100, 200);
		_Speed = 0.6f;
		_Hp = 1.0f;
		_Atk = 0.6f;
		_unitKind = ����;
		scene->addChild(_UnitSprite);
		break;
	case ��:
		_UnitSprite = Sprite::createWithSpriteFrameName("u03_walk_0001.png");
		_UnitSprite->setPosition(100, 200);
		_Speed = 0.6f;
		_Hp = 1.0f;
		_Atk = 0.6f;
		_unitKind = ��;
		scene->addChild(_UnitSprite);
		break;
	case Ļ�ŷ�:
		_UnitSprite = Sprite::createWithSpriteFrameName("u04_walk_0001.png");
		_UnitSprite->setPosition(100, 200);
		_Speed = 0.6f;
		_Hp = 1.0f;
		_Atk = 0.6f;
		_unitKind = Ļ�ŷ�;
		scene->addChild(_UnitSprite);
		break;
	default:
		break;
	}
}