comment "Exported from Arsenal by Ch3y";

comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add containers";
player forceAddUniform "PBW_Uniform3_fleck";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_EntrenchingTool";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_tourniquet";
player addItemToUniform "BWA3_DM51A1";
player addItemToUniform "BWA3_DM25";
player addVest "pbw_koppel_schtz";
for "_i" from 1 to 10 do {player addItemToVest "hlc_20rnd_762x51_T_G3";};
player addBackpack "B_FieldPack_oli";
for "_i" from 1 to 4 do {player addItemToBackpack "hlc_100Rnd_762x51_T_MG3";};
player addHeadgear "PBW_Helm4_fleck";

player addWeapon "hlc_rifle_g3a3v";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
[player,"BWA3_insignia_01_gefreiter"] call bis_fnc_setUnitInsignia;

