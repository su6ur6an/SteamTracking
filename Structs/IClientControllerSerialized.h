class IClientControllerSerialized
{
public:
    virtual unknown_ret ~IClientControllerSerializedMap() = 0;
    virtual unknown_ret ~IClientControllerSerializedMap() = 0;
    virtual unknown_ret ShowBindingPanel(unsigned long long) = 0;
    virtual unknown_ret GetControllerTypeForHandle(unsigned long long) = 0;
    virtual unknown_ret GetGamepadIndexForHandle(unsigned long long) = 0;
    virtual unknown_ret GetHandleForGamepadIndex(int) = 0;
    virtual unknown_ret GetActionSetHandle(unsigned int, char const*) = 0;
    virtual unknown_ret ActivateActionSet(unsigned int, unsigned long long, unsigned long long) = 0;
    virtual unknown_ret ActivateActionSetLayer(unsigned int, unsigned long long, unsigned long long) = 0;
    virtual unknown_ret DeactivateActionSetLayer(unsigned int, unsigned long long, unsigned long long) = 0;
    virtual unknown_ret DeactivateAllActionSetLayers(unsigned int, unsigned long long) = 0;
    virtual unknown_ret GetActiveActionSetLayers(unsigned int, unsigned long long, unsigned long long*) = 0;
    virtual unknown_ret GetDigitalActionHandle(unsigned int, char const*) = 0;
    virtual unknown_ret GetAnalogActionHandle(unsigned int, char const*) = 0;
    virtual unknown_ret StopAnalogActionMomentum(unsigned long long, unsigned long long) = 0;
    virtual unknown_ret GetInputTypeForHandle(unsigned long long) = 0;
    virtual unknown_ret GetNumConnectedControllers() = 0;
    virtual unknown_ret GetAllControllersStatus(ControllersStatus_t*) = 0;
    virtual unknown_ret GetControllerDetails(unsigned int) = 0;
    virtual unknown_ret FactoryReset(unsigned int) = 0;
    virtual unknown_ret SetDefaultConfig(unsigned int) = 0;
    virtual unknown_ret CalibrateTrackpads(unsigned int) = 0;
    virtual unknown_ret CalibrateJoystick(unsigned int) = 0;
    virtual unknown_ret CalibrateIMU(unsigned int) = 0;
    virtual unknown_ret SetAudioMapping(unsigned int, CUtlVector<signed char, CUtlMemory<signed char> >*) = 0;
    virtual unknown_ret PlayAudio(unsigned int, unsigned int) = 0;
    virtual unknown_ret BIsStreamingController(unsigned int) = 0;
    virtual unknown_ret SetUserLedColor(unsigned int, unsigned char, unsigned char, unsigned char) = 0;
    virtual unknown_ret SetRumble(unsigned int, int, int, unsigned short, unsigned short) = 0;
    virtual unknown_ret LoadConfigFromVDFString(unsigned int, char const*, unsigned int, SteamControllerAppSettings_t) = 0;
    virtual unknown_ret InvalidateBindingCache() = 0;
    virtual unknown_ret ActivateConfig(unsigned int, unsigned int) = 0;
    virtual unknown_ret GetCurrentActionSetHandleForRunningApp(unsigned int, unsigned int) = 0;
    virtual unknown_ret CreateBindingInstanceFromVDFString(CControllerMappingCreateData*) = 0;
    virtual unknown_ret FreeBindingInstance(unsigned int) = 0;
    virtual unknown_ret IsModified(unsigned int) = 0;
    virtual unknown_ret ClearModified(unsigned int) = 0;
    virtual unknown_ret GetLocalizationTokenCount(unsigned int) = 0;
    virtual unknown_ret GetLocalizationToken(unsigned int, int, CUtlString*) = 0;
    virtual unknown_ret GetLocalizedString(unsigned int, char const*) = 0;
    virtual unknown_ret GetBindingSetting(unsigned int, EControllerSetting, int*) = 0;
    virtual unknown_ret SetBindingSetting(unsigned int, EControllerSetting, int) = 0;
    virtual unknown_ret GetBindingVDFString(unsigned int) = 0;
    virtual unknown_ret GetSourceGroupBindingCount(unsigned int, EControllerSource) = 0;
    virtual unknown_ret GetSourceGroupBindingInfo(unsigned int, EControllerSource, int, int, SourceGroupBindingInfo_t*) = 0;
    virtual unknown_ret SetSourceGroupBindingActive(unsigned int, EControllerSource, int, bool, int, int, int) = 0;
    virtual unknown_ret CreateSourceGroupBinding(unsigned int, EControllerSource, EControllerSourceMode, bool, int) = 0;
    virtual unknown_ret BAreLayerAndParentModesEquivalent(unsigned int, int, int) = 0;
    virtual unknown_ret GetGroupSetting(unsigned int, int, EControllerSetting, int*) = 0;
    virtual unknown_ret SetGroupSetting(unsigned int, int, EControllerSetting, int) = 0;
    virtual unknown_ret GetGroupSettingDefault(unsigned int, int, EControllerSetting, int*) = 0;
    virtual unknown_ret GetActivatorSetting(unsigned int, int, EControllerModeInput, int, EControllerSetting, int*) = 0;
    virtual unknown_ret SetActivatorSetting(unsigned int, int, EControllerModeInput, int, EControllerSetting, int) = 0;
    virtual unknown_ret GetActivatorSettingDefault(unsigned int, int, EControllerModeInput, int, EControllerSetting, int*) = 0;
    virtual unknown_ret SetGroupBinding(unsigned int, int, EControllerModeInput, int, BindingAction_t*, char const*, IconBindingData_t*) = 0;
    virtual unknown_ret GetGroupBinding(unsigned int, int, EControllerModeInput, int, CUtlVector<BindingAction_t, CUtlMemory<BindingAction_t> >*, CUtlString*, IconBindingData_t*) = 0;
    virtual unknown_ret RemoveGroupBinding(unsigned int, int, EControllerModeInput, int) = 0;
    virtual unknown_ret GetParentGroupForLayerGroup(unsigned int, int) = 0;
    virtual unknown_ret GetParentPresetForLayerPreset(unsigned int, int) = 0;
    virtual unknown_ret GetGroupActivatorsForInput(unsigned int, int, EControllerModeInput, CUtlVector<ActivatorInfo_t, CUtlMemory<ActivatorInfo_t> >*) = 0;
    virtual unknown_ret ReplaceActivator(unsigned int, int, EControllerModeInput, int, EControllerActivationType) = 0;
    virtual unknown_ret AddActivator(unsigned int, int, EControllerModeInput) = 0;
    virtual unknown_ret RemoveActivator(unsigned int, int, EControllerModeInput, int) = 0;
    virtual unknown_ret CopyActivator(unsigned int, int, int, EControllerModeInput, int) = 0;
    virtual unknown_ret IsActivatorSettingsDefault(unsigned int, int, EControllerModeInput, int) = 0;
    virtual unknown_ret SetModeShiftBinding(unsigned int, Voltroller::DigitalIO, int, BindingAction_t*, char const*) = 0;
    virtual unknown_ret GetModeShiftBinding(unsigned int, Voltroller::DigitalIO, EControllerSource, int, BindingAction_t*, CUtlString*) = 0;
    virtual unknown_ret AddActionSet(unsigned int, CGameActionSet*) = 0;
    virtual unknown_ret RenameActionSet(unsigned int, CGameActionSet*) = 0;
    virtual unknown_ret DeleteActionSet(unsigned int, CGameActionSet*) = 0;
    virtual unknown_ret GetBindingTitle(unsigned int, bool) = 0;
    virtual unknown_ret SetBindingTitle(unsigned int, char const*) = 0;
    virtual unknown_ret GetBindingDescription(unsigned int, bool) = 0;
    virtual unknown_ret SetBindingDescription(unsigned int, char const*) = 0;
    virtual unknown_ret SetBindingControllerType(unsigned int, EControllerType) = 0;
    virtual unknown_ret GetBindingControllerType(unsigned int) = 0;
    virtual unknown_ret SetBindingCreator(unsigned int, unsigned long long) = 0;
    virtual unknown_ret GetBindingCreator(unsigned int) = 0;
    virtual unknown_ret GetConfigFeatures(unsigned int, CUtlVector<EControllerConfigFeature, CUtlMemory<EControllerConfigFeature> >*) = 0;
    virtual unknown_ret GetAllBindings(unsigned int, CUtlVector<BindingAction_t, CUtlMemory<BindingAction_t> >*, CUtlVector<CUtlString, CUtlMemory<CUtlString> >*) = 0;
    virtual unknown_ret BIsXInputActiveForController(unsigned int) = 0;
    virtual unknown_ret SwapXInputSlots(unsigned int, unsigned int) = 0;
    virtual unknown_ret PS4SettingsChanged(bool) = 0;
    virtual unknown_ret SwitchSettingsChanged(bool) = 0;
    virtual unknown_ret ControllerSettingsChanged(unsigned int) = 0;
    virtual unknown_ret IsControllerConnected(unsigned int, bool) = 0;
    virtual unknown_ret GetControllerState(unsigned int, SteamControllerStateInternal_t*) = 0;
    virtual unknown_ret TriggerHapticPulse(unsigned int, ESteamControllerPad, unsigned short, unsigned short, unsigned short, unsigned int) = 0;
    virtual unknown_ret TriggerVibration(unsigned int, unsigned short, unsigned short) = 0;
    virtual unknown_ret SetLEDColor(unsigned int, unsigned char, unsigned char, unsigned char, unsigned int) = 0;
    virtual unknown_ret GetStringForActionOrigin(EControllerActionOrigin) = 0;
    virtual unknown_ret SetDonglePairingMode(bool, int) = 0;
    virtual unknown_ret ReserveSteamController() = 0;
    virtual unknown_ret InitiateISPFirmwareUpdate(unsigned int) = 0;
    virtual unknown_ret InitiateBootloaderFirmwareUpdate(unsigned int) = 0;
    virtual unknown_ret FlashControllerFirmware(unsigned int, CUtlBuffer*, unsigned int, char const*) = 0;
    virtual unknown_ret TurnOffController(unsigned int) = 0;
    virtual unknown_ret EnumerateControllers() = 0;
    virtual unknown_ret GetControllerStatusEvent(unsigned int, Voltroller::SteamControllerStatusEvent_t*) = 0;
    virtual unknown_ret GetActualControllerDetails(unsigned int, ControllerDetails_t*) = 0;
    virtual unknown_ret GetControllerIdentity(unsigned int, ControllerIdentity_t*) = 0;
    virtual unknown_ret GetControllerSerialNumber(unsigned int, char*, int) = 0;
    virtual unknown_ret GetControllerChipID(unsigned int, char*, int) = 0;
    virtual unknown_ret BSupportsControllerLEDBrightness(unsigned int) = 0;
    virtual unknown_ret BSupportsControllerLEDColor(unsigned int) = 0;
    virtual unknown_ret BSupportsControllerRumble(unsigned int) = 0;
    virtual unknown_ret BSupportsControllerHaptics(unsigned int) = 0;
    virtual unknown_ret SetControllerPairingConnectionState(unsigned int, bool) = 0;
    virtual unknown_ret SetControllerKeyboardMouseState(unsigned int, bool) = 0;
    virtual unknown_ret GetTouchKeysForPopupMenu(unsigned int, unsigned int, PopupMenuTouchKey_t*, unsigned int) = 0;
    virtual unknown_ret PopupMenuTouchKeyClicked(unsigned int, unsigned int, unsigned int) = 0;
    virtual unknown_ret AccessControllerInputGeneratorMouseButton(unsigned int, Voltroller::MouseButtons, bool) = 0;
    virtual unknown_ret GetGameActionSets(unsigned int, CUtlVector<CGameActionSet*, CUtlMemory<CGameActionSet*> >*) = 0;
    virtual unknown_ret GetGameActionSetByID(unsigned int, int) = 0;
    virtual unknown_ret SetControllerSetting(unsigned int, Voltroller::ControllerSetting*) = 0;
    virtual unknown_ret GetEmulatedOutputState() = 0;
    virtual unknown_ret StartConfigSets(unsigned int, unsigned int, bool) = 0;
    virtual unknown_ret AddConfigSet(char const*, unsigned long long, char const*) = 0;
    virtual unknown_ret FinishConfigSets(unsigned int) = 0;
    virtual unknown_ret BControllerHasUniqueConfigForAppID(unsigned int, CUtlString*) = 0;
    virtual unknown_ret DeRegisterController(unsigned int, unsigned int) = 0;
    virtual unknown_ret SendOSKeyboardEvent(char const*) = 0;
    virtual unknown_ret GetControllerIndexForGamepadIndex(int) = 0;
    virtual unknown_ret GetNumControllersWithDetails() = 0;
    virtual unknown_ret ConvertBindingToNewControllerType(unsigned int, unsigned int) = 0;
    virtual unknown_ret SetControllerActiveAccount(unsigned int, unsigned int) = 0;
    virtual unknown_ret StartControllerRegistrationToAccount(unsigned int, unsigned int) = 0;
    virtual unknown_ret CompleteControllerRegistrationToAccount(unsigned int, unsigned int) = 0;
    virtual unknown_ret GetConfigForAppAndController(unsigned int, char const*, unsigned long long*, CUtlString*) = 0;
    virtual unknown_ret SetControllerPersonalization(unsigned int, ControllerPersonalizationData_t*, bool) = 0;
    virtual unknown_ret SetPersonalizationFile(unsigned int, unsigned int, unsigned long long) = 0;
    virtual unknown_ret GetPersonalizationFileID(unsigned int) = 0;
    virtual unknown_ret SetGameWindowPos(int, int, int, int) = 0;
    virtual unknown_ret GetGameWindowPos(int*, int*, int*, int*) = 0;
    virtual unknown_ret HasGameMapping(unsigned int) = 0;
    virtual unknown_ret GetControllerUsageData(unsigned int) = 0;
    virtual unknown_ret BAllowAppConfigForController(unsigned int, unsigned int) = 0;
    virtual unknown_ret ResetControllerEnableCache() = 0;
    virtual unknown_ret BShouldShowThirdPartyRemapperWarning(unsigned int) = 0;
    virtual unknown_ret SetInputGenerated(bool, int) = 0;
    virtual unknown_ret BInputGenerated() = 0;
    virtual unknown_ret GetCurrentFocusedAppID(unsigned long long) = 0;
    virtual unknown_ret GetControllerActivityByType(EControllerType) = 0;
    virtual unknown_ret GetLastActiveControllerVID() = 0;
    virtual unknown_ret GetLastActiveControllerPID() = 0;
    virtual unknown_ret LoadControllerPersonalizationFile(unsigned int, char const*, bool, bool) = 0;
    virtual unknown_ret SaveControllerPersonalizationFile(unsigned int, unsigned int, ControllerIdentity_t*) = 0;
};
