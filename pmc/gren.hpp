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
player addVest "rhsusf_mbav_grenadier";
for "_i" from 1 to 2 do {player addItemToVest "9Rnd_45ACP_Mag";};
for "_i" from 1 to 14 do {player addItemToVest "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";};
player addBackpack "B_Kitbag_cbr";
for "_i" from 1 to 30 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 10 do {player addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 3 do {player addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 3 do {player addItemToBackpack "1Rnd_SmokeGreen_Grenade_shell";};
player addHeadgear "rhsusf_mich_bare_norotos_arc_alt_tan";

player addWeapon "SMA_ACRREMGL_B_N";
player addPrimaryWeaponItem "sma_spitfire_03_rds_low_black";
player addWeapon "hgun_ACPC2_F";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "TFAR_anprc152";
player linkItem "ItemGPS";
