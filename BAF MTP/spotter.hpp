removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_DefusalKit";
player addItemToUniform "ACE_EntrenchingTool";
player addItemToUniform "ACE_Flashlight_MX991";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_tourniquet";};
player addItemToUniform "UK3CB_BAF_SmokeShell";
player addItemToUniform "UK3CB_BAF_556_30Rnd";
player addVest "UK3CB_BAF_V_Osprey_Belt_A";
for "_i" from 1 to 14 do {player addItemToVest "UK3CB_BAF_556_30Rnd";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Radio_L_A";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "ACE_microDAGR";
player addItemToBackpack "ACE_MapTools";
player addItemToBackpack "ACE_SpottingScope";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_Sandbag_empty";};
for "_i" from 1 to 2 do {player addItemToBackpack "APERSTripMine_Wire_Mag";};
player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_ESS_B";

player addWeapon "UK3CB_BAF_L119A1_FG";
player addPrimaryWeaponItem "UK3CB_BAF_Silencer_L85";
player addPrimaryWeaponItem "FHQ_acc_ANPEQ15_black";
player addPrimaryWeaponItem "RKSL_optic_LDS";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";

