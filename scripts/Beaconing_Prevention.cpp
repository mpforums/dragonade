/*	Renegade Scripts.dll
Copyright 2018 https://multiplayerforums.com/ by zunnie
Contact https://multiplayerforums.com/discord

This file is part of the Renegade scripts.dll
The Renegade scripts.dll is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2, or (at your option) any later
version. See the file COPYING for more details.
In addition, an exemption is given to allow Run Time Dynamic Linking of this code with any closed source module that does not contain code covered by this licence.
Only the source code to the module(s) containing the licenced code has to be released.
*/

#include "General.h"
#include "scripts.h"
#include "engine.h"
#include "ScriptableGameObj.h"
#include "GameObjManager.h"
#include "VehicleGameObjDef.h"
#include "VehicleGameObj.h"
#include "SoldierGameObj.h"
#include "BuildingGameObj.h"
#include "BuildingGameObjDef.h"
#include "ArmorWarheadManager.h"
#include "HashTemplateIterator.h"
#include "VehicleGameObj.h"
#include "WeaponClass.h"
#include "VehicleFactoryGameObj.h"
#include "ArmedGameObj.h"
#include "WeaponBagClass.h"
#include "PowerUpGameObjDef.h"
#include "GameObjManager.h"
#include "C4GameObj.h"
#include "SmartGameObj.h"
#include "SmartGameObjDef.h"
#include "Beaconing_Prevention.h"
#include "engine_da.h"
#include "MoveablePhysClass.h"

void MPF_Beaconing_Prevention_Zone::Created(GameObject *obj) { } ScriptRegistrant<MPF_Beaconing_Prevention_Zone> MPF_Beaconing_Prevention_Zone_Registrant("MPF_Beaconing_Prevention_Zone", "GDI_Beacon_Preset=bla:string,Nod_Beacon_Preset=bla:string");