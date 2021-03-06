removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "U_BG_Guerilla2_1";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "SmokeShell";
player addItemToUniform "ACE_M14";
player addVest "rhsusf_mbav_mg";
for "_i" from 1 to 4 do {player addItemToVest "BWA3_120Rnd_762x51_Tracer";};
player addBackpack "B_Kitbag_cbr";
for "_i" from 1 to 4 do {player addItemToBackpack "BWA3_120Rnd_762x51_Tracer";};
for "_i" from 1 to 2 do {player addItemToBackpack "9Rnd_45ACP_Mag";};
player addHeadgear "rhsusf_mich_bare_norotos_arc_alt_tan";

player addWeapon "BWA3_MG5";
player addPrimaryWeaponItem "FHQ_acc_ANPEQ15_black";
player addPrimaryWeaponItem "RH_ta31rco";
player addWeapon "hgun_ACPC2_F";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";

