removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "LOP_U_AM_Fatigue_03_2";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 6 do {player addItemToUniform "rhs_30Rnd_762x39mm";};
player addBackpack "rhs_medic_bag";
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 12 do {player addItemToBackpack "ACE_packingBandage";};
player addItemToBackpack "ACE_personalAidKit";
player addItemToBackpack "ACE_surgicalKit";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 12 do {player addItemToBackpack "ACE_quikclot";};
for "_i" from 1 to 12 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 12 do {player addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_salineIV_250";};
player addHeadgear "LOP_H_Turban_mask";

player addWeapon "rhs_weap_akmn";
player addPrimaryWeaponItem "rhs_acc_dtk1l";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

