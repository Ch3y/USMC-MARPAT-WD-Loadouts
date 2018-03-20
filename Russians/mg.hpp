removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "rhs_uniform_vdv_emr";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_Flashlight_XL50";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_tourniquet";
player addItemToUniform "MiniGrenade";
player addItemToUniform "rhs_mag_9x19_17";
player addVest "rhs_6b23_6sh116";
for "_i" from 1 to 2 do {player addItemToVest "rhs_100Rnd_762x54mmR_7N26";};
player addBackpack "B_TacticalPack_oli";
player addItemToBackpack "rhs_6b7_1m_emr_ess";
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_100Rnd_762x54mmR_7N26";};
player addHeadgear "rhs_beret_vdv3";

player addWeapon "rhs_weap_pkp";
player addPrimaryWeaponItem "rhs_acc_nita";
player addWeapon "rhs_weap_pya";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
