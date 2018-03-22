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
for "_i" from 1 to 3 do {player addItemToUniform "UK3CB_BAF_338_5Rnd";};
player addVest "UK3CB_BAF_V_Osprey_Belt_A";
for "_i" from 1 to 28 do {player addItemToVest "UK3CB_BAF_338_5Rnd";};
player addBackpack "UK3CB_BAF_B_Kitbag_MTP";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "ACE_microDAGR";
player addItemToBackpack "ACE_MapTools";
player addItemToBackpack "ACE_Tripod";
for "_i" from 1 to 2 do {player addItemToBackpack "APERSTripMine_Wire_Mag";};
player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_ESS_B";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L115A3_Ghillie";
player addPrimaryWeaponItem "UK3CB_BAF_Silencer_L115A3";
player addPrimaryWeaponItem "RKSL_optic_PMII_525";
player addWeapon "Binocular";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";

comment "Set identity";
player setFace "WhiteHead_17";
player setSpeaker "ace_novoice";
