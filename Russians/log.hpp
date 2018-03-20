removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "rhs_uniform_emr_patchless";
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
player addVest "rhs_6b23_digi_vydra_3m";
for "_i" from 1 to 11 do {player addItemToVest "rhs_30Rnd_545x39_AK";};
player addBackpack "rhs_assault_umbts_engineer_empty";
player addItemToBackpack "ACE_wirecutter";
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_DefusalKit";
player addHeadgear "rhs_beret_milp";

player addWeapon "rhs_weap_ak74m_zenitco01";
player addPrimaryWeaponItem "rhs_acc_dtk3";
player addPrimaryWeaponItem "rhs_acc_grip_ffg2";
player addWeapon "rhs_weap_pya";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_fadak";
