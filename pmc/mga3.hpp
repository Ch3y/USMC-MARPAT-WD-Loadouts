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
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_M14";
player addItemToUniform "SmokeShell";
player addVest "rhsusf_mbav_rifleman";
for "_i" from 1 to 13 do {player addItemToVest "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {player addItemToVest "9Rnd_45ACP_Mag";};
player addBackpack "B_Kitbag_cbr";
for "_i" from 1 to 5 do {player addItemToBackpack "hlc_100Rnd_762x51_T_MG3";};
player addHeadgear "rhsusf_mich_bare_norotos_arc_alt_tan";

player addWeapon "SMA_ACRREMblk_N";
player addPrimaryWeaponItem "sma_spitfire_03_rds_low_black";
player addWeapon "hgun_ACPC2_F";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";

