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
for "_i" from 1 to 2 do {player addItemToVest "rhs_200rnd_556x45_T_SAW";};
player addBackpack "rhssaf_kitbag_digital";
for "_i" from 1 to 4 do {player addItemToBackpack "rhs_200rnd_556x45_T_SAW";};
player addHeadgear "rhssaf_helmet_m97_digital_black_ess_bare";

player addWeapon "rhs_weap_m249_pip_L";
player addPrimaryWeaponItem "sma_spitfire_03_rds_low_ard_black";
player addWeapon "rhsusf_weap_m9";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";