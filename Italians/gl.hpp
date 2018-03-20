removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "rhssaf_uniform_m10_digital_tan_boots";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_Flashlight_XL50";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_tourniquet";
player addItemToUniform "rhsusf_mag_15Rnd_9x19_FMJ";
for "_i" from 1 to 2 do {player addItemToUniform "HandGrenade";};
for "_i" from 1 to 2 do {player addItemToUniform "SmokeShell";};
player addVest "rhssaf_vest_md12_digital";
for "_i" from 1 to 10 do {player addItemToVest "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";};
player addBackpack "rhssaf_kitbag_digital";
player addItemToBackpack "ACE_MapTools";
for "_i" from 1 to 14 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 5 do {player addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 5 do {player addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 5 do {player addItemToBackpack "1Rnd_SmokeGreen_Grenade_shell";};
for "_i" from 1 to 4 do {player addItemToBackpack "30Rnd_556x45_Stanag_Tracer_Red";};
player addItemToBackpack "Laserbatteries";
player addHeadgear "rhssaf_helmet_m97_digital_black_ess_bare";

player addWeapon "SMA_ACRREMGL_B_N";
player addPrimaryWeaponItem "acc_flashlight";
player addPrimaryWeaponItem "RH_ta31rmr";
player addWeapon "rhsusf_weap_m9";
player addWeapon "Laserdesignator_03";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemcTab";


