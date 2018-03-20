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
for "_i" from 1 to 12 do {player addItemToVest "rhs_mag_30Rnd_556x45_M855A1_Stanag";};
player addBackpack "B_AssaultPack_dgtl";
player addItemToBackpack "ACE_MapTools";
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_M14";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_M84";};
player addHeadgear "H_HelmetIA";

player addWeapon "SMA_HK416_afg_ODPAINTED";
player addPrimaryWeaponItem "SMA_SFPEQ_HKTOP_BLK";
player addPrimaryWeaponItem "SMA_eotech552_kf_wdl";
player addWeapon "R3F_HKUSP";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc148jem";
player linkItem "ItemCtab";

[player,"tacs_Insignia_HowlingWolf"] call bis_fnc_setUnitInsignia;
