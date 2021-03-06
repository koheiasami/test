#include "TitleScene.h"

using namespace cocos2d;
Scene * TitleScene::createScene()
{
	auto scene = Scene::create();
	auto actionKeyLayer = ActionKey::create();
	//↑で取得したインスタンスを静的でないメンバに格納したい
	auto mainLayer = TitleScene::create();
	scene->addChild(mainLayer);
	scene->addChild(actionKeyLayer);
	return scene;
}

bool TitleScene::init()
{
	log("METHOD init CALLED");
	if(!Layer::init()){
		return false;
	}
	Size winSize = Director::getInstance()->getWinSize();
	auto bgi = Sprite::create("img/title.png");
	bgi->setPosition(Point(winSize.width / 2.0f, winSize.height / 2.0f));
	this->addChild(bgi);
	this->scheduleUpdate();
	return true;
}

void TitleScene::update(float delta)
{	
	//ここで使う予定
}
