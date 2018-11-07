////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:53:02 2018 : 'file' last modified on Wed Aug 22 22:02:25 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_pistols\Red9\config.bin{
class CfgPatches
{
	class DZ_Pistols_Red9
	{
		units[] = {"Red9"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Pistol_Base;
	class Red9_Base: Pistol_Base
	{
		scope = 0;
		lootTag[] = {"Civilian"};
		weight = 960;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		weaponInfoType = "RscWeaponZeroing";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		discreteDistance[] = {50,100,200,300};
		discreteDistanceInitIndex = 1;
		optics = 1;
		value = 0;
		chamberSize = 10;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Ammo_9x19","Mag_CLIP9x19_10Rnd"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"DZ\sounds\weapons\firearms\red9\Red9_dry",0.5,1,20};
		reloadMagazineSound[] = {"DZ\sounds\weapons\firearms\red9\Red9_reload",1,1,30};
		reloadAction = "ReloadSks";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Red9_Shot_SoundSet","Red9_Tail_SoundSet","Red9_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Red9_silencerHomeMade_SoundSet","Red9_silencerHomeMadeTail_SoundSet","Red9_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.18;
			recoil = "recoil_red9";
			recoilProne = "recoil_red9_prone";
			dispersion = 0.006;
			magazineSlot = "magazine";
			begin1[] = {"dz\sounds\weapons\firearms\red9\mauser_0",1,1,600};
			begin2[] = {"dz\sounds\weapons\firearms\red9\mauser_1",1,1,600};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin1",0.33333,"begin2",0.33333};
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced",1,1,60};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced2",1,1,60};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
	};
	class Red9: Red9_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Red90";
		descriptionShort = "$STR_cfgWeapons_Red91";
		model = "\dz\weapons\pistols\Red9\Red9.p3d";
		attachments[] = {"suppressorImpro","weaponButtstockRed9"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Red9Bttstck","","","","","",""}};
		itemSize[] = {3,3};
		dexterity = 4;
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\Red9\data\red9_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\pistols\Red9\data\red9.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\weapons\pistols\Red9\data\red9.rvmat","dz\weapons\pistols\Red9\data\red9_damage.rvmat","dz\weapons\pistols\Red9\data\red9_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_red9[] = {0,0,0,0.04,"0.036943*(0.8)","0.0134348*(2.3)",0.08,"0.019755*(0.8)","0.003056*(2.3)",0.09,0,0,0.14,"-0.003138*(0.8)","-0.0005*(2.3)",0.08,"-0.001177*(0.8)","-0.000188*(2.3)",0.12,0,0};
	recoil_red9_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1)",0.08,"0.019755*(0.5)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(1)",0.08,"-0.001177*(0.5)","-0.000188*(1)",0.12,0,0};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyRed9: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\dz\weapons\pistols\Red9\Red9.p3d";
	};
};
//};
