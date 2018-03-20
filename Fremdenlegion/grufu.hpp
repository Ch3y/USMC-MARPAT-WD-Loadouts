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
player addItemToUniform "ACE_MapTools";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
player addVest "R3F_veste_APSO_EOD_CE";
for "_i" from 1 to 3 do {player addItemToVest "R3F_15Rnd_9x19_HKUSP";};
for "_i" from 1 to 12 do {player addItemToVest "R3F_30Rnd_556x45_FAMAS";};
for "_i" from 1 to 5 do {player addItemToVest "1Rnd_Smoke_Grenade_shell";};
player addBackpack "R3F_sac_radio_TFR_Lourd_CE";
player addItemToBackpack "R3F_casque_spectra";
for "_i" from 1 to 20 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToBackpack "1Rnd_SmokeGreen_Grenade_shell";};
player addHeadgear "R3F_beret_para";

player addWeapon "R3F_Famas_G2_M203";
player addPrimaryWeaponItem "R3F_AIMPOINT";
player addWeapon "R3F_HKUSP";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "TFAR_anprc152";

