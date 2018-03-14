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
#include "Capturable.h"
#include "engine_da.h"
#include "MoveablePhysClass.h"

void z_Capturable_TibSilo::Created(GameObject *obj) { } ScriptRegistrant<z_Capturable_TibSilo> z_Capturable_TibSilo_Registrant("z_Capturable_TibSilo", "Owner=0:int");
void z_Capturable_Repairpad::Created(GameObject *obj) { } ScriptRegistrant<z_Capturable_Repairpad> z_Capturable_Repairpad_Registrant("z_Capturable_Repairpad", "Owner=0:int,RepairZoneID=0:int");
void z_Capturable_Repairzone::Created(GameObject *obj) { } ScriptRegistrant<z_Capturable_Repairzone> z_Capturable_Repairzone_Registrant("z_Capturable_Repairzone", "RepairPadID=0:int");
void z_Capturable_Helipad::Created(GameObject *obj) { } ScriptRegistrant<z_Capturable_Helipad> z_Capturable_Helipad_Registrant("z_Capturable_Helipad", "Owner=0:int");
void z_Capturable_Helipad_Terminal::Created(GameObject *obj) { } ScriptRegistrant<z_Capturable_Helipad_Terminal> z_Capturable_Helipad_Terminal_Registrant("z_Capturable_Helipad_Terminal", "HelipadID=0:int,Preset=bla:string,Cost=10000:float,LocationID=0:int");