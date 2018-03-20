removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "LOP_U_AM_Fatigue_04_2";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 7 do {player addItemToUniform "rhs_30Rnd_762x39mm";};
player addBackpack "rhs_sidor";
for "_i" from 1 to 20 do {player addItemToBackpack "rhs_VOG25";};
for "_i" from 1 to 10 do {player addItemToBackpack "rhs_GRD40_White";};
player addHeadgear "LOP_H_Pakol";

player addWeapon "rhs_weap_akmn_gp25";
player addPrimaryWeaponItem "rhs_acc_dtkakm";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";