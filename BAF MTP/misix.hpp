removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "UK3CB_BAF_U_JumperUniform_Plain";
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
player addVest "V_TacVest_oli";
for "_i" from 1 to 8 do {player addItemToVest "UK3CB_BAF_762_L42A1_20Rnd";};
player addBackpack "UK3CB_BAF_B_Bergen_OLI_JTAC_H_A";
player addItemToBackpack "ACE_MapTools";
for "_i" from 1 to 2 do {player addItemToBackpack "APERSTripMine_Wire_Mag";};
player addItemToBackpack "Laserbatteries";
for "_i" from 1 to 4 do {player addItemToBackpack "UK3CB_BAF_762_L42A1_20Rnd";};
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_mag_an_m14_th3";};
player addHeadgear "UK3CB_BAF_H_Beret_SBS_PRR";

player addWeapon "UK3CB_BAF_L129A1";
player addPrimaryWeaponItem "UK3CB_BAF_Silencer_L115A3";
player addPrimaryWeaponItem "FHQ_acc_ANPEQ15_black";
player addPrimaryWeaponItem "RKSL_optic_PMII_312_sunshade";
player addPrimaryWeaponItem "UK3CB_underbarrel_acc_fgrip_bipod";
player addWeapon "UK3CB_BAF_Soflam_Laserdesignator";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
