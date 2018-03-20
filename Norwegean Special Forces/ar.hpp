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
for "_i" from 1 to 3 do {player addItemToVest "rhs_200rnd_556x45_M_SAW";};
player addBackpack "B_AssaultPack_dgtl";
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_200rnd_556x45_M_SAW";};
player addHeadgear "H_HelmetIA";

player addWeapon "rhs_weap_m249_pip_L";
player addPrimaryWeaponItem "rhsusf_acc_nt4_black";
player addPrimaryWeaponItem "SMA_ELCAN_SPECTER_RDS_4z";
player addWeapon "R3F_HKUSP";
player addHandgunItem "muzzle_snds_L";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
[player,"tacs_Insignia_SpartanHelmet_Black"] call bis_fnc_setUnitInsignia;
