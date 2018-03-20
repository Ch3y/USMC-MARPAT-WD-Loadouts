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
for "_i" from 1 to 3 do {player addItemToUniform "R3F_15Rnd_9x19_HKUSP";};
player addVest "V_PlateCarrierIA2_dgtl";
for "_i" from 1 to 10 do {player addItemToVest "20Rnd_762x51_Mag";};
player addBackpack "B_Kitbag_rgr";
player addItemToBackpack "rhsusf_weap_MP7A2";
for "_i" from 1 to 6 do {player addItemToBackpack "rhsusf_mag_40Rnd_46x30_FMJ";};
player addHeadgear "H_HelmetIA";

player addWeapon "arifle_SPAR_03_blk_F";
player addPrimaryWeaponItem "acc_flashlight";
player addPrimaryWeaponItem "optic_DMS";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "R3F_HKUSP";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
[player,"tacs_Insignia_HowlingWolf"] call bis_fnc_setUnitInsignia;
