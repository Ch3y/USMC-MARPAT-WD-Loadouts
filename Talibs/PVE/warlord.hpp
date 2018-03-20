removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "LOP_U_AM_Fatigue_01_4";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 7 do {player addItemToUniform "rhs_30Rnd_762x39mm";};
player addHeadgear "LOP_H_Turban";

player addWeapon "rhs_weap_akms";
player addPrimaryWeaponItem "rhs_acc_dtk1l";
player addWeapon "hgun_P07_khk_F";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_fadak";

