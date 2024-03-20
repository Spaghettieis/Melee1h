class Sword1hequal extends ToolBase
{
	void Sword1hequal()
	{
	}

	override bool IsMeleeFinisher()
	{
		return false;
	}
		
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionSkinning);
		AddAction(ActionMineBush);
		AddAction(ActionMineTreeBark);
	}
}