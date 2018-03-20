removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "LOP_U_AM_Fatigue_04_5";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 7 do {player addItemToUniform "rhs_30Rnd_762x39mm";};
player addBackpack "rhs_rpg_empty";
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_rpg7_PG7V_mag";};
player addItemToBackpack "rhs_rpg7_TBG7V_mag";
player addHeadgear "LOP_H_Pakol";

player addWeapon "rhs_weap_akmn";
player addPrimaryWeaponItem "rhs_acc_dtk1l";
player addWeapon "rhs_weap_rpg7";
player addSecondaryWeaponItem "rhs_acc_pgo7v";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
