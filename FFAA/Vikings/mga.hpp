removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "ffaa_brilat_CombatUniform_item_d";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_Flashlight_MX991";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 4 do {player addItemToUniform "ACE_CableTie";};
player addItemToUniform "ffaa_9x19_pistola";
player addVest "ffaa_brilat_chaleco_02_ds";
for "_i" from 1 to 12 do {player addItemToVest "ffaa_556x45_g36_tracer_green";};
player addBackpack "ffaa_brilat_mochila_ligera_arida";
player addItemToBackpack "ffaa_brilat_casco_d";
player addItemToBackpack "ffaa_snds_GT_556";
for "_i" from 1 to 4 do {player addItemToBackpack "ffaa_762x51_mg3";};
player addHeadgear "ffaa_moe_boina";

player addWeapon "ffaa_armas_hkg36e_tir";
player addPrimaryWeaponItem "FHQ_optic_AIM";
player addWeapon "ffaa_armas_p226";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

