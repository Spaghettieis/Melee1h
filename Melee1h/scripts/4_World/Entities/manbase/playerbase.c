modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
        super.RegisterOneHanded(pType, pBehavior);
        	pType.AddItemInHandsProfileIK("Sword1h",
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
		"dz/anims/anm/player/ik/gear/machete.anm");

		pType.AddItemInHandsProfileIK("Sword1hequal",
		 "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior, 
		"dz/anims/anm/player/ik/gear/machete.anm");

		pType.AddItemInHandsProfileIK("Sword1hvorpal",
		 "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
 		"dz/anims/anm/player/ik/gear/machete.anm");

		pType.AddItemInHandsProfileIK("FirefighterAxe1h", 
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
 		"dz/anims/anm/player/ik/gear/machete.anm");

		pType.AddItemInHandsProfileIK("WoodAxe1h", 
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
 		"dz/anims/anm/player/ik/gear/machete.anm");

		pType.AddItemInHandsProfileIK("BaseballBat1h", 
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
 		"dz/anims/anm/player/ik/gear/metal_pipe.anm");

		pType.AddItemInHandsProfileIK("BarbedBaseballBat1h", 
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
 		"dz/anims/anm/player/ik/gear/metal_pipe.anm");

		pType.AddItemInHandsProfileIK("NailedBaseballBat1h", 
		"dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi",
 		pBehavior,
 		"dz/anims/anm/player/ik/gear/metal_pipe.anm");
	}
};