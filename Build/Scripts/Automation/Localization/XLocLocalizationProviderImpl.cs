using EpicGames.XLocLocalization;

public class XLocLocalizationProviderImpl : XLocLocalizationProvider
{
	public XLocLocalizationProviderImpl(LocalizationProviderArgs InArgs)
		: base(InArgs)
	{
		Config.Server = Command.ParseParamValue("Server");
		Config.APIKey = Command.ParseParamValue("APIKey");
		Config.APISecret = Command.ParseParamValue("APISecret");
		Config.LocalizationId = Command.ParseParamValue("LocalizationId");
	}

	public static string StaticGetLocalizationProviderId()
	{
		return "XLocImpl";
	}

	public override string GetLocalizationProviderId()
	{
		return StaticGetLocalizationProviderId();
	}
}