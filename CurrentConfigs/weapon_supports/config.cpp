////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:43:32 2018 : 'file' last modified on Wed Aug 22 21:45:07 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapon_supports\config.bin{
class CfgPatches
{
	class DZ_Weapons_Supports
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgRecipes
{
	class SwapHandguardsM4
	{
		name = "Swap Handguards";
		tools[] = {"Att_Handguard_M4_Base","M4A1"};
		condition = "true";
		action = "[_owner,_tool1,_tool2,false] call weapon_swapHandguard;";
	};
	class SwapHandguardsAK74
	{
		name = "Swap Handguards";
		tools[] = {"Att_Handguard_AK_Base","AK74"};
		condition = "true";
		action = "[_owner,_tool1,_tool2,false] call weapon_swapHandguard;";
	};
	class SwapHandguardsAK101
	{
		name = "Swap Handguards";
		tools[] = {"Att_Handguard_AK_Base","AK101"};
		condition = "true";
		action = "[_owner,_tool1,_tool2,false] call weapon_swapHandguard;";
	};
	class SwapHandguardsAKM
	{
		name = "Swap Handguards";
		tools[] = {"Att_Handguard_AK_Base","AKM"};
		condition = "true";
		action = "[_owner,_tool1,_tool2,false] call weapon_swapHandguard;";
	};
	class SwapHandguardsMP5
	{
		name = "Swap Handguards";
		tools[] = {"Att_Handguard_MP5_Base","MP5K"};
		condition = "true";
		action = "[_owner,_tool1,_tool2,false] call weapon_swapHandguard;";
	};
	class RepaintButtstock_M4MP
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_M4MP","SpraycanBase"};
		condition = "!(itemParent _tool1 isKindOf 'M4_Base')";
		action = "['Att_Buttstock_M4MP','cfgVehicles'] call player_paintItem;";
	};
	class RepaintHandguard_M4MP
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Handguard_M4MP","SpraycanBase"};
		condition = "!(itemParent _tool1 isKindOf 'M4_Base')";
		action = "['Att_Handguard_M4MP','cfgVehicles'] call player_paintItem;";
	};
	class RepaintButtstock_M4OE
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_M4OE","SpraycanBase"};
		condition = "!(itemParent _tool1 isKindOf 'M4_Base')";
		action = "['Att_Buttstock_M4OE','cfgVehicles'] call player_paintItem;";
	};
	class RepaintButtstock_M4CQB
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_M4CQB","SpraycanBase"};
		condition = "!(itemParent _tool1 isKindOf 'M4_Base')";
		action = "['Att_Buttstock_M4CQB','cfgVehicles'] call player_paintItem;";
	};
	class RepaintHandguard_Plastic
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Handguard_M4Plastic","SpraycanBase"};
		condition = "!(itemParent _tool1 isKindOf 'M4_Base')";
		action = "['Att_Handguard_M4Plastic','cfgVehicles'] call player_paintItem;";
	};
	class RepaintHandguard_M4RIS
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Handguard_M4RIS","SpraycanBase"};
		condition = "!(itemParent _tool1 isKindOf 'M4_Base')";
		action = "['Att_Handguard_M4RIS','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Buttstock_AK_Wood
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_AK_Wood","Spraycan_Black"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Buttstock_AK_Wood','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Buttstock_AK_Folding
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_AK_Folding","SpraycanBase"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Buttstock_AK_Folding','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Buttstock_AK_WoodCamo
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_AK_Wood_Black","Spraycan_Green"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Buttstock_AK_Wood_Black','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Handguard_AK74
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Handguard_AK74","Spraycan_Black"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Handguard_AK74','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Handguard_AK74Camo
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Handguard_AK74_Black","Spraycan_Green"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Handguard_AK74_Black','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Handguard_AK74Camo_Black
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Handguard_AK74_camo","Spraycan_Black"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Handguard_AK74','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Handguard_AK_Rail
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Handguard_AK_Rail","SpraycanBase"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Handguard_AK_Rail','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Buttstock_AK74
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_AK74","Spraycan_Black"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Buttstock_AK74','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Buttstock_AK74Camo
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_AK74_Black","Spraycan_Green"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Buttstock_AK74_Black','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Buttstock_AK74Camo_Black
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_AK74_Camo","Spraycan_Black"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Buttstock_AK74_Black','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Buttstock_AKS74U
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_AKS74UBase","SpraycanBase"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Buttstock_AKS74U','cfgVehicles'] call player_paintItem;";
	};
	class RepaintAtt_Buttstock_AK_Plastic
	{
		name = "Paint %TOOL1 with %TOOL2";
		tools[] = {"Att_Buttstock_AK_PlasticBase","SpraycanBase"};
		condition = "!(itemParent _tool1 isKindOf 'AK101Base') and !(itemParent _tool1 isKindOf 'AK74Base') and !(itemParent _tool1 isKindOf 'AKMBase')";
		action = "['Att_Buttstock_AK_Plastic','cfgVehicles'] call player_paintItem;";
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class M4_OEBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M4_OEBttstck0";
		descriptionShort = "$STR_cfgVehicles_M4_OEBttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_m4_oe.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_west"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockM4";
		weight = 354;
		itemSize[] = {3,2};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\m4_stock.rvmat","DZ\weapons\attachments\data\m4_stock_damage.rvmat","DZ\weapons\attachments\data\m4_stock_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class M4_OEBttstck_Black: M4_OEBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_OEBttstck_Black0";
		color = "Black";
		lootCategory = "Crafted";
	};
	class M4_OEBttstck_Green: M4_OEBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_OEBttstck_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class M4_MPBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M4_MPBttstck0";
		descriptionShort = "$STR_cfgVehicles_M4_MPBttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_m4_mp.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_west"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockM4";
		weight = 330;
		itemSize[] = {3,2};
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\m4_stock2.rvmat","DZ\weapons\attachments\data\m4_stock2_damage.rvmat","DZ\weapons\attachments\data\m4_stock2_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class M4_MPBttstck_Black: M4_MPBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_MPBttstck_Black0";
		color = "Black";
		lootCategory = "Crafted";
	};
	class M4_MPBttstck_Green: M4_MPBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_MPBttstck_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class M4_CQBBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M4_CQBBttstck0";
		descriptionShort = "$STR_cfgVehicles_M4_CQBBttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_m4_cqb.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_west"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockM4";
		weight = 450;
		itemSize[] = {3,2};
		dispersionModifier = -0.00015;
		dispersionCondition = "true";
		dexterityModifier = 1;
		dexterityCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\m4_stock3.rvmat","DZ\weapons\attachments\data\m4_stock3_damage.rvmat","DZ\weapons\attachments\data\m4_stock3_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class M4_CQBBttstck_Black: M4_CQBBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_CQBBttstck_Black0";
		color = "Black";
		lootCategory = "Crafted";
	};
	class M4_CQBBttstck_Green: M4_CQBBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_CQBBttstck_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class AK_WoodBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_WoodBttstck0";
		descriptionShort = "$STR_cfgVehicles_AK_WoodBttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_ak_wood.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockAK";
		weight = 530;
		itemSize[] = {3,2};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\attachments\data\akm_wood.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\akm_wood.rvmat","DZ\weapons\attachments\data\akm_wood_damage.rvmat","DZ\weapons\attachments\data\akm_wood_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class AK_WoodBttstck_Black: AK_WoodBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK_WoodBttstck_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_wood_black_co.paa"};
	};
	class AK_WoodBttstck_Camo: AK_WoodBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK_WoodBttstck_Camo0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_wood_camo_co.paa"};
	};
	class AK74_WoodBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK74_WoodBttstck0";
		descriptionShort = "$STR_cfgVehicles_AK74_WoodBttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_ak_wood.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockAK";
		weight = 530;
		itemSize[] = {3,2};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\ak74_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\attachments\data\ak74_wood.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\akm_wood.rvmat","DZ\weapons\attachments\data\akm_wood_damage.rvmat","DZ\weapons\attachments\data\akm_wood_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class AK74_WoodBttstck_Black: AK74_WoodBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK74_WoodBttstck_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_wood_black_co.paa"};
	};
	class AK74_WoodBttstck_Camo: AK74_WoodBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK74_WoodBttstck_Camo0";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_wood_camo_co.paa"};
	};
	class AK_FoldingBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_FoldingBttstck0";
		descriptionShort = "$STR_cfgVehicles_AK_FoldingBttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_ak_folding.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockAK";
		weight = 720;
		itemSize[] = {3,2};
		dispersionModifier = -0.00015;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_accessories_black_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\akm_accessories.rvmat","DZ\weapons\attachments\data\akm_accessories_damage.rvmat","DZ\weapons\attachments\data\akm_accessories_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class AK_FoldingBttstck_Black: AK_FoldingBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK_FoldingBttstck_Black0";
		color = "Black";
		lootCategory = "Crafted";
	};
	class AK_FoldingBttstck_Green: AK_FoldingBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK_FoldingBttstck_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_accessories_green_co.paa"};
	};
	class AK_PlasticBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_PlasticBttstck0";
		descriptionShort = "$STR_cfgVehicles_AK_PlasticBttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_ak_plastic.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockAK";
		weight = 363;
		itemSize[] = {3,2};
		dispersionModifier = -0.00015;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK101\data\ak101_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK101\data\ak101.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AK101\data\ak101.rvmat","DZ\weapons\firearms\AK101\data\ak101_damage.rvmat","DZ\weapons\firearms\AK101\data\ak101_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class AK_PlasticBttstck_Black: AK_PlasticBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK_PlasticBttstck_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class AK_PlasticBttstck_Green: AK_PlasticBttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK_PlasticBttstck_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class AKS74U_Bttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AKS74U_Bttstck0";
		descriptionShort = "$STR_cfgVehicles_AKS74U_Bttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_aks.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockAK";
		weight = 450;
		itemSize[] = {3,2};
		dispersionModifier = -5e-005;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK74\data\aks74u_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK74\data\aks74u.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\akm_wood.rvmat","DZ\weapons\attachments\data\akm_wood_damage.rvmat","DZ\weapons\attachments\data\akm_wood_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class AKS74U_Bttstck_Black: AKS74U_Bttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AKS74U_Bttstck_Black0";
		color = "Black";
		lootCategory = "Crafted";
	};
	class AKS74U_Bttstck_Green: AKS74U_Bttstck
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AKS74U_Bttstck_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.37,0.28,1.0,CO)"};
	};
	class MP5k_StockBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_MP5k_StockBttstck0";
		descriptionShort = "$STR_cfgVehicles_MP5k_StockBttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_mp5K_stock.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Police","Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockMP5";
		weight = 450;
		itemSize[] = {2,3};
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\MP5k_stock_CO.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\MP5k_stock.rvmat","DZ\weapons\attachments\data\MP5k_stock_damage.rvmat","DZ\weapons\attachments\data\MP5k_stock_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class Red9Bttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Red9Bttstck0";
		descriptionShort = "$STR_cfgVehicles_Red9Bttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_red9.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Civilian"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockRed9";
		weight = 400;
		itemSize[] = {3,2};
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\support\data\buttstock_red9_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\support\data\buttstock_red9.rvmat","DZ\weapons\attachments\support\data\buttstock_red9_damage.rvmat","DZ\weapons\attachments\support\data\buttstock_red9_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class Fal_OeBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Fal_OeBttstck0";
		descriptionShort = "$STR_cfgVehicles_Fal_OeBttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_fal_oe.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockFal";
		weight = 530;
		itemSize[] = {3,2};
		recoilModifier[] = {1,1,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\support\data\fal_fixed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\attachments\support\data\fal_fixed.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\support\data\fal_fixed.rvmat","DZ\weapons\attachments\support\data\fal_fixed_damage.rvmat","DZ\weapons\attachments\support\data\fal_fixed_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class Fal_FoldingBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Fal_FoldingBttstck0";
		descriptionShort = "$STR_cfgVehicles_Fal_FoldingBttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_fal_folding.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockFal";
		weight = 530;
		itemSize[] = {3,2};
		recoilModifier[] = {1,1,1};
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\support\data\fal_folding_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\attachments\support\data\fal_folding.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\support\data\fal_folding.rvmat","DZ\weapons\attachments\support\data\fal_folding_damage.rvmat","DZ\weapons\attachments\support\data\fal_folding_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class Saiga_Bttstck: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Saiga_Bttstck0";
		descriptionShort = "$STR_cfgVehicles_Saiga_Bttstck1";
		model = "\DZ\weapons\attachments\support\buttstock_saiga_folding.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockSaiga";
		weight = 1300;
		itemSize[] = {3,2};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\saiga_folding_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\attachments\data\saiga_folding.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\saiga_folding.rvmat","DZ\weapons\attachments\data\saiga_folding_damage.rvmat","DZ\weapons\attachments\data\saiga_folding_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class M4_PlasticHndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M4_PlasticHndgrd0";
		descriptionShort = "$STR_cfgVehicles_M4_PlasticHndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_m4_plastic.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		weight = 250;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardM4";
		lootTag[] = {"Military_west"};
		lootCategory = "Attachments";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\handguard_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\handguard_world.rvmat","DZ\weapons\attachments\data\handguard_world_damage.rvmat","DZ\weapons\attachments\data\handguard_world_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class M4_PlasticHndgrd_Black: M4_PlasticHndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_PlasticHndgrd_Black0";
		color = "Black";
		lootCategory = "Crafted";
	};
	class M4_PlasticHndgrd_Green: M4_PlasticHndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_PlasticHndgrd_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\handguard_green_co.paa"};
	};
	class M4_RISHndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M4_RISHndgrd0";
		descriptionShort = "$STR_cfgVehicles_M4_RISHndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_m4_ris.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardM4";
		lootTag[] = {"Military_west"};
		lootCategory = "Attachments";
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\m4_ris.rvmat","DZ\weapons\attachments\data\m4_ris_damage.rvmat","DZ\weapons\attachments\data\m4_ris_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class M4_RISHndgrd_Black: M4_RISHndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_RISHndgrd_Black0";
		color = "Black";
		lootCategory = "Crafted";
	};
	class M4_RISHndgrd_Green: M4_RISHndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_RISHndgrd_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class M4_MPHndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M4_MPHndgrd0";
		descriptionShort = "$STR_cfgVehicles_M4_MPHndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_m4_mp.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		weight = 350;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardM4";
		lootTag[] = {"Military_west"};
		lootCategory = "Attachments";
		dispersionModifier = -0.00015;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\m4_handguard_mp.rvmat","DZ\weapons\attachments\data\m4_handguard_mp_damage.rvmat","DZ\weapons\attachments\data\m4_handguard_mp_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class M4_MPHndgrd_Black: M4_MPHndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_MPHndgrd_Black0";
		color = "Black";
		lootCategory = "Crafted";
	};
	class M4_MPHndgrd_Green: M4_MPHndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_M4_MPHndgrd_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class AK_WoodHndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_WoodHndgrd0";
		descriptionShort = "$STR_cfgVehicles_AK_WoodHndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_ak_wood.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		weight = 550;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardAK";
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		dispersionModifier = -0.00015;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_wood_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\akm_wood.rvmat","DZ\weapons\attachments\data\akm_wood_damage.rvmat","DZ\weapons\attachments\data\akm_wood_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class AK_WoodHndgrd_Black: AK_WoodHndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK_WoodHndgrd_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_wood_black_co.paa"};
	};
	class AK_WoodHndgrd_Camo: AK_WoodHndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK_WoodHndgrd_Camo0";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_wood_camo_co.paa"};
	};
	class AK74_Hndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK74_Hndgrd0";
		descriptionShort = "$STR_cfgVehicles_AK74_Hndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_ak_wood.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		weight = 550;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardAK";
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		dispersionModifier = -0.00015;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\ak74_wood_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\akm_wood.rvmat","DZ\weapons\attachments\data\akm_wood_damage.rvmat","DZ\weapons\attachments\data\akm_wood_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class AK74_Hndgrd_Black: AK74_Hndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK74_Hndgrd_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_wood_black_co.paa"};
	};
	class AK74_Hndgrd_Camo: AK74_Hndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK74_Hndgrd_Camo0";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_wood_camo_co.paa"};
	};
	class AK_RailHndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_RailHndgrd0";
		descriptionShort = "$STR_cfgVehicles_AK_RailHndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_ak_rail.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		weight = 430;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardAK";
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_accessories_black_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\akm_accessories.rvmat","DZ\weapons\attachments\data\akm_accessories_damage.rvmat","DZ\weapons\attachments\data\akm_accessories_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class AK_RailHndgrd_Black: AK_RailHndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK_RailHndgrd_Black0";
		color = "Black";
		lootCategory = "Crafted";
	};
	class AK_RailHndgrd_Green: AK_RailHndgrd
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AK_RailHndgrd_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_accessories_green_co.paa"};
	};
	class AK_PlasticHndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_PlasticHndgrd0";
		descriptionShort = "$STR_cfgVehicles_AK_PlasticHndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_ak_plastic.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		weight = 160;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardAK";
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		dispersionModifier = -0.00015;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK101\data\ak101_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AK101\data\ak101.rvmat","DZ\weapons\firearms\AK101\data\ak101_damage.rvmat","DZ\weapons\firearms\AK101\data\ak101_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class MP5_PlasticHndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_MP5_PlasticHndgrd0";
		descriptionShort = "$STR_cfgVehicles_MP5_PlasticHndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_mp5k_plastic.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		weight = 250;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardMP5";
		lootTag[] = {"Police","Military_east"};
		lootCategory = "Attachments";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\MP5k_grip01_CO.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\MP5k_grip01.rvmat","DZ\weapons\attachments\data\MP5k_grip01_damage.rvmat","DZ\weapons\attachments\data\MP5k_grip01_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class MP5_RailHndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_MP5_RailHndgrd0";
		descriptionShort = "$STR_cfgVehicles_MP5_RailHndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_mp5k_rail.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		weight = 250;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardMP5";
		lootTag[] = {"Police","Military_east"};
		lootCategory = "Attachments";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\MP5k_grip_CO.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\MP5k_grip.rvmat","DZ\weapons\attachments\data\MP5k_grip_damage.rvmat","DZ\weapons\attachments\data\MP5k_grip_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class M249_Hndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M249_Hndgrd0";
		descriptionShort = "$STR_cfgVehicles_M249_Hndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_m249.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		weight = 350;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardM249";
		lootTag[] = {"Military_west"};
		lootCategory = "Attachments";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\support\data\m249_handguard_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\support\data\m249_handguard.rvmat","DZ\weapons\attachments\support\data\m249_handguard_damage.rvmat","DZ\weapons\attachments\support\data\m249_handguard_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class M249_RisHndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M249_RisHndgrd0";
		descriptionShort = "$STR_cfgVehicles_M249_RisHndgrd1";
		model = "\DZ\weapons\attachments\support\handguard_m249_ris.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 4;
		reversed = 0;
		weight = 400;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardM249";
		lootTag[] = {"Military_west"};
		lootCategory = "Attachments";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\support\data\m249_handguard_ris_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\support\data\m249_handguard_ris.rvmat","DZ\weapons\attachments\support\data\m249_handguard_ris_damage.rvmat","DZ\weapons\attachments\support\data\m249_handguard_ris_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class AtlasBipod: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AtlasBipod0";
		descriptionShort = "$STR_cfgVehicles_AtlasBipod1";
		model = "\DZ\weapons\attachments\support\bipod_atlas.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 12;
		reversed = 0;
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Attachments";
		inventorySlot = "weaponBipod";
		weight = 376;
		itemSize[] = {3,2};
		dispersionModifier = -0.00025;
		dispersionCondition = "(getText(configFile >> 'CfgMovesMaleSdr2' >> 'states' >> animationState _agent >> 'bodyPosition') == 'prone') and (_this animationPhase 'bipod' == 1)";
		dexterityModifier = -0.2;
		dexterityCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\m4_bipod.rvmat","DZ\weapons\attachments\data\m4_bipod_damage.rvmat","DZ\weapons\attachments\data\m4_bipod_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimationSources
		{
			class bipod
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
	};
	class M249_Bipod: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M249_Bipod0";
		descriptionShort = "$STR_cfgVehicles_M249_Bipod1";
		model = "\DZ\weapons\attachments\support\bipod_m249.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Attachments";
		inventorySlot = "weaponBipodM249";
		weight = 376;
		itemSize[] = {3,2};
		dispersionModifier = -0.00025;
		dispersionCondition = "(getText(configFile >> 'CfgMovesMaleSdr2' >> 'states' >> animationState _agent >> 'bodyPosition') == 'prone') and (_this animationPhase 'bipod' == 1)";
		dexterityModifier = -0.2;
		dexterityCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\m249\data\m249.rvmat","DZ\weapons\firearms\m249\data\m249_damage.rvmat","DZ\weapons\firearms\m249\data\m249_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimationSources
		{
			class bipod
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
	};
	class GhillieAtt_ColorBase: Inventory_Base
	{
		displayName = "$STR_cfgVehicles_GhillieAtt_ColorBase0";
		descriptionShort = "$STR_cfgVehicles_GhillieAtt_ColorBase1";
		model = "\DZ\weapons\attachments\support\ghillie_wrap.p3d";
		handheld = "true";
		armAction = "Disarm";
		inventorySlot = "weaponWrap";
		rotationFlags = 17;
		reversed = 0;
		weight = 1500;
		itemSize[] = {3,2};
		lootCategory = "Crafted";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"dz\characters\backpacks\data\ghillie.rvmat"};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class GhillieAtt_Tan: GhillieAtt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_GhillieAtt_Tan0";
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_tan_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_tan_co.paa","DZ\characters\backpacks\data\ghillie_tan_damage_co.paa","DZ\characters\backpacks\data\ghillie_tan_destruct_co.paa"};
			mat[] = {};
		};
	};
	class GhillieAtt_Woodland: GhillieAtt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_GhillieAtt_Woodland0";
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_green_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_green_co.paa","DZ\characters\backpacks\data\ghillie_green_damage_co.paa","DZ\characters\backpacks\data\ghillie_green_destruct_co.paa"};
			mat[] = {};
		};
	};
	class GhillieAtt_Mossy: GhillieAtt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_GhillieAtt_Mossy0";
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_mossy_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_mossy_co.paa","DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa","DZ\characters\backpacks\data\ghillie_mossy_destruct_co.paa"};
			mat[] = {};
		};
	};
	class Groza_LowerReceiver: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Groza_LowerReceiver0";
		descriptionShort = "$STR_cfgVehicles_Groza_LowerReceiver1";
		model = "\DZ\weapons\firearms\ots14\ots14_grip.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockAK";
		weight = 354;
		itemSize[] = {2,2};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\ots14\data\ots14_grip_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\data\ots14_grip.rvmat","DZ\weapons\firearms\data\ots14_grip_damage.rvmat","DZ\weapons\firearms\data\ots14_grip_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class GrozaGL_LowerReceiver: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_GrozaGL_LowerReceiver0";
		descriptionShort = "$STR_cfgVehicles_GrozaGL_LowerReceiver1";
		model = "\DZ\weapons\firearms\ots14\ots14_launcher.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 0;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponButtstockAK";
		weight = 1954;
		itemSize[] = {3,2};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\ots14\data\ots14_launcher_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\data\ots14_launcher.rvmat","DZ\weapons\firearms\data\ots14_launcher_damage.rvmat","DZ\weapons\firearms\data\ots14_launcher_destruct.rvmat"};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyButtstock_M4_OE: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "\DZ\weapons\attachments\support\buttstock_m4_oe.p3d";
	};
	class ProxyButtstock_M4_MP: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "\DZ\weapons\attachments\support\buttstock_m4_mp.p3d";
	};
	class ProxyButtstock_M4_CQB: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "\DZ\weapons\attachments\support\buttstock_m4_cqb.p3d";
	};
	class ProxyButtstock_AK_Wood: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "\DZ\weapons\attachments\support\buttstock_ak_wood.p3d";
	};
	class ProxyButtstock_AK_Wood_Black: ProxyButtstock_AK_Wood{};
	class ProxyButtstock_AK_Wood_Camo: ProxyButtstock_AK_Wood{};
	class ProxyButtstock_AK_Folding_Black: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "\DZ\weapons\attachments\support\buttstock_ak_folding.p3d";
	};
	class ProxyButtstock_AK_Folding_Green: ProxyButtstock_AK_Folding_Black{};
	class ProxyButtstock_AK_Plastic: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "\DZ\weapons\attachments\support\buttstock_ak_plastic.p3d";
	};
	class Proxybuttstock_aks: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "\DZ\weapons\attachments\support\buttstock_aks.p3d";
	};
	class ProxyButtstock_mp5K_stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockMP5";
		model = "\DZ\weapons\attachments\support\buttstock_mp5K_stock.p3d";
	};
	class ProxyButtstock_red9: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockRed9";
		model = "\DZ\weapons\attachments\support\buttstock_red9.p3d";
	};
	class ProxyButtstock_fal_oe: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockFal";
		model = "\DZ\weapons\attachments\support\buttstock_fal_oe.p3d";
	};
	class ProxyButtstock_fal_folding: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockFal";
		model = "\DZ\weapons\attachments\support\buttstock_fal_folding.p3d";
	};
	class ProxyButtstock_saiga_folding: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "\DZ\weapons\attachments\support\buttstock_saiga_folding.p3d";
	};
	class ProxyHandguard_M4_Plastic: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM4";
		model = "\DZ\weapons\attachments\support\handguard_m4_plastic.p3d";
	};
	class ProxyHandguard_M4_RIS: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM4";
		model = "\DZ\weapons\attachments\support\handguard_m4_RIS.p3d";
	};
	class ProxyHandguard_M4_MP: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM4";
		model = "\DZ\weapons\attachments\support\handguard_m4_MP.p3d";
	};
	class ProxyHandguard_AK_Wood: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardAK";
		model = "\DZ\weapons\attachments\support\handguard_ak_wood.p3d";
	};
	class ProxyHandguard_AK_Wood_Black: ProxyHandguard_AK_Wood{};
	class ProxyHandguard_AK_Wood_Camo: ProxyHandguard_AK_Wood{};
	class ProxyHandguard_AK_Rail_Black: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardAK";
		model = "\DZ\weapons\attachments\support\handguard_ak_rail.p3d";
	};
	class ProxyHandguard_AK_Rail_Green: ProxyHandguard_AK_Rail_Black{};
	class ProxyHandguard_AK_Plastic: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardAK";
		model = "\DZ\weapons\attachments\support\handguard_ak_plastic.p3d";
	};
	class ProxyHandguard_mp5k_plastic: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardMP5";
		model = "\DZ\weapons\attachments\support\handguard_mp5k_plastic.p3d";
	};
	class ProxyHandguard_mp5k_rail: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardMP5";
		model = "\DZ\weapons\attachments\support\handguard_mp5k_rail.p3d";
	};
	class ProxyHandguard_m249: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM249";
		model = "\DZ\weapons\attachments\support\handguard_m249.p3d";
	};
	class ProxyHandguard_m249_ris: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM249";
		model = "\DZ\weapons\attachments\support\handguard_m249_ris.p3d";
	};
	class ProxyBipod_Atlas: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipod";
		model = "\DZ\weapons\attachments\support\bipod_atlas.p3d";
		class AnimationSources
		{
			class bipod
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
	};
	class ProxyBipod_m249: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipodM249";
		model = "\DZ\weapons\attachments\support\bipod_m249.p3d";
	};
	class ProxyGhillie_wrap: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponWrap";
		model = "\DZ\weapons\attachments\support\ghillie_wrap.p3d";
	};
	class ProxyOTs14_Grip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "\DZ\weapons\firearms\ots14\ots14_grip.p3d";
	};
	class ProxyOTs14_launcher: ProxyOTs14_Grip
	{
		model = "\DZ\weapons\firearms\ots14\ots14_launcher.p3d";
	};
};
//};
