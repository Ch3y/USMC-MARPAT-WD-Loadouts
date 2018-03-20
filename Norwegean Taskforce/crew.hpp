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
player addVest "V_BandollierB_oli";
for "_i" from 1 to 9 do {player addItemToVest "rhsusf_mag_40Rnd_46x30_FMJ";};
player addHeadgear "H_HelmetCrew_B";

player addWeapon "rhsusf_weap_MP7A2";
player addPrimaryWeaponItem "rhsusf_acc_rotex_mp7";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "RH_compM2l";
player addWeapon "R3F_HKUSP";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc148jem";
[player,"tacs_Insignia_HowlingWolf"] call bis_fnc_setUnitInsignia;

