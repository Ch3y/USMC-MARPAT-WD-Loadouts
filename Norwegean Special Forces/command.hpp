removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "tacs_Uniform_Combat_LS_BS_DGP_BB";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 2 do {player addItemToUniform "R3F_15Rnd_9x19_HKUSP";};
player addVest "V_PlateCarrierIA2_dgtl";
for "_i" from 1 to 10 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag";};
player addBackpack "tf_anprc155";
for "_i" from 1 to 9 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 10 do {player addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 3 do {player addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 3 do {player addItemToBackpack "1Rnd_SmokeOrange_Grenade_shell";};
player addItemToBackpack "Laserbatteries";
player addHeadgear "H_HelmetIA";

player addWeapon "SMA_HK416_GL_ODPAINTED";
player addPrimaryWeaponItem "SMA_supp2BOD_556";
player addPrimaryWeaponItem "FHQ_acc_ANPEQ15_black";
player addPrimaryWeaponItem "RH_eothhs1";
player addWeapon "R3F_HKUSP";
player addHandgunItem "muzzle_snds_L";
player addWeapon "Laserdesignator_03";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc148jem";
player linkItem "ItemcTab";

[player,"tacs_Insignia_SpartanHelmet_Black"] call bis_fnc_setUnitInsignia;
