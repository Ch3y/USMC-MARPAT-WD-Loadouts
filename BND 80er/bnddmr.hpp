removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player forceAddUniform "LOP_U_TKA_Fatigue_02";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 3 do {player addItemToUniform "SmokeShell";};
player addVest "rhsgref_alice_webbing";
for "_i" from 1 to 5 do {player addItemToVest "hlc_20rnd_762x51_b_G3";};
player addBackpack "rhsgref_hidf_alicepack";
player addItemToBackpack "ACE_RangeCard";
player addItemToBackpack "ACE_Sandbag_empty";
player addItemToBackpack "ACE_Tripod";
player addItemToBackpack "ACE_SpottingScope";
for "_i" from 1 to 5 do {player addItemToBackpack "hlc_20rnd_762x51_b_G3";};
player addHeadgear "PBW_barett_ksk";
player addGoggles "rhsusf_shemagh2_od";

player addWeapon "hlc_rifle_g3sg1";
player addPrimaryWeaponItem "hlc_muzzle_300blk_KAC";
player addPrimaryWeaponItem "hlc_optic_accupoint_g3";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
