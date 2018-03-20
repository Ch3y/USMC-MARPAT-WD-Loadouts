removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "R3F_uniform_f1";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
player addVest "R3F_veste_APSO_EOD_CE";
for "_i" from 1 to 3 do {player addItemToVest "R3F_15Rnd_9x19_HKUSP";};
for "_i" from 1 to 10 do {player addItemToVest "20Rnd_762x51_Mag";};
player addBackpack "R3F_sac_moyen_CE";
player addItemToBackpack "R3F_casque_spectra";
player addItemToBackpack "ACE_RangeCard";
player addItemToBackpack "ACE_SpottingScope";
player addHeadgear "R3F_beret_para";

player addWeapon "arifle_SPAR_03_blk_F";
player addPrimaryWeaponItem "RKSL_optic_PMII_312_sunshade";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "R3F_HKUSP";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";


