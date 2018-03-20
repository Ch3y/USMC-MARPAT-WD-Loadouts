removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

player forceAddUniform "tacs_Uniform_Combat_LS_BS_DGP_BB";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 3 do {player addItemToUniform "R3F_15Rnd_9x19_HKUSP";};
player addVest "V_PlateCarrierIA2_dgtl";
for "_i" from 1 to 12 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag";};
player addBackpack "B_Kitbag_rgr";
for "_i" from 1 to 25 do {player addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 25 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 25 do {player addItemToBackpack "ACE_quikclot";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_personalAidKit";};
for "_i" from 1 to 25 do {player addItemToBackpack "ACE_packingBandage";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_tourniquet";};
player addItemToBackpack "ACE_surgicalKit";
for "_i" from 1 to 7 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "H_HelmetIA";

player addWeapon "SMA_HK416CQB_vfg_ODPAINTED";
player addPrimaryWeaponItem "SMA_supp2BOD_556";
player addPrimaryWeaponItem "RH_compM2l";
player addWeapon "R3F_HKUSP";
player addHandgunItem "muzzle_snds_L";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc148jem";

[player,"tacs_Insignia_SpartanHelmet_Black"] call bis_fnc_setUnitInsignia;
