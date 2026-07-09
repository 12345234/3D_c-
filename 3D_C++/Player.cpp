#include "Player.h"
#include "InputManager.h"

Player::Player()
{
	playerPos.x = 0.0;
	playerPos.y = 50.0f;
	playerPos.z = 0.0;

<<<<<<< Updated upstream
	cameraPos = VGet(
		playerPos.x,
		playerPos.y + 50.0f,
		playerPos.z - 300.0f
	);
=======
	mouseX = 0;
	mouseY = 0;
>>>>>>> Stashed changes

	sp = 5.0f;
	jp = 50.0f;
	gravity = 3.0f;

}
InputManager playerinput;
void Player::PlayerEntry()
{
	playerinput.Update();
	
	if (playerinput.Press(KEY_INPUT_W)) playerPos.z += sp;
	if (playerinput.Press(KEY_INPUT_S)) playerPos.z -= sp;
	if (playerinput.Press(KEY_INPUT_D)) playerPos.x += sp;
	if (playerinput.Press(KEY_INPUT_A)) playerPos.x -= sp;
	if (playerinput.Trigger(KEY_INPUT_SPACE) && isJump)
	{
		playerPos.y += jp;
		isJump = false;
	}

<<<<<<< Updated upstream

	SetCameraPositionAndTarget_UpVecY(cameraPos, VGet(playerPos.x,playerPos.y,playerPos.z));
=======
	GetMousePoint(&mouseX, &mouseY);
	SetCameraPositionAndTarget_UpVecY(VGet(playerPos.x, playerPos.y +30, playerPos.z - 300), VGet(mouseX, -mouseY,0));
>>>>>>> Stashed changes
	DrawSphere3D(VGet(playerPos.x,playerPos.y,playerPos.z),50,32,GetColor(50,50,50),GetColor(30,30,30),TRUE);
	
	if (playerPos.y >= 50)
	{
		playerPos.y -= gravity;
	}
	else
	{
		isJump = true;
	}

}