class CfgPatches
{
	class Melee1h
	{
		units[] = {
		"Sword1h", 
		"Sword1hequal", 
		"Sword1hvorpal", 
		"WoodAxe1h", 
		"FirefighterAxe1h", 
		"BaseballBat1h", 
		"NailedBaseballBat1h", 
		"BarbedBaseballBat1h"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Melee_Blunt",
			"DZ_Weapons_Melee_Blade",
			"DZ_Characters",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Firearms"
		};
	};
};
class CfgMods
{
	class Melee1h
	{
		dir = "Melee1h";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Melee1h";
		credits = "Spaghettieis";
		author = "Spaghettieis";
		authorID = "76561199363100280";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[]=
		{
			"World",
			"Game"
		};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Melee1h/scripts/4_World/"};
			};

		};
	};
};


class CfgVehicles
{
	class Inventory_Base;
	class Sword1h: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Sword0";
		descriptionShort="$STR_CfgVehicles_Sword1";
		model="\dz\weapons\melee\blade\medieval_sword.p3d";
		animClass="Knife";
		debug_ItemCategory=2;
		repairableWithKits[]={4};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		RestrainUnlockType=1;
		rotationFlags=17;
		itemSize[]={2,8};
		weight=1500;
		itemInfo[]=
		{
			"Knife"
		};
		openItemSpillRange[]={40,60};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="sword";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_4";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_4";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_4";
				range=3.7;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
			};
		};
	};
	class Sword1hequal: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Sword0";
		descriptionShort="As sharp as any fireaxe!";
		model="\dz\weapons\melee\blade\medieval_sword.p3d";
		animClass="Knife";
		debug_ItemCategory=2;
		repairableWithKits[]={4};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		RestrainUnlockType=1;
		rotationFlags=12;
		itemSize[]={2,8};
		weight=1500;
		itemInfo[]=
		{
			"Knife"
		};
		openItemSpillRange[]={40,60};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="sword";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_5";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_5";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_5";
				range=3.7;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
			};
		};
	};
	class Sword1hvorpal: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Sword0";
		descriptionShort="The vorpal blade went snicker-snack! He left it dead, and with its head he went galumphing back.";
		model="\dz\weapons\melee\blade\medieval_sword.p3d";
		animClass="Knife";
		debug_ItemCategory=2;
		repairableWithKits[]={4};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		RestrainUnlockType=1;
		rotationFlags=12;
		itemSize[]={2,8};
		weight=1500;
		itemInfo[]=
		{
			"Knife"
		};
		openItemSpillRange[]={40,60};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="sword";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeVorpalLight";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeVorpalHeavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeVorpalHeavy";
				range=3.7;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
			};
		};
	};
	class FirefighterAxe1h: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_FirefighterAxe0";
		descriptionShort="$STR_CfgVehicles_FirefighterAxe1";
		model="\dz\weapons\melee\blade\FirefighterAxe.p3d";
		debug_ItemCategory=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\melee\blade\data\ffax_co.paa"
		};
		repairableWithKits[]={4};
		repairCosts[]={20};
		rotationFlags=17;
		weight=1360;
		itemSize[]={2,7};
		fragility=0.0099999998;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		lootCategory="Tools";
		lootTag[]=
		{
			"Work",
			"Forester",
			"Camping"
		};
		dismantle_action_type=74;
		openItemSpillRange[]={20,40};
		itemInfo[]=
		{
			"Axe"
		};
		soundImpactType="metal";
		isMeleeWeapon=1;
		suicideAnim="fireaxe";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blade\data\ffax.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blade\data\ffax.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blade\data\ffax_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blade\data\ffax_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blade\data\ffax_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_5";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_5";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_5";
				range=3.7;
			};
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,0.075000003,0};
				orientation[]={150,0,0};
			};
			class Melee
			{
				position[]={0.02,0.15000001,0.02};
				orientation[]={0,0,0};
			};

		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
		};
	};
	class WoodAxe1h: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_WoodAxe0";
		descriptionShort="$STR_CfgVehicles_WoodAxe1";
		model="\dz\weapons\melee\blade\woodaxe.p3d";
		debug_ItemCategory=2;
		repairableWithKits[]={4};
		repairCosts[]={20};
		rotationFlags=12;
		weight=1360;
		itemSize[]={2,6};
		fragility=0.0099999998;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		lootCategory="Tools";
		lootTag[]=
		{
			"Work",
			"Forester",
			"Camping"
		};
		dismantle_action_type=74;
		openItemSpillRange[]={20,40};
		itemInfo[]=
		{
			"Axe"
		};
		isMeleeWeapon=1;
		suicideAnim="woodaxe";

		class MeleeModes
		{
			class Default
			{
				ammo="MeleeWAxeLight";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeWAxelHeavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeWAxelHeavy";
				range=3.7;
			};
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0.02,0.15000001,0};
				orientation[]={130,0,0};
			};
			class Melee
			{
				position[]={0.02,0.15000001,0.02};
				orientation[]={80,0,0};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blade\data\axe.rvmat",
								"DZ\weapons\melee\blade\data\axe_view_metal.rvmat",
								"DZ\weapons\melee\blade\data\axe_view_wood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blade\data\axe.rvmat",
								"DZ\weapons\melee\blade\data\axe_view_metal.rvmat",
								"DZ\weapons\melee\blade\data\axe_view_wood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blade\data\axe_damage.rvmat",
								"DZ\weapons\melee\blade\data\axe_view_metal_damage.rvmat",
								"DZ\weapons\melee\blade\data\axe_view_wood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blade\data\axe_damage.rvmat",
								"DZ\weapons\melee\blade\data\axe_view_metal_damage.rvmat",
								"DZ\weapons\melee\blade\data\axe_view_wood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blade\data\axe_destruct.rvmat",
								"DZ\weapons\melee\blade\data\axe_view_metal_destruct.rvmat",
								"DZ\weapons\melee\blade\data\axe_view_wood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
		};
	};
	class BaseballBat1h: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BaseballBat0";
		descriptionShort="$STR_CfgVehicles_BaseballBat1";
		model="\dz\weapons\melee\blunt\baseballbat.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=566;
		itemSize[]={1,7};
		fragility=0.02;
		openItemSpillRange[]={40,80};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBluntLight_3";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_3";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_3";
				range=3.7;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="wood";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp_Light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class NailedBaseballBat1h: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_NailedBaseballBat0";
		descriptionShort="$STR_CfgVehicles_NailedBaseballBat1";
		model="\dz\weapons\melee\blunt\Baseballbat_nailed.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=600;
		itemSize[]={1,7};
		fragility=0.02;
		openItemSpillRange[]={40,70};
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeCraftedLight_4";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeCraftedHeavy_4";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeCraftedHeavy_4";
				range=3.7;
			};
		};
		soundImpactType="wood";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp_Light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BarbedBaseballBat1h: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BarbedBaseballBat0";
		descriptionShort="$STR_CfgVehicles_BarbedBaseballBat1";
		model="\dz\weapons\melee\blunt\Baseballbat_barbed.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=600;
		itemSize[]={1,7};
		fragility=0.02;
		openItemSpillRange[]={40,70};
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_barbed.rvmat",
								"DZ\weapons\melee\blunt\Data\Barbed_wire_bloody.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_barbed.rvmat",
								"DZ\weapons\melee\blunt\Data\Barbed_wire_bloody.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_barbed_damage.rvmat",
								"DZ\weapons\melee\blunt\Data\Barbed_wire_bloody_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_barbed_damage.rvmat",
								"DZ\weapons\melee\blunt\Data\Barbed_wire_bloody_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_barbed_destruct.rvmat",
								"DZ\weapons\melee\blunt\Data\Barbed_wire_bloody_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeCraftedLight_3";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeCraftedHeavy_3";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeCraftedHeavy_3";
				range=3.7;
			};
		};
		soundImpactType="wood";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp_Light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};

};

class CfgAmmo
{
	class MeleeSharpLight_4;
	class MeleeVorpalLight: MeleeSharpLight_4
	{
		affectSkeleton = 1.4;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1;
			class Health
			{
				damage = 1000;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
	};
	class MeleeVorpalHeavy: MeleeSharpLight_4
	{
		affectSkeleton = 1.4;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1;
			class Health
			{
				damage = 2000;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
	};
};