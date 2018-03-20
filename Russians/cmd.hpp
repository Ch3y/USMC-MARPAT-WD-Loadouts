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
player addItemToUniform "ACE_MapTools";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_tourniquet";
player addItemToUniform "MiniGrenade";
player addItemToUniform "rhs_mag_9x19_17";
player addVest "rhs_6b23_digi_crewofficer";
for "_i" from 1 to 7 do {player addItemToVest "rhs_20rnd_9x39mm_SP6";};
player addHeadgear "rhs_beret_milp";

player addWeapon "rhs_weap_asval_grip";
player addWeapon "rhs_weap_pya";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_fadak";
player linkItem "ItemcTab";