#pragma once
#include"DxLib.h"

namespace transform
{
	/// <summary>
	/// プレイヤーの座標
	/// </summary>
	struct Pos
	{
		float x, y, z;
	};

	struct rot
	{
		float x, y, z;
	};

	struct  scale
	{
		float x, y, z;
	};
}
class Player
{
private:
	float sp;//プレイヤーの速度
	float jp;//プレイヤーのジャンプパワー
	float gravity;//プレイヤーの重力

	bool isJump = true;//ジャンプ中かどうか

	

	transform :: Pos playerPos;

	/// <summary>
	/// カメラ座標
	/// </summary>
	int mouseX, mouseY;

public:
	Player();
	void PlayerEntry();
};

