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
player addItemToUniform "ACE_MapTools";
for "_i" from 1 to 2 do {player addItemToUniform "ffaa_9x19_pistola";};
player addVest "ffaa_brilat_chaleco_03_ds";
for "_i" from 1 to 12 do {player addItemToVest "ffaa_556x45_g36_tracer_green";};
player addBackpack "ffaa_brilat_mochila_asalto_arida";
player addItemToBackpack "ffaa_brilat_casco_d";
player addItemToBackpack "ffaa_snds_GT_556";
for "_i" from 1 to 12 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 10 do {player addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToBackpack "ffaa_granada_alhambra";};
for "_i" from 1 to 2 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_M84";};
player addHeadgear "ffaa_moe_boina";

player addWeapon "ffaa_armas_hkag36e_tir";
player addPrimaryWeaponItem "acc_flashlight";
player addPrimaryWeaponItem "RH_ta31rmr";
player addWeapon "ffaa_armas_p226";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemcTab";

