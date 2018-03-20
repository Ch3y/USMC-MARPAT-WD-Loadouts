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
player addVest "rhs_6b23_digi_crew";
for "_i" from 1 to 6 do {player addItemToVest "rhs_mag_9x19mm_7n31_44";};
player addHeadgear "rhs_beret_milp";

player addWeapon "rhs_weap_pp2000";
player addWeapon "rhs_weap_pya";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";