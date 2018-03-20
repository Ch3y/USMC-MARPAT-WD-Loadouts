removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "LOP_U_AM_Fatigue_03_3";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 6 do {player addItemToUniform "rhs_30Rnd_762x39mm";};
player addBackpack "rhs_sidor";
player addItemToBackpack "ACE_DeadManSwitch";
player addItemToBackpack "ACE_Clacker";
for "_i" from 1 to 2 do {player addItemToBackpack "rhsusf_m112x4_mag";};
player addHeadgear "LOP_H_Turban_mask";

player addWeapon "rhs_weap_akmn";
player addPrimaryWeaponItem "rhs_acc_dtk1l";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
