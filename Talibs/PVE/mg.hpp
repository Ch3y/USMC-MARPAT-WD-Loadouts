removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "LOP_U_AM_Fatigue_01_3";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "rhs_100Rnd_762x54mmR_green";
player addBackpack "rhs_sidor";
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_100Rnd_762x54mmR_green";};
player addHeadgear "LOP_H_Shemag_BLK";

player addWeapon "rhs_weap_pkm";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
