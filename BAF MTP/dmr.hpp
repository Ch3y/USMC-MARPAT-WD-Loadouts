removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "UK3CB_BAF_U_RolledUniform_MTP";
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
player addVest "UK3CB_BAF_V_Osprey_Marksman_A";
for "_i" from 1 to 11 do {player addItemToVest "ACE_20Rnd_762x51_M993_AP_Mag";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";
player addItemToBackpack "ACE_Tripod";
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_20Rnd_762x51_M993_AP_Mag";};
player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_ESS_B";

player addWeapon "UK3CB_BAF_L129A1";
player addPrimaryWeaponItem "RKSL_optic_PMII_312";
player addPrimaryWeaponItem "UK3CB_underbarrel_acc_fgrip_bipod";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";