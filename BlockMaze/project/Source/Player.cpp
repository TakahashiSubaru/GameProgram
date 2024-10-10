#include "Player.h"

Player::Player()
{
	hImage = LoadGraph("data/image/chara.png");
}

Player::~Player()
{
}

void Player::Update()
{
}

void Player::Draw()
{
	DrawRectGraph(540, 200, 0, 40, 40, 40, hImage, TRUE);
}
