//
// Created by edgar on 11/2/2023.
//

#ifndef PROYECTOFINAL_CGEIHC_GLOBALCONSTANTS_H
#define PROYECTOFINAL_CGEIHC_GLOBALCONSTANTS_H

#include "stb_image.h"

const float TURN_SPEED = 4.0;
const float MOVE_SPEED = 0.4;

const int MAX_POINT_LIGHTS = 3;
const int MAX_SPOT_LIGHTS = 3;

enum KEYMAPS
{
	FREE_CAMERA,
	CAMERA_AVATAR,
	KEYFRAME_CAPTURE
};

enum MODELS
{
	MAQUINA_PINBALL,
	MAQUINA_CRISTAL,
	FLIPPER,
	FLIPPERH,
	MARBLE,
	PALANCA,
	RESORTE,
	JK_1,
	JK_2,
	JK_3,
	JK_4,
	JK_5,
	JK_6,
	ROBOT,
	TRIANGLE,
	DESTROYED_BUILDING,
	POD,
	SMALL_STUBBY,
	NORA,
	MUNECO,
	PICOG,
	PICOM,
	AVATAR
};

enum AUDIOS
{
	MARBLE_ROLLING,
	WALKING
};

enum AMB_LIGHTS
{
	DAY = 0,
	NIGHT
};

enum ShaderTypes
{
	BONE_SHADER,
	LIGHT_SHADER,
	BASE_SHADER
};

#endif // PROYECTOFINAL_CGEIHC_GLOBALCONSTANTS_H
