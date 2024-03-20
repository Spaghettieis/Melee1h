class Sword1h extends ToolBase
{
	void Sword1h()
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