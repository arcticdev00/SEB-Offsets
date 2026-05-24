#pragma once
#include <cstdint>

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-const-variable"
#endif

// ── KEY SEB FUNCTIONS (across all modules) ──

constexpr uint32_t kResetWorkingArea = 0x000044AC; // safeexambrowser_monitoring  SafeExamBrowser.Monitoring.Display.Display.ResetWorkingArea
constexpr uint32_t kSetWorkingArea = 0x00002C74; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Kernel32.SetWorkingArea
constexpr uint32_t kHideWindow = 0x000029F5; // safeexambrowser_windowsapi  Microsoft.CodeAnalysis.EmbeddedAttribute.HideWindow
constexpr uint32_t kMinimizeAllOpenWindows = 0x000029FE; // safeexambrowser_windowsapi  System.Runtime.CompilerServices.RefSafetyRulesAttribute.MinimizeAllOpenWindows
constexpr uint32_t k_GetOpenWindows_g__EnumWindows_0 = 0x000043C7; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Desktops.Desktop.<GetOpenWindows>g__EnumWindows|0
constexpr uint32_t kDelegateShutdownResponsibilities = 0x000024F7; // safeexambrowser_client  SafeExamBrowser.Client.ClientContext.DelegateShutdownResponsibilities
constexpr uint32_t kLogShutdownInformation = 0x00002952; // safeexambrowser_client  SafeExamBrowser.Client.ClientContext.LogShutdownInformation
constexpr uint32_t kClientHost_Shutdown = 0x00003F5A; // safeexambrowser_client  SafeExamBrowser.Client.CompositionRoot.ClientHost_Shutdown
constexpr uint32_t kPrepareShutdown = 0x00004071; // safeexambrowser_client  SafeExamBrowser.Client.Responsibilities.BrowserResponsibility.PrepareShutdown
constexpr uint32_t kTryRequestShutdown = 0x000041AC; // safeexambrowser_client  SafeExamBrowser.Client.Responsibilities.BrowserResponsibility.TryRequestShutdown
constexpr uint32_t kTryInitiateShutdown = 0x000058B0; // safeexambrowser_client  SafeExamBrowser.Client.Responsibilities.MonitoringResponsibility.TryInitiateShutdown
constexpr uint32_t kTryConfirmShutdown = 0x000058F1; // safeexambrowser_client  SafeExamBrowser.Client.Responsibilities.MonitoringResponsibility.TryConfirmShutdown
constexpr uint32_t kadd_Shutdown = 0x00005F00; // safeexambrowser_client  SafeExamBrowser.Client.Notifications.AboutNotification.add_Shutdown
constexpr uint32_t kremove_Shutdown = 0x00005F38; // safeexambrowser_client  SafeExamBrowser.Client.Notifications.AboutNotification.remove_Shutdown
constexpr uint32_t kSystemEvents_EventsThreadShutdown = 0x000036C5; // safeexambrowser_monitoring  SafeExamBrowser.Monitoring.System.Components.EaseOfAccess.SystemEvents_EventsThreadShutdown
constexpr uint32_t kRegisterSystemCaptureStartEvent = 0x00002B29; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.ExplorerShell.RegisterSystemCaptureStartEvent
constexpr uint32_t kKeyboardHookCallback = 0x0000394C; // safeexambrowser_monitoring  SafeExamBrowser.Monitoring.System.Components.SystemEvents.KeyboardHookCallback
constexpr uint32_t kRegisterKeyboardHook = 0x00002A4C; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.ExplorerShell.RegisterKeyboardHook
constexpr uint32_t k_RegisterKeyboardHook_b__0 = 0x000043FC; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Desktops.Desktop.<RegisterKeyboardHook>b__0
constexpr uint32_t k_DeregisterKeyboardHook_b__0 = 0x00004516; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Desktops.DesktopFactory.<DeregisterKeyboardHook>b__0
constexpr uint32_t kMouseHookCallback = 0x00003844; // safeexambrowser_monitoring  SafeExamBrowser.Monitoring.System.Components.StickyKeys.MouseHookCallback
constexpr uint32_t kRegisterMouseHook = 0x00002ABC; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.ExplorerShell.RegisterMouseHook
constexpr uint32_t kctor = 0x00003F28; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Hooks.MouseHook..ctor
constexpr uint32_t kCreateNew = 0x00003F44; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Hooks.MouseHook.CreateNew
constexpr uint32_t kCreateRandom = 0x00003FD8; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Hooks.MouseHook.CreateRandom
constexpr uint32_t kGetCurrent = 0x0000408C; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Hooks.MouseHook.GetCurrent
constexpr uint32_t kGenerateRandomDesktopName = 0x0000417C; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Hooks.MouseHook.GenerateRandomDesktopName
constexpr uint32_t kctor = 0x000041E6; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Hooks.MouseHook..ctor
constexpr uint32_t kStart = 0x0000420C; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Hooks.MouseHook.Start
constexpr uint32_t kStop = 0x00004264; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Hooks.MouseHook.Stop
constexpr uint32_t kTimer_Elapsed = 0x000042A4; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Hooks.MouseHook.Timer_Elapsed
constexpr uint32_t kctor = 0x0000437F; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Hooks.MouseHook..ctor
constexpr uint32_t k_RegisterMouseHook_b__0 = 0x0000445C; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Desktops.Desktop.<RegisterMouseHook>b__0
constexpr uint32_t k_DeregisterMouseHook_b__0 = 0x00004529; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Desktops.DesktopMonitor.<DeregisterMouseHook>b__0
constexpr uint32_t kLowLevelKeyboardProc = 0x00003CFC; // safeexambrowser_windowsapi  SafeExamBrowser.WindowsApi.Processes.ProcessFactory.LowLevelKeyboardProc

// APPLICATION 
namespace safeexambrowser_applications_contracts {
// SafeExamBrowser.Applications.Contracts.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_applications_contracts

namespace safeexambrowser_applications {
// SafeExamBrowser.Applications.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_applications

namespace safeexambrowser_browser_contracts {
// SafeExamBrowser.Browser.Contracts.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_browser_contracts

namespace safeexambrowser_browser {
// SafeExamBrowser.Browser.dll (x64, .NET, 12 functions)

// Methods (RVA)
constexpr uint32_t kData__Initialize_b__37_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass35_1__Initialize_b__37_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__Initialize_b__37_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass6_0__Initialize_b__37_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass18_1__Initialize_b__37_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass18_2_Initialize_b__37_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass3_0__Initialize_b__37_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass91_0__Initialize_b__37_10 = 0x000103D0; // off=0xE5D0
constexpr uint32_t k__c__DisplayClass35_0__Initialize_b__37_10 = 0x00011010; // off=0xF210
constexpr uint32_t k__c__DisplayClass3_0_nitialize_b__37_10 = 0x00020000; // off=0x1E200

// Critical string references (6 categories)
constexpr uint32_t kStr_BrowserExamKey_00018AEA = 0x00018AEA; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_0001B131 = 0x0001B131; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_0001B7E8 = 0x0001B7E8; // "BrowserExamKey"
constexpr uint32_t kStr_CalculateBrowserExamKey_00018AE1 = 0x00018AE1; // "CalculateBrowserExamKey"
constexpr uint32_t kStr_CalculateConfigurationKey_00018AFD = 0x00018AFD; // "CalculateConfigurationKey"
constexpr uint32_t kStr_ConfigurationKey_00018B06 = 0x00018B06; // "ConfigurationKey"
constexpr uint32_t kStr_ConfigurationKey_0001B847 = 0x0001B847; // "ConfigurationKey"
constexpr uint32_t kStr_ConfigurationKey_0001B860 = 0x0001B860; // "ConfigurationKey"
constexpr uint32_t kStr_SebUriScheme_000180FF = 0x000180FF; // "SebUriScheme"
constexpr uint32_t kStr_SebUriScheme_00018236 = 0x00018236; // "SebUriScheme"
constexpr uint32_t kStr_Shutdown_000195E6 = 0x000195E6; // "Shutdown"
constexpr uint32_t kStr_Shutdown_00019602 = 0x00019602; // "Shutdown"

} // namespace safeexambrowser_browser

namespace safeexambrowser_client {
// SafeExamBrowser.Client.exe (x64, .NET, 347 functions)

// Methods (RVA)
constexpr uint32_t kMicrosoft_CodeAnalysis_EmbeddedAttribute_set_QuitPasswordValidated = 0x00002264; // off=0x464
constexpr uint32_t kSystem_Runtime_CompilerServices_RefSafetyRulesAttribute_get_Responsibilities = 0x0000226D; // off=0x46D
constexpr uint32_t kSafeExamBrowser_Client_App_set_Responsibilities = 0x00002275; // off=0x475
constexpr uint32_t kSafeExamBrowser_Client_App_get_Runtime = 0x0000227E; // off=0x47E
constexpr uint32_t kSafeExamBrowser_Client_App_set_Runtime = 0x00002286; // off=0x486
constexpr uint32_t kSafeExamBrowser_Client_App_get_Server = 0x0000228F; // off=0x48F
constexpr uint32_t kSafeExamBrowser_Client_App_set_Server = 0x00002297; // off=0x497
constexpr uint32_t kSafeExamBrowser_Client_App_get_SessionId = 0x000022A0; // off=0x4A0
constexpr uint32_t kSafeExamBrowser_Client_App_set_SessionId = 0x000022A8; // off=0x4A8
constexpr uint32_t kSafeExamBrowser_Client_App_get_Settings = 0x000022B1; // off=0x4B1
constexpr uint32_t kSafeExamBrowser_Client_App_set_Settings = 0x000022B9; // off=0x4B9
constexpr uint32_t kSafeExamBrowser_Client_App_get_UserInterfaceFactory = 0x000022C2; // off=0x4C2
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_set_UserInterfaceFactory = 0x000022CA; // off=0x4CA
constexpr uint32_t kSafeExamBrowser_Client_ClientContext__ctor = 0x000022D3; // off=0x4D3
constexpr uint32_t kSafeExamBrowser_Client_ClientContext__ctor = 0x000022F1; // off=0x4F1
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_TryStart = 0x00002328; // off=0x528
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_Terminate = 0x000023EC; // off=0x5EC
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_UpdateAppConfig = 0x00002492; // off=0x692
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_DelegateStartupResponsibilities = 0x000024AA; // off=0x6AA
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_DelegateClientReadyResponsibilities = 0x000024E8; // off=0x6E8
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_DelegateShutdownResponsibilities = 0x000024F7; // off=0x6F7
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_TryInformRuntime = 0x0000251E; // off=0x71E
constexpr uint32_t kSafeExamBrowser_Client_ClientContext__ctor = 0x00002548; // off=0x748
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_IsReconfigurationLocked = 0x00002566; // off=0x766
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_IsSessionLocked = 0x00002576; // off=0x776
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_ReleaseReconfigurationLock = 0x00002588; // off=0x788
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_ReleaseSessionLock = 0x000025A4; // off=0x7A4
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_RequestReconfigurationLock = 0x000025C0; // off=0x7C0
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_RequestSessionLock = 0x0000261C; // off=0x81C
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_get_ClientController = 0x00002678; // off=0x878
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_set_ClientController = 0x00002680; // off=0x880
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_BuildObjectGraph = 0x0000268C; // off=0x88C
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_LogStartupInformation = 0x00002921; // off=0xB21
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_LogShutdownInformation = 0x00002952; // off=0xB52
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_BuildOperations = 0x00002978; // off=0xB78
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_BuildResponsibilities = 0x00002B98; // off=0xD98
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_ValidateCommandLineArguments = 0x00002D4C; // off=0xF4C
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_InitializeLogging = 0x00002E30; // off=0x1030
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_InitializeText = 0x00002E7C; // off=0x107C
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_BuildBrowserOperation = 0x00002E94; // off=0x1094
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_BuildClientHostOperation = 0x00002F64; // off=0x1164
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_BuildIntegrityModule = 0x00002FD8; // off=0x11D8
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_BuildPowerSupply = 0x00003000; // off=0x1200
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_BuildKeyboardInterceptorOperation = 0x00003028; // off=0x1228
constexpr uint32_t kSafeExamBrowser_Client_ClientContext_BuildMouseInterceptorOperation = 0x00003070; // off=0x1270
constexpr uint32_t kSafeExamBrowser_Client_ClientController_BuildProctoringOperation = 0x000030B8; // off=0x12B8
constexpr uint32_t kSafeExamBrowser_Client_ClientController_BuildServerOperation = 0x00003144; // off=0x1344
constexpr uint32_t kSafeExamBrowser_Client_ClientController_BuildShellOperation = 0x000031F0; // off=0x13F0
constexpr uint32_t kSafeExamBrowser_Client_ClientController_BuildFileSystemDialog = 0x0000336D; // off=0x156D
constexpr uint32_t kSafeExamBrowser_Client_ClientController_BuildMessageBox = 0x000033A7; // off=0x15A7
constexpr uint32_t kSafeExamBrowser_Client_ClientController_BuildUserInterfaceFactory = 0x000033C9; // off=0x15C9
constexpr uint32_t kSafeExamBrowser_Client_ClientController_UpdateAppConfig = 0x000033F7; // off=0x15F7
constexpr uint32_t kSafeExamBrowser_Client_ClientController_ModuleLogger = 0x00003404; // off=0x1604
constexpr uint32_t kSafeExamBrowser_Client_Coordinator__ctor = 0x00003412; // off=0x1612
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_NetworkResponsibility__ctor = 0x00003412; // off=0x1612
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation__ctor = 0x00003412; // off=0x1612
constexpr uint32_t kSafeExamBrowser_Client_Coordinator__ctor = 0x0000341A; // off=0x161A
constexpr uint32_t kSafeExamBrowser_Client_Coordinator_Assume = 0x00003424; // off=0x1624
constexpr uint32_t kSafeExamBrowser_Client_Coordinator_AutoStart = 0x00003430; // off=0x1630
constexpr uint32_t kSafeExamBrowser_Client_Coordinator_get_Browser = 0x000034AC; // off=0x16AC
constexpr uint32_t kSafeExamBrowser_Client_Coordinator__ctor = 0x000034B9; // off=0x16B9
constexpr uint32_t kSafeExamBrowser_Client_Coordinator_Assume = 0x000034EA; // off=0x16EA
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_AutoStartBrowser = 0x0000350C; // off=0x170C
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_DeregisterEvents = 0x00003548; // off=0x1748
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_RegisterEvents = 0x000035BC; // off=0x17BC
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_Browser_ConfigurationDownloadRequested = 0x00003628; // off=0x1828
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_IsAllowedToReconfigure = 0x00003718; // off=0x1918
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_Browser_ConfigurationDownloadFinished = 0x00003838; // off=0x1A38
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_Browser_LoseFocusRequested = 0x0000391A; // off=0x1B1A
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_Browser_UserIdentifierDetected = 0x00003928; // off=0x1B28
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_Browser_TerminationRequested = 0x000039A1; // off=0x1BA1
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_get_ClientHost = 0x000039BA; // off=0x1BBA
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot__ctor = 0x000039C8; // off=0x1BC8
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_Assume = 0x00003A14; // off=0x1C14
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_DeregisterEvents = 0x00003A2C; // off=0x1C2C
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_RegisterEvents = 0x00003AFC; // off=0x1CFC
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_ClientHost_ExamSelectionRequested = 0x00003BC4; // off=0x1DC4
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_ClientHost_MessageBoxRequested = 0x00003C7C; // off=0x1E7C
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_ClientHost_PasswordRequested = 0x00003D10; // off=0x1F10
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_ClientHost_ReconfigurationAborted = 0x00003E19; // off=0x2019
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_ClientHost_ReconfigurationDenied = 0x00003E44; // off=0x2044
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_ClientHost_ServerFailureActionRequested = 0x00003EA8; // off=0x20A8
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_ClientHost_Shutdown = 0x00003F5A; // off=0x215A
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_Runtime_ConnectionLost = 0x00003F67; // off=0x2167
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_get_Context = 0x00003F97; // off=0x2197
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_set_Context = 0x00003F9F; // off=0x219F
constexpr uint32_t kSafeExamBrowser_Client_CompositionRoot_get_Logger = 0x00003FA8; // off=0x21A8
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ApplicationsResponsibility_set_Logger = 0x00003FB0; // off=0x21B0
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ApplicationsResponsibility_get_Settings = 0x00003FB9; // off=0x21B9
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ApplicationsResponsibility__ctor = 0x00003FC6; // off=0x21C6
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_BrowserResponsibility_PauseActivators = 0x00003FDC; // off=0x21DC
constexpr uint32_t kBrowserResponsibility_IsValidQuitPassword = 0x0000402C; // off=0x222C
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_BrowserResponsibility_PrepareShutdown = 0x00004071; // off=0x2271
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_BrowserResponsibility_ResumeActivators = 0x00004098; // off=0x2298
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_BrowserResponsibility_ShowLockScreen = 0x000040E8; // off=0x22E8
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_BrowserResponsibility_TryRequestShutdown = 0x000041AC; // off=0x23AC
constexpr uint32_t kBrowserResponsibility_SendLockScreenConfirmation = 0x0000420C; // off=0x240C
constexpr uint32_t kBrowserResponsibility_SendLockScreenNotification = 0x00004254; // off=0x2454
constexpr uint32_t kBrowserResponsibility_WaitForLockScreenResolution = 0x0000429C; // off=0x249C
constexpr uint32_t kBrowserResponsibility_get_IntegrityModule = 0x0000438F; // off=0x258F
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_BrowserResponsibility__ctor = 0x0000439C; // off=0x259C
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_CommunicationResponsibility_Assume = 0x000043AD; // off=0x25AD
constexpr uint32_t kCommunicationResponsibility_ScheduleIntegrityVerification = 0x000043E0; // off=0x25E0
constexpr uint32_t kCommunicationResponsibility_UpdateSessionIntegrity = 0x00004434; // off=0x2634
constexpr uint32_t kCommunicationResponsibility_VerifyApplicationIntegrity = 0x00004494; // off=0x2694
constexpr uint32_t kCommunicationResponsibility_VerifySessionIntegrity = 0x0000451C; // off=0x271C
constexpr uint32_t kCommunicationResponsibility__ScheduleIntegrityVerification_b__5_0 = 0x00004616; // off=0x2816
constexpr uint32_t kCommunicationResponsibility__VerifySessionIntegrity_b__8_0 = 0x0000461E; // off=0x281E
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_CommunicationResponsibility__ctor = 0x00004648; // off=0x2848
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_CommunicationResponsibility_Assume = 0x0000469C; // off=0x289C
constexpr uint32_t kCommunicationResponsibility_DeregisterEvents = 0x000046EC; // off=0x28EC
constexpr uint32_t kCommunicationResponsibility_StopMonitoring = 0x0000479A; // off=0x299A
constexpr uint32_t kCommunicationResponsibility_RegisterEvents = 0x000047A8; // off=0x29A8
constexpr uint32_t kCommunicationResponsibility_StartMonitoring = 0x00004858; // off=0x2A58
constexpr uint32_t kClientResponsibility_ApplicationMonitor_ExplorerStarted = 0x000048C8; // off=0x2AC8
constexpr uint32_t kClientResponsibility_ApplicationMonitor_TerminationFailed = 0x00004968; // off=0x2B68
constexpr uint32_t kClientResponsibility_DisplayMonitor_DisplaySettingsChanged = 0x00004AEC; // off=0x2CEC
constexpr uint32_t kClientResponsibility_Sentinel_CursorChanged = 0x00004C4C; // off=0x2E4C
constexpr uint32_t kClientResponsibility_Sentinel_EaseOfAccessChanged = 0x00004D88; // off=0x2F88
constexpr uint32_t kClientResponsibility_Sentinel_SessionChanged = 0x00004EC4; // off=0x30C4
constexpr uint32_t kClientResponsibility_Sentinel_StickyKeysChanged = 0x000050E0; // off=0x32E0
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ClientResponsibility__ctor = 0x00005219; // off=0x3419
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ClientResponsibility_Assume = 0x0000523A; // off=0x343A
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ClientResponsibility_DeregisterEvents = 0x00005252; // off=0x3452
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ClientResponsibility_RegisterEvents = 0x0000526B; // off=0x346B
constexpr uint32_t kClientResponsibility_NetworkAdapter_CredentialsRequired = 0x00005284; // off=0x3484
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ClientResponsibility_get_Proctoring = 0x000052F6; // off=0x34F6
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ClientResponsibility__ctor = 0x00005303; // off=0x3503
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ClientResponsibility_Assume = 0x0000531C; // off=0x351C
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ClientResponsibility_FinalizeProctoring = 0x00005328; // off=0x3528
constexpr uint32_t kIntegrityResponsibility_Dialog_CancellationRequested = 0x000053BC; // off=0x35BC
constexpr uint32_t kIntegrityResponsibility_Proctoring_RemainingWorkUpdated = 0x00005441; // off=0x3641
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_IntegrityResponsibility_get_Server = 0x00005456; // off=0x3656
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_IntegrityResponsibility__ctor = 0x00005463; // off=0x3663
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_IntegrityResponsibility_Assume = 0x0000547C; // off=0x367C
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_IntegrityResponsibility_DeregisterEvents = 0x00005494; // off=0x3694
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_IntegrityResponsibility_RegisterEvents = 0x000054F0; // off=0x36F0
constexpr uint32_t kIntegrityResponsibility_Server_LockScreenConfirmed = 0x00005542; // off=0x3742
constexpr uint32_t kIntegrityResponsibility_Server_LockScreenRequested = 0x0000556C; // off=0x376C
constexpr uint32_t kMonitoringResponsibility_Server_TerminationRequested = 0x000055CC; // off=0x37CC
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_MonitoringResponsibility__ctor = 0x000055E5; // off=0x37E5
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_MonitoringResponsibility_Assume = 0x00005618; // off=0x3818
constexpr uint32_t kMonitoringResponsibility_DeregisterEvents = 0x00005668; // off=0x3868
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_MonitoringResponsibility_RegisterEvents = 0x00005710; // off=0x3910
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_MonitoringResponsibility_CloseShell = 0x000057B8; // off=0x39B8
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_MonitoringResponsibility_ShowShell = 0x00005818; // off=0x3A18
constexpr uint32_t kMonitoringResponsibility_Shell_QuitButtonClicked = 0x00005869; // off=0x3A69
constexpr uint32_t kMonitoringResponsibility_Taskbar_LoseFocusRequested = 0x00005886; // off=0x3A86
constexpr uint32_t kMonitoringResponsibility_TerminationActivator_Activated = 0x00005899; // off=0x3A99
constexpr uint32_t kMonitoringResponsibility_TryInitiateShutdown = 0x000058B0; // off=0x3AB0
constexpr uint32_t kMonitoringResponsibility_TryConfirmShutdown = 0x000058F1; // off=0x3AF1
constexpr uint32_t kMonitoringResponsibility_TryValidateQuitPassword = 0x00005924; // off=0x3B24
constexpr uint32_t kNetworkResponsibility_get_ResourceManager = 0x000059A5; // off=0x3BA5
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_NetworkResponsibility_get_Culture = 0x000059D1; // off=0x3BD1
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_NetworkResponsibility_set_Culture = 0x000059D8; // off=0x3BD8
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_NetworkResponsibility_get_Default = 0x000059E0; // off=0x3BE0
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ProctoringResponsibility__ctor = 0x000059E7; // off=0x3BE7
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ProctoringResponsibility__cctor = 0x000059EF; // off=0x3BEF
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ProctoringResponsibility_get_CanActivate = 0x00005A05; // off=0x3C05
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ProctoringResponsibility_get_Tooltip = 0x00005A0D; // off=0x3C0D
constexpr uint32_t kProctoringResponsibility_get_IconResource = 0x00005A15; // off=0x3C15
constexpr uint32_t kProctoringResponsibility_add_NotificationChanged = 0x00005A1D; // off=0x3C1D
constexpr uint32_t kServerResponsibility_remove_NotificationChanged = 0x00005A1D; // off=0x3C1D
constexpr uint32_t kShellResponsibility_add_NotificationChanged = 0x00005A1D; // off=0x3C1D
constexpr uint32_t kShellResponsibility_remove_NotificationChanged = 0x00005A1D; // off=0x3C1D
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ServerResponsibility__ctor = 0x00005A20; // off=0x3C20
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ServerResponsibility_Activate = 0x00005A74; // off=0x3C74
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ServerResponsibility_Terminate = 0x00005ACE; // off=0x3CCE
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ServerResponsibility__Activate_b__16_0 = 0x00005AE0; // off=0x3CE0
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ServerResponsibility_get_CanActivate = 0x00005AE9; // off=0x3CE9
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ServerResponsibility_get_Tooltip = 0x00005AF1; // off=0x3CF1
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ServerResponsibility_get_IconResource = 0x00005AF9; // off=0x3CF9
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ShellResponsibility__ctor = 0x00005B04; // off=0x3D04
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ShellResponsibility_Activate = 0x00005B58; // off=0x3D58
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ShellResponsibility_Terminate = 0x00005BB2; // off=0x3DB2
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ShellResponsibility__Activate_b__16_0 = 0x00005BC4; // off=0x3DC4
constexpr uint32_t kShellResponsibility_get_AuthenticationToken = 0x00005BCD; // off=0x3DCD
constexpr uint32_t kShellResponsibility_set_AuthenticationToken = 0x00005BD5; // off=0x3DD5
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ShellResponsibility_get_IsConnected = 0x00005BDE; // off=0x3DDE
constexpr uint32_t kSafeExamBrowser_Client_Responsibilities_ShellResponsibility_set_IsConnected = 0x00005BE6; // off=0x3DE6
constexpr uint32_t kShellResponsibility_add_ExamSelectionRequested = 0x00005BF0; // off=0x3DF0
constexpr uint32_t kShellResponsibility_remove_ExamSelectionRequested = 0x00005C28; // off=0x3E28
constexpr uint32_t kSafeExamBrowser_Client_Properties_Resources_add_MessageBoxRequested = 0x00005C60; // off=0x3E60
constexpr uint32_t kSafeExamBrowser_Client_Properties_Resources_remove_MessageBoxRequested = 0x00005C98; // off=0x3E98
constexpr uint32_t kSafeExamBrowser_Client_Properties_Resources_add_PasswordRequested = 0x00005CD0; // off=0x3ED0
constexpr uint32_t kSafeExamBrowser_Client_Properties_Resources_remove_PasswordRequested = 0x00005D08; // off=0x3F08
constexpr uint32_t kSafeExamBrowser_Client_Properties_Settings_add_ReconfigurationAborted = 0x00005D40; // off=0x3F40
constexpr uint32_t kSafeExamBrowser_Client_Properties_Settings_remove_ReconfigurationAborted = 0x00005D78; // off=0x3F78
constexpr uint32_t kSafeExamBrowser_Client_Properties_Settings_add_ReconfigurationDenied = 0x00005DB0; // off=0x3FB0
constexpr uint32_t kAboutNotification_remove_ReconfigurationDenied = 0x00005DE8; // off=0x3FE8
constexpr uint32_t kSafeExamBrowser_Client_Notifications_AboutNotification_add_RuntimeDisconnected = 0x00005E20; // off=0x4020
constexpr uint32_t kAboutNotification_remove_RuntimeDisconnected = 0x00005E58; // off=0x4058
constexpr uint32_t kAboutNotification_add_ServerFailureActionRequested = 0x00005E90; // off=0x4090
constexpr uint32_t kAboutNotification_remove_ServerFailureActionRequested = 0x00005EC8; // off=0x40C8
constexpr uint32_t kSafeExamBrowser_Client_Notifications_AboutNotification_add_Shutdown = 0x00005F00; // off=0x4100
constexpr uint32_t kSafeExamBrowser_Client_Notifications_AboutNotification_remove_Shutdown = 0x00005F38; // off=0x4138
constexpr uint32_t kSafeExamBrowser_Client_Notifications_AboutNotification__ctor = 0x00005F6D; // off=0x416D
constexpr uint32_t kSafeExamBrowser_Client_Notifications_AboutNotification_OnConnect = 0x00005F8C; // off=0x418C
constexpr uint32_t kSafeExamBrowser_Client_Notifications_LogNotification_OnDisconnect = 0x00005FD5; // off=0x41D5
constexpr uint32_t kSafeExamBrowser_Client_Notifications_LogNotification_OnReceive = 0x00005FF4; // off=0x41F4
constexpr uint32_t kSafeExamBrowser_Client_Notifications_LogNotification_OnReceive = 0x00006180; // off=0x4380
constexpr uint32_t kSafeExamBrowser_Client_Notifications_LogNotification_add_StatusChanged = 0x000061E4; // off=0x43E4
constexpr uint32_t kSafeExamBrowser_Client_Notifications_LogNotification_remove_StatusChanged = 0x0000621C; // off=0x441C
constexpr uint32_t kSafeExamBrowser_Client_Notifications_LogNotification__ctor = 0x00006251; // off=0x4451
constexpr uint32_t kSafeExamBrowser_Client_Notifications_LogNotification_Perform = 0x00006268; // off=0x4468
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_Revert = 0x00006268; // off=0x4468
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation_Revert = 0x00006268; // off=0x4468
constexpr uint32_t kSafeExamBrowser_Client_Notifications_LogNotification_Revert = 0x0000626C; // off=0x446C
constexpr uint32_t kSafeExamBrowser_Client_Notifications_LogNotification_get_Context = 0x00006351; // off=0x4551
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost__ctor = 0x00006359; // off=0x4559
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost__ctor = 0x00006368; // off=0x4568
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_Operations_ProgressChanged = 0x000063A0; // off=0x45A0
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_Operations_StatusChanged = 0x00006477; // off=0x4677
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_add_StatusChanged = 0x00006488; // off=0x4688
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_remove_StatusChanged = 0x000064C0; // off=0x46C0
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost__ctor = 0x000064F5; // off=0x46F5
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_Perform = 0x0000650C; // off=0x470C
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_add_StatusChanged = 0x00006614; // off=0x4814
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_remove_StatusChanged = 0x0000664C; // off=0x484C
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost__ctor = 0x00006681; // off=0x4881
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_Perform = 0x00006698; // off=0x4898
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_RequestNetworkAdapterAccess = 0x000066C7; // off=0x48C7
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_add_StatusChanged = 0x000066F8; // off=0x48F8
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_remove_StatusChanged = 0x00006730; // off=0x4930
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost__ctor = 0x00006765; // off=0x4965
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_Perform = 0x00006794; // off=0x4994
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_Revert = 0x00006884; // off=0x4A84
constexpr uint32_t kSafeExamBrowser_Client_Communication_ClientHost_add_StatusChanged = 0x0000691C; // off=0x4B1C
constexpr uint32_t kClientHostDisconnectionOperation_remove_StatusChanged = 0x00006954; // off=0x4B54
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientHostDisconnectionOperation__ctor = 0x00006989; // off=0x4B89
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientHostDisconnectionOperation_Perform = 0x000069A8; // off=0x4BA8
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientHostDisconnectionOperation_Revert = 0x00006A1C; // off=0x4C1C
constexpr uint32_t kClientHostDisconnectionOperation_add_StatusChanged = 0x00006A94; // off=0x4C94
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientOperation_remove_StatusChanged = 0x00006ACC; // off=0x4CCC
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientOperation__ctor = 0x00006B01; // off=0x4D01
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientOperation_Perform = 0x00006B30; // off=0x4D30
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientOperation_Revert = 0x00006C34; // off=0x4E34
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientOperation_add_StatusChanged = 0x00006CA4; // off=0x4EA4
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientOperation_remove_StatusChanged = 0x00006CDC; // off=0x4EDC
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientOperationSequence__ctor = 0x00006D11; // off=0x4F11
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientOperationSequence_Perform = 0x00006D28; // off=0x4F28
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClientOperationSequence_Revert = 0x00006D31; // off=0x4F31
constexpr uint32_t kSafeExamBrowser_Client_Operations_ConfigurationOperation_InitializeClipboard = 0x00006D3C; // off=0x4F3C
constexpr uint32_t kSafeExamBrowser_Client_Operations_ConfigurationOperation_FinalizeClipboard = 0x00006D8F; // off=0x4F8F
constexpr uint32_t kSafeExamBrowser_Client_Operations_ConfigurationOperation_add_StatusChanged = 0x00006DC4; // off=0x4FC4
constexpr uint32_t kSafeExamBrowser_Client_Operations_ConfigurationOperation_remove_StatusChanged = 0x00006DFC; // off=0x4FFC
constexpr uint32_t kSafeExamBrowser_Client_Operations_ConfigurationOperation__ctor = 0x00006E31; // off=0x5031
constexpr uint32_t kSafeExamBrowser_Client_Operations_PermissionOperation_Perform = 0x00006E50; // off=0x5050
constexpr uint32_t kSafeExamBrowser_Client_Operations_PermissionOperation_Revert = 0x00006EC4; // off=0x50C4
constexpr uint32_t kSafeExamBrowser_Client_Operations_PermissionOperation_add_StatusChanged = 0x00006F04; // off=0x5104
constexpr uint32_t kSafeExamBrowser_Client_Operations_PermissionOperation_remove_StatusChanged = 0x00006F3C; // off=0x513C
constexpr uint32_t kSafeExamBrowser_Client_Operations_PermissionOperation__ctor = 0x00006F71; // off=0x5171
constexpr uint32_t kSafeExamBrowser_Client_Operations_PermissionOperation_Perform = 0x00006F88; // off=0x5188
constexpr uint32_t kSafeExamBrowser_Client_Operations_ProctoringOperation_Revert = 0x00006FBC; // off=0x51BC
constexpr uint32_t kSafeExamBrowser_Client_Operations_ProctoringOperation_add_StatusChanged = 0x00006FF0; // off=0x51F0
constexpr uint32_t kSafeExamBrowser_Client_Operations_ProctoringOperation_remove_StatusChanged = 0x00007028; // off=0x5228
constexpr uint32_t kSafeExamBrowser_Client_Operations_ProctoringOperation__ctor = 0x0000705D; // off=0x525D
constexpr uint32_t kSafeExamBrowser_Client_Operations_ProctoringOperation_Perform = 0x00007074; // off=0x5274
constexpr uint32_t kSafeExamBrowser_Client_Operations_RuntimeConnectionOperation_Revert = 0x000070A8; // off=0x52A8
constexpr uint32_t kSafeExamBrowser_Client_Operations_RuntimeConnectionOperation_add_StatusChanged = 0x000070DC; // off=0x52DC
constexpr uint32_t kRuntimeConnectionOperation_remove_StatusChanged = 0x00007114; // off=0x5314
constexpr uint32_t kSafeExamBrowser_Client_Operations_RuntimeConnectionOperation__ctor = 0x00007149; // off=0x5349
constexpr uint32_t kSafeExamBrowser_Client_Operations_RuntimeConnectionOperation_Perform = 0x00007188; // off=0x5388
constexpr uint32_t kSafeExamBrowser_Client_Operations_BrowserOperation_Revert = 0x000071C0; // off=0x53C0
constexpr uint32_t kSafeExamBrowser_Client_Operations_BrowserOperation_InitializeApplications = 0x000071F8; // off=0x53F8
constexpr uint32_t kSafeExamBrowser_Client_Operations_BrowserOperation_Initialize = 0x000072B0; // off=0x54B0
constexpr uint32_t kSafeExamBrowser_Client_Operations_BrowserOperation_FinalizeApplications = 0x00007358; // off=0x5558
constexpr uint32_t kSafeExamBrowser_Client_Operations_BrowserOperation_HandleAutoTerminationFailure = 0x000073A8; // off=0x55A8
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClipboardOperation_StartMonitor = 0x0000740C; // off=0x560C
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClipboardOperation_StopMonitor = 0x00007430; // off=0x5630
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClipboardOperation_TryTerminate = 0x00007454; // off=0x5654
constexpr uint32_t kClipboardOperation_InformAboutFailedApplicationInitialization = 0x00007580; // off=0x5780
constexpr uint32_t kClipboardOperation_InformAboutFailedApplicationTermination = 0x00007604; // off=0x5804
constexpr uint32_t kSafeExamBrowser_Client_Operations_ClipboardOperation_TryAskForApplicationPath = 0x00007684; // off=0x5884
constexpr uint32_t kClipboardOperation_TryAskForAutomaticApplicationTermination = 0x000076DC; // off=0x58DC
constexpr uint32_t kSafeExamBrowser_Client_Operations_DisplayMonitorOperation_add_StatusChanged = 0x0000778C; // off=0x598C
constexpr uint32_t kSafeExamBrowser_Client_Operations_DisplayMonitorOperation_remove_StatusChanged = 0x000077C4; // off=0x59C4
constexpr uint32_t kSafeExamBrowser_Client_Operations_DisplayMonitorOperation__ctor = 0x000077F9; // off=0x59F9
constexpr uint32_t kSafeExamBrowser_Client_Operations_DisplayMonitorOperation_Perform = 0x00007830; // off=0x5A30
constexpr uint32_t kSafeExamBrowser_Client_Operations_DisplayMonitorOperation_Revert = 0x00007984; // off=0x5B84
constexpr uint32_t kSafeExamBrowser_Client_Operations_KeyboardInterceptorOperation_add_StatusChanged = 0x000079E0; // off=0x5BE0
constexpr uint32_t kKeyboardInterceptorOperation_remove_StatusChanged = 0x00007A18; // off=0x5C18
constexpr uint32_t kSafeExamBrowser_Client_Operations_KeyboardInterceptorOperation__ctor = 0x00007A50; // off=0x5C50
constexpr uint32_t kSafeExamBrowser_Client_Operations_KeyboardInterceptorOperation_Perform = 0x00007AD4; // off=0x5CD4
constexpr uint32_t kSafeExamBrowser_Client_Operations_KeyboardInterceptorOperation_Revert = 0x00007B2C; // off=0x5D2C
constexpr uint32_t kSafeExamBrowser_Client_Operations_MouseInterceptorOperation_InitializeActivators = 0x00007B68; // off=0x5D68
constexpr uint32_t kMouseInterceptorOperation_InitializeActionCenter = 0x00007C8C; // off=0x5E8C
constexpr uint32_t kMouseInterceptorOperation_InitializeAlwaysOnState = 0x00007D20; // off=0x5F20
constexpr uint32_t kSafeExamBrowser_Client_Operations_MouseInterceptorOperation_InitializeTaskbar = 0x00007DB8; // off=0x5FB8
constexpr uint32_t kSafeExamBrowser_Client_Operations_MouseInterceptorOperation_InitializeTaskview = 0x00007E4C; // off=0x604C
constexpr uint32_t kSafeExamBrowser_Client_Operations_ApplicationOperation_InitializeApplicationsFor = 0x00007EB4; // off=0x60B4
constexpr uint32_t kApplicationOperation_InitializeSystemComponents = 0x00007F70; // off=0x6170
constexpr uint32_t kApplicationOperation_InitializeAboutNotificationForActionCenter = 0x00007F9E; // off=0x619E
constexpr uint32_t kApplicationOperation_InitializeAboutNotificationForTaskbar = 0x00007FD9; // off=0x61D9
constexpr uint32_t kApplicationOperation_InitializeAudioForActionCenter = 0x00008014; // off=0x6214
constexpr uint32_t kSafeExamBrowser_Client_Operations_ApplicationOperation_InitializeAudioForTaskbar = 0x0000804F; // off=0x624F
constexpr uint32_t kApplicationOperation_InitializeClockForActionCenter = 0x0000808A; // off=0x628A
constexpr uint32_t kSafeExamBrowser_Client_Operations_ApplicationOperation_InitializeClockForTaskbar = 0x000080B1; // off=0x62B1
constexpr uint32_t kApplicationOperation_InitializeLogNotificationForActionCenter = 0x000080D8; // off=0x62D8
constexpr uint32_t kApplicationOperation_InitializeLogNotificationForTaskbar = 0x00008113; // off=0x6313
constexpr uint32_t kApplicationOperation_InitializeKeyboardLayoutForActionCenter = 0x0000814E; // off=0x634E
constexpr uint32_t kApplicationOperation_InitializeKeyboardLayoutForTaskbar = 0x00008189; // off=0x6389
constexpr uint32_t kApplicationOperation_InitializePowerSupplyForActionCenter = 0x000081C4; // off=0x63C4
constexpr uint32_t kApplicationOperation_InitializePowerSupplyForTaskbar = 0x000081F0; // off=0x63F0
constexpr uint32_t kApplicationOperation_InitializeQuitButtonForActionCenter = 0x0000821C; // off=0x641C
constexpr uint32_t kApplicationOperation_InitializeQuitButtonForTaskbar = 0x0000823E; // off=0x643E
constexpr uint32_t kServerOperation_InitializeNetworkForActionCenter = 0x00008260; // off=0x6460
constexpr uint32_t kSafeExamBrowser_Client_Operations_ServerOperation_InitializeNetworkForTaskbar = 0x0000829B; // off=0x649B
constexpr uint32_t kSafeExamBrowser_Client_Operations_ServerOperation_TerminateActivators = 0x000082D8; // off=0x64D8
constexpr uint32_t kSafeExamBrowser_Client_Operations_ServerOperation_TerminateNotifications = 0x00008328; // off=0x6528
constexpr uint32_t kSafeExamBrowser_Client_Operations_ServerOperation_TerminateSystemComponents = 0x00008340; // off=0x6540
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation__ctor = 0x0000836E; // off=0x656E
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation_add_StatusChanged = 0x00008388; // off=0x6588
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation_remove_StatusChanged = 0x000083C0; // off=0x65C0
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation_Perform = 0x000083F8; // off=0x65F8
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation__cctor = 0x000084BF; // off=0x66BF
constexpr uint32_t kShellOperation__ClientHost_ExamSelectionRequested_b__13_0 = 0x000084CB; // off=0x66CB
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation__cctor = 0x00008502; // off=0x6702
constexpr uint32_t kShellOperation__ApplicationMonitor_TerminationFailed_b__15_0 = 0x0000850E; // off=0x670E
constexpr uint32_t kShellOperation__ApplicationMonitor_TerminationFailed_b__15_1 = 0x00008520; // off=0x6720
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation__FinalizeProctoring_b__0 = 0x00008537; // off=0x6737
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation__FinalizeProctoring_b__1 = 0x0000854B; // off=0x674B
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation__FinalizeProctoring_b__2 = 0x0000855E; // off=0x675E
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation__Revert_b__0 = 0x0000859C; // off=0x679C
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation__cctor = 0x000085AA; // off=0x67AA
constexpr uint32_t kShellOperation__HandleAutoTerminationFailure_b__16_0 = 0x000085B6; // off=0x67B6
constexpr uint32_t kSafeExamBrowser_Client_Operations_ShellOperation__TryTerminate_b__19_0 = 0x000085B6; // off=0x67B6
constexpr uint32_t kShellOperation__InformAboutFailedApplicationTermination_b__21_0 = 0x000085B6; // off=0x67B6
constexpr uint32_t kShellOperation__TryAskForAutomaticApplicationTermination_b__23_0 = 0x000085B6; // off=0x67B6
constexpr uint32_t kWindowGuardOperation__InitializeApplicationsFor_b__0 = 0x000085BE; // off=0x67BE
constexpr uint32_t kSafeExamBrowser_Client_Operations_WindowGuardOperation___9__21_0 = 0x00010000; // off=0xE200
constexpr uint32_t kSafeExamBrowser_Client_Contracts_ICoordinator___9__21_0 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__9__21_0 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass25_0___9__21_0 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass7_0___9__21_0 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass7_0___21_0 = 0x00030000; // off=0x2E200
constexpr uint32_t k__c__21_0 = 0x00040000; // off=0x3E200
constexpr uint32_t kSafeExamBrowser_Client_Contracts_ICoordinator_21_0 = 0x00050000; // off=0x4E200
constexpr uint32_t k__c___9__21_0 = 0x00060000; // off=0x5E200
constexpr uint32_t k__c_0 = 0x00080000; // off=0x7E200

// Critical string references (7 categories)
constexpr uint32_t kStr_CacheSession_0000F7DD = 0x0000F7DD; // "CacheSession"
constexpr uint32_t kStr_ClearSession_0000F7EA = 0x0000F7EA; // "ClearSession"
constexpr uint32_t kStr_ConfigurationKey_00011FEC = 0x00011FEC; // "ConfigurationKey"
constexpr uint32_t kStr_SebUriScheme_0000E5EA = 0x0000E5EA; // "SebUriScheme"
constexpr uint32_t kStr_SebUriScheme_0000E68E = 0x0000E68E; // "SebUriScheme"
constexpr uint32_t kStr_Shutdown_0000CF6C = 0x0000CF6C; // "Shutdown"
constexpr uint32_t kStr_Shutdown_0000CF78 = 0x0000CF78; // "Shutdown"
constexpr uint32_t kStr_Shutdown_0000D12B = 0x0000D12B; // "Shutdown"
constexpr uint32_t kStr_TryVerifySessionIntegrity_0001242B = 0x0001242B; // "TryVerifySessionIntegrity"
constexpr uint32_t kStr_VerifyCodeSignature_0000E6D8 = 0x0000E6D8; // "VerifyCodeSignature"

} // namespace safeexambrowser_client

namespace safeexambrowser_communication_contracts {
// SafeExamBrowser.Communication.Contracts.dll (x64, .NET, 0 functions)


// Critical string references (1 categories)
constexpr uint32_t kStr_Shutdown_00005B16 = 0x00005B16; // "Shutdown"
constexpr uint32_t kStr_Shutdown_00005B2F = 0x00005B2F; // "Shutdown"
constexpr uint32_t kStr_Shutdown_00006914 = 0x00006914; // "Shutdown"

} // namespace safeexambrowser_communication_contracts

namespace safeexambrowser_communication {
// SafeExamBrowser.Communication.dll (x64, .NET, 0 functions)


// Critical string references (1 categories)
constexpr uint32_t kStr_Shutdown_000055D6 = 0x000055D6; // "Shutdown"
constexpr uint32_t kStr_Shutdown_000055E6 = 0x000055E6; // "Shutdown"

} // namespace safeexambrowser_communication

namespace safeexambrowser_configuration_contracts {
// SafeExamBrowser.Configuration.Contracts.dll (x64, .NET, 0 functions)


// Critical string references (12 categories)
constexpr uint32_t kStr_AppSignatureKey_000053B7 = 0x000053B7; // "AppSignatureKey"
constexpr uint32_t kStr_BrowserExamKey_00004A5F = 0x00004A5F; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_000053E3 = 0x000053E3; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_000053FB = 0x000053FB; // "BrowserExamKey"
constexpr uint32_t kStr_CacheSession_00004E3C = 0x00004E3C; // "CacheSession"
constexpr uint32_t kStr_CalculateAppSignatureKey_000053AE = 0x000053AE; // "CalculateAppSignatureKey"
constexpr uint32_t kStr_CalculateBrowserExamKey_00004A56 = 0x00004A56; // "CalculateBrowserExamKey"
constexpr uint32_t kStr_CalculateBrowserExamKey_000053DA = 0x000053DA; // "CalculateBrowserExamKey"
constexpr uint32_t kStr_CalculateConfigurationKey_00004A72 = 0x00004A72; // "CalculateConfigurationKey"
constexpr uint32_t kStr_ClearSession_00004E49 = 0x00004E49; // "ClearSession"
constexpr uint32_t kStr_ConfigurationKey_00004A7B = 0x00004A7B; // "ConfigurationKey"
constexpr uint32_t kStr_IsVirtualMachine_000046EF = 0x000046EF; // "IsVirtualMachine"
constexpr uint32_t kStr_SebUriScheme_0000411C = 0x0000411C; // "SebUriScheme"
constexpr uint32_t kStr_SebUriScheme_0000418B = 0x0000418B; // "SebUriScheme"
constexpr uint32_t kStr_SebUriScheme_00004696 = 0x00004696; // "SebUriScheme"
constexpr uint32_t kStr_TryVerifySessionIntegrity_000054EB = 0x000054EB; // "TryVerifySessionIntegrity"
constexpr uint32_t kStr_VerifyCodeSignature_0000479A = 0x0000479A; // "VerifyCodeSignature"

} // namespace safeexambrowser_configuration_contracts

namespace safeexambrowser_configuration {
// SafeExamBrowser.Configuration.dll (x64, .NET, 16 functions)

// Methods (RVA)
constexpr uint32_t kUserInterfaceDataMapper_eWindowTitle = 0x0000325B; // off=0x145B
constexpr uint32_t k__c__DisplayClass12_0_erBlock = 0x00003D2C; // off=0x1F2C
constexpr uint32_t k__c__DisplayClass13_0_apEnableF10 = 0x00004C1D; // off=0x2E1D
constexpr uint32_t k__c__DisplayClass8_0_apEnableF10 = 0x00004C1D; // off=0x2E1D
constexpr uint32_t kUserInterfaceDataMapper_MapEnableF10 = 0x00010000; // off=0xE200
constexpr uint32_t kUserInterfaceDataMapper_apEnableF10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass23_0_apEnableF10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass12_0_apEnableF10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c_MapEnableF10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass1_0_apEnableF10 = 0x00010000; // off=0xE200
constexpr uint32_t k__Extract_b__0_d_apEnableF10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass11_0_MapEnableF10 = 0x00010002; // off=0xE202
constexpr uint32_t k__c_MapEnableF10 = 0x00020000; // off=0x1D200
constexpr uint32_t k__c__DisplayClass13_0_MapEnableF10 = 0x00020002; // off=0x1D202
constexpr uint32_t k__c__DisplayClass4_0_MapEnableF10 = 0x00020002; // off=0x1D202

// Critical string references (14 categories)
constexpr uint32_t kStr_AppSignatureKey_00015AD7 = 0x00015AD7; // "AppSignatureKey"
constexpr uint32_t kStr_BrowserExamKey_00012C94 = 0x00012C94; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_000153A0 = 0x000153A0; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_00015B16 = 0x00015B16; // "BrowserExamKey"
constexpr uint32_t kStr_CacheSession_0001366F = 0x0001366F; // "CacheSession"
constexpr uint32_t kStr_CalculateAppSignatureKey_00015ACE = 0x00015ACE; // "CalculateAppSignatureKey"
constexpr uint32_t kStr_CalculateBrowserExamKey_00012C8B = 0x00012C8B; // "CalculateBrowserExamKey"
constexpr uint32_t kStr_CalculateBrowserExamKey_00015B28 = 0x00015B28; // "CalculateBrowserExamKey"
constexpr uint32_t kStr_CalculateConfigurationKey_00012CA7 = 0x00012CA7; // "CalculateConfigurationKey"
constexpr uint32_t kStr_CalculateConfigurationKey_00015BE3 = 0x00015BE3; // "CalculateConfigurationKey"
constexpr uint32_t kStr_ClearSession_000111C0 = 0x000111C0; // "ClearSession"
constexpr uint32_t kStr_ClearSession_0001367C = 0x0001367C; // "ClearSession"
constexpr uint32_t kStr_ConfigurationKey_00012CB0 = 0x00012CB0; // "ConfigurationKey"
constexpr uint32_t kStr_ConfigurationKey_00015BB9 = 0x00015BB9; // "ConfigurationKey"
constexpr uint32_t kStr_ConfigurationKey_00015BD2 = 0x00015BD2; // "ConfigurationKey"
constexpr uint32_t kStr_IsVirtualMachine_000121C3 = 0x000121C3; // "IsVirtualMachine"
constexpr uint32_t kStr_SebUriScheme_0001210F = 0x0001210F; // "SebUriScheme"
constexpr uint32_t kStr_SebUriScheme_00012120 = 0x00012120; // "SebUriScheme"
constexpr uint32_t kStr_SebUriScheme_000122FE = 0x000122FE; // "SebUriScheme"
constexpr uint32_t kStr_Shutdown_00013E61 = 0x00013E61; // "Shutdown"
constexpr uint32_t kStr_Shutdown_00013E7A = 0x00013E7A; // "Shutdown"
constexpr uint32_t kStr_Shutdown_00013E96 = 0x00013E96; // "Shutdown"
constexpr uint32_t kStr_TryVerifySessionIntegrity_00011220 = 0x00011220; // "TryVerifySessionIntegrity"
constexpr uint32_t kStr_TryVerifySessionIntegrity_00015EC2 = 0x00015EC2; // "TryVerifySessionIntegrity"
constexpr uint32_t kStr_VMware_0001392A = 0x0001392A; // "VMware"
constexpr uint32_t kStr_VMware_00013944 = 0x00013944; // "VMware"
constexpr uint32_t kStr_VMware_00015946 = 0x00015946; // "VMware"
constexpr uint32_t kStr_VerifyCodeSignature_0001234B = 0x0001234B; // "VerifyCodeSignature"

} // namespace safeexambrowser_configuration

namespace safeexambrowser_core_contracts {
// SafeExamBrowser.Core.Contracts.dll (x64, .NET, 24 functions)

// Methods (RVA)
constexpr uint32_t kSafeExamBrowser_Core_Contracts_ResponsibilityModel_IResponsibility_1_get_Uri = 0x0000205F; // off=0x25F
constexpr uint32_t kIResponsibilityCollection_1_set_Uri = 0x00002067; // off=0x267
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_BitmapIconResource__ctor = 0x00002070; // off=0x270
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_BitmapIconResource_get_FilePath = 0x00002078; // off=0x278
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_BitmapIconResource_set_FilePath = 0x00002080; // off=0x280
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_EmbeddedIconResource__ctor = 0x00002089; // off=0x289
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_EmbeddedIconResource__ctor = 0x00002091; // off=0x291
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_EmbeddedIconResource_get_Handle = 0x00002099; // off=0x299
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_IconResource_set_Handle = 0x000020A1; // off=0x2A1
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_NativeIconResource__ctor = 0x000020AA; // off=0x2AA
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_NativeIconResource_get_Uri = 0x000020B2; // off=0x2B2
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_NativeIconResource_set_Uri = 0x000020BA; // off=0x2BA
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_XamlIconResource__ctor = 0x000020C3; // off=0x2C3
constexpr uint32_t kIRepeatableOperation_get_CurrentValue = 0x000020CB; // off=0x2CB
constexpr uint32_t kIRepeatableOperationSequence_set_CurrentValue = 0x000020D3; // off=0x2D3
constexpr uint32_t kProgressChangedEventArgs_get_IsIndeterminate = 0x000020DC; // off=0x2DC
constexpr uint32_t kProgressChangedEventArgs_set_IsIndeterminate = 0x000020E4; // off=0x2E4
constexpr uint32_t kProgressChangedEventArgs_get_MaxValue = 0x000020ED; // off=0x2ED
constexpr uint32_t kProgressChangedEventArgs_set_MaxValue = 0x000020F5; // off=0x2F5
constexpr uint32_t kProgressChangedEventArgs_get_Progress = 0x000020FE; // off=0x2FE
constexpr uint32_t kProgressChangedEventArgs_set_Progress = 0x00002106; // off=0x306
constexpr uint32_t kProgressChangedEventArgs_get_Regress = 0x0000210F; // off=0x30F
constexpr uint32_t kProgressChangedEventArgs_set_Regress = 0x00002117; // off=0x317
constexpr uint32_t k_ctor = 0x00002120; // off=0x320

} // namespace safeexambrowser_core_contracts

namespace safeexambrowser_core {
// SafeExamBrowser.Core.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_core

namespace safeexambrowser {
// SafeExamBrowser.exe (x64, .NET, 7 functions)

// Methods (RVA)
constexpr uint32_t k__c__DisplayClass17_0__c__DisplayClass4_0 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass4_0___c__DisplayClass4_0 = 0x00010000; // off=0xE200
constexpr uint32_t k__c_c__DisplayClass4_0 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass5_0___DisplayClass4_0 = 0x00030000; // off=0x2E200
constexpr uint32_t k__c__DisplayClass6_0___DisplayClass4_0 = 0x00030000; // off=0x2E200
constexpr uint32_t k__c__DisplayClass6_0__DisplayClass4_0 = 0x00040000; // off=0x3E200
constexpr uint32_t k__c__DisplayClass19_0_DisplayClass4_0 = 0x00050000; // off=0x4E200

// Critical string references (5 categories)
constexpr uint32_t kStr_BrowserExamKey_0000FBEB = 0x0000FBEB; // "BrowserExamKey"
constexpr uint32_t kStr_IsVirtualMachine_0000CDF7 = 0x0000CDF7; // "IsVirtualMachine"
constexpr uint32_t kStr_Restart_0000D8CC = 0x0000D8CC; // "Restart"
constexpr uint32_t kStr_Shutdown_0000C512 = 0x0000C512; // "Shutdown"
constexpr uint32_t kStr_Shutdown_0000C52B = 0x0000C52B; // "Shutdown"
constexpr uint32_t kStr_Shutdown_0000C549 = 0x0000C549; // "Shutdown"
constexpr uint32_t kStr_VerifyCodeSignature_0000CE5D = 0x0000CE5D; // "VerifyCodeSignature"

} // namespace safeexambrowser

namespace safeexambrowser_i18n_contracts {
// SafeExamBrowser.I18n.Contracts.dll (x64, .NET, 0 functions)


// Critical string references (2 categories)
constexpr uint32_t kStr_Restart_000054E2 = 0x000054E2; // "Restart"
constexpr uint32_t kStr_Shutdown_00003F6C = 0x00003F6C; // "Shutdown"
constexpr uint32_t kStr_Shutdown_0000512D = 0x0000512D; // "Shutdown"

} // namespace safeexambrowser_i18n_contracts

namespace safeexambrowser_i18n {
// SafeExamBrowser.I18n.dll (x64, .NET, 0 functions)


// Critical string references (2 categories)
constexpr uint32_t kStr_Restart_00009701 = 0x00009701; // "Restart"
constexpr uint32_t kStr_Restart_00009725 = 0x00009725; // "Restart"
constexpr uint32_t kStr_Restart_0000A1FC = 0x0000A1FC; // "Restart"
constexpr uint32_t kStr_Shutdown_00004CB5 = 0x00004CB5; // "Shutdown"
constexpr uint32_t kStr_Shutdown_00004F28 = 0x00004F28; // "Shutdown"
constexpr uint32_t kStr_Shutdown_000051C7 = 0x000051C7; // "Shutdown"

} // namespace safeexambrowser_i18n

namespace safeexambrowser_logging_contracts {
// SafeExamBrowser.Logging.Contracts.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_logging_contracts

namespace safeexambrowser_logging {
// SafeExamBrowser.Logging.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_logging

namespace safeexambrowser_monitoring_contracts {
// SafeExamBrowser.Monitoring.Contracts.dll (x64, .NET, 0 functions)


// Critical string references (1 categories)
constexpr uint32_t kStr_IsVirtualMachine_000031F5 = 0x000031F5; // "IsVirtualMachine"

} // namespace safeexambrowser_monitoring_contracts

namespace safeexambrowser_monitoring {
// SafeExamBrowser.Monitoring.dll (x64, .NET, 202 functions)

// Methods (RVA)
constexpr uint32_t kMicrosoft_CodeAnalysis_EmbeddedAttribute_add_EaseOfAccessChanged = 0x000027CC; // off=0x9CC
constexpr uint32_t kRefSafetyRulesAttribute_remove_EaseOfAccessChanged = 0x00002804; // off=0xA04
constexpr uint32_t kSafeExamBrowser_Monitoring_Clipboard_add_StickyKeysChanged = 0x0000283C; // off=0xA3C
constexpr uint32_t kSafeExamBrowser_Monitoring_Clipboard_remove_StickyKeysChanged = 0x00002874; // off=0xA74
constexpr uint32_t kSafeExamBrowser_Monitoring_Clipboard_add_SessionChanged = 0x000028AC; // off=0xAAC
constexpr uint32_t kSafeExamBrowser_Monitoring_Clipboard_remove_SessionChanged = 0x000028E4; // off=0xAE4
constexpr uint32_t kSafeExamBrowser_Monitoring_RemoteSessionDetector__ctor = 0x00002919; // off=0xB19
constexpr uint32_t kSafeExamBrowser_Monitoring_RemoteSessionDetector_DisableStickyKeys = 0x00002954; // off=0xB54
constexpr uint32_t kSafeExamBrowser_Monitoring_VirtualMachineDetector_EnableStickyKeys = 0x00002961; // off=0xB61
constexpr uint32_t kSafeExamBrowser_Monitoring_VirtualMachineDetector_RevertStickyKeys = 0x0000296E; // off=0xB6E
constexpr uint32_t kSafeExamBrowser_Monitoring_VirtualMachineDetector_StartMonitoringCursors = 0x0000297B; // off=0xB7B
constexpr uint32_t kSafeExamBrowser_Monitoring_VirtualMachineDetector_StartMonitoringEaseOfAccess = 0x0000299F; // off=0xB9F
constexpr uint32_t kSafeExamBrowser_Monitoring_VirtualMachineDetector_StartMonitoringStickyKeys = 0x000029C3; // off=0xBC3
constexpr uint32_t kSafeExamBrowser_Monitoring_VirtualMachineDetector_StartMonitoringSystemEvents = 0x000029E7; // off=0xBE7
constexpr uint32_t kSafeExamBrowser_Monitoring_VirtualMachineDetector_StopMonitoring = 0x00002A0B; // off=0xC0B
constexpr uint32_t kSafeExamBrowser_Monitoring_VirtualMachineDetector_VerifyCursors = 0x00002A39; // off=0xC39
constexpr uint32_t kSafeExamBrowser_Monitoring_VirtualMachineDetector_VerifyEaseOfAccess = 0x00002A46; // off=0xC46
constexpr uint32_t kVirtualMachineDetector__StartMonitoringCursors_b__20_0 = 0x00002A53; // off=0xC53
constexpr uint32_t kSystemSentinel__StartMonitoringEaseOfAccess_b__21_0 = 0x00002A66; // off=0xC66
constexpr uint32_t kSystemSentinel__StartMonitoringStickyKeys_b__22_0 = 0x00002A79; // off=0xC79
constexpr uint32_t kSystemSentinel__StartMonitoringSystemEvents_b__23_0 = 0x00002A8C; // off=0xC8C
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_add_CursorChanged = 0x00002AA0; // off=0xCA0
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_remove_CursorChanged = 0x00002AD8; // off=0xCD8
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel__ctor = 0x00002B0D; // off=0xD0D
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_StartMonitoring = 0x00002B24; // off=0xD24
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_StopMonitoring = 0x00002BC4; // off=0xDC4
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_Verify = 0x00002C64; // off=0xE64
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_Registry_ValueChanged = 0x00002D34; // off=0xF34
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_HandleCursorChange = 0x00002D50; // off=0xF50
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_VerifyCursor = 0x00002DDC; // off=0xFDC
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_IsValidCursorPath = 0x00002E62; // off=0x1062
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel__cctor = 0x00002E80; // off=0x1080
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_add_EaseOfAccessChanged = 0x00002EB4; // off=0x10B4
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_remove_EaseOfAccessChanged = 0x00002EEC; // off=0x10EC
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel__ctor = 0x00002F21; // off=0x1121
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_StartMonitoring = 0x00002F37; // off=0x1137
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_StopMonitoring = 0x00002F75; // off=0x1175
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_Verify = 0x00002FB4; // off=0x11B4
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_Registry_ValueChanged = 0x0000303D; // off=0x123D
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_HandleEaseOfAccessChange = 0x00003058; // off=0x1258
constexpr uint32_t kSafeExamBrowser_Monitoring_System_SystemSentinel_add_Changed = 0x000030E4; // off=0x12E4
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors_remove_Changed = 0x0000311C; // off=0x131C
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors__ctor = 0x00003151; // off=0x1351
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors_Disable = 0x00003174; // off=0x1374
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors_Enable = 0x00003200; // off=0x1400
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors_Revert = 0x0000328C; // off=0x148C
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors_StartMonitoring = 0x00003310; // off=0x1510
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors_StopMonitoring = 0x0000336F; // off=0x156F
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors_Timer_Elapsed = 0x000033A4; // off=0x15A4
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors_HandleStickyKeysChange = 0x000033E8; // off=0x15E8
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors_ToString = 0x00003480; // off=0x1680
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_Cursors_add_SessionChanged = 0x000034FC; // off=0x16FC
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_EaseOfAccess_remove_SessionChanged = 0x00003534; // off=0x1734
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_EaseOfAccess__ctor = 0x00003569; // off=0x1769
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_EaseOfAccess_StartMonitoring = 0x00003578; // off=0x1778
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_EaseOfAccess_StopMonitoring = 0x00003620; // off=0x1820
constexpr uint32_t kEaseOfAccess_SystemEvents_EventsThreadShutdown = 0x000036C5; // off=0x18C5
constexpr uint32_t kEaseOfAccess_SystemEvents_InstalledFontsChanged = 0x000036D7; // off=0x18D7
constexpr uint32_t kEaseOfAccess_SystemEvents_PowerModeChanged = 0x000036E9; // off=0x18E9
constexpr uint32_t kEaseOfAccess_SystemEvents_SessionEnded = 0x0000370B; // off=0x190B
constexpr uint32_t kStickyKeys_SystemEvents_SessionEnding = 0x0000372D; // off=0x192D
constexpr uint32_t kStickyKeys_SystemEvents_SessionChanged = 0x00003750; // off=0x1950
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_StickyKeys_SystemEvents_TimeChanged = 0x000037A8; // off=0x19A8
constexpr uint32_t kStickyKeys_SystemEvents_UserPreferenceChanged = 0x000037BA; // off=0x19BA
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_StickyKeys__ctor = 0x000037DC; // off=0x19DC
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_StickyKeys_Start = 0x000037F9; // off=0x19F9
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_StickyKeys_Stop = 0x0000381D; // off=0x1A1D
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_StickyKeys_MouseHookCallback = 0x00003844; // off=0x1A44
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_StickyKeys__ctor = 0x000038E6; // off=0x1AE6
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_StickyKeys_Start = 0x00003903; // off=0x1B03
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_StickyKeys_Stop = 0x00003927; // off=0x1B27
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_KeyboardHookCallback = 0x0000394C; // off=0x1B4C
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_Log = 0x00003C2C; // off=0x1E2C
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_get_Left = 0x00003CE0; // off=0x1EE0
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_set_Left = 0x00003CE8; // off=0x1EE8
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_get_Top = 0x00003CF1; // off=0x1EF1
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_set_Top = 0x00003CF9; // off=0x1EF9
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_get_Right = 0x00003D02; // off=0x1F02
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_set_Right = 0x00003D0A; // off=0x1F0A
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_get_Bottom = 0x00003D13; // off=0x1F13
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_set_Bottom = 0x00003D1B; // off=0x1F1B
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents__ctor = 0x00003D24; // off=0x1F24
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor__ctor = 0x00003D24; // off=0x1F24
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor__ctor = 0x00003D24; // off=0x1F24
constexpr uint32_t k__c__DisplayClass13_0__ctor = 0x00003D24; // off=0x1F24
constexpr uint32_t k__c__ctor = 0x00003D24; // off=0x1F24
constexpr uint32_t k__c__DisplayClass12_0__ctor = 0x00003D24; // off=0x1F24
constexpr uint32_t k__c__DisplayClass14_0__ctor = 0x00003D24; // off=0x1F24
constexpr uint32_t k__c__DisplayClass8_0__ctor = 0x00003D24; // off=0x1F24
constexpr uint32_t k__c__DisplayClass17_0__ctor = 0x00003D24; // off=0x1F24
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_get_Identifier = 0x00003D2C; // off=0x1F2C
constexpr uint32_t kSafeExamBrowser_Monitoring_System_Components_SystemEvents_set_Identifier = 0x00003D34; // off=0x1F34
constexpr uint32_t kSafeExamBrowser_Monitoring_Mouse_MouseInterceptor_get_IsActive = 0x00003D3D; // off=0x1F3D
constexpr uint32_t kSafeExamBrowser_Monitoring_Mouse_MouseInterceptor_set_IsActive = 0x00003D45; // off=0x1F45
constexpr uint32_t kSafeExamBrowser_Monitoring_Mouse_MouseInterceptor_get_IsInternal = 0x00003D4E; // off=0x1F4E
constexpr uint32_t kSafeExamBrowser_Monitoring_Mouse_MouseInterceptor_get_Technology = 0x00003D6B; // off=0x1F6B
constexpr uint32_t kSafeExamBrowser_Monitoring_Keyboard_KeyboardInterceptor_set_Technology = 0x00003D73; // off=0x1F73
constexpr uint32_t kSafeExamBrowser_Monitoring_Keyboard_KeyboardInterceptor__ctor = 0x00003D7C; // off=0x1F7C
constexpr uint32_t kSafeExamBrowser_Monitoring_Keyboard_KeyboardInterceptor_add_DisplayChanged = 0x00003D90; // off=0x1F90
constexpr uint32_t kSafeExamBrowser_Monitoring_Keyboard_KeyboardInterceptor_remove_DisplayChanged = 0x00003DC8; // off=0x1FC8
constexpr uint32_t kSafeExamBrowser_Monitoring_Keyboard_KeyboardInterceptor__ctor = 0x00003DFD; // off=0x1FFD
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Bounds_InitializePrimaryDisplay = 0x00003E1A; // off=0x201A
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Bounds_ResetPrimaryDisplay = 0x00003E29; // off=0x2029
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Bounds_StartMonitoringDisplayChanges = 0x00003E37; // off=0x2037
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Bounds_StopMonitoringDisplayChanges = 0x00003E5A; // off=0x205A
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Bounds_ValidateConfiguration = 0x00003E80; // off=0x2080
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Bounds_SystemEvents_DisplaySettingsChanged = 0x0000400E; // off=0x220E
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Bounds_InitializeWorkingArea = 0x00004034; // off=0x2234
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Bounds_InitializeWallpaper = 0x00004100; // off=0x2300
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Bounds_TryLoadDisplays = 0x00004174; // off=0x2374
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Display_ResetWorkingArea = 0x000044AC; // off=0x26AC
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Display_ResetWallpaper = 0x0000450C; // off=0x270C
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Display_GetIdentifierForPrimaryDisplay = 0x00004568; // off=0x2768
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Display_LogWorkingArea = 0x000045E0; // off=0x27E0
constexpr uint32_t kDisplay__SystemEvents_DisplaySettingsChanged_b__14_0 = 0x00004644; // off=0x2844
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Display_get_Handle = 0x00004656; // off=0x2856
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Display_set_Handle = 0x0000465E; // off=0x285E
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_Display_get_Title = 0x00004667; // off=0x2867
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_set_Title = 0x0000466F; // off=0x286F
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_ToString = 0x00004678; // off=0x2878
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_add_ExplorerStarted = 0x00004698; // off=0x2898
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_remove_ExplorerStarted = 0x000046D0; // off=0x28D0
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_add_InstanceStarted = 0x00004708; // off=0x2908
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_remove_InstanceStarted = 0x00004740; // off=0x2940
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_add_TerminationFailed = 0x00004778; // off=0x2978
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_remove_TerminationFailed = 0x000047B0; // off=0x29B0
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor__ctor = 0x000047E8; // off=0x29E8
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_Initialize = 0x00004840; // off=0x2A40
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_Start = 0x0000486C; // off=0x2A6C
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_Stop = 0x0000493C; // off=0x2B3C
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_TryGetActiveApplication = 0x00004A04; // off=0x2C04
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_TryTerminate = 0x00004A70; // off=0x2C70
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_SystemEvent_WindowChanged = 0x00004AC4; // off=0x2CC4
constexpr uint32_t kSafeExamBrowser_Monitoring_Display_DisplayMonitor_Timer_Elapsed = 0x00004B6C; // off=0x2D6C
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_Window_AddFailed = 0x00004D64; // off=0x2F64
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_Window_AddFailed = 0x00004DE4; // off=0x2FE4
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_Window_AddForTermination = 0x00004E5C; // off=0x305C
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_Window_BelongsToApplication = 0x00004ED4; // off=0x30D4
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_Window_BelongsToApplication = 0x00004F10; // off=0x3110
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_Window_BelongsToSafeExamBrowser = 0x00004F88; // off=0x3188
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_Close = 0x00005006; // off=0x3206
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_HandleExplorerStart = 0x0000502F; // off=0x322F
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_HandleInstanceStart = 0x0000505C; // off=0x325C
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_InitializeProcesses = 0x000050B1; // off=0x32B1
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_InitializeBlacklist = 0x000050EC; // off=0x32EC
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_InitializeWhitelist = 0x0000526C; // off=0x346C
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_IsAllowed = 0x00005400; // off=0x3600
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_IsAllowed = 0x00005474; // off=0x3674
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_IsWhitelisted = 0x000054D4; // off=0x36D4
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_TryGetProcessFor = 0x00005544; // off=0x3744
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_TryHide = 0x00005598; // off=0x3798
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor_TryTerminate = 0x000055E8; // off=0x37E8
constexpr uint32_t kApplicationMonitor__HandleExplorerStart_b__34_0 = 0x0000566B; // off=0x386B
constexpr uint32_t kApplicationMonitor__HasVirtualDevice_b__0 = 0x0000567D; // off=0x387D
constexpr uint32_t kApplicationMonitor__HasVirtualDevice_b__1 = 0x00005695; // off=0x3895
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor__cctor = 0x000056B0; // off=0x38B0
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor__Verify_b__10_0 = 0x000056BC; // off=0x38BC
constexpr uint32_t kApplicationMonitor__HandleCursorChange_b__0 = 0x000056C7; // off=0x38C7
constexpr uint32_t kApplicationMonitor__HandleCursorChange_b__1 = 0x000056E4; // off=0x38E4
constexpr uint32_t kApplicationMonitor__HandleEaseOfAccessChange_b__0 = 0x0000570F; // off=0x390F
constexpr uint32_t kApplicationMonitor__HandleEaseOfAccessChange_b__1 = 0x0000572C; // off=0x392C
constexpr uint32_t kApplicationMonitor__HandleStickyKeysChange_b__0 = 0x00005757; // off=0x3957
constexpr uint32_t kApplicationMonitor__HandleStickyKeysChange_b__1 = 0x00005774; // off=0x3974
constexpr uint32_t kApplicationMonitor__SystemEvents_SessionChanged_b__0 = 0x0000578E; // off=0x398E
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor__Log_b__0 = 0x000057B0; // off=0x39B0
constexpr uint32_t kSafeExamBrowser_Monitoring_Applications_ApplicationMonitor__cctor = 0x000057CD; // off=0x39CD
constexpr uint32_t k__c__DisplayClass13_0__ValidateConfiguration_b__13_0 = 0x000057D9; // off=0x39D9
constexpr uint32_t k__c__DisplayClass13_0__ValidateConfiguration_b__13_1 = 0x000057E1; // off=0x39E1
constexpr uint32_t k__c__ValidateConfiguration_b__13_3 = 0x000057E1; // off=0x39E1
constexpr uint32_t k__c__ValidateConfiguration_b__13_2 = 0x000057EC; // off=0x39EC
constexpr uint32_t k__c__DisplayClass12_0__TryLoadDisplays_b__0 = 0x000057F4; // off=0x39F4
constexpr uint32_t k__c__DisplayClass12_0__cctor = 0x0000580E; // off=0x3A0E
constexpr uint32_t k__c__DisplayClass10_0__Timer_Elapsed_b__26_2 = 0x0000581A; // off=0x3A1A
constexpr uint32_t k__c__DisplayClass10_0__InitializeBlacklist_b__37_0 = 0x00005822; // off=0x3A22
constexpr uint32_t k__c__DisplayClass10_0__InitializeWhitelist_b__38_0 = 0x0000582A; // off=0x3A2A
constexpr uint32_t k__c__DisplayClass14_0__SystemEvent_WindowChanged_b__0 = 0x00005832; // off=0x3A32
constexpr uint32_t k__c__DisplayClass12_0__Timer_Elapsed_b__0 = 0x0000586C; // off=0x3A6C
constexpr uint32_t k__c__DisplayClass12_0__Timer_Elapsed_b__1 = 0x000058A4; // off=0x3AA4
constexpr uint32_t k__c__DisplayClass8_0__Timer_Elapsed_b__3 = 0x000058D5; // off=0x3AD5
constexpr uint32_t k__c__Timer_Elapsed_b__4 = 0x000058ED; // off=0x3AED
constexpr uint32_t k__c__AddFailed_b__0 = 0x00005905; // off=0x3B05
constexpr uint32_t k__c__AddFailed_b__1 = 0x00005919; // off=0x3B19
constexpr uint32_t k__c__DisplayClass17_0__AddFailed_b__0 = 0x0000592C; // off=0x3B2C
constexpr uint32_t k__c__AddForTermination_b__0 = 0x0000593F; // off=0x3B3F
constexpr uint32_t k__c__HandleInstanceStart_b__0 = 0x00005952; // off=0x3B52
constexpr uint32_t k__c_et_AllowF10 = 0x00010000; // off=0xC400
constexpr uint32_t k__c__DisplayClass25_0_et_AllowF10 = 0x00010000; // off=0xC400
constexpr uint32_t k__c__DisplayClass26_0_get_AllowF10 = 0x00010000; // off=0xC400
constexpr uint32_t k__c__DisplayClass26_2_get_AllowF10 = 0x00010000; // off=0xC400
constexpr uint32_t k__c__DisplayClass27_0_get_AllowF10 = 0x00010000; // off=0xC400
constexpr uint32_t k__c__DisplayClass35_0_get_AllowF10 = 0x00010000; // off=0xC400

// Critical string references (6 categories)
constexpr uint32_t kStr_HideWindow_0000A771 = 0x0000A771; // "HideWindow"
constexpr uint32_t kStr_IsVirtualMachine_000090DE = 0x000090DE; // "IsVirtualMachine"
constexpr uint32_t kStr_Restart_0000A662 = 0x0000A662; // "Restart"
constexpr uint32_t kStr_SetWorkingArea_00008818 = 0x00008818; // "SetWorkingArea"
constexpr uint32_t kStr_SetWorkingArea_00008829 = 0x00008829; // "SetWorkingArea"
constexpr uint32_t kStr_Shutdown_0000998A = 0x0000998A; // "Shutdown"
constexpr uint32_t kStr_Shutdown_000099A6 = 0x000099A6; // "Shutdown"
constexpr uint32_t kStr_Shutdown_000099C8 = 0x000099C8; // "Shutdown"
constexpr uint32_t kStr_VirtualBox_000087A3 = 0x000087A3; // "VirtualBox"

} // namespace safeexambrowser_monitoring

namespace safeexambrowser_proctoring_contracts {
// SafeExamBrowser.Proctoring.Contracts.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_proctoring_contracts

namespace safeexambrowser_proctoring {
// SafeExamBrowser.Proctoring.dll (x64, .NET, 3 functions)

// Methods (RVA)
constexpr uint32_t k__c___9__13_0 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass18_0__9__13_0 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__9__13_0 = 0x00010002; // off=0xE202

} // namespace safeexambrowser_proctoring

namespace safeexambrowser_server_contracts {
// SafeExamBrowser.Server.Contracts.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_server_contracts

namespace safeexambrowser_server {
// SafeExamBrowser.Server.dll (x64, .NET, 0 functions)


// Critical string references (3 categories)
constexpr uint32_t kStr_AppSignatureKey_000093EE = 0x000093EE; // "AppSignatureKey"
constexpr uint32_t kStr_AppSignatureKey_00009758 = 0x00009758; // "AppSignatureKey"
constexpr uint32_t kStr_BrowserExamKey_0000978B = 0x0000978B; // "BrowserExamKey"
constexpr uint32_t kStr_CalculateAppSignatureKey_0000974F = 0x0000974F; // "CalculateAppSignatureKey"

} // namespace safeexambrowser_server

namespace safeexambrowser_settings {
// SafeExamBrowser.Settings.dll (x64, .NET, 0 functions)


// Critical string references (4 categories)
constexpr uint32_t kStr_BrowserExamKey_00009D17 = 0x00009D17; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_0000A00E = 0x0000A00E; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_0000A034 = 0x0000A034; // "BrowserExamKey"
constexpr uint32_t kStr_ConfigurationKey_0000A074 = 0x0000A074; // "ConfigurationKey"
constexpr uint32_t kStr_ConfigurationKey_0000A09A = 0x0000A09A; // "ConfigurationKey"
constexpr uint32_t kStr_ConfigurationKey_0000C5A7 = 0x0000C5A7; // "ConfigurationKey"
constexpr uint32_t kStr_Shutdown_000096A1 = 0x000096A1; // "Shutdown"
constexpr uint32_t kStr_Shutdown_000096CA = 0x000096CA; // "Shutdown"
constexpr uint32_t kStr_Shutdown_0000B5CD = 0x0000B5CD; // "Shutdown"
constexpr uint32_t kStr_VMware_000094D1 = 0x000094D1; // "VMware"
constexpr uint32_t kStr_VMware_00009F54 = 0x00009F54; // "VMware"
constexpr uint32_t kStr_VMware_0000B33D = 0x0000B33D; // "VMware"

} // namespace safeexambrowser_settings

namespace safeexambrowser_systemcomponents_contracts {
// SafeExamBrowser.SystemComponents.Contracts.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_systemcomponents_contracts

namespace safeexambrowser_systemcomponents {
// SafeExamBrowser.SystemComponents.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_systemcomponents

namespace safeexambrowser_userinterface_contracts {
// SafeExamBrowser.UserInterface.Contracts.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_userinterface_contracts

namespace safeexambrowser_userinterface_desktop {
// SafeExamBrowser.UserInterface.Desktop.dll (x64, .NET, 34 functions)

// Methods (RVA)
constexpr uint32_t k__c__DisplayClass7_0_n_1 = 0x00004CAB; // off=0x2EAB
constexpr uint32_t k__c__DisplayClass4_0_n_1 = 0x000059A3; // off=0x3BA3
constexpr uint32_t k__c__DisplayClass4_0_RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass7_0_RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass4_0__RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass6_0_RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass6_0__RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass7_0__RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass8_0_RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass5_0_RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass10_0__RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass5_0__RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass12_0__RegisterEvents_b__88_10 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass6_0__RegisterEvents_b__88_10 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass7_0__RegisterEvents_b__88_10 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass4_0__RegisterEvents_b__88_10 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass4_0__RegisterEvents_b__88_10 = 0x00030000; // off=0x2E200
constexpr uint32_t k__c__DisplayClass7_0__RegisterEvents_b__88_10 = 0x00030000; // off=0x2E200
constexpr uint32_t k__c__DisplayClass8_0__RegisterEvents_b__88_10 = 0x00040000; // off=0x3E200
constexpr uint32_t k__FocusToolbar_b__0_d__RegisterEvents_b__88_10 = 0x00050000; // off=0x4E200
constexpr uint32_t k__c__DisplayClass6_0__RegisterEvents_b__88_10 = 0x00081010; // off=0x7F210

// Critical string references (1 categories)
constexpr uint32_t kStr_Shutdown_0001F651 = 0x0001F651; // "Shutdown"

} // namespace safeexambrowser_userinterface_desktop

namespace safeexambrowser_userinterface_mobile {
// SafeExamBrowser.UserInterface.Mobile.dll (x64, .NET, 33 functions)

// Methods (RVA)
constexpr uint32_t k__c__DisplayClass6_0_1 = 0x00002911; // off=0xB11
constexpr uint32_t k__c__DisplayClass8_0_RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass4_0_RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass4_0__RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass6_0_RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass7_0__RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass8_0__RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass7_0_RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass5_0__RegisterEvents_b__88_10 = 0x00010000; // off=0xE200
constexpr uint32_t k__c__DisplayClass4_0_egisterEvents_b__88_10 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass5_0_egisterEvents_b__88_10 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass7_0__RegisterEvents_b__88_10 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass7_0_egisterEvents_b__88_10 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass4_0__RegisterEvents_b__88_10 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass10_0__RegisterEvents_b__88_10 = 0x00020000; // off=0x1E200
constexpr uint32_t k__c__DisplayClass4_0__RegisterEvents_b__88_10 = 0x00040000; // off=0x3E200
constexpr uint32_t k__c__DisplayClass6_0_isterEvents_b__88_10 = 0x00041010; // off=0x3F210
constexpr uint32_t k__c__DisplayClass6_0_terEvents_b__88_10 = 0x00061010; // off=0x5F210

// Critical string references (1 categories)
constexpr uint32_t kStr_Shutdown_00020493 = 0x00020493; // "Shutdown"

} // namespace safeexambrowser_userinterface_mobile

namespace safeexambrowser_userinterface_shared {
// SafeExamBrowser.UserInterface.Shared.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_userinterface_shared

namespace safeexambrowser_windowsapi_contracts {
// SafeExamBrowser.WindowsApi.Contracts.dll (x64, .NET, 0 functions)


// Critical string references (5 categories)
constexpr uint32_t kStr_GetShellWindowHandle_00002FE8 = 0x00002FE8; // "GetShellWindowHandle"
constexpr uint32_t kStr_HideWindow_00003816 = 0x00003816; // "HideWindow"
constexpr uint32_t kStr_MinimizeAllOpenWindows_00003710 = 0x00003710; // "MinimizeAllOpenWindows"
constexpr uint32_t kStr_Restart_000037F0 = 0x000037F0; // "Restart"
constexpr uint32_t kStr_SetWorkingArea_00002E68 = 0x00002E68; // "SetWorkingArea"

} // namespace safeexambrowser_windowsapi_contracts

namespace safeexambrowser_windowsapi {
// SafeExamBrowser.WindowsApi.dll (x64, .NET, 139 functions)

// Methods (RVA)
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32__ctor = 0x000024C5; // off=0x6C5
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_Desktop__ctor = 0x000024C5; // off=0x6C5
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_DesktopFactory__ctor = 0x000024C5; // off=0x6C5
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_DesktopMonitor__ctor = 0x000024C5; // off=0x6C5
constexpr uint32_t kMicrosoft_CodeAnalysis_EmbeddedAttribute_HideWindow = 0x000029F5; // off=0xBF5
constexpr uint32_t kSystem_Runtime_CompilerServices_RefSafetyRulesAttribute_MinimizeAllOpenWindows = 0x000029FE; // off=0xBFE
constexpr uint32_t kSafeExamBrowser_WindowsApi_ExplorerShell_PostCloseMessageToShell = 0x00002A20; // off=0xC20
constexpr uint32_t kSafeExamBrowser_WindowsApi_ExplorerShell_RegisterKeyboardHook = 0x00002A4C; // off=0xC4C
constexpr uint32_t kSafeExamBrowser_WindowsApi_ExplorerShell_RegisterMouseHook = 0x00002ABC; // off=0xCBC
constexpr uint32_t kSafeExamBrowser_WindowsApi_ExplorerShell_RegisterSystemCaptureStartEvent = 0x00002B29; // off=0xD29
constexpr uint32_t kSafeExamBrowser_WindowsApi_ExplorerShell_RegisterSystemForegroundEvent = 0x00002B33; // off=0xD33
constexpr uint32_t kSafeExamBrowser_WindowsApi_ExplorerShell_RegisterSystemEvent = 0x00002B40; // off=0xD40
constexpr uint32_t kSafeExamBrowser_WindowsApi_Kernel32_RemoveWallpaper = 0x00002BB4; // off=0xDB4
constexpr uint32_t kSafeExamBrowser_WindowsApi_Kernel32_RestoreWindow = 0x00002BC1; // off=0xDC1
constexpr uint32_t kSafeExamBrowser_WindowsApi_Kernel32_ResumeThread = 0x00002BCC; // off=0xDCC
constexpr uint32_t kSafeExamBrowser_WindowsApi_Kernel32_SendCloseMessageTo = 0x00002C1C; // off=0xE1C
constexpr uint32_t kSafeExamBrowser_WindowsApi_Kernel32_SetAlwaysOnState = 0x00002C39; // off=0xE39
constexpr uint32_t kSafeExamBrowser_WindowsApi_Kernel32_SetWallpaper = 0x00002C5B; // off=0xE5B
constexpr uint32_t kSafeExamBrowser_WindowsApi_Kernel32_SetWorkingArea = 0x00002C74; // off=0xE74
constexpr uint32_t kSafeExamBrowser_WindowsApi_Kernel32_SuspendThread = 0x00002CD8; // off=0xED8
constexpr uint32_t kSafeExamBrowser_WindowsApi_Kernel32_TryGetStickyKeys = 0x00002D28; // off=0xF28
constexpr uint32_t kSafeExamBrowser_WindowsApi_NativeMethods_TrySetStickyKeys = 0x00002DD0; // off=0xFD0
constexpr uint32_t kSafeExamBrowser_WindowsApi_NativeMethods__ctor = 0x00002E3F; // off=0x103F
constexpr uint32_t kSafeExamBrowser_WindowsApi_NativeMethods_get_Left = 0x00002E68; // off=0x1068
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_set_Left = 0x00002E70; // off=0x1070
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_Top = 0x00002E79; // off=0x1079
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_set_Top = 0x00002E81; // off=0x1081
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_Right = 0x00002E8A; // off=0x108A
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_set_Right = 0x00002E92; // off=0x1092
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_Bottom = 0x00002E9B; // off=0x109B
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_set_Bottom = 0x00002EA3; // off=0x10A3
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_ToBounds = 0x00002EAC; // off=0x10AC
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_Flags = 0x00002EE3; // off=0x10E3
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_set_Flags = 0x00002EEB; // off=0x10EB
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_IsAvailable = 0x00002EF4; // off=0x10F4
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_set_IsAvailable = 0x00002EFC; // off=0x10FC
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_IsEnabled = 0x00002F05; // off=0x1105
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_set_IsEnabled = 0x00002F0D; // off=0x110D
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_IsHotkeyActive = 0x00002F16; // off=0x1116
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_set_IsHotkeyActive = 0x00002F1E; // off=0x111E
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_Handle = 0x00002F27; // off=0x1127
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_set_Handle = 0x00002F2F; // off=0x112F
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_Title = 0x00002F38; // off=0x1138
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_set_Title = 0x00002F40; // off=0x1140
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_HasTerminated = 0x00002F49; // off=0x1149
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_Id = 0x00002F51; // off=0x1151
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_Name = 0x00002F5E; // off=0x115E
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_OriginalName = 0x00002F66; // off=0x1166
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_Path = 0x00002F6E; // off=0x116E
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_get_Signature = 0x00002F76; // off=0x1176
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_add_TerminatedEvent = 0x00002F80; // off=0x1180
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_remove_TerminatedEvent = 0x00002FB8; // off=0x11B8
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_add_Terminated = 0x00002FED; // off=0x11ED
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32_remove_Terminated = 0x00002FFC; // off=0x11FC
constexpr uint32_t kSafeExamBrowser_WindowsApi_User32__ctor = 0x00003008; // off=0x1208
constexpr uint32_t kSafeExamBrowser_WindowsApi_WinInet_GetAdditionalInfo = 0x00003054; // off=0x1254
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Bounds_TryClose = 0x00003114; // off=0x1314
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Bounds_TryKill = 0x000031A4; // off=0x13A4
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Bounds_ToString = 0x00003208; // off=0x1408
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Bounds_IsTerminated = 0x00003228; // off=0x1428
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Bounds_InitializeEvent = 0x00003278; // off=0x1478
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Bounds_WaitForTermination = 0x000032C8; // off=0x14C8
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Bounds_Process_Exited = 0x0000331B; // off=0x151B
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Bounds_get_StartupDesktop = 0x00003349; // off=0x1549
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Bounds_set_StartupDesktop = 0x00003351; // off=0x1551
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_RECT__ctor = 0x0000335A; // off=0x155A
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_StickyKeysState_GetAllRunning = 0x0000336C; // off=0x156C
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_StickyKeysState_StartNew = 0x00003424; // off=0x1624
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_StickyKeysState_TryGetById = 0x000034C0; // off=0x16C0
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_StickyKeysState_LoadAllProcessNames = 0x00003548; // off=0x1748
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_StickyKeysState_LoadProcessNamesFor = 0x000036A0; // off=0x18A0
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_StickyKeysState_LoggerFor = 0x000037BC; // off=0x19BC
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_StickyKeysState_StartNormal = 0x000037E4; // off=0x19E4
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_StickyKeysState_StartOnDesktop = 0x00003840; // off=0x1A40
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_StickyKeysState_TryLoadOriginalName = 0x000038FC; // off=0x1AFC
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Window_TryLoadSignature = 0x00003934; // off=0x1B34
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Window_get_Id = 0x00003988; // off=0x1B88
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Window_set_Id = 0x00003990; // off=0x1B90
constexpr uint32_t kSafeExamBrowser_WindowsApi_Types_Window__ctor = 0x00003999; // off=0x1B99
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_Attach = 0x000039B4; // off=0x1BB4
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_Detach = 0x000039FD; // off=0x1BFD
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_LowLevelMouseProc = 0x00003A0C; // off=0x1C0C
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_Ignore = 0x00003A8B; // off=0x1C8B
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_GetButton = 0x00003AA0; // off=0x1CA0
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_GetInfo = 0x00003AF4; // off=0x1CF4
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_GetState = 0x00003B4C; // off=0x1D4C
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_get_Id = 0x00003B9C; // off=0x1D9C
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_set_Id = 0x00003BA4; // off=0x1DA4
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process__ctor = 0x00003BAD; // off=0x1DAD
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_Attach = 0x00003BE6; // off=0x1DE6
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_AwaitDetach = 0x00003C1F; // off=0x1E1F
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_Detach = 0x00003C4A; // off=0x1E4A
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_LowLevelSystemProc = 0x00003C6A; // off=0x1E6A
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_get_Id = 0x00003C78; // off=0x1E78
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_set_Id = 0x00003C80; // off=0x1E80
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process__ctor = 0x00003C89; // off=0x1E89
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_Attach = 0x00003CA4; // off=0x1EA4
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_Process_Detach = 0x00003CED; // off=0x1EED
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_LowLevelKeyboardProc = 0x00003CFC; // off=0x1EFC
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_GetState = 0x00003D6A; // off=0x1F6A
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_GetModifiers = 0x00003D98; // off=0x1F98
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_TrackCtrlAndAlt = 0x00003E18; // off=0x2018
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_IsPressed = 0x00003E8B; // off=0x208B
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_get_Handle = 0x00003E9F; // off=0x209F
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_set_Handle = 0x00003EA7; // off=0x20A7
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_get_Name = 0x00003EB0; // off=0x20B0
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_set_Name = 0x00003EB8; // off=0x20B8
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory__ctor = 0x00003EC1; // off=0x20C1
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_Activate = 0x00003ED7; // off=0x20D7
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_Close = 0x00003EF1; // off=0x20F1
constexpr uint32_t kSafeExamBrowser_WindowsApi_Processes_ProcessFactory_ToString = 0x00003F0B; // off=0x210B
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_MouseHook__ctor = 0x00003F28; // off=0x2128
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_MouseHook_CreateNew = 0x00003F44; // off=0x2144
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_MouseHook_CreateRandom = 0x00003FD8; // off=0x21D8
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_MouseHook_GetCurrent = 0x0000408C; // off=0x228C
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_MouseHook_GenerateRandomDesktopName = 0x0000417C; // off=0x237C
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_MouseHook__ctor = 0x000041E6; // off=0x23E6
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_MouseHook_Start = 0x0000420C; // off=0x240C
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_MouseHook_Stop = 0x00004264; // off=0x2464
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_MouseHook_Timer_Elapsed = 0x000042A4; // off=0x24A4
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_MouseHook__ctor = 0x0000437F; // off=0x257F
constexpr uint32_t kSafeExamBrowser_WindowsApi_Hooks_SystemHook_ToString = 0x00004398; // off=0x2598
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_Desktop__Terminate_b__0 = 0x000043B5; // off=0x25B5
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_Desktop__GetOpenWindows_g__EnumWindows_0 = 0x000043C7; // off=0x25C7
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_Desktop__RegisterKeyboardHook_b__0 = 0x000043FC; // off=0x25FC
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_Desktop__RegisterMouseHook_b__0 = 0x0000445C; // off=0x265C
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_DesktopFactory__RegisterSystemEvent_b__0 = 0x000044BC; // off=0x26BC
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_DesktopFactory__DeregisterKeyboardHook_b__0 = 0x00004516; // off=0x2716
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_DesktopMonitor__DeregisterMouseHook_b__0 = 0x00004529; // off=0x2729
constexpr uint32_t kDesktopMonitor__DeregisterSystemEventHook_b__0 = 0x0000453C; // off=0x273C
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_ObfuscatedDesktop__GetAllRunning_b__0 = 0x0000454F; // off=0x274F
constexpr uint32_t kSafeExamBrowser_WindowsApi_Desktops_ObfuscatedDesktop__GetAllRunning_b__1 = 0x0000454F; // off=0x274F

// Critical string references (12 categories)
constexpr uint32_t kStr_CloseDesktop_00008DD8 = 0x00008DD8; // "CloseDesktop"
constexpr uint32_t kStr_CreateDesktop_00008DE5 = 0x00008DE5; // "CreateDesktop"
constexpr uint32_t kStr_CreateProcess_00009322 = 0x00009322; // "CreateProcess"
constexpr uint32_t kStr_GetModuleHandle_00008147 = 0x00008147; // "GetModuleHandle"
constexpr uint32_t kStr_GetShellWindowHandle_000081A6 = 0x000081A6; // "GetShellWindowHandle"
constexpr uint32_t kStr_HideWindow_000097E3 = 0x000097E3; // "HideWindow"
constexpr uint32_t kStr_MinimizeAllOpenWindows_00009467 = 0x00009467; // "MinimizeAllOpenWindows"
constexpr uint32_t kStr_Restart_00007AA4 = 0x00007AA4; // "Restart"
constexpr uint32_t kStr_Restart_0000971D = 0x0000971D; // "Restart"
constexpr uint32_t kStr_SetWinEventHook_00008A05 = 0x00008A05; // "SetWinEventHook"
constexpr uint32_t kStr_SetWindowsHookEx_0000985E = 0x0000985E; // "SetWindowsHookEx"
constexpr uint32_t kStr_SetWorkingArea_00007B3B = 0x00007B3B; // "SetWorkingArea"
constexpr uint32_t kStr_SwitchDesktop_0000793B = 0x0000793B; // "SwitchDesktop"
constexpr uint32_t kStr_SwitchDesktop_00008DF3 = 0x00008DF3; // "SwitchDesktop"

} // namespace safeexambrowser_windowsapi

namespace seb_x64 {
// seb_x64.dll (x64, Native, 4 functions)


// Exports
constexpr uint32_t kCalculateAppSignatureKey = 0x000910F0;
constexpr uint32_t kCalculateBrowserExamKey = 0x000912E0;
constexpr uint32_t kIsVirtualMachine = 0x000914D0;
constexpr uint32_t kVerifyCodeSignature = 0x00091800;

// Native function prologues
constexpr uint32_t kPrologue_enter_vm_00002345 = 0x00002345; // file_off=0x1745
constexpr uint32_t kPrologue_sub_rsp_0x48_0001060E = 0x0001060E; // file_off=0xFA0E
constexpr uint32_t kPrologue_enter_vm_00020114 = 0x00020114; // file_off=0x1F514
constexpr uint32_t kPrologue_enter_vm_00020394 = 0x00020394; // file_off=0x1F794
constexpr uint32_t kPrologue_enter_vm_000206A7 = 0x000206A7; // file_off=0x1FAA7
constexpr uint32_t kPrologue_enter_vm_000208E7 = 0x000208E7; // file_off=0x1FCE7
constexpr uint32_t kPrologue_enter_vm_00020B37 = 0x00020B37; // file_off=0x1FF37
constexpr uint32_t kPrologue_enter_vm_00020CD7 = 0x00020CD7; // file_off=0x200D7
constexpr uint32_t kPrologue_enter_vm_00020E77 = 0x00020E77; // file_off=0x20277
constexpr uint32_t kPrologue_enter_vm_00032949 = 0x00032949; // file_off=0x31D49
constexpr uint32_t kPrologue_sub_rsp_0x58_0003DC5A = 0x0003DC5A; // file_off=0x3D05A
constexpr uint32_t kPrologue_enter_vm_00041FC3 = 0x00041FC3; // file_off=0x413C3
constexpr uint32_t kPrologue_enter_vm_00041FDE = 0x00041FDE; // file_off=0x413DE
constexpr uint32_t kPrologue_enter_vm_00046CA9 = 0x00046CA9; // file_off=0x460A9
constexpr uint32_t kPrologue_enter_vm_000482C7 = 0x000482C7; // file_off=0x476C7
constexpr uint32_t kPrologue_enter_vm_0004966B = 0x0004966B; // file_off=0x48A6B
constexpr uint32_t kPrologue_call_rax_00062728 = 0x00062728; // file_off=0x61B28
constexpr uint32_t kPrologue_call_rax_000670F3 = 0x000670F3; // file_off=0x664F3
constexpr uint32_t kPrologue_call_rax_0006AE82 = 0x0006AE82; // file_off=0x6A282
constexpr uint32_t kPrologue_call_rax_0006B801 = 0x0006B801; // file_off=0x6AC01
constexpr uint32_t kPrologue_call_rax_0006C35E = 0x0006C35E; // file_off=0x6B75E
constexpr uint32_t kPrologue_sub_rsp_0x28_0007B3F0 = 0x0007B3F0; // file_off=0x7A7F0
constexpr uint32_t kPrologue_sub_rsp_0x28_0007B410 = 0x0007B410; // file_off=0x7A810
constexpr uint32_t kPrologue_sub_rsp_0x28_0007B440 = 0x0007B440; // file_off=0x7A840
constexpr uint32_t kPrologue_sub_rsp_0x28_0007B470 = 0x0007B470; // file_off=0x7A870
constexpr uint32_t kPrologue_sub_rsp_0x28_0007B500 = 0x0007B500; // file_off=0x7A900
constexpr uint32_t kPrologue_sub_rsp_0x28_0007B520 = 0x0007B520; // file_off=0x7A920
constexpr uint32_t kPrologue_sub_rsp_0x28_0007C5A0 = 0x0007C5A0; // file_off=0x7B9A0
constexpr uint32_t kPrologue_enter_vm_0007C624 = 0x0007C624; // file_off=0x7BA24
constexpr uint32_t kPrologue_enter_vm_0007C64A = 0x0007C64A; // file_off=0x7BA4A
constexpr uint32_t kPrologue_enter_vm_0007C690 = 0x0007C690; // file_off=0x7BA90
constexpr uint32_t kPrologue_enter_vm_0007C6B0 = 0x0007C6B0; // file_off=0x7BAB0
constexpr uint32_t kPrologue_enter_vm_0007C6C3 = 0x0007C6C3; // file_off=0x7BAC3
constexpr uint32_t kPrologue_sub_rsp_0x48_0007C6E0 = 0x0007C6E0; // file_off=0x7BAE0
constexpr uint32_t kPrologue_enter_vm_0007C72A = 0x0007C72A; // file_off=0x7BB2A
constexpr uint32_t kPrologue_enter_vm_0007C76A = 0x0007C76A; // file_off=0x7BB6A
constexpr uint32_t kPrologue_sub_rsp_0x38_0007C780 = 0x0007C780; // file_off=0x7BB80
constexpr uint32_t kPrologue_sub_rsp_0x28_0007C7E0 = 0x0007C7E0; // file_off=0x7BBE0
constexpr uint32_t kPrologue_sub_rsp_0x38_0007CF40 = 0x0007CF40; // file_off=0x7C340
constexpr uint32_t kPrologue_sub_rsp_0x38_0007D020 = 0x0007D020; // file_off=0x7C420
constexpr uint32_t kPrologue_sub_rsp_0x48_0007D078 = 0x0007D078; // file_off=0x7C478
constexpr uint32_t kPrologue_sub_rsp_0x38_0007D1C0 = 0x0007D1C0; // file_off=0x7C5C0
constexpr uint32_t kPrologue_enter_vm_0007D41A = 0x0007D41A; // file_off=0x7C81A
constexpr uint32_t kPrologue_enter_vm_0007D4A0 = 0x0007D4A0; // file_off=0x7C8A0
constexpr uint32_t kPrologue_enter_vm_0007D4CA = 0x0007D4CA; // file_off=0x7C8CA
constexpr uint32_t kPrologue_enter_vm_0007D580 = 0x0007D580; // file_off=0x7C980
constexpr uint32_t kPrologue_enter_vm_0007D597 = 0x0007D597; // file_off=0x7C997
constexpr uint32_t kPrologue_enter_vm_0007D61D = 0x0007D61D; // file_off=0x7CA1D
constexpr uint32_t kPrologue_enter_vm_0007D63E = 0x0007D63E; // file_off=0x7CA3E
constexpr uint32_t kPrologue_enter_vm_0007D648 = 0x0007D648; // file_off=0x7CA48
constexpr uint32_t kPrologue_enter_vm_0007D67D = 0x0007D67D; // file_off=0x7CA7D
constexpr uint32_t kPrologue_enter_vm_0007D69E = 0x0007D69E; // file_off=0x7CA9E
constexpr uint32_t kPrologue_enter_vm_0007D6D0 = 0x0007D6D0; // file_off=0x7CAD0
constexpr uint32_t kPrologue_enter_vm_0007D760 = 0x0007D760; // file_off=0x7CB60
constexpr uint32_t kPrologue_enter_vm_0007D828 = 0x0007D828; // file_off=0x7CC28
constexpr uint32_t kPrologue_enter_vm_0007D84F = 0x0007D84F; // file_off=0x7CC4F
constexpr uint32_t kPrologue_enter_vm_0007D86A = 0x0007D86A; // file_off=0x7CC6A
constexpr uint32_t kPrologue_enter_vm_0007D890 = 0x0007D890; // file_off=0x7CC90
constexpr uint32_t kPrologue_enter_vm_0007D8F0 = 0x0007D8F0; // file_off=0x7CCF0
constexpr uint32_t kPrologue_enter_vm_0007D903 = 0x0007D903; // file_off=0x7CD03
constexpr uint32_t kPrologue_sub_rsp_0x48_0007D920 = 0x0007D920; // file_off=0x7CD20
constexpr uint32_t kPrologue_enter_vm_0007D96A = 0x0007D96A; // file_off=0x7CD6A
constexpr uint32_t kPrologue_sub_rsp_0x28_0007D980 = 0x0007D980; // file_off=0x7CD80
constexpr uint32_t kPrologue_enter_vm_0007E080 = 0x0007E080; // file_off=0x7D480
constexpr uint32_t kPrologue_enter_vm_0007E1D5 = 0x0007E1D5; // file_off=0x7D5D5
constexpr uint32_t kPrologue_enter_vm_0007E524 = 0x0007E524; // file_off=0x7D924
constexpr uint32_t kPrologue_enter_vm_0007E52F = 0x0007E52F; // file_off=0x7D92F
constexpr uint32_t kPrologue_enter_vm_0007E56A = 0x0007E56A; // file_off=0x7D96A
constexpr uint32_t kPrologue_enter_vm_0007E592 = 0x0007E592; // file_off=0x7D992
constexpr uint32_t kPrologue_call_rax_0007E5F7 = 0x0007E5F7; // file_off=0x7D9F7
constexpr uint32_t kPrologue_enter_vm_0007E77E = 0x0007E77E; // file_off=0x7DB7E
constexpr uint32_t kPrologue_enter_vm_0007E9D4 = 0x0007E9D4; // file_off=0x7DDD4
constexpr uint32_t kPrologue_enter_vm_0007EDE4 = 0x0007EDE4; // file_off=0x7E1E4
constexpr uint32_t kPrologue_enter_vm_0007F03B = 0x0007F03B; // file_off=0x7E43B
constexpr uint32_t kPrologue_enter_vm_0007F046 = 0x0007F046; // file_off=0x7E446
constexpr uint32_t kPrologue_enter_vm_0007F081 = 0x0007F081; // file_off=0x7E481
constexpr uint32_t kPrologue_enter_vm_0007F0A9 = 0x0007F0A9; // file_off=0x7E4A9
constexpr uint32_t kPrologue_call_rax_0007F0FD = 0x0007F0FD; // file_off=0x7E4FD
constexpr uint32_t kPrologue_call_rax_0007F153 = 0x0007F153; // file_off=0x7E553
constexpr uint32_t kPrologue_enter_vm_0007F25B = 0x0007F25B; // file_off=0x7E65B
constexpr uint32_t kPrologue_enter_vm_0007F4F8 = 0x0007F4F8; // file_off=0x7E8F8
constexpr uint32_t kPrologue_sub_rsp_0x48_0007FFD3 = 0x0007FFD3; // file_off=0x7F3D3
constexpr uint32_t kPrologue_enter_vm_00080AA9 = 0x00080AA9; // file_off=0x7FEA9
constexpr uint32_t kPrologue_enter_vm_00080BEE = 0x00080BEE; // file_off=0x7FFEE
constexpr uint32_t kPrologue_enter_vm_00080BF8 = 0x00080BF8; // file_off=0x7FFF8
constexpr uint32_t kPrologue_enter_vm_00080C31 = 0x00080C31; // file_off=0x80031
constexpr uint32_t kPrologue_enter_vm_00080C57 = 0x00080C57; // file_off=0x80057
constexpr uint32_t kPrologue_push_rbx_rsi_00080DB0 = 0x00080DB0; // file_off=0x801B0
constexpr uint32_t kPrologue_enter_vm_000811FA = 0x000811FA; // file_off=0x805FA
constexpr uint32_t kPrologue_push_rbx_rsi_000812C0 = 0x000812C0; // file_off=0x806C0
constexpr uint32_t kPrologue_enter_vm_000812E2 = 0x000812E2; // file_off=0x806E2
constexpr uint32_t kPrologue_enter_vm_0008135F = 0x0008135F; // file_off=0x8075F
constexpr uint32_t kPrologue_push_rbx_rsi_000813E0 = 0x000813E0; // file_off=0x807E0
constexpr uint32_t kPrologue_enter_vm_00081402 = 0x00081402; // file_off=0x80802
constexpr uint32_t kPrologue_sub_rsp_0x28_000815D6 = 0x000815D6; // file_off=0x809D6
constexpr uint32_t kPrologue_sub_rsp_0x48_000816B7 = 0x000816B7; // file_off=0x80AB7
constexpr uint32_t kPrologue_sub_rsp_0x28_00081866 = 0x00081866; // file_off=0x80C66
constexpr uint32_t kPrologue_sub_rsp_0x38_00081CE7 = 0x00081CE7; // file_off=0x810E7
constexpr uint32_t kPrologue_enter_vm_00081ED2 = 0x00081ED2; // file_off=0x812D2
constexpr uint32_t kPrologue_enter_vm_00081F0D = 0x00081F0D; // file_off=0x8130D
constexpr uint32_t kPrologue_enter_vm_00081F33 = 0x00081F33; // file_off=0x81333
constexpr uint32_t kPrologue_call_rax_00082071 = 0x00082071; // file_off=0x81471
constexpr uint32_t kPrologue_sub_rsp_0x48_00082277 = 0x00082277; // file_off=0x81677
constexpr uint32_t kPrologue_sub_rsp_0x28_00082510 = 0x00082510; // file_off=0x81910
constexpr uint32_t kPrologue_sub_rsp_0x38_00082547 = 0x00082547; // file_off=0x81947
constexpr uint32_t kPrologue_sub_rsp_0x28_00082680 = 0x00082680; // file_off=0x81A80
constexpr uint32_t kPrologue_sub_rsp_0x38_000826A0 = 0x000826A0; // file_off=0x81AA0
constexpr uint32_t kPrologue_sub_rsp_0x28_000827F0 = 0x000827F0; // file_off=0x81BF0
constexpr uint32_t kPrologue_enter_vm_00082982 = 0x00082982; // file_off=0x81D82
constexpr uint32_t kPrologue_enter_vm_0008299A = 0x0008299A; // file_off=0x81D9A
constexpr uint32_t kPrologue_xor_eax_eax_ret_000829D0 = 0x000829D0; // file_off=0x81DD0
constexpr uint32_t kPrologue_enter_vm_00082C54 = 0x00082C54; // file_off=0x82054
constexpr uint32_t kPrologue_enter_vm_00082D03 = 0x00082D03; // file_off=0x82103
constexpr uint32_t kPrologue_enter_vm_00082F7A = 0x00082F7A; // file_off=0x8237A
constexpr uint32_t kPrologue_enter_vm_00082FD4 = 0x00082FD4; // file_off=0x823D4
constexpr uint32_t kPrologue_enter_vm_00083065 = 0x00083065; // file_off=0x82465
constexpr uint32_t kPrologue_enter_vm_00083083 = 0x00083083; // file_off=0x82483
constexpr uint32_t kPrologue_enter_vm_00083095 = 0x00083095; // file_off=0x82495
constexpr uint32_t kPrologue_enter_vm_000839D0 = 0x000839D0; // file_off=0x82DD0
constexpr uint32_t kPrologue_enter_vm_00086098 = 0x00086098; // file_off=0x85498
constexpr uint32_t kPrologue_sub_rsp_0x58_00086173 = 0x00086173; // file_off=0x85573
constexpr uint32_t kPrologue_sub_rsp_0x28_000862F0 = 0x000862F0; // file_off=0x856F0
constexpr uint32_t kPrologue_sub_rsp_0x38_00086597 = 0x00086597; // file_off=0x85997
constexpr uint32_t kPrologue_sub_rsp_0x28_000866F0 = 0x000866F0; // file_off=0x85AF0
constexpr uint32_t kPrologue_sub_rsp_0x28_000868B0 = 0x000868B0; // file_off=0x85CB0
constexpr uint32_t kPrologue_sub_rsp_0x48_000868F8 = 0x000868F8; // file_off=0x85CF8
constexpr uint32_t kPrologue_sub_rsp_0x28_00086A40 = 0x00086A40; // file_off=0x85E40
constexpr uint32_t kPrologue_sub_rsp_0x28_00086AA0 = 0x00086AA0; // file_off=0x85EA0
constexpr uint32_t kPrologue_enter_vm_00086B46 = 0x00086B46; // file_off=0x85F46
constexpr uint32_t kPrologue_enter_vm_00086CB0 = 0x00086CB0; // file_off=0x860B0
constexpr uint32_t kPrologue_enter_vm_00086CC0 = 0x00086CC0; // file_off=0x860C0
constexpr uint32_t kPrologue_sub_rsp_0x28_00086F70 = 0x00086F70; // file_off=0x86370
constexpr uint32_t kPrologue_enter_vm_000875CB = 0x000875CB; // file_off=0x869CB
constexpr uint32_t kPrologue_enter_vm_000875D6 = 0x000875D6; // file_off=0x869D6
constexpr uint32_t kPrologue_enter_vm_00087636 = 0x00087636; // file_off=0x86A36
constexpr uint32_t kPrologue_enter_vm_00087B69 = 0x00087B69; // file_off=0x86F69
constexpr uint32_t kPrologue_enter_vm_00087FBB = 0x00087FBB; // file_off=0x873BB
constexpr uint32_t kPrologue_enter_vm_00088040 = 0x00088040; // file_off=0x87440
constexpr uint32_t kPrologue_enter_vm_000880A0 = 0x000880A0; // file_off=0x874A0
constexpr uint32_t kPrologue_enter_vm_000880D0 = 0x000880D0; // file_off=0x874D0
constexpr uint32_t kPrologue_push_rbx_rsi_000881A0 = 0x000881A0; // file_off=0x875A0
constexpr uint32_t kPrologue_enter_vm_00088428 = 0x00088428; // file_off=0x87828
constexpr uint32_t kPrologue_enter_vm_00088478 = 0x00088478; // file_off=0x87878
constexpr uint32_t kPrologue_enter_vm_0008849B = 0x0008849B; // file_off=0x8789B
constexpr uint32_t kPrologue_sub_rsp_0x38_000884F0 = 0x000884F0; // file_off=0x878F0
constexpr uint32_t kPrologue_sub_rsp_0x28_00088F30 = 0x00088F30; // file_off=0x88330
constexpr uint32_t kPrologue_enter_vm_0008909D = 0x0008909D; // file_off=0x8849D
constexpr uint32_t kPrologue_enter_vm_000890C3 = 0x000890C3; // file_off=0x884C3
constexpr uint32_t kPrologue_enter_vm_000890E9 = 0x000890E9; // file_off=0x884E9
constexpr uint32_t kPrologue_enter_vm_00089135 = 0x00089135; // file_off=0x88535
constexpr uint32_t kPrologue_sub_rsp_0x38_00089180 = 0x00089180; // file_off=0x88580
constexpr uint32_t kPrologue_sub_rsp_0x48_000891C0 = 0x000891C0; // file_off=0x885C0
constexpr uint32_t kPrologue_push_rbx_rsi_00089230 = 0x00089230; // file_off=0x88630
constexpr uint32_t kPrologue_enter_vm_000892CD = 0x000892CD; // file_off=0x886CD
constexpr uint32_t kPrologue_enter_vm_00089311 = 0x00089311; // file_off=0x88711
constexpr uint32_t kPrologue_push_rbx_rsi_000893E0 = 0x000893E0; // file_off=0x887E0
constexpr uint32_t kPrologue_push_rbx_rsi_00089650 = 0x00089650; // file_off=0x88A50
constexpr uint32_t kPrologue_push_rbx_rsi_000898C0 = 0x000898C0; // file_off=0x88CC0
constexpr uint32_t kPrologue_enter_vm_00089B7C = 0x00089B7C; // file_off=0x88F7C
constexpr uint32_t kPrologue_enter_vm_00089BB7 = 0x00089BB7; // file_off=0x88FB7
constexpr uint32_t kPrologue_enter_vm_00089C41 = 0x00089C41; // file_off=0x89041
constexpr uint32_t kPrologue_push_rbx_rsi_0008A5E0 = 0x0008A5E0; // file_off=0x899E0
constexpr uint32_t kPrologue_enter_vm_0008A7B3 = 0x0008A7B3; // file_off=0x89BB3
constexpr uint32_t kPrologue_enter_vm_0008AD8C = 0x0008AD8C; // file_off=0x8A18C
constexpr uint32_t kPrologue_enter_vm_0008B087 = 0x0008B087; // file_off=0x8A487
constexpr uint32_t kPrologue_push_rbx_rsi_0008B130 = 0x0008B130; // file_off=0x8A530
constexpr uint32_t kPrologue_enter_vm_0008B37D = 0x0008B37D; // file_off=0x8A77D
constexpr uint32_t kPrologue_enter_vm_0008B3D5 = 0x0008B3D5; // file_off=0x8A7D5
constexpr uint32_t kPrologue_push_rbx_rsi_0008B590 = 0x0008B590; // file_off=0x8A990
constexpr uint32_t kPrologue_enter_vm_0008BC7B = 0x0008BC7B; // file_off=0x8B07B
constexpr uint32_t kPrologue_enter_vm_0008BE3E = 0x0008BE3E; // file_off=0x8B23E
constexpr uint32_t kPrologue_enter_vm_0008BE8D = 0x0008BE8D; // file_off=0x8B28D
constexpr uint32_t kPrologue_enter_vm_0008BF9F = 0x0008BF9F; // file_off=0x8B39F
constexpr uint32_t kPrologue_enter_vm_0008BFC2 = 0x0008BFC2; // file_off=0x8B3C2
constexpr uint32_t kPrologue_enter_vm_0008BFE8 = 0x0008BFE8; // file_off=0x8B3E8
constexpr uint32_t kPrologue_enter_vm_0008C00E = 0x0008C00E; // file_off=0x8B40E
constexpr uint32_t kPrologue_enter_vm_0008C034 = 0x0008C034; // file_off=0x8B434
constexpr uint32_t kPrologue_enter_vm_0008C05A = 0x0008C05A; // file_off=0x8B45A
constexpr uint32_t kPrologue_push_rbx_rsi_0008C730 = 0x0008C730; // file_off=0x8BB30
constexpr uint32_t kPrologue_sub_rsp_0x48_0008CD80 = 0x0008CD80; // file_off=0x8C180
constexpr uint32_t kPrologue_call_rax_0008CF0C = 0x0008CF0C; // file_off=0x8C30C
constexpr uint32_t kPrologue_enter_vm_0008D0CE = 0x0008D0CE; // file_off=0x8C4CE
constexpr uint32_t kPrologue_enter_vm_0008D0DA = 0x0008D0DA; // file_off=0x8C4DA
constexpr uint32_t kPrologue_enter_vm_0008D0E6 = 0x0008D0E6; // file_off=0x8C4E6
constexpr uint32_t kPrologue_enter_vm_0008D0F2 = 0x0008D0F2; // file_off=0x8C4F2
constexpr uint32_t kPrologue_enter_vm_0008D0FE = 0x0008D0FE; // file_off=0x8C4FE
constexpr uint32_t kPrologue_enter_vm_0008D10A = 0x0008D10A; // file_off=0x8C50A
constexpr uint32_t kPrologue_push_rbx_rsi_0008D1B0 = 0x0008D1B0; // file_off=0x8C5B0
constexpr uint32_t kPrologue_enter_vm_0008D2C8 = 0x0008D2C8; // file_off=0x8C6C8
constexpr uint32_t kPrologue_enter_vm_0008D2FD = 0x0008D2FD; // file_off=0x8C6FD
constexpr uint32_t kPrologue_enter_vm_0008D32B = 0x0008D32B; // file_off=0x8C72B
constexpr uint32_t kPrologue_enter_vm_0008D351 = 0x0008D351; // file_off=0x8C751
constexpr uint32_t kPrologue_enter_vm_0008D376 = 0x0008D376; // file_off=0x8C776
constexpr uint32_t kPrologue_enter_vm_0008D390 = 0x0008D390; // file_off=0x8C790
constexpr uint32_t kPrologue_enter_vm_0008D3C1 = 0x0008D3C1; // file_off=0x8C7C1
constexpr uint32_t kPrologue_enter_vm_0008D3E4 = 0x0008D3E4; // file_off=0x8C7E4
constexpr uint32_t kPrologue_enter_vm_0008D446 = 0x0008D446; // file_off=0x8C846
constexpr uint32_t kPrologue_enter_vm_0008D485 = 0x0008D485; // file_off=0x8C885
constexpr uint32_t kPrologue_enter_vm_0008D4D2 = 0x0008D4D2; // file_off=0x8C8D2
constexpr uint32_t kPrologue_enter_vm_0008D4E0 = 0x0008D4E0; // file_off=0x8C8E0
constexpr uint32_t kPrologue_enter_vm_0008D4FC = 0x0008D4FC; // file_off=0x8C8FC
constexpr uint32_t kPrologue_enter_vm_0008D526 = 0x0008D526; // file_off=0x8C926
constexpr uint32_t kPrologue_enter_vm_0008D534 = 0x0008D534; // file_off=0x8C934
constexpr uint32_t kPrologue_enter_vm_0008D550 = 0x0008D550; // file_off=0x8C950
constexpr uint32_t kPrologue_enter_vm_0008D56C = 0x0008D56C; // file_off=0x8C96C
constexpr uint32_t kPrologue_enter_vm_0008D5B2 = 0x0008D5B2; // file_off=0x8C9B2
constexpr uint32_t kPrologue_enter_vm_0008D5D5 = 0x0008D5D5; // file_off=0x8C9D5
constexpr uint32_t kPrologue_enter_vm_0008D5EA = 0x0008D5EA; // file_off=0x8C9EA
constexpr uint32_t kPrologue_enter_vm_0008D5FF = 0x0008D5FF; // file_off=0x8C9FF
constexpr uint32_t kPrologue_push_rbx_rsi_0008DA80 = 0x0008DA80; // file_off=0x8CE80
constexpr uint32_t kPrologue_enter_vm_0008DC8B = 0x0008DC8B; // file_off=0x8D08B
constexpr uint32_t kPrologue_enter_vm_0008DCB0 = 0x0008DCB0; // file_off=0x8D0B0
constexpr uint32_t kPrologue_sub_rsp_0x38_0008DCF0 = 0x0008DCF0; // file_off=0x8D0F0
constexpr uint32_t kPrologue_enter_vm_0008DD19 = 0x0008DD19; // file_off=0x8D119
constexpr uint32_t kPrologue_sub_rsp_0x58_0008DD60 = 0x0008DD60; // file_off=0x8D160
constexpr uint32_t kPrologue_enter_vm_0008DDAD = 0x0008DDAD; // file_off=0x8D1AD
constexpr uint32_t kPrologue_sub_rsp_0x68_0008DF50 = 0x0008DF50; // file_off=0x8D350
constexpr uint32_t kPrologue_push_rbx_rsi_0008DFB0 = 0x0008DFB0; // file_off=0x8D3B0
constexpr uint32_t kPrologue_enter_vm_0008E1D7 = 0x0008E1D7; // file_off=0x8D5D7
constexpr uint32_t kPrologue_enter_vm_0008E20C = 0x0008E20C; // file_off=0x8D60C
constexpr uint32_t kPrologue_enter_vm_0008E8A2 = 0x0008E8A2; // file_off=0x8DCA2
constexpr uint32_t kPrologue_enter_vm_0008E8D5 = 0x0008E8D5; // file_off=0x8DCD5
constexpr uint32_t kPrologue_enter_vm_0008E938 = 0x0008E938; // file_off=0x8DD38
constexpr uint32_t kPrologue_call_rax_0008EA8E = 0x0008EA8E; // file_off=0x8DE8E
constexpr uint32_t kPrologue_push_rbx_rsi_0008EAD0 = 0x0008EAD0; // file_off=0x8DED0
constexpr uint32_t kPrologue_call_rax_0008EBC5 = 0x0008EBC5; // file_off=0x8DFC5
constexpr uint32_t kPrologue_enter_vm_0008EC29 = 0x0008EC29; // file_off=0x8E029
constexpr uint32_t kPrologue_push_rbx_rsi_0008EF20 = 0x0008EF20; // file_off=0x8E320
constexpr uint32_t kPrologue_enter_vm_0008F43C = 0x0008F43C; // file_off=0x8E83C
constexpr uint32_t kPrologue_enter_vm_0008F4DB = 0x0008F4DB; // file_off=0x8E8DB
constexpr uint32_t kPrologue_enter_vm_0008F504 = 0x0008F504; // file_off=0x8E904
constexpr uint32_t kPrologue_enter_vm_0008F52C = 0x0008F52C; // file_off=0x8E92C
constexpr uint32_t kPrologue_enter_vm_0008F786 = 0x0008F786; // file_off=0x8EB86
constexpr uint32_t kPrologue_call_rax_0008FBD7 = 0x0008FBD7; // file_off=0x8EFD7
constexpr uint32_t kPrologue_call_rax_0008FC6F = 0x0008FC6F; // file_off=0x8F06F
constexpr uint32_t kPrologue_enter_vm_0008FE1F = 0x0008FE1F; // file_off=0x8F21F
constexpr uint32_t kPrologue_enter_vm_0008FEAF = 0x0008FEAF; // file_off=0x8F2AF
constexpr uint32_t kPrologue_sub_rsp_0x38_00090A20 = 0x00090A20; // file_off=0x8FE20
constexpr uint32_t kPrologue_sub_rsp_0x28_00090B20 = 0x00090B20; // file_off=0x8FF20
constexpr uint32_t kPrologue_push_rbx_rsi_00090DF0 = 0x00090DF0; // file_off=0x901F0
constexpr uint32_t kPrologue_sub_rsp_0x28_00090EA0 = 0x00090EA0; // file_off=0x902A0
constexpr uint32_t kPrologue_sub_rsp_0x158_000914DA = 0x000914DA; // file_off=0x908DA
constexpr uint32_t kPrologue_sub_rsp_0x158_00091800 = 0x00091800; // file_off=0x90C00
constexpr uint32_t kPrologue_sub_rsp_0x48_000920CA = 0x000920CA; // file_off=0x914CA
constexpr uint32_t kPrologue_sub_rsp_0x28_0009212A = 0x0009212A; // file_off=0x9152A
constexpr uint32_t kPrologue_sub_rsp_0x38_0009215F = 0x0009215F; // file_off=0x9155F
constexpr uint32_t kPrologue_sub_rsp_0x28_000921FA = 0x000921FA; // file_off=0x915FA
constexpr uint32_t kPrologue_sub_rsp_0x38_000922B4 = 0x000922B4; // file_off=0x916B4
constexpr uint32_t kPrologue_sub_rsp_0x38_00092314 = 0x00092314; // file_off=0x91714
constexpr uint32_t kPrologue_sub_rsp_0x48_0009236F = 0x0009236F; // file_off=0x9176F
constexpr uint32_t kPrologue_sub_rsp_0x28_0009247A = 0x0009247A; // file_off=0x9187A
constexpr uint32_t kPrologue_sub_rsp_0x28_000924BF = 0x000924BF; // file_off=0x918BF
constexpr uint32_t kPrologue_sub_rsp_0x28_000924FF = 0x000924FF; // file_off=0x918FF
constexpr uint32_t kPrologue_sub_rsp_0x58_00092533 = 0x00092533; // file_off=0x91933
constexpr uint32_t kPrologue_enter_vm_00092546 = 0x00092546; // file_off=0x91946
constexpr uint32_t kPrologue_enter_vm_00092628 = 0x00092628; // file_off=0x91A28
constexpr uint32_t kPrologue_enter_vm_0009270C = 0x0009270C; // file_off=0x91B0C
constexpr uint32_t kPrologue_enter_vm_0009271B = 0x0009271B; // file_off=0x91B1B
constexpr uint32_t kPrologue_enter_vm_0009272A = 0x0009272A; // file_off=0x91B2A
constexpr uint32_t kPrologue_enter_vm_00092739 = 0x00092739; // file_off=0x91B39
constexpr uint32_t kPrologue_enter_vm_00092745 = 0x00092745; // file_off=0x91B45
constexpr uint32_t kPrologue_enter_vm_00092754 = 0x00092754; // file_off=0x91B54
constexpr uint32_t kPrologue_enter_vm_00092760 = 0x00092760; // file_off=0x91B60
constexpr uint32_t kPrologue_enter_vm_0009276C = 0x0009276C; // file_off=0x91B6C
constexpr uint32_t kPrologue_enter_vm_0009277B = 0x0009277B; // file_off=0x91B7B
constexpr uint32_t kPrologue_enter_vm_0009278A = 0x0009278A; // file_off=0x91B8A
constexpr uint32_t kPrologue_enter_vm_00092799 = 0x00092799; // file_off=0x91B99
constexpr uint32_t kPrologue_enter_vm_000927A8 = 0x000927A8; // file_off=0x91BA8
constexpr uint32_t kPrologue_enter_vm_000927B7 = 0x000927B7; // file_off=0x91BB7
constexpr uint32_t kPrologue_enter_vm_000927C6 = 0x000927C6; // file_off=0x91BC6
constexpr uint32_t kPrologue_enter_vm_000927D5 = 0x000927D5; // file_off=0x91BD5
constexpr uint32_t kPrologue_enter_vm_000927E4 = 0x000927E4; // file_off=0x91BE4
constexpr uint32_t kPrologue_enter_vm_000927F0 = 0x000927F0; // file_off=0x91BF0
constexpr uint32_t kPrologue_enter_vm_000927FC = 0x000927FC; // file_off=0x91BFC
constexpr uint32_t kPrologue_enter_vm_0009282B = 0x0009282B; // file_off=0x91C2B
constexpr uint32_t kPrologue_sub_rsp_0x168_000937B6 = 0x000937B6; // file_off=0x92BB6
constexpr uint32_t kPrologue_sub_rsp_0x58_00093A33 = 0x00093A33; // file_off=0x92E33
constexpr uint32_t kPrologue_enter_vm_00093A46 = 0x00093A46; // file_off=0x92E46
constexpr uint32_t kPrologue_sub_rsp_0x28_00093B15 = 0x00093B15; // file_off=0x92F15
constexpr uint32_t kPrologue_sub_rsp_0x48_00093BDA = 0x00093BDA; // file_off=0x92FDA
constexpr uint32_t kPrologue_sub_rsp_0x58_00093C35 = 0x00093C35; // file_off=0x93035
constexpr uint32_t kPrologue_sub_rsp_0x48_00093C95 = 0x00093C95; // file_off=0x93095
constexpr uint32_t kPrologue_sub_rsp_0x28_00093D45 = 0x00093D45; // file_off=0x93145
constexpr uint32_t kPrologue_sub_rsp_0x28_00093DF5 = 0x00093DF5; // file_off=0x931F5
constexpr uint32_t kPrologue_sub_rsp_0x28_00093EC5 = 0x00093EC5; // file_off=0x932C5
constexpr uint32_t kPrologue_sub_rsp_0x38_00093EEA = 0x00093EEA; // file_off=0x932EA
constexpr uint32_t kPrologue_sub_rsp_0x38_00093F3A = 0x00093F3A; // file_off=0x9333A
constexpr uint32_t kPrologue_sub_rsp_0x38_00093F8A = 0x00093F8A; // file_off=0x9338A
constexpr uint32_t kPrologue_sub_rsp_0x28_0009404A = 0x0009404A; // file_off=0x9344A
constexpr uint32_t kPrologue_sub_rsp_0x28_000940A5 = 0x000940A5; // file_off=0x934A5
constexpr uint32_t kPrologue_sub_rsp_0x68_000940CF = 0x000940CF; // file_off=0x934CF
constexpr uint32_t kPrologue_sub_rsp_0x28_00094195 = 0x00094195; // file_off=0x93595
constexpr uint32_t kPrologue_sub_rsp_0x68_000941BA = 0x000941BA; // file_off=0x935BA
constexpr uint32_t kPrologue_sub_rsp_0x28_0009423F = 0x0009423F; // file_off=0x9363F
constexpr uint32_t kPrologue_sub_rsp_0x28_00094335 = 0x00094335; // file_off=0x93735
constexpr uint32_t kPrologue_sub_rsp_0x38_0009435A = 0x0009435A; // file_off=0x9375A
constexpr uint32_t kPrologue_sub_rsp_0x38_0009441A = 0x0009441A; // file_off=0x9381A
constexpr uint32_t kPrologue_sub_rsp_0x38_0009444A = 0x0009444A; // file_off=0x9384A
constexpr uint32_t kPrologue_sub_rsp_0x28_0009447A = 0x0009447A; // file_off=0x9387A
constexpr uint32_t kPrologue_sub_rsp_0x28_000944A5 = 0x000944A5; // file_off=0x938A5
constexpr uint32_t kPrologue_sub_rsp_0x28_0009452A = 0x0009452A; // file_off=0x9392A
constexpr uint32_t kPrologue_sub_rsp_0x28_000945E5 = 0x000945E5; // file_off=0x939E5
constexpr uint32_t kPrologue_sub_rsp_0x38_0009460F = 0x0009460F; // file_off=0x93A0F
constexpr uint32_t kPrologue_sub_rsp_0x28_0009467A = 0x0009467A; // file_off=0x93A7A
constexpr uint32_t kPrologue_sub_rsp_0x28_000946A5 = 0x000946A5; // file_off=0x93AA5
constexpr uint32_t kPrologue_sub_rsp_0x28_000946F5 = 0x000946F5; // file_off=0x93AF5
constexpr uint32_t kPrologue_sub_rsp_0x38_0009471F = 0x0009471F; // file_off=0x93B1F
constexpr uint32_t kPrologue_sub_rsp_0x48_0009480A = 0x0009480A; // file_off=0x93C0A
constexpr uint32_t kPrologue_sub_rsp_0x48_0009487A = 0x0009487A; // file_off=0x93C7A
constexpr uint32_t kPrologue_sub_rsp_0x38_000948DA = 0x000948DA; // file_off=0x93CDA
constexpr uint32_t kPrologue_sub_rsp_0x28_0009494A = 0x0009494A; // file_off=0x93D4A
constexpr uint32_t kPrologue_sub_rsp_0x38_0009497A = 0x0009497A; // file_off=0x93D7A
constexpr uint32_t kPrologue_sub_rsp_0x28_00094A05 = 0x00094A05; // file_off=0x93E05
constexpr uint32_t kPrologue_sub_rsp_0x68_00094A4F = 0x00094A4F; // file_off=0x93E4F
constexpr uint32_t kPrologue_sub_rsp_0x48_00094B0A = 0x00094B0A; // file_off=0x93F0A
constexpr uint32_t kPrologue_sub_rsp_0x28_00094B75 = 0x00094B75; // file_off=0x93F75
constexpr uint32_t kPrologue_sub_rsp_0x38_00094B9A = 0x00094B9A; // file_off=0x93F9A
constexpr uint32_t kPrologue_sub_rsp_0x38_00094C5A = 0x00094C5A; // file_off=0x9405A
constexpr uint32_t kPrologue_sub_rsp_0x58_00094CD5 = 0x00094CD5; // file_off=0x940D5
constexpr uint32_t kPrologue_sub_rsp_0x28_00094D35 = 0x00094D35; // file_off=0x94135
constexpr uint32_t kPrologue_sub_rsp_0x28_00094D75 = 0x00094D75; // file_off=0x94175
constexpr uint32_t kPrologue_sub_rsp_0x58_00094E75 = 0x00094E75; // file_off=0x94275
constexpr uint32_t kPrologue_sub_rsp_0x48_00094EDA = 0x00094EDA; // file_off=0x942DA
constexpr uint32_t kPrologue_sub_rsp_0x68_00094F5C = 0x00094F5C; // file_off=0x9435C
constexpr uint32_t kPrologue_sub_rsp_0x28_00095035 = 0x00095035; // file_off=0x94435
constexpr uint32_t kPrologue_sub_rsp_0x58_00095055 = 0x00095055; // file_off=0x94455
constexpr uint32_t kPrologue_sub_rsp_0x28_000950B5 = 0x000950B5; // file_off=0x944B5
constexpr uint32_t kPrologue_sub_rsp_0x48_000950D5 = 0x000950D5; // file_off=0x944D5
constexpr uint32_t kPrologue_sub_rsp_0x28_0009516A = 0x0009516A; // file_off=0x9456A
constexpr uint32_t kPrologue_sub_rsp_0x48_000951AA = 0x000951AA; // file_off=0x945AA
constexpr uint32_t kPrologue_sub_rsp_0x38_0009522A = 0x0009522A; // file_off=0x9462A
constexpr uint32_t kPrologue_sub_rsp_0x58_00095255 = 0x00095255; // file_off=0x94655
constexpr uint32_t kPrologue_sub_rsp_0x48_000952BA = 0x000952BA; // file_off=0x946BA
constexpr uint32_t kPrologue_sub_rsp_0x48_0009535A = 0x0009535A; // file_off=0x9475A
constexpr uint32_t kPrologue_sub_rsp_0x48_000953FF = 0x000953FF; // file_off=0x947FF
constexpr uint32_t kPrologue_sub_rsp_0x28_0009551A = 0x0009551A; // file_off=0x9491A
constexpr uint32_t kPrologue_sub_rsp_0x28_00095545 = 0x00095545; // file_off=0x94945
constexpr uint32_t kPrologue_sub_rsp_0x68_0009556F = 0x0009556F; // file_off=0x9496F
constexpr uint32_t kPrologue_sub_rsp_0x28_00095635 = 0x00095635; // file_off=0x94A35
constexpr uint32_t kPrologue_sub_rsp_0x48_000956B9 = 0x000956B9; // file_off=0x94AB9
constexpr uint32_t kPrologue_sub_rsp_0x28_00095845 = 0x00095845; // file_off=0x94C45
constexpr uint32_t kPrologue_sub_rsp_0x28_00095874 = 0x00095874; // file_off=0x94C74
constexpr uint32_t kPrologue_sub_rsp_0x58_000958E5 = 0x000958E5; // file_off=0x94CE5
constexpr uint32_t kPrologue_sub_rsp_0x38_0009598A = 0x0009598A; // file_off=0x94D8A
constexpr uint32_t kPrologue_sub_rsp_0x38_000959BF = 0x000959BF; // file_off=0x94DBF
constexpr uint32_t kPrologue_sub_rsp_0x58_00095B2F = 0x00095B2F; // file_off=0x94F2F
constexpr uint32_t kPrologue_sub_rsp_0x58_00095B9F = 0x00095B9F; // file_off=0x94F9F
constexpr uint32_t kPrologue_sub_rsp_0x28_00095C3A = 0x00095C3A; // file_off=0x9503A
constexpr uint32_t kPrologue_sub_rsp_0x28_00095C65 = 0x00095C65; // file_off=0x95065
constexpr uint32_t kPrologue_sub_rsp_0x38_00095C8A = 0x00095C8A; // file_off=0x9508A
constexpr uint32_t kPrologue_sub_rsp_0x38_00095CEF = 0x00095CEF; // file_off=0x950EF
constexpr uint32_t kPrologue_sub_rsp_0x58_00095D3F = 0x00095D3F; // file_off=0x9513F
constexpr uint32_t kPrologue_sub_rsp_0x38_00095DAE = 0x00095DAE; // file_off=0x951AE
constexpr uint32_t kPrologue_sub_rsp_0x58_00095E0F = 0x00095E0F; // file_off=0x9520F
constexpr uint32_t kPrologue_sub_rsp_0x28_00095E7A = 0x00095E7A; // file_off=0x9527A
constexpr uint32_t kPrologue_sub_rsp_0x28_00095EA5 = 0x00095EA5; // file_off=0x952A5
constexpr uint32_t kPrologue_sub_rsp_0x28_00095ED5 = 0x00095ED5; // file_off=0x952D5
constexpr uint32_t kPrologue_sub_rsp_0x58_00095EFA = 0x00095EFA; // file_off=0x952FA
constexpr uint32_t kPrologue_sub_rsp_0x38_000964AA = 0x000964AA; // file_off=0x958AA
constexpr uint32_t kPrologue_sub_rsp_0x38_0009652F = 0x0009652F; // file_off=0x9592F
constexpr uint32_t kPrologue_sub_rsp_0x68_000965BF = 0x000965BF; // file_off=0x959BF
constexpr uint32_t kPrologue_sub_rsp_0x68_0009667F = 0x0009667F; // file_off=0x95A7F
constexpr uint32_t kPrologue_sub_rsp_0x38_0009696A = 0x0009696A; // file_off=0x95D6A
constexpr uint32_t kPrologue_sub_rsp_0x158_000969D1 = 0x000969D1; // file_off=0x95DD1
constexpr uint32_t kPrologue_sub_rsp_0x38_00096D3A = 0x00096D3A; // file_off=0x9613A
constexpr uint32_t kPrologue_sub_rsp_0x58_00096EE4 = 0x00096EE4; // file_off=0x962E4
constexpr uint32_t kPrologue_sub_rsp_0x158_000973F1 = 0x000973F1; // file_off=0x967F1
constexpr uint32_t kPrologue_sub_rsp_0x38_00097DFA = 0x00097DFA; // file_off=0x971FA
constexpr uint32_t kPrologue_sub_rsp_0x38_00097E6A = 0x00097E6A; // file_off=0x9726A
constexpr uint32_t kPrologue_sub_rsp_0x38_00097FEA = 0x00097FEA; // file_off=0x973EA
constexpr uint32_t kPrologue_sub_rsp_0x38_0009830A = 0x0009830A; // file_off=0x9770A
constexpr uint32_t kPrologue_sub_rsp_0x158_00098521 = 0x00098521; // file_off=0x97921
constexpr uint32_t kPrologue_sub_rsp_0x38_00098BDA = 0x00098BDA; // file_off=0x97FDA
constexpr uint32_t kPrologue_sub_rsp_0x38_00098C3A = 0x00098C3A; // file_off=0x9803A
constexpr uint32_t kPrologue_sub_rsp_0x68_00098C9F = 0x00098C9F; // file_off=0x9809F
constexpr uint32_t kPrologue_sub_rsp_0x48_00098DEF = 0x00098DEF; // file_off=0x981EF
constexpr uint32_t kPrologue_sub_rsp_0x68_00098E9F = 0x00098E9F; // file_off=0x9829F
constexpr uint32_t kPrologue_sub_rsp_0x48_00098FFF = 0x00098FFF; // file_off=0x983FF
constexpr uint32_t kPrologue_sub_rsp_0x68_000990AF = 0x000990AF; // file_off=0x984AF
constexpr uint32_t kPrologue_sub_rsp_0x48_0009920F = 0x0009920F; // file_off=0x9860F
constexpr uint32_t kPrologue_sub_rsp_0x38_0009955A = 0x0009955A; // file_off=0x9895A
constexpr uint32_t kPrologue_sub_rsp_0x68_000996FF = 0x000996FF; // file_off=0x98AFF
constexpr uint32_t kPrologue_sub_rsp_0x28_0009992A = 0x0009992A; // file_off=0x98D2A
constexpr uint32_t kPrologue_sub_rsp_0x48_00099B54 = 0x00099B54; // file_off=0x98F54
constexpr uint32_t kPrologue_sub_rsp_0x58_00099F74 = 0x00099F74; // file_off=0x99374
constexpr uint32_t kPrologue_sub_rsp_0x58_0009A094 = 0x0009A094; // file_off=0x99494
constexpr uint32_t kPrologue_sub_rsp_0x28_0009A235 = 0x0009A235; // file_off=0x99635
constexpr uint32_t kPrologue_sub_rsp_0x68_0009A455 = 0x0009A455; // file_off=0x99855
constexpr uint32_t kPrologue_sub_rsp_0x68_0009A515 = 0x0009A515; // file_off=0x99915
constexpr uint32_t kPrologue_sub_rsp_0x58_0009A855 = 0x0009A855; // file_off=0x99C55
constexpr uint32_t kPrologue_sub_rsp_0x58_0009AA55 = 0x0009AA55; // file_off=0x99E55
constexpr uint32_t kPrologue_sub_rsp_0x28_0009B040 = 0x0009B040; // file_off=0x9A440
constexpr uint32_t kPrologue_sub_rsp_0x58_0009B065 = 0x0009B065; // file_off=0x9A465
constexpr uint32_t kPrologue_sub_rsp_0x58_0009B0C5 = 0x0009B0C5; // file_off=0x9A4C5
constexpr uint32_t kPrologue_sub_rsp_0x68_0009B2B5 = 0x0009B2B5; // file_off=0x9A6B5
constexpr uint32_t kPrologue_sub_rsp_0x68_0009B38A = 0x0009B38A; // file_off=0x9A78A
constexpr uint32_t kPrologue_sub_rsp_0x38_0009B57A = 0x0009B57A; // file_off=0x9A97A
constexpr uint32_t kPrologue_sub_rsp_0x28_0009B5C5 = 0x0009B5C5; // file_off=0x9A9C5
constexpr uint32_t kPrologue_sub_rsp_0x48_0009B5EF = 0x0009B5EF; // file_off=0x9A9EF
constexpr uint32_t kPrologue_sub_rsp_0x68_0009B65A = 0x0009B65A; // file_off=0x9AA5A
constexpr uint32_t kPrologue_sub_rsp_0x48_0009B6FA = 0x0009B6FA; // file_off=0x9AAFA
constexpr uint32_t kPrologue_sub_rsp_0x48_0009B75A = 0x0009B75A; // file_off=0x9AB5A
constexpr uint32_t kPrologue_sub_rsp_0x58_0009B7C5 = 0x0009B7C5; // file_off=0x9ABC5
constexpr uint32_t kPrologue_sub_rsp_0x68_0009B985 = 0x0009B985; // file_off=0x9AD85
constexpr uint32_t kPrologue_sub_rsp_0x58_0009BA9A = 0x0009BA9A; // file_off=0x9AE9A
constexpr uint32_t kPrologue_sub_rsp_0x28_0009BB50 = 0x0009BB50; // file_off=0x9AF50
constexpr uint32_t kPrologue_sub_rsp_0x48_0009C0BA = 0x0009C0BA; // file_off=0x9B4BA
constexpr uint32_t kPrologue_sub_rsp_0x38_0009C125 = 0x0009C125; // file_off=0x9B525
constexpr uint32_t kPrologue_sub_rsp_0x48_0009C18A = 0x0009C18A; // file_off=0x9B58A
constexpr uint32_t kPrologue_sub_rsp_0x48_0009C27A = 0x0009C27A; // file_off=0x9B67A
constexpr uint32_t kPrologue_sub_rsp_0x68_0009C5A4 = 0x0009C5A4; // file_off=0x9B9A4
constexpr uint32_t kPrologue_sub_rsp_0x158_0009CE91 = 0x0009CE91; // file_off=0x9C291
constexpr uint32_t kPrologue_sub_rsp_0x48_0009D63F = 0x0009D63F; // file_off=0x9CA3F
constexpr uint32_t kPrologue_sub_rsp_0x58_0009D6BA = 0x0009D6BA; // file_off=0x9CABA
constexpr uint32_t kPrologue_sub_rsp_0x58_0009DC8F = 0x0009DC8F; // file_off=0x9D08F
constexpr uint32_t kPrologue_sub_rsp_0x58_0009DEEC = 0x0009DEEC; // file_off=0x9D2EC
constexpr uint32_t kPrologue_sub_rsp_0x58_0009E2DC = 0x0009E2DC; // file_off=0x9D6DC
constexpr uint32_t kPrologue_sub_rsp_0x58_0009E7FA = 0x0009E7FA; // file_off=0x9DBFA
constexpr uint32_t kPrologue_sub_rsp_0x58_0009EE6A = 0x0009EE6A; // file_off=0x9E26A
constexpr uint32_t kPrologue_sub_rsp_0x58_0009F3BF = 0x0009F3BF; // file_off=0x9E7BF
constexpr uint32_t kPrologue_sub_rsp_0x58_0009F45F = 0x0009F45F; // file_off=0x9E85F
constexpr uint32_t kPrologue_sub_rsp_0x58_0009F6CA = 0x0009F6CA; // file_off=0x9EACA
constexpr uint32_t kPrologue_sub_rsp_0x28_0009FF54 = 0x0009FF54; // file_off=0x9F354
constexpr uint32_t kPrologue_sub_rsp_0x28_0009FF94 = 0x0009FF94; // file_off=0x9F394
constexpr uint32_t kPrologue_sub_rsp_0x28_0009FFD4 = 0x0009FFD4; // file_off=0x9F3D4
constexpr uint32_t kPrologue_sub_rsp_0x28_000A000F = 0x000A000F; // file_off=0x9F40F
constexpr uint32_t kPrologue_sub_rsp_0x28_000A0044 = 0x000A0044; // file_off=0x9F444
constexpr uint32_t kPrologue_sub_rsp_0x48_000A00FA = 0x000A00FA; // file_off=0x9F4FA
constexpr uint32_t kPrologue_sub_rsp_0x48_000A017A = 0x000A017A; // file_off=0x9F57A
constexpr uint32_t kPrologue_sub_rsp_0x48_000A020A = 0x000A020A; // file_off=0x9F60A
constexpr uint32_t kPrologue_sub_rsp_0x58_000A029A = 0x000A029A; // file_off=0x9F69A
constexpr uint32_t kPrologue_sub_rsp_0x58_000A0515 = 0x000A0515; // file_off=0x9F915
constexpr uint32_t kPrologue_sub_rsp_0x58_000A05D5 = 0x000A05D5; // file_off=0x9F9D5
constexpr uint32_t kPrologue_sub_rsp_0x58_000A0675 = 0x000A0675; // file_off=0x9FA75
constexpr uint32_t kPrologue_sub_rsp_0x58_000A0745 = 0x000A0745; // file_off=0x9FB45
constexpr uint32_t kPrologue_sub_rsp_0x58_000A07E5 = 0x000A07E5; // file_off=0x9FBE5
constexpr uint32_t kPrologue_sub_rsp_0x58_000A0875 = 0x000A0875; // file_off=0x9FC75
constexpr uint32_t kPrologue_sub_rsp_0x48_000A0939 = 0x000A0939; // file_off=0x9FD39
constexpr uint32_t kPrologue_enter_vm_000A09D5 = 0x000A09D5; // file_off=0x9FDD5
constexpr uint32_t kPrologue_sub_rsp_0x38_000A09E5 = 0x000A09E5; // file_off=0x9FDE5
constexpr uint32_t kPrologue_sub_rsp_0x38_000A0A0A = 0x000A0A0A; // file_off=0x9FE0A
constexpr uint32_t kPrologue_sub_rsp_0x48_000A0A6F = 0x000A0A6F; // file_off=0x9FE6F
constexpr uint32_t kPrologue_sub_rsp_0x38_000A0E05 = 0x000A0E05; // file_off=0xA0205
constexpr uint32_t kPrologue_sub_rsp_0x28_000A10CF = 0x000A10CF; // file_off=0xA04CF
constexpr uint32_t kPrologue_sub_rsp_0x38_000A1105 = 0x000A1105; // file_off=0xA0505
constexpr uint32_t kPrologue_sub_rsp_0x38_000A1155 = 0x000A1155; // file_off=0xA0555
constexpr uint32_t kPrologue_sub_rsp_0x38_000A1235 = 0x000A1235; // file_off=0xA0635
constexpr uint32_t kPrologue_sub_rsp_0x28_000A1475 = 0x000A1475; // file_off=0xA0875
constexpr uint32_t kPrologue_sub_rsp_0x38_000A14A5 = 0x000A14A5; // file_off=0xA08A5
constexpr uint32_t kPrologue_sub_rsp_0x38_000A14F5 = 0x000A14F5; // file_off=0xA08F5
constexpr uint32_t kPrologue_sub_rsp_0x38_000A1545 = 0x000A1545; // file_off=0xA0945
constexpr uint32_t kPrologue_sub_rsp_0x38_000A1595 = 0x000A1595; // file_off=0xA0995
constexpr uint32_t kPrologue_sub_rsp_0x38_000A15E5 = 0x000A15E5; // file_off=0xA09E5
constexpr uint32_t kPrologue_sub_rsp_0x38_000A1635 = 0x000A1635; // file_off=0xA0A35
constexpr uint32_t kPrologue_sub_rsp_0x28_000A1685 = 0x000A1685; // file_off=0xA0A85
constexpr uint32_t kPrologue_sub_rsp_0x28_000A16B5 = 0x000A16B5; // file_off=0xA0AB5
constexpr uint32_t kPrologue_sub_rsp_0x48_000A16E5 = 0x000A16E5; // file_off=0xA0AE5
constexpr uint32_t kPrologue_sub_rsp_0x38_000A1875 = 0x000A1875; // file_off=0xA0C75
constexpr uint32_t kPrologue_sub_rsp_0x38_000A18C5 = 0x000A18C5; // file_off=0xA0CC5
constexpr uint32_t kPrologue_sub_rsp_0x38_000A1915 = 0x000A1915; // file_off=0xA0D15
constexpr uint32_t kPrologue_sub_rsp_0x38_000A1A15 = 0x000A1A15; // file_off=0xA0E15
constexpr uint32_t kPrologue_sub_rsp_0x28_000A1A55 = 0x000A1A55; // file_off=0xA0E55
constexpr uint32_t kPrologue_sub_rsp_0x28_000A1A80 = 0x000A1A80; // file_off=0xA0E80
constexpr uint32_t kPrologue_sub_rsp_0x48_000A1D25 = 0x000A1D25; // file_off=0xA1125
constexpr uint32_t kPrologue_sub_rsp_0x28_000A1D75 = 0x000A1D75; // file_off=0xA1175
constexpr uint32_t kPrologue_sub_rsp_0x48_000A1DAA = 0x000A1DAA; // file_off=0xA11AA
constexpr uint32_t kPrologue_sub_rsp_0x28_000A1F80 = 0x000A1F80; // file_off=0xA1380
constexpr uint32_t kPrologue_sub_rsp_0x48_000A1FB5 = 0x000A1FB5; // file_off=0xA13B5
constexpr uint32_t kPrologue_sub_rsp_0x48_000A202A = 0x000A202A; // file_off=0xA142A
constexpr uint32_t kPrologue_sub_rsp_0x48_000A20AF = 0x000A20AF; // file_off=0xA14AF
constexpr uint32_t kPrologue_sub_rsp_0x38_000A2155 = 0x000A2155; // file_off=0xA1555
constexpr uint32_t kPrologue_sub_rsp_0x38_000A21A5 = 0x000A21A5; // file_off=0xA15A5
constexpr uint32_t kPrologue_sub_rsp_0x58_000A23EF = 0x000A23EF; // file_off=0xA17EF
constexpr uint32_t kPrologue_sub_rsp_0x58_000A3491 = 0x000A3491; // file_off=0xA2891
constexpr uint32_t kPrologue_sub_rsp_0x38_000A426A = 0x000A426A; // file_off=0xA366A
constexpr uint32_t kPrologue_sub_rsp_0x68_000A42E4 = 0x000A42E4; // file_off=0xA36E4
constexpr uint32_t kPrologue_sub_rsp_0x68_000A43AF = 0x000A43AF; // file_off=0xA37AF
constexpr uint32_t kPrologue_sub_rsp_0x58_000A444C = 0x000A444C; // file_off=0xA384C
constexpr uint32_t kPrologue_sub_rsp_0x68_000A44E4 = 0x000A44E4; // file_off=0xA38E4
constexpr uint32_t kPrologue_sub_rsp_0x68_000A45B4 = 0x000A45B4; // file_off=0xA39B4
constexpr uint32_t kPrologue_sub_rsp_0x68_000A4684 = 0x000A4684; // file_off=0xA3A84
constexpr uint32_t kPrologue_sub_rsp_0x68_000A4D3F = 0x000A4D3F; // file_off=0xA413F
constexpr uint32_t kPrologue_sub_rsp_0x58_000A4DDA = 0x000A4DDA; // file_off=0xA41DA
constexpr uint32_t kPrologue_sub_rsp_0x58_000A4E5A = 0x000A4E5A; // file_off=0xA425A
constexpr uint32_t kPrologue_sub_rsp_0x68_000A4EE4 = 0x000A4EE4; // file_off=0xA42E4
constexpr uint32_t kPrologue_sub_rsp_0x68_000A4FB4 = 0x000A4FB4; // file_off=0xA43B4
constexpr uint32_t kPrologue_sub_rsp_0x68_000A530F = 0x000A530F; // file_off=0xA470F
constexpr uint32_t kPrologue_sub_rsp_0x58_000A53AA = 0x000A53AA; // file_off=0xA47AA
constexpr uint32_t kPrologue_sub_rsp_0x38_000A542A = 0x000A542A; // file_off=0xA482A
constexpr uint32_t kPrologue_sub_rsp_0x38_000A564F = 0x000A564F; // file_off=0xA4A4F
constexpr uint32_t kPrologue_sub_rsp_0x38_000A568A = 0x000A568A; // file_off=0xA4A8A
constexpr uint32_t kPrologue_sub_rsp_0x38_000A56FA = 0x000A56FA; // file_off=0xA4AFA
constexpr uint32_t kPrologue_sub_rsp_0x28_000A6325 = 0x000A6325; // file_off=0xA5725
constexpr uint32_t kPrologue_sub_rsp_0x28_000A6355 = 0x000A6355; // file_off=0xA5755
constexpr uint32_t kPrologue_sub_rsp_0x38_000A6475 = 0x000A6475; // file_off=0xA5875
constexpr uint32_t kPrologue_sub_rsp_0x38_000A64C5 = 0x000A64C5; // file_off=0xA58C5
constexpr uint32_t kPrologue_sub_rsp_0x38_000A6515 = 0x000A6515; // file_off=0xA5915
constexpr uint32_t kPrologue_sub_rsp_0x58_000A6565 = 0x000A6565; // file_off=0xA5965
constexpr uint32_t kPrologue_sub_rsp_0x38_000A65E5 = 0x000A65E5; // file_off=0xA59E5
constexpr uint32_t kPrologue_sub_rsp_0x58_000A6635 = 0x000A6635; // file_off=0xA5A35
constexpr uint32_t kPrologue_sub_rsp_0x38_000A66B5 = 0x000A66B5; // file_off=0xA5AB5
constexpr uint32_t kPrologue_sub_rsp_0x58_000A6705 = 0x000A6705; // file_off=0xA5B05
constexpr uint32_t kPrologue_sub_rsp_0x38_000A6785 = 0x000A6785; // file_off=0xA5B85
constexpr uint32_t kPrologue_sub_rsp_0x58_000A67D5 = 0x000A67D5; // file_off=0xA5BD5
constexpr uint32_t kPrologue_sub_rsp_0x58_000A6A15 = 0x000A6A15; // file_off=0xA5E15
constexpr uint32_t kPrologue_sub_rsp_0x68_000A6A75 = 0x000A6A75; // file_off=0xA5E75
constexpr uint32_t kPrologue_sub_rsp_0x58_000A6CEA = 0x000A6CEA; // file_off=0xA60EA
constexpr uint32_t kPrologue_sub_rsp_0x58_000A6DA5 = 0x000A6DA5; // file_off=0xA61A5
constexpr uint32_t kPrologue_sub_rsp_0x58_000A6E05 = 0x000A6E05; // file_off=0xA6205
constexpr uint32_t kPrologue_sub_rsp_0x58_000A7035 = 0x000A7035; // file_off=0xA6435
constexpr uint32_t kPrologue_sub_rsp_0x68_000A7A8A = 0x000A7A8A; // file_off=0xA6E8A
constexpr uint32_t kPrologue_sub_rsp_0x58_000A7BBA = 0x000A7BBA; // file_off=0xA6FBA
constexpr uint32_t kPrologue_sub_rsp_0x58_000A7F25 = 0x000A7F25; // file_off=0xA7325
constexpr uint32_t kPrologue_sub_rsp_0x68_000A89AA = 0x000A89AA; // file_off=0xA7DAA
constexpr uint32_t kPrologue_sub_rsp_0x58_000A8AD5 = 0x000A8AD5; // file_off=0xA7ED5
constexpr uint32_t kPrologue_sub_rsp_0x58_000A8B55 = 0x000A8B55; // file_off=0xA7F55
constexpr uint32_t kPrologue_sub_rsp_0x68_000A954A = 0x000A954A; // file_off=0xA894A
constexpr uint32_t kPrologue_sub_rsp_0x58_000A9815 = 0x000A9815; // file_off=0xA8C15
constexpr uint32_t kPrologue_sub_rsp_0x68_000AA25A = 0x000AA25A; // file_off=0xA965A
constexpr uint32_t kPrologue_sub_rsp_0x58_000AA385 = 0x000AA385; // file_off=0xA9785
constexpr uint32_t kPrologue_sub_rsp_0x58_000AA54A = 0x000AA54A; // file_off=0xA994A
constexpr uint32_t kPrologue_sub_rsp_0x58_000AA74A = 0x000AA74A; // file_off=0xA9B4A
constexpr uint32_t kPrologue_sub_rsp_0x58_000AA805 = 0x000AA805; // file_off=0xA9C05
constexpr uint32_t kPrologue_sub_rsp_0x68_000AA86A = 0x000AA86A; // file_off=0xA9C6A
constexpr uint32_t kPrologue_sub_rsp_0x48_000AA905 = 0x000AA905; // file_off=0xA9D05
constexpr uint32_t kPrologue_sub_rsp_0x58_000AAA65 = 0x000AAA65; // file_off=0xA9E65
constexpr uint32_t kPrologue_sub_rsp_0x58_000AAAC5 = 0x000AAAC5; // file_off=0xA9EC5
constexpr uint32_t kPrologue_sub_rsp_0x68_000AB4BA = 0x000AB4BA; // file_off=0xAA8BA
constexpr uint32_t kPrologue_sub_rsp_0x68_000ABFDA = 0x000ABFDA; // file_off=0xAB3DA
constexpr uint32_t kPrologue_sub_rsp_0x58_000AC255 = 0x000AC255; // file_off=0xAB655
constexpr uint32_t kPrologue_sub_rsp_0x28_000AC2D5 = 0x000AC2D5; // file_off=0xAB6D5
constexpr uint32_t kPrologue_sub_rsp_0x38_000AC305 = 0x000AC305; // file_off=0xAB705
constexpr uint32_t kPrologue_sub_rsp_0x38_000AC625 = 0x000AC625; // file_off=0xABA25
constexpr uint32_t kPrologue_sub_rsp_0x58_000AC89A = 0x000AC89A; // file_off=0xABC9A
constexpr uint32_t kPrologue_sub_rsp_0x58_000AC945 = 0x000AC945; // file_off=0xABD45
constexpr uint32_t kPrologue_sub_rsp_0x58_000AC9B4 = 0x000AC9B4; // file_off=0xABDB4
constexpr uint32_t kPrologue_sub_rsp_0x38_000ACB79 = 0x000ACB79; // file_off=0xABF79
constexpr uint32_t kPrologue_sub_rsp_0x38_000ACBE9 = 0x000ACBE9; // file_off=0xABFE9
constexpr uint32_t kPrologue_sub_rsp_0x58_000ACC64 = 0x000ACC64; // file_off=0xAC064
constexpr uint32_t kPrologue_sub_rsp_0x48_000ACE84 = 0x000ACE84; // file_off=0xAC284
constexpr uint32_t kPrologue_sub_rsp_0x58_000ACFDA = 0x000ACFDA; // file_off=0xAC3DA
constexpr uint32_t kPrologue_sub_rsp_0x58_000AD05A = 0x000AD05A; // file_off=0xAC45A
constexpr uint32_t kPrologue_sub_rsp_0x58_000AD2F1 = 0x000AD2F1; // file_off=0xAC6F1
constexpr uint32_t kPrologue_sub_rsp_0x48_000AD3C4 = 0x000AD3C4; // file_off=0xAC7C4
constexpr uint32_t kPrologue_sub_rsp_0x48_000AD5B4 = 0x000AD5B4; // file_off=0xAC9B4
constexpr uint32_t kPrologue_sub_rsp_0x68_000AD7DF = 0x000AD7DF; // file_off=0xACBDF
constexpr uint32_t kPrologue_sub_rsp_0x58_000AD88C = 0x000AD88C; // file_off=0xACC8C
constexpr uint32_t kPrologue_sub_rsp_0x68_000AD91F = 0x000AD91F; // file_off=0xACD1F
constexpr uint32_t kPrologue_sub_rsp_0x58_000AD9BC = 0x000AD9BC; // file_off=0xACDBC
constexpr uint32_t kPrologue_sub_rsp_0x58_000ADA4A = 0x000ADA4A; // file_off=0xACE4A
constexpr uint32_t kPrologue_sub_rsp_0x58_000ADBEF = 0x000ADBEF; // file_off=0xACFEF
constexpr uint32_t kPrologue_sub_rsp_0x68_000AE63F = 0x000AE63F; // file_off=0xADA3F
constexpr uint32_t kPrologue_sub_rsp_0x28_000AE6D5 = 0x000AE6D5; // file_off=0xADAD5
constexpr uint32_t kPrologue_sub_rsp_0x58_000AE705 = 0x000AE705; // file_off=0xADB05
constexpr uint32_t kPrologue_sub_rsp_0x58_000AE7B5 = 0x000AE7B5; // file_off=0xADBB5
constexpr uint32_t kPrologue_sub_rsp_0x58_000AE845 = 0x000AE845; // file_off=0xADC45
constexpr uint32_t kPrologue_sub_rsp_0x58_000AE8C5 = 0x000AE8C5; // file_off=0xADCC5
constexpr uint32_t kPrologue_sub_rsp_0x28_000AE945 = 0x000AE945; // file_off=0xADD45
constexpr uint32_t kPrologue_sub_rsp_0x28_000AE965 = 0x000AE965; // file_off=0xADD65
constexpr uint32_t kPrologue_sub_rsp_0x38_000AE985 = 0x000AE985; // file_off=0xADD85
constexpr uint32_t kPrologue_sub_rsp_0x68_000AEAE5 = 0x000AEAE5; // file_off=0xADEE5
constexpr uint32_t kPrologue_sub_rsp_0x38_000AED54 = 0x000AED54; // file_off=0xAE154
constexpr uint32_t kPrologue_sub_rsp_0x38_000AEEB4 = 0x000AEEB4; // file_off=0xAE2B4
constexpr uint32_t kPrologue_sub_rsp_0x38_000AF265 = 0x000AF265; // file_off=0xAE665
constexpr uint32_t kPrologue_sub_rsp_0x58_000AF31A = 0x000AF31A; // file_off=0xAE71A
constexpr uint32_t kPrologue_sub_rsp_0x28_000AF39A = 0x000AF39A; // file_off=0xAE79A
constexpr uint32_t kPrologue_sub_rsp_0x68_000AF755 = 0x000AF755; // file_off=0xAEB55
constexpr uint32_t kPrologue_sub_rsp_0x68_000AFB85 = 0x000AFB85; // file_off=0xAEF85
constexpr uint32_t kPrologue_sub_rsp_0x68_000B094A = 0x000B094A; // file_off=0xAFD4A
constexpr uint32_t kPrologue_sub_rsp_0x28_000B0A75 = 0x000B0A75; // file_off=0xAFE75
constexpr uint32_t kPrologue_sub_rsp_0x68_000B11E5 = 0x000B11E5; // file_off=0xB05E5
constexpr uint32_t kPrologue_sub_rsp_0x158_000B12BF = 0x000B12BF; // file_off=0xB06BF
constexpr uint32_t kPrologue_sub_rsp_0x58_000B1795 = 0x000B1795; // file_off=0xB0B95
constexpr uint32_t kPrologue_sub_rsp_0x158_000B182F = 0x000B182F; // file_off=0xB0C2F
constexpr uint32_t kPrologue_sub_rsp_0x68_000B1D05 = 0x000B1D05; // file_off=0xB1105
constexpr uint32_t kPrologue_sub_rsp_0x58_000B2275 = 0x000B2275; // file_off=0xB1675
constexpr uint32_t kPrologue_sub_rsp_0x158_000B230F = 0x000B230F; // file_off=0xB170F
constexpr uint32_t kPrologue_sub_rsp_0x68_000B2875 = 0x000B2875; // file_off=0xB1C75
constexpr uint32_t kPrologue_sub_rsp_0x58_000B2DE5 = 0x000B2DE5; // file_off=0xB21E5
constexpr uint32_t kPrologue_sub_rsp_0x158_000B2E7F = 0x000B2E7F; // file_off=0xB227F
constexpr uint32_t kPrologue_sub_rsp_0x38_000B33EA = 0x000B33EA; // file_off=0xB27EA
constexpr uint32_t kPrologue_sub_rsp_0x38_000B346A = 0x000B346A; // file_off=0xB286A
constexpr uint32_t kPrologue_sub_rsp_0x48_000B34D5 = 0x000B34D5; // file_off=0xB28D5
constexpr uint32_t kPrologue_sub_rsp_0x58_000B3555 = 0x000B3555; // file_off=0xB2955
constexpr uint32_t kPrologue_sub_rsp_0x48_000B35E5 = 0x000B35E5; // file_off=0xB29E5
constexpr uint32_t kPrologue_sub_rsp_0x58_000B37D5 = 0x000B37D5; // file_off=0xB2BD5
constexpr uint32_t kPrologue_sub_rsp_0x48_000B3875 = 0x000B3875; // file_off=0xB2C75
constexpr uint32_t kPrologue_sub_rsp_0x58_000B3A65 = 0x000B3A65; // file_off=0xB2E65
constexpr uint32_t kPrologue_sub_rsp_0x68_000B3CB5 = 0x000B3CB5; // file_off=0xB30B5
constexpr uint32_t kPrologue_sub_rsp_0x48_000B43C5 = 0x000B43C5; // file_off=0xB37C5
constexpr uint32_t kPrologue_enter_vm_000B4494 = 0x000B4494; // file_off=0xB3894
constexpr uint32_t kPrologue_enter_vm_000B44A0 = 0x000B44A0; // file_off=0xB38A0
constexpr uint32_t kPrologue_enter_vm_000B4506 = 0x000B4506; // file_off=0xB3906
constexpr uint32_t kPrologue_call_rax_000B4569 = 0x000B4569; // file_off=0xB3969
constexpr uint32_t kPrologue_enter_vm_000B5D6D = 0x000B5D6D; // file_off=0xB516D
constexpr uint32_t kPrologue_enter_vm_000B5D7F = 0x000B5D7F; // file_off=0xB517F
constexpr uint32_t kPrologue_enter_vm_000B5D90 = 0x000B5D90; // file_off=0xB5190
constexpr uint32_t kPrologue_push_rbx_rsi_000B6B50 = 0x000B6B50; // file_off=0xB5F50
constexpr uint32_t kPrologue_enter_vm_000B788C = 0x000B788C; // file_off=0xB6C8C
constexpr uint32_t kPrologue_enter_vm_000B8804 = 0x000B8804; // file_off=0xB7C04
constexpr uint32_t kPrologue_enter_vm_000B8C5B = 0x000B8C5B; // file_off=0xB805B
constexpr uint32_t kPrologue_enter_vm_000B8C72 = 0x000B8C72; // file_off=0xB8072
constexpr uint32_t kPrologue_enter_vm_000B8E79 = 0x000B8E79; // file_off=0xB8279
constexpr uint32_t kPrologue_enter_vm_000B8EAB = 0x000B8EAB; // file_off=0xB82AB
constexpr uint32_t kPrologue_enter_vm_000B91FC = 0x000B91FC; // file_off=0xB85FC
constexpr uint32_t kPrologue_enter_vm_000B921D = 0x000B921D; // file_off=0xB861D
constexpr uint32_t kPrologue_enter_vm_000B969F = 0x000B969F; // file_off=0xB8A9F
constexpr uint32_t kPrologue_enter_vm_000B96BB = 0x000B96BB; // file_off=0xB8ABB
constexpr uint32_t kPrologue_enter_vm_000B96E7 = 0x000B96E7; // file_off=0xB8AE7
constexpr uint32_t kPrologue_enter_vm_000B96F5 = 0x000B96F5; // file_off=0xB8AF5
constexpr uint32_t kPrologue_enter_vm_000B973B = 0x000B973B; // file_off=0xB8B3B
constexpr uint32_t kPrologue_enter_vm_000B9769 = 0x000B9769; // file_off=0xB8B69
constexpr uint32_t kPrologue_enter_vm_000B9777 = 0x000B9777; // file_off=0xB8B77
constexpr uint32_t kPrologue_enter_vm_000B9797 = 0x000B9797; // file_off=0xB8B97
constexpr uint32_t kPrologue_enter_vm_000B97A5 = 0x000B97A5; // file_off=0xB8BA5
constexpr uint32_t kPrologue_enter_vm_000B9A2E = 0x000B9A2E; // file_off=0xB8E2E
constexpr uint32_t kPrologue_enter_vm_000B9F5D = 0x000B9F5D; // file_off=0xB935D
constexpr uint32_t kPrologue_push_rbx_rsi_000BA020 = 0x000BA020; // file_off=0xB9420
constexpr uint32_t kPrologue_enter_vm_000BA1BE = 0x000BA1BE; // file_off=0xB95BE
constexpr uint32_t kPrologue_enter_vm_000BA1FA = 0x000BA1FA; // file_off=0xB95FA
constexpr uint32_t kPrologue_enter_vm_000BA2AE = 0x000BA2AE; // file_off=0xB96AE
constexpr uint32_t kPrologue_enter_vm_000BA5B1 = 0x000BA5B1; // file_off=0xB99B1
constexpr uint32_t kPrologue_enter_vm_000BA5CF = 0x000BA5CF; // file_off=0xB99CF
constexpr uint32_t kPrologue_enter_vm_000BA858 = 0x000BA858; // file_off=0xB9C58
constexpr uint32_t kPrologue_enter_vm_000BA881 = 0x000BA881; // file_off=0xB9C81
constexpr uint32_t kPrologue_enter_vm_000BA8AE = 0x000BA8AE; // file_off=0xB9CAE
constexpr uint32_t kPrologue_enter_vm_000BA8D7 = 0x000BA8D7; // file_off=0xB9CD7
constexpr uint32_t kPrologue_enter_vm_000BA940 = 0x000BA940; // file_off=0xB9D40
constexpr uint32_t kPrologue_enter_vm_000BAB5B = 0x000BAB5B; // file_off=0xB9F5B
constexpr uint32_t kPrologue_enter_vm_000BAB9C = 0x000BAB9C; // file_off=0xB9F9C
constexpr uint32_t kPrologue_enter_vm_000BACC1 = 0x000BACC1; // file_off=0xBA0C1
constexpr uint32_t kPrologue_enter_vm_000BACE1 = 0x000BACE1; // file_off=0xBA0E1
constexpr uint32_t kPrologue_enter_vm_000BAD01 = 0x000BAD01; // file_off=0xBA101
constexpr uint32_t kPrologue_enter_vm_000BAD21 = 0x000BAD21; // file_off=0xBA121
constexpr uint32_t kPrologue_enter_vm_000BAD41 = 0x000BAD41; // file_off=0xBA141
constexpr uint32_t kPrologue_enter_vm_000BAD61 = 0x000BAD61; // file_off=0xBA161
constexpr uint32_t kPrologue_enter_vm_000BAD81 = 0x000BAD81; // file_off=0xBA181
constexpr uint32_t kPrologue_enter_vm_000BADA1 = 0x000BADA1; // file_off=0xBA1A1
constexpr uint32_t kPrologue_enter_vm_000BADC1 = 0x000BADC1; // file_off=0xBA1C1
constexpr uint32_t kPrologue_enter_vm_000BADE1 = 0x000BADE1; // file_off=0xBA1E1
constexpr uint32_t kPrologue_enter_vm_000BADF0 = 0x000BADF0; // file_off=0xBA1F0
constexpr uint32_t kPrologue_enter_vm_000BAE00 = 0x000BAE00; // file_off=0xBA200
constexpr uint32_t kPrologue_enter_vm_000BAE21 = 0x000BAE21; // file_off=0xBA221
constexpr uint32_t kPrologue_enter_vm_000BAE41 = 0x000BAE41; // file_off=0xBA241
constexpr uint32_t kPrologue_enter_vm_000BAE61 = 0x000BAE61; // file_off=0xBA261
constexpr uint32_t kPrologue_enter_vm_000BAE81 = 0x000BAE81; // file_off=0xBA281
constexpr uint32_t kPrologue_enter_vm_000BAEA1 = 0x000BAEA1; // file_off=0xBA2A1
constexpr uint32_t kPrologue_enter_vm_000BAEC1 = 0x000BAEC1; // file_off=0xBA2C1
constexpr uint32_t kPrologue_enter_vm_000BAEE1 = 0x000BAEE1; // file_off=0xBA2E1
constexpr uint32_t kPrologue_enter_vm_000BAF01 = 0x000BAF01; // file_off=0xBA301
constexpr uint32_t kPrologue_enter_vm_000BAF21 = 0x000BAF21; // file_off=0xBA321
constexpr uint32_t kPrologue_enter_vm_000BAF41 = 0x000BAF41; // file_off=0xBA341
constexpr uint32_t kPrologue_enter_vm_000BAF61 = 0x000BAF61; // file_off=0xBA361
constexpr uint32_t kPrologue_enter_vm_000BAF70 = 0x000BAF70; // file_off=0xBA370
constexpr uint32_t kPrologue_enter_vm_000BAF80 = 0x000BAF80; // file_off=0xBA380
constexpr uint32_t kPrologue_enter_vm_000BAFA1 = 0x000BAFA1; // file_off=0xBA3A1
constexpr uint32_t kPrologue_enter_vm_000BAFC1 = 0x000BAFC1; // file_off=0xBA3C1
constexpr uint32_t kPrologue_enter_vm_000BAFE1 = 0x000BAFE1; // file_off=0xBA3E1
constexpr uint32_t kPrologue_enter_vm_000BB001 = 0x000BB001; // file_off=0xBA401
constexpr uint32_t kPrologue_enter_vm_000BB021 = 0x000BB021; // file_off=0xBA421
constexpr uint32_t kPrologue_enter_vm_000BB041 = 0x000BB041; // file_off=0xBA441
constexpr uint32_t kPrologue_enter_vm_000BB061 = 0x000BB061; // file_off=0xBA461
constexpr uint32_t kPrologue_enter_vm_000BB081 = 0x000BB081; // file_off=0xBA481
constexpr uint32_t kPrologue_enter_vm_000BB0A1 = 0x000BB0A1; // file_off=0xBA4A1
constexpr uint32_t kPrologue_enter_vm_000BB0C1 = 0x000BB0C1; // file_off=0xBA4C1
constexpr uint32_t kPrologue_enter_vm_000BB0D0 = 0x000BB0D0; // file_off=0xBA4D0
constexpr uint32_t kPrologue_enter_vm_000BB0E0 = 0x000BB0E0; // file_off=0xBA4E0
constexpr uint32_t kPrologue_enter_vm_000BB101 = 0x000BB101; // file_off=0xBA501
constexpr uint32_t kPrologue_call_rax_000BB93F = 0x000BB93F; // file_off=0xBAD3F
constexpr uint32_t kPrologue_call_rax_000BC11F = 0x000BC11F; // file_off=0xBB51F
constexpr uint32_t kPrologue_push_rbx_rsi_000BD650 = 0x000BD650; // file_off=0xBCA50
constexpr uint32_t kPrologue_call_rax_000BD6F8 = 0x000BD6F8; // file_off=0xBCAF8
constexpr uint32_t kPrologue_call_rax_000BD83C = 0x000BD83C; // file_off=0xBCC3C
constexpr uint32_t kPrologue_call_rax_000BE186 = 0x000BE186; // file_off=0xBD586
constexpr uint32_t kPrologue_enter_vm_000BE32D = 0x000BE32D; // file_off=0xBD72D
constexpr uint32_t kPrologue_enter_vm_000BE33F = 0x000BE33F; // file_off=0xBD73F
constexpr uint32_t kPrologue_enter_vm_000BE350 = 0x000BE350; // file_off=0xBD750
constexpr uint32_t kPrologue_enter_vm_000BF102 = 0x000BF102; // file_off=0xBE502
constexpr uint32_t kPrologue_call_rax_000BF2A8 = 0x000BF2A8; // file_off=0xBE6A8
constexpr uint32_t kPrologue_push_rbx_rsi_000BF960 = 0x000BF960; // file_off=0xBED60
constexpr uint32_t kPrologue_xor_eax_eax_ret_000BF9B8 = 0x000BF9B8; // file_off=0xBEDB8
constexpr uint32_t kPrologue_mov_eax_1_ret_000BF9C9 = 0x000BF9C9; // file_off=0xBEDC9
constexpr uint32_t kPrologue_enter_vm_000BF9D0 = 0x000BF9D0; // file_off=0xBEDD0
constexpr uint32_t kPrologue_enter_vm_000BF9E0 = 0x000BF9E0; // file_off=0xBEDE0
constexpr uint32_t kPrologue_enter_vm_000BF9F0 = 0x000BF9F0; // file_off=0xBEDF0
constexpr uint32_t kPrologue_enter_vm_000BFA00 = 0x000BFA00; // file_off=0xBEE00
constexpr uint32_t kPrologue_enter_vm_000BFA10 = 0x000BFA10; // file_off=0xBEE10
constexpr uint32_t kPrologue_enter_vm_000BFA20 = 0x000BFA20; // file_off=0xBEE20
constexpr uint32_t kPrologue_enter_vm_000BFA30 = 0x000BFA30; // file_off=0xBEE30
constexpr uint32_t kPrologue_enter_vm_000BFA40 = 0x000BFA40; // file_off=0xBEE40
constexpr uint32_t kPrologue_enter_vm_000BFA50 = 0x000BFA50; // file_off=0xBEE50
constexpr uint32_t kPrologue_enter_vm_000BFA60 = 0x000BFA60; // file_off=0xBEE60
constexpr uint32_t kPrologue_enter_vm_000BFA70 = 0x000BFA70; // file_off=0xBEE70
constexpr uint32_t kPrologue_enter_vm_000BFA80 = 0x000BFA80; // file_off=0xBEE80
constexpr uint32_t kPrologue_enter_vm_000BFA90 = 0x000BFA90; // file_off=0xBEE90
constexpr uint32_t kPrologue_mov_eax_1_ret_000BFD2B = 0x000BFD2B; // file_off=0xBF12B
constexpr uint32_t kPrologue_mov_eax_1_ret_000BFD53 = 0x000BFD53; // file_off=0xBF153
constexpr uint32_t kPrologue_mov_eax_1_ret_000BFD83 = 0x000BFD83; // file_off=0xBF183
constexpr uint32_t kPrologue_call_rax_000BFE9F = 0x000BFE9F; // file_off=0xBF29F
constexpr uint32_t kPrologue_push_rbx_rsi_000BFED5 = 0x000BFED5; // file_off=0xBF2D5
constexpr uint32_t kPrologue_call_rax_000C0005 = 0x000C0005; // file_off=0xBF405
constexpr uint32_t kPrologue_call_rax_000C010C = 0x000C010C; // file_off=0xBF50C
constexpr uint32_t kPrologue_call_rax_000C0205 = 0x000C0205; // file_off=0xBF605
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C0D0C = 0x000C0D0C; // file_off=0xC010C
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C0E45 = 0x000C0E45; // file_off=0xC0245
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C1120 = 0x000C1120; // file_off=0xC0520
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C123D = 0x000C123D; // file_off=0xC063D
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C1294 = 0x000C1294; // file_off=0xC0694
constexpr uint32_t kPrologue_mov_eax_1_ret_000C12AC = 0x000C12AC; // file_off=0xC06AC
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C12B2 = 0x000C12B2; // file_off=0xC06B2
constexpr uint32_t kPrologue_push_rbx_rsi_000C12C0 = 0x000C12C0; // file_off=0xC06C0
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C15FF = 0x000C15FF; // file_off=0xC09FF
constexpr uint32_t kPrologue_mov_eax_1_ret_000C160E = 0x000C160E; // file_off=0xC0A0E
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C1915 = 0x000C1915; // file_off=0xC0D15
constexpr uint32_t kPrologue_push_rbx_rsi_000C1BA0 = 0x000C1BA0; // file_off=0xC0FA0
constexpr uint32_t kPrologue_push_rbx_rsi_000C1C50 = 0x000C1C50; // file_off=0xC1050
constexpr uint32_t kPrologue_push_rbx_rsi_000C1CF0 = 0x000C1CF0; // file_off=0xC10F0
constexpr uint32_t kPrologue_push_rbx_rsi_000C1D90 = 0x000C1D90; // file_off=0xC1190
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C27F5 = 0x000C27F5; // file_off=0xC1BF5
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C2805 = 0x000C2805; // file_off=0xC1C05
constexpr uint32_t kPrologue_enter_vm_000C2878 = 0x000C2878; // file_off=0xC1C78
constexpr uint32_t kPrologue_enter_vm_000C28BD = 0x000C28BD; // file_off=0xC1CBD
constexpr uint32_t kPrologue_enter_vm_000C2BB2 = 0x000C2BB2; // file_off=0xC1FB2
constexpr uint32_t kPrologue_enter_vm_000C2BEE = 0x000C2BEE; // file_off=0xC1FEE
constexpr uint32_t kPrologue_enter_vm_000C3158 = 0x000C3158; // file_off=0xC2558
constexpr uint32_t kPrologue_enter_vm_000C319D = 0x000C319D; // file_off=0xC259D
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C36B0 = 0x000C36B0; // file_off=0xC2AB0
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C37D0 = 0x000C37D0; // file_off=0xC2BD0
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C37F5 = 0x000C37F5; // file_off=0xC2BF5
constexpr uint32_t kPrologue_push_rbx_rsi_000C4310 = 0x000C4310; // file_off=0xC3710
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C4596 = 0x000C4596; // file_off=0xC3996
constexpr uint32_t kPrologue_mov_eax_1_ret_000C459C = 0x000C459C; // file_off=0xC399C
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C45B7 = 0x000C45B7; // file_off=0xC39B7
constexpr uint32_t kPrologue_mov_eax_1_ret_000C45BE = 0x000C45BE; // file_off=0xC39BE
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C45D6 = 0x000C45D6; // file_off=0xC39D6
constexpr uint32_t kPrologue_mov_eax_1_ret_000C45DC = 0x000C45DC; // file_off=0xC39DC
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C45F7 = 0x000C45F7; // file_off=0xC39F7
constexpr uint32_t kPrologue_mov_eax_1_ret_000C45FE = 0x000C45FE; // file_off=0xC39FE
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C4616 = 0x000C4616; // file_off=0xC3A16
constexpr uint32_t kPrologue_mov_eax_1_ret_000C461C = 0x000C461C; // file_off=0xC3A1C
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C4636 = 0x000C4636; // file_off=0xC3A36
constexpr uint32_t kPrologue_mov_eax_1_ret_000C463C = 0x000C463C; // file_off=0xC3A3C
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C4657 = 0x000C4657; // file_off=0xC3A57
constexpr uint32_t kPrologue_mov_eax_1_ret_000C465E = 0x000C465E; // file_off=0xC3A5E
constexpr uint32_t kPrologue_call_rax_000C46B2 = 0x000C46B2; // file_off=0xC3AB2
constexpr uint32_t kPrologue_call_rax_000C4CD7 = 0x000C4CD7; // file_off=0xC40D7
constexpr uint32_t kPrologue_call_rax_000C54E1 = 0x000C54E1; // file_off=0xC48E1
constexpr uint32_t kPrologue_call_rax_000C5585 = 0x000C5585; // file_off=0xC4985
constexpr uint32_t kPrologue_mov_eax_1_ret_000C55D4 = 0x000C55D4; // file_off=0xC49D4
constexpr uint32_t kPrologue_call_rax_000C5605 = 0x000C5605; // file_off=0xC4A05
constexpr uint32_t kPrologue_call_rax_000C5861 = 0x000C5861; // file_off=0xC4C61
constexpr uint32_t kPrologue_call_rax_000C58E1 = 0x000C58E1; // file_off=0xC4CE1
constexpr uint32_t kPrologue_call_rax_000C598A = 0x000C598A; // file_off=0xC4D8A
constexpr uint32_t kPrologue_enter_vm_000C6040 = 0x000C6040; // file_off=0xC5440
constexpr uint32_t kPrologue_push_rbx_rsi_000C6320 = 0x000C6320; // file_off=0xC5720
constexpr uint32_t kPrologue_call_rax_000C6921 = 0x000C6921; // file_off=0xC5D21
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C6C50 = 0x000C6C50; // file_off=0xC6050
constexpr uint32_t kPrologue_call_rax_000C72CA = 0x000C72CA; // file_off=0xC66CA
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C73CD = 0x000C73CD; // file_off=0xC67CD
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C76AA = 0x000C76AA; // file_off=0xC6AAA
constexpr uint32_t kPrologue_xor_eax_eax_ret_000C784D = 0x000C784D; // file_off=0xC6C4D
constexpr uint32_t kPrologue_call_rax_000C82EA = 0x000C82EA; // file_off=0xC76EA
constexpr uint32_t kPrologue_call_rax_000C8661 = 0x000C8661; // file_off=0xC7A61
constexpr uint32_t kPrologue_call_rax_000C86F9 = 0x000C86F9; // file_off=0xC7AF9
constexpr uint32_t kPrologue_push_rbx_rsi_000C88F0 = 0x000C88F0; // file_off=0xC7CF0
constexpr uint32_t kPrologue_push_rbx_rsi_000C8990 = 0x000C8990; // file_off=0xC7D90
constexpr uint32_t kPrologue_enter_vm_000C89AA = 0x000C89AA; // file_off=0xC7DAA
constexpr uint32_t kPrologue_push_rbx_rsi_000C8F60 = 0x000C8F60; // file_off=0xC8360
constexpr uint32_t kPrologue_enter_vm_000C9534 = 0x000C9534; // file_off=0xC8934
constexpr uint32_t kPrologue_enter_vm_000C9550 = 0x000C9550; // file_off=0xC8950
constexpr uint32_t kPrologue_enter_vm_000C9564 = 0x000C9564; // file_off=0xC8964
constexpr uint32_t kPrologue_enter_vm_000C9574 = 0x000C9574; // file_off=0xC8974
constexpr uint32_t kPrologue_enter_vm_000C9580 = 0x000C9580; // file_off=0xC8980
constexpr uint32_t kPrologue_enter_vm_000C96BB = 0x000C96BB; // file_off=0xC8ABB
constexpr uint32_t kPrologue_call_rax_000CADB1 = 0x000CADB1; // file_off=0xCA1B1
constexpr uint32_t kPrologue_call_rax_000CBCC4 = 0x000CBCC4; // file_off=0xCB0C4
constexpr uint32_t kPrologue_push_rbx_rsi_000CBD50 = 0x000CBD50; // file_off=0xCB150
constexpr uint32_t kPrologue_enter_vm_000CBDD8 = 0x000CBDD8; // file_off=0xCB1D8
constexpr uint32_t kPrologue_enter_vm_000CBDFB = 0x000CBDFB; // file_off=0xCB1FB
constexpr uint32_t kPrologue_enter_vm_000CBE1E = 0x000CBE1E; // file_off=0xCB21E
constexpr uint32_t kPrologue_enter_vm_000CBE2C = 0x000CBE2C; // file_off=0xCB22C
constexpr uint32_t kPrologue_call_rax_000CC0A4 = 0x000CC0A4; // file_off=0xCB4A4
constexpr uint32_t kPrologue_call_rax_000CC71A = 0x000CC71A; // file_off=0xCBB1A
constexpr uint32_t kPrologue_call_rax_000CCC91 = 0x000CCC91; // file_off=0xCC091
constexpr uint32_t kPrologue_enter_vm_000CD5D9 = 0x000CD5D9; // file_off=0xCC9D9
constexpr uint32_t kPrologue_push_rbx_rsi_000CE1F0 = 0x000CE1F0; // file_off=0xCD5F0
constexpr uint32_t kPrologue_push_rbx_rsi_000CE5C0 = 0x000CE5C0; // file_off=0xCD9C0
constexpr uint32_t kPrologue_push_rbx_rsi_000CF070 = 0x000CF070; // file_off=0xCE470
constexpr uint32_t kPrologue_xor_eax_eax_ret_000CF2A0 = 0x000CF2A0; // file_off=0xCE6A0
constexpr uint32_t kPrologue_xor_eax_eax_ret_000CF339 = 0x000CF339; // file_off=0xCE739
constexpr uint32_t kPrologue_mov_eax_1_ret_000CF517 = 0x000CF517; // file_off=0xCE917
constexpr uint32_t kPrologue_xor_eax_eax_ret_000CF51D = 0x000CF51D; // file_off=0xCE91D
constexpr uint32_t kPrologue_xor_eax_eax_ret_000CF968 = 0x000CF968; // file_off=0xCED68
constexpr uint32_t kPrologue_mov_eax_1_ret_000CF96B = 0x000CF96B; // file_off=0xCED6B
constexpr uint32_t kPrologue_push_rbx_rsi_000D1680 = 0x000D1680; // file_off=0xD0A80
constexpr uint32_t kPrologue_xor_eax_eax_ret_000D19E8 = 0x000D19E8; // file_off=0xD0DE8
constexpr uint32_t kPrologue_xor_eax_eax_ret_000D1A3A = 0x000D1A3A; // file_off=0xD0E3A
constexpr uint32_t kPrologue_enter_vm_000D1F7D = 0x000D1F7D; // file_off=0xD137D
constexpr uint32_t kPrologue_push_rbx_rsi_000D1FC0 = 0x000D1FC0; // file_off=0xD13C0
constexpr uint32_t kPrologue_enter_vm_000D2485 = 0x000D2485; // file_off=0xD1885
constexpr uint32_t kPrologue_enter_vm_000D25C0 = 0x000D25C0; // file_off=0xD19C0
constexpr uint32_t kPrologue_enter_vm_000D25CF = 0x000D25CF; // file_off=0xD19CF
constexpr uint32_t kPrologue_push_rbx_rsi_000D2680 = 0x000D2680; // file_off=0xD1A80
constexpr uint32_t kPrologue_enter_vm_000D26E9 = 0x000D26E9; // file_off=0xD1AE9
constexpr uint32_t kPrologue_enter_vm_000D273C = 0x000D273C; // file_off=0xD1B3C
constexpr uint32_t kPrologue_enter_vm_000D2745 = 0x000D2745; // file_off=0xD1B45
constexpr uint32_t kPrologue_enter_vm_000D27A5 = 0x000D27A5; // file_off=0xD1BA5
constexpr uint32_t kPrologue_enter_vm_000D2811 = 0x000D2811; // file_off=0xD1C11
constexpr uint32_t kPrologue_enter_vm_000D2888 = 0x000D2888; // file_off=0xD1C88
constexpr uint32_t kPrologue_enter_vm_000D28E8 = 0x000D28E8; // file_off=0xD1CE8
constexpr uint32_t kPrologue_enter_vm_000D2948 = 0x000D2948; // file_off=0xD1D48
constexpr uint32_t kPrologue_enter_vm_000D2C6D = 0x000D2C6D; // file_off=0xD206D
constexpr uint32_t kPrologue_enter_vm_000D2C7F = 0x000D2C7F; // file_off=0xD207F
constexpr uint32_t kPrologue_enter_vm_000D2C90 = 0x000D2C90; // file_off=0xD2090
constexpr uint32_t kPrologue_enter_vm_000D3800 = 0x000D3800; // file_off=0xD2C00
constexpr uint32_t kPrologue_xor_eax_eax_ret_000D3BCA = 0x000D3BCA; // file_off=0xD2FCA
constexpr uint32_t kPrologue_push_rbx_rsi_000D3DA0 = 0x000D3DA0; // file_off=0xD31A0
constexpr uint32_t kPrologue_mov_eax_1_ret_000D4020 = 0x000D4020; // file_off=0xD3420
constexpr uint32_t kPrologue_push_rbx_rsi_000D49C0 = 0x000D49C0; // file_off=0xD3DC0
constexpr uint32_t kPrologue_push_rbx_rsi_000D4D30 = 0x000D4D30; // file_off=0xD4130
constexpr uint32_t kPrologue_enter_vm_000D5140 = 0x000D5140; // file_off=0xD4540
constexpr uint32_t kPrologue_enter_vm_000D5156 = 0x000D5156; // file_off=0xD4556
constexpr uint32_t kPrologue_call_rax_000D58F6 = 0x000D58F6; // file_off=0xD4CF6
constexpr uint32_t kPrologue_call_rax_000D5968 = 0x000D5968; // file_off=0xD4D68
constexpr uint32_t kPrologue_mov_eax_1_ret_000D5B94 = 0x000D5B94; // file_off=0xD4F94
constexpr uint32_t kPrologue_enter_vm_000D700F = 0x000D700F; // file_off=0xD640F
constexpr uint32_t kPrologue_enter_vm_000D7334 = 0x000D7334; // file_off=0xD6734
constexpr uint32_t kPrologue_enter_vm_000D73FB = 0x000D73FB; // file_off=0xD67FB
constexpr uint32_t kPrologue_enter_vm_000D74E0 = 0x000D74E0; // file_off=0xD68E0
constexpr uint32_t kPrologue_enter_vm_000D7510 = 0x000D7510; // file_off=0xD6910
constexpr uint32_t kPrologue_enter_vm_000D79DD = 0x000D79DD; // file_off=0xD6DDD
constexpr uint32_t kPrologue_enter_vm_000D79EF = 0x000D79EF; // file_off=0xD6DEF
constexpr uint32_t kPrologue_enter_vm_000D7A00 = 0x000D7A00; // file_off=0xD6E00
constexpr uint32_t kPrologue_mov_eax_1_ret_000D7ADA = 0x000D7ADA; // file_off=0xD6EDA
constexpr uint32_t kPrologue_call_rax_000D80A8 = 0x000D80A8; // file_off=0xD74A8
constexpr uint32_t kPrologue_call_rax_000D91CD = 0x000D91CD; // file_off=0xD85CD
constexpr uint32_t kPrologue_call_rax_000D92B2 = 0x000D92B2; // file_off=0xD86B2
constexpr uint32_t kPrologue_enter_vm_000D92D2 = 0x000D92D2; // file_off=0xD86D2
constexpr uint32_t kPrologue_call_rax_000D92F9 = 0x000D92F9; // file_off=0xD86F9
constexpr uint32_t kPrologue_enter_vm_000D9318 = 0x000D9318; // file_off=0xD8718
constexpr uint32_t kPrologue_push_rbx_rsi_000D9E00 = 0x000D9E00; // file_off=0xD9200
constexpr uint32_t kPrologue_call_rax_000DA3D3 = 0x000DA3D3; // file_off=0xD97D3
constexpr uint32_t kPrologue_enter_vm_000DA95F = 0x000DA95F; // file_off=0xD9D5F
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DAAF6 = 0x000DAAF6; // file_off=0xD9EF6
constexpr uint32_t kPrologue_mov_eax_1_ret_000DAB6E = 0x000DAB6E; // file_off=0xD9F6E
constexpr uint32_t kPrologue_enter_vm_000DB1DB = 0x000DB1DB; // file_off=0xDA5DB
constexpr uint32_t kPrologue_call_rax_000DB202 = 0x000DB202; // file_off=0xDA602
constexpr uint32_t kPrologue_call_rax_000DB40F = 0x000DB40F; // file_off=0xDA80F
constexpr uint32_t kPrologue_call_rax_000DB4A1 = 0x000DB4A1; // file_off=0xDA8A1
constexpr uint32_t kPrologue_call_rax_000DB545 = 0x000DB545; // file_off=0xDA945
constexpr uint32_t kPrologue_call_rax_000DB5B5 = 0x000DB5B5; // file_off=0xDA9B5
constexpr uint32_t kPrologue_mov_eax_1_ret_000DB604 = 0x000DB604; // file_off=0xDAA04
constexpr uint32_t kPrologue_push_rbx_rsi_000DB630 = 0x000DB630; // file_off=0xDAA30
constexpr uint32_t kPrologue_push_rbx_rsi_000DBC80 = 0x000DBC80; // file_off=0xDB080
constexpr uint32_t kPrologue_mov_eax_1_ret_000DC1F9 = 0x000DC1F9; // file_off=0xDB5F9
constexpr uint32_t kPrologue_push_rbx_rsi_000DC310 = 0x000DC310; // file_off=0xDB710
constexpr uint32_t kPrologue_mov_eax_1_ret_000DCBA9 = 0x000DCBA9; // file_off=0xDBFA9
constexpr uint32_t kPrologue_mov_eax_1_ret_000DCD69 = 0x000DCD69; // file_off=0xDC169
constexpr uint32_t kPrologue_mov_eax_1_ret_000DCDF9 = 0x000DCDF9; // file_off=0xDC1F9
constexpr uint32_t kPrologue_mov_eax_1_ret_000DD42C = 0x000DD42C; // file_off=0xDC82C
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DD432 = 0x000DD432; // file_off=0xDC832
constexpr uint32_t kPrologue_mov_eax_1_ret_000DD6F1 = 0x000DD6F1; // file_off=0xDCAF1
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DD6F7 = 0x000DD6F7; // file_off=0xDCAF7
constexpr uint32_t kPrologue_mov_eax_1_ret_000DD799 = 0x000DD799; // file_off=0xDCB99
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DD7F5 = 0x000DD7F5; // file_off=0xDCBF5
constexpr uint32_t kPrologue_push_rbx_rsi_000DD980 = 0x000DD980; // file_off=0xDCD80
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DDB87 = 0x000DDB87; // file_off=0xDCF87
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DDBBA = 0x000DDBBA; // file_off=0xDCFBA
constexpr uint32_t kPrologue_mov_eax_1_ret_000DDBDE = 0x000DDBDE; // file_off=0xDCFDE
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DDBE4 = 0x000DDBE4; // file_off=0xDCFE4
constexpr uint32_t kPrologue_mov_eax_1_ret_000DDC05 = 0x000DDC05; // file_off=0xDD005
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DDC0B = 0x000DDC0B; // file_off=0xDD00B
constexpr uint32_t kPrologue_mov_eax_1_ret_000DDC37 = 0x000DDC37; // file_off=0xDD037
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DDC3D = 0x000DDC3D; // file_off=0xDD03D
constexpr uint32_t kPrologue_mov_eax_1_ret_000DDE55 = 0x000DDE55; // file_off=0xDD255
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DDE5B = 0x000DDE5B; // file_off=0xDD25B
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DE143 = 0x000DE143; // file_off=0xDD543
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DE307 = 0x000DE307; // file_off=0xDD707
constexpr uint32_t kPrologue_enter_vm_000DE320 = 0x000DE320; // file_off=0xDD720
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DE628 = 0x000DE628; // file_off=0xDDA28
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DE67A = 0x000DE67A; // file_off=0xDDA7A
constexpr uint32_t kPrologue_push_rbx_rsi_000DEE40 = 0x000DEE40; // file_off=0xDE240
constexpr uint32_t kPrologue_enter_vm_000DEEDA = 0x000DEEDA; // file_off=0xDE2DA
constexpr uint32_t kPrologue_enter_vm_000DEEFA = 0x000DEEFA; // file_off=0xDE2FA
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DEF39 = 0x000DEF39; // file_off=0xDE339
constexpr uint32_t kPrologue_call_rax_000DF19C = 0x000DF19C; // file_off=0xDE59C
constexpr uint32_t kPrologue_call_rax_000DF343 = 0x000DF343; // file_off=0xDE743
constexpr uint32_t kPrologue_call_rax_000DF4FF = 0x000DF4FF; // file_off=0xDE8FF
constexpr uint32_t kPrologue_call_rax_000DF606 = 0x000DF606; // file_off=0xDEA06
constexpr uint32_t kPrologue_call_rax_000DF7EC = 0x000DF7EC; // file_off=0xDEBEC
constexpr uint32_t kPrologue_call_rax_000DF9F5 = 0x000DF9F5; // file_off=0xDEDF5
constexpr uint32_t kPrologue_call_rax_000DFD4F = 0x000DFD4F; // file_off=0xDF14F
constexpr uint32_t kPrologue_xor_eax_eax_ret_000DFDD5 = 0x000DFDD5; // file_off=0xDF1D5
constexpr uint32_t kPrologue_call_rax_000DFF80 = 0x000DFF80; // file_off=0xDF380
constexpr uint32_t kPrologue_call_rax_000E0476 = 0x000E0476; // file_off=0xDF876
constexpr uint32_t kPrologue_call_rax_000E0657 = 0x000E0657; // file_off=0xDFA57
constexpr uint32_t kPrologue_enter_vm_000E0B62 = 0x000E0B62; // file_off=0xDFF62
constexpr uint32_t kPrologue_push_rbx_rsi_000E11B0 = 0x000E11B0; // file_off=0xE05B0
constexpr uint32_t kPrologue_enter_vm_000E1B0E = 0x000E1B0E; // file_off=0xE0F0E
constexpr uint32_t kPrologue_enter_vm_000E1B2A = 0x000E1B2A; // file_off=0xE0F2A
constexpr uint32_t kPrologue_push_rbx_rsi_000E47A0 = 0x000E47A0; // file_off=0xE3BA0
constexpr uint32_t kPrologue_enter_vm_000E4EE0 = 0x000E4EE0; // file_off=0xE42E0
constexpr uint32_t kPrologue_enter_vm_000E4F10 = 0x000E4F10; // file_off=0xE4310
constexpr uint32_t kPrologue_enter_vm_000E4F40 = 0x000E4F40; // file_off=0xE4340
constexpr uint32_t kPrologue_enter_vm_000E4F50 = 0x000E4F50; // file_off=0xE4350
constexpr uint32_t kPrologue_enter_vm_000E4F60 = 0x000E4F60; // file_off=0xE4360
constexpr uint32_t kPrologue_enter_vm_000E4F70 = 0x000E4F70; // file_off=0xE4370
constexpr uint32_t kPrologue_enter_vm_000E4FA0 = 0x000E4FA0; // file_off=0xE43A0
constexpr uint32_t kPrologue_enter_vm_000E4FD0 = 0x000E4FD0; // file_off=0xE43D0
constexpr uint32_t kPrologue_enter_vm_000E5000 = 0x000E5000; // file_off=0xE4400
constexpr uint32_t kPrologue_enter_vm_000E5030 = 0x000E5030; // file_off=0xE4430
constexpr uint32_t kPrologue_enter_vm_000E5040 = 0x000E5040; // file_off=0xE4440
constexpr uint32_t kPrologue_enter_vm_000E5050 = 0x000E5050; // file_off=0xE4450
constexpr uint32_t kPrologue_enter_vm_000E5080 = 0x000E5080; // file_off=0xE4480
constexpr uint32_t kPrologue_enter_vm_000E5090 = 0x000E5090; // file_off=0xE4490
constexpr uint32_t kPrologue_enter_vm_000E50A0 = 0x000E50A0; // file_off=0xE44A0
constexpr uint32_t kPrologue_enter_vm_000E50F0 = 0x000E50F0; // file_off=0xE44F0
constexpr uint32_t kPrologue_enter_vm_000E5120 = 0x000E5120; // file_off=0xE4520
constexpr uint32_t kPrologue_enter_vm_000E5130 = 0x000E5130; // file_off=0xE4530
constexpr uint32_t kPrologue_call_rax_000E6632 = 0x000E6632; // file_off=0xE5A32
constexpr uint32_t kPrologue_enter_vm_000E66A0 = 0x000E66A0; // file_off=0xE5AA0
constexpr uint32_t kPrologue_mov_eax_1_ret_000E6787 = 0x000E6787; // file_off=0xE5B87
constexpr uint32_t kPrologue_mov_eax_1_ret_000E6794 = 0x000E6794; // file_off=0xE5B94
constexpr uint32_t kPrologue_mov_eax_1_ret_000E67A4 = 0x000E67A4; // file_off=0xE5BA4
constexpr uint32_t kPrologue_mov_eax_1_ret_000E67D4 = 0x000E67D4; // file_off=0xE5BD4
constexpr uint32_t kPrologue_mov_eax_1_ret_000E67E6 = 0x000E67E6; // file_off=0xE5BE6
constexpr uint32_t kPrologue_mov_eax_1_ret_000E6854 = 0x000E6854; // file_off=0xE5C54
constexpr uint32_t kPrologue_call_rax_000E6AAD = 0x000E6AAD; // file_off=0xE5EAD
constexpr uint32_t kPrologue_push_rbx_rsi_000E6C90 = 0x000E6C90; // file_off=0xE6090
constexpr uint32_t kPrologue_push_rbx_rsi_000E6D50 = 0x000E6D50; // file_off=0xE6150
constexpr uint32_t kPrologue_mov_eax_1_ret_000E7099 = 0x000E7099; // file_off=0xE6499
constexpr uint32_t kPrologue_push_rbx_rsi_000E71D0 = 0x000E71D0; // file_off=0xE65D0
constexpr uint32_t kPrologue_enter_vm_000E7228 = 0x000E7228; // file_off=0xE6628
constexpr uint32_t kPrologue_enter_vm_000E727D = 0x000E727D; // file_off=0xE667D
constexpr uint32_t kPrologue_enter_vm_000E72D5 = 0x000E72D5; // file_off=0xE66D5
constexpr uint32_t kPrologue_enter_vm_000E7347 = 0x000E7347; // file_off=0xE6747
constexpr uint32_t kPrologue_enter_vm_000E736B = 0x000E736B; // file_off=0xE676B
constexpr uint32_t kPrologue_mov_eax_1_ret_000E74B4 = 0x000E74B4; // file_off=0xE68B4
constexpr uint32_t kPrologue_xor_eax_eax_ret_000E74BA = 0x000E74BA; // file_off=0xE68BA
constexpr uint32_t kPrologue_push_rbx_rsi_000E74C9 = 0x000E74C9; // file_off=0xE68C9
constexpr uint32_t kPrologue_xor_eax_eax_ret_000E7BAC = 0x000E7BAC; // file_off=0xE6FAC
constexpr uint32_t kPrologue_push_rbx_rsi_000E8480 = 0x000E8480; // file_off=0xE7880
constexpr uint32_t kPrologue_push_regs_000E8580 = 0x000E8580; // file_off=0xE7980
constexpr uint32_t kPrologue_enter_vm_000E8A1E = 0x000E8A1E; // file_off=0xE7E1E
constexpr uint32_t kPrologue_call_rax_000E8B78 = 0x000E8B78; // file_off=0xE7F78
constexpr uint32_t kPrologue_call_rax_000E8C60 = 0x000E8C60; // file_off=0xE8060
constexpr uint32_t kPrologue_call_rax_000E8C74 = 0x000E8C74; // file_off=0xE8074
constexpr uint32_t kPrologue_call_rax_000E90E9 = 0x000E90E9; // file_off=0xE84E9
constexpr uint32_t kPrologue_push_rbx_rsi_000E9320 = 0x000E9320; // file_off=0xE8720
constexpr uint32_t kPrologue_push_rbx_rsi_000E9400 = 0x000E9400; // file_off=0xE8800
constexpr uint32_t kPrologue_push_rbx_rsi_000E9670 = 0x000E9670; // file_off=0xE8A70
constexpr uint32_t kPrologue_enter_vm_000EB0FB = 0x000EB0FB; // file_off=0xEA4FB
constexpr uint32_t kPrologue_push_rbx_rsi_000EB2C0 = 0x000EB2C0; // file_off=0xEA6C0
constexpr uint32_t kPrologue_call_rax_000EBAC7 = 0x000EBAC7; // file_off=0xEAEC7
constexpr uint32_t kPrologue_mov_eax_1_ret_000EC004 = 0x000EC004; // file_off=0xEB404
constexpr uint32_t kPrologue_enter_vm_000EC0A4 = 0x000EC0A4; // file_off=0xEB4A4
constexpr uint32_t kPrologue_enter_vm_000EC0B7 = 0x000EC0B7; // file_off=0xEB4B7
constexpr uint32_t kPrologue_push_rbx_rsi_000ECE50 = 0x000ECE50; // file_off=0xEC250
constexpr uint32_t kPrologue_push_rbx_rsi_000ECED0 = 0x000ECED0; // file_off=0xEC2D0
constexpr uint32_t kPrologue_push_rbx_rsi_000EE020 = 0x000EE020; // file_off=0xED420
constexpr uint32_t kPrologue_push_rbx_rsi_000EE170 = 0x000EE170; // file_off=0xED570
constexpr uint32_t kPrologue_push_rbx_rsi_000EE970 = 0x000EE970; // file_off=0xEDD70
constexpr uint32_t kPrologue_enter_vm_000EF050 = 0x000EF050; // file_off=0xEE450
constexpr uint32_t kPrologue_enter_vm_000EF176 = 0x000EF176; // file_off=0xEE576
constexpr uint32_t kPrologue_enter_vm_000EF188 = 0x000EF188; // file_off=0xEE588
constexpr uint32_t kPrologue_call_rax_000EF42C = 0x000EF42C; // file_off=0xEE82C
constexpr uint32_t kPrologue_enter_vm_000EFDE7 = 0x000EFDE7; // file_off=0xEF1E7
constexpr uint32_t kPrologue_xor_eax_eax_ret_000F0FD2 = 0x000F0FD2; // file_off=0xF03D2
constexpr uint32_t kPrologue_mov_eax_1_ret_000F0FD5 = 0x000F0FD5; // file_off=0xF03D5
constexpr uint32_t kPrologue_push_rbx_rsi_000F11E0 = 0x000F11E0; // file_off=0xF05E0
constexpr uint32_t kPrologue_push_rbx_rsi_000F2610 = 0x000F2610; // file_off=0xF1A10
constexpr uint32_t kPrologue_mov_eax_1_ret_000F5760 = 0x000F5760; // file_off=0xF4B60
constexpr uint32_t kPrologue_xor_eax_eax_ret_000F5787 = 0x000F5787; // file_off=0xF4B87
constexpr uint32_t kPrologue_push_rbx_rsi_000F5FA0 = 0x000F5FA0; // file_off=0xF53A0
constexpr uint32_t kPrologue_enter_vm_000F64E3 = 0x000F64E3; // file_off=0xF58E3
constexpr uint32_t kPrologue_enter_vm_000F653D = 0x000F653D; // file_off=0xF593D
constexpr uint32_t kPrologue_mov_eax_1_ret_000F676F = 0x000F676F; // file_off=0xF5B6F
constexpr uint32_t kPrologue_push_rbx_rsi_000F6920 = 0x000F6920; // file_off=0xF5D20
constexpr uint32_t kPrologue_xor_eax_eax_ret_000F6A15 = 0x000F6A15; // file_off=0xF5E15
constexpr uint32_t kPrologue_enter_vm_000F6A2A = 0x000F6A2A; // file_off=0xF5E2A
constexpr uint32_t kPrologue_enter_vm_000F6A34 = 0x000F6A34; // file_off=0xF5E34
constexpr uint32_t kPrologue_mov_eax_1_ret_000F6A3F = 0x000F6A3F; // file_off=0xF5E3F
constexpr uint32_t kPrologue_xor_eax_eax_ret_000F6A55 = 0x000F6A55; // file_off=0xF5E55
constexpr uint32_t kPrologue_enter_vm_000F6A6A = 0x000F6A6A; // file_off=0xF5E6A
constexpr uint32_t kPrologue_enter_vm_000F6A74 = 0x000F6A74; // file_off=0xF5E74
constexpr uint32_t kPrologue_mov_eax_1_ret_000F6A7F = 0x000F6A7F; // file_off=0xF5E7F
constexpr uint32_t kPrologue_push_rbx_rsi_000F6B10 = 0x000F6B10; // file_off=0xF5F10
constexpr uint32_t kPrologue_xor_eax_eax_ret_000F7DA8 = 0x000F7DA8; // file_off=0xF71A8
constexpr uint32_t kPrologue_enter_vm_000F7DC0 = 0x000F7DC0; // file_off=0xF71C0
constexpr uint32_t kPrologue_push_rbx_rsi_000F88F0 = 0x000F88F0; // file_off=0xF7CF0
constexpr uint32_t kPrologue_push_rbx_rsi_000F8AC0 = 0x000F8AC0; // file_off=0xF7EC0
constexpr uint32_t kPrologue_enter_vm_000F8B74 = 0x000F8B74; // file_off=0xF7F74
constexpr uint32_t kPrologue_xor_eax_eax_ret_000F8DB4 = 0x000F8DB4; // file_off=0xF81B4
constexpr uint32_t kPrologue_enter_vm_000F8F60 = 0x000F8F60; // file_off=0xF8360
constexpr uint32_t kPrologue_call_rax_000F92BE = 0x000F92BE; // file_off=0xF86BE
constexpr uint32_t kPrologue_enter_vm_000FA040 = 0x000FA040; // file_off=0xF9440
constexpr uint32_t kPrologue_call_rax_000FA550 = 0x000FA550; // file_off=0xF9950
constexpr uint32_t kPrologue_call_rax_000FA563 = 0x000FA563; // file_off=0xF9963
constexpr uint32_t kPrologue_call_rax_000FA81D = 0x000FA81D; // file_off=0xF9C1D
constexpr uint32_t kPrologue_xor_eax_eax_ret_000FAE23 = 0x000FAE23; // file_off=0xFA223
constexpr uint32_t kPrologue_call_rax_000FC328 = 0x000FC328; // file_off=0xFB728
constexpr uint32_t kPrologue_call_rax_000FC57B = 0x000FC57B; // file_off=0xFB97B
constexpr uint32_t kPrologue_call_rax_000FC809 = 0x000FC809; // file_off=0xFBC09
constexpr uint32_t kPrologue_call_rax_000FD62A = 0x000FD62A; // file_off=0xFCA2A
constexpr uint32_t kPrologue_call_rax_000FDF75 = 0x000FDF75; // file_off=0xFD375
constexpr uint32_t kPrologue_call_rax_000FE013 = 0x000FE013; // file_off=0xFD413
constexpr uint32_t kPrologue_call_rax_000FE45C = 0x000FE45C; // file_off=0xFD85C
constexpr uint32_t kPrologue_call_rax_000FE5D7 = 0x000FE5D7; // file_off=0xFD9D7
constexpr uint32_t kPrologue_call_rax_000FE73A = 0x000FE73A; // file_off=0xFDB3A
constexpr uint32_t kPrologue_call_rax_000FEA31 = 0x000FEA31; // file_off=0xFDE31
constexpr uint32_t kPrologue_call_rax_000FEAC1 = 0x000FEAC1; // file_off=0xFDEC1
constexpr uint32_t kPrologue_enter_vm_000FEB94 = 0x000FEB94; // file_off=0xFDF94
constexpr uint32_t kPrologue_enter_vm_000FFE2A = 0x000FFE2A; // file_off=0xFF22A
constexpr uint32_t kPrologue_call_rax_001002F3 = 0x001002F3; // file_off=0xFF6F3
constexpr uint32_t kPrologue_enter_vm_0010038D = 0x0010038D; // file_off=0xFF78D
constexpr uint32_t kPrologue_enter_vm_0010039F = 0x0010039F; // file_off=0xFF79F
constexpr uint32_t kPrologue_enter_vm_001003B0 = 0x001003B0; // file_off=0xFF7B0
constexpr uint32_t kPrologue_enter_vm_001003DD = 0x001003DD; // file_off=0xFF7DD
constexpr uint32_t kPrologue_enter_vm_001003EF = 0x001003EF; // file_off=0xFF7EF
constexpr uint32_t kPrologue_enter_vm_00100400 = 0x00100400; // file_off=0xFF800
constexpr uint32_t kPrologue_enter_vm_0010058D = 0x0010058D; // file_off=0xFF98D
constexpr uint32_t kPrologue_enter_vm_0010059F = 0x0010059F; // file_off=0xFF99F
constexpr uint32_t kPrologue_enter_vm_001005B0 = 0x001005B0; // file_off=0xFF9B0
constexpr uint32_t kPrologue_mov_eax_1_ret_001006BF = 0x001006BF; // file_off=0xFFABF
constexpr uint32_t kPrologue_xor_eax_eax_ret_001006C5 = 0x001006C5; // file_off=0xFFAC5
constexpr uint32_t kPrologue_enter_vm_0010109D = 0x0010109D; // file_off=0x10049D
constexpr uint32_t kPrologue_enter_vm_001010AF = 0x001010AF; // file_off=0x1004AF
constexpr uint32_t kPrologue_enter_vm_001010C0 = 0x001010C0; // file_off=0x1004C0
constexpr uint32_t kPrologue_enter_vm_0010132C = 0x0010132C; // file_off=0x10072C
constexpr uint32_t kPrologue_enter_vm_0010133D = 0x0010133D; // file_off=0x10073D
constexpr uint32_t kPrologue_enter_vm_0010134C = 0x0010134C; // file_off=0x10074C
constexpr uint32_t kPrologue_enter_vm_001013B1 = 0x001013B1; // file_off=0x1007B1
constexpr uint32_t kPrologue_enter_vm_001013CE = 0x001013CE; // file_off=0x1007CE
constexpr uint32_t kPrologue_enter_vm_001013DA = 0x001013DA; // file_off=0x1007DA
constexpr uint32_t kPrologue_enter_vm_001016BD = 0x001016BD; // file_off=0x100ABD
constexpr uint32_t kPrologue_enter_vm_001016CF = 0x001016CF; // file_off=0x100ACF
constexpr uint32_t kPrologue_enter_vm_001016E0 = 0x001016E0; // file_off=0x100AE0
constexpr uint32_t kPrologue_push_rbx_rsi_00102A30 = 0x00102A30; // file_off=0x101E30
constexpr uint32_t kPrologue_call_rax_00102C95 = 0x00102C95; // file_off=0x102095
constexpr uint32_t kPrologue_push_rbx_rsi_00102CC0 = 0x00102CC0; // file_off=0x1020C0
constexpr uint32_t kPrologue_push_rbx_rsi_00103030 = 0x00103030; // file_off=0x102430
constexpr uint32_t kPrologue_push_rbx_rsi_00103270 = 0x00103270; // file_off=0x102670
constexpr uint32_t kPrologue_enter_vm_00103980 = 0x00103980; // file_off=0x102D80
constexpr uint32_t kPrologue_enter_vm_00103990 = 0x00103990; // file_off=0x102D90
constexpr uint32_t kPrologue_push_rbx_rsi_00103EE0 = 0x00103EE0; // file_off=0x1032E0
constexpr uint32_t kPrologue_enter_vm_001041C0 = 0x001041C0; // file_off=0x1035C0
constexpr uint32_t kPrologue_push_rbx_rsi_00104B30 = 0x00104B30; // file_off=0x103F30
constexpr uint32_t kPrologue_enter_vm_00104ED0 = 0x00104ED0; // file_off=0x1042D0
constexpr uint32_t kPrologue_push_rbx_rsi_00105040 = 0x00105040; // file_off=0x104440
constexpr uint32_t kPrologue_push_rbx_rsi_001050E0 = 0x001050E0; // file_off=0x1044E0
constexpr uint32_t kPrologue_push_rbx_rsi_001053B0 = 0x001053B0; // file_off=0x1047B0
constexpr uint32_t kPrologue_push_rbx_rsi_00105490 = 0x00105490; // file_off=0x104890
constexpr uint32_t kPrologue_push_rbx_rsi_001056E0 = 0x001056E0; // file_off=0x104AE0
constexpr uint32_t kPrologue_push_rbx_rsi_001057B0 = 0x001057B0; // file_off=0x104BB0
constexpr uint32_t kPrologue_push_rbx_rsi_00105890 = 0x00105890; // file_off=0x104C90
constexpr uint32_t kPrologue_push_rbx_rsi_00105920 = 0x00105920; // file_off=0x104D20
constexpr uint32_t kPrologue_push_rbx_rsi_00105FC0 = 0x00105FC0; // file_off=0x1053C0
constexpr uint32_t kPrologue_push_rbx_rsi_00106130 = 0x00106130; // file_off=0x105530
constexpr uint32_t kPrologue_push_rbx_rsi_001061D0 = 0x001061D0; // file_off=0x1055D0
constexpr uint32_t kPrologue_enter_vm_00106810 = 0x00106810; // file_off=0x105C10
constexpr uint32_t kPrologue_enter_vm_00106820 = 0x00106820; // file_off=0x105C20
constexpr uint32_t kPrologue_enter_vm_00106830 = 0x00106830; // file_off=0x105C30
constexpr uint32_t kPrologue_enter_vm_00106840 = 0x00106840; // file_off=0x105C40
constexpr uint32_t kPrologue_push_rbx_rsi_00106A00 = 0x00106A00; // file_off=0x105E00
constexpr uint32_t kPrologue_push_rbx_rsi_001079C0 = 0x001079C0; // file_off=0x106DC0
constexpr uint32_t kPrologue_enter_vm_00108410 = 0x00108410; // file_off=0x107810
constexpr uint32_t kPrologue_enter_vm_00108420 = 0x00108420; // file_off=0x107820
constexpr uint32_t kPrologue_enter_vm_00108D47 = 0x00108D47; // file_off=0x108147
constexpr uint32_t kPrologue_enter_vm_00108D5B = 0x00108D5B; // file_off=0x10815B
constexpr uint32_t kPrologue_enter_vm_00108D6A = 0x00108D6A; // file_off=0x10816A
constexpr uint32_t kPrologue_enter_vm_00108E10 = 0x00108E10; // file_off=0x108210
constexpr uint32_t kPrologue_enter_vm_00108E28 = 0x00108E28; // file_off=0x108228
constexpr uint32_t kPrologue_enter_vm_00108E34 = 0x00108E34; // file_off=0x108234
constexpr uint32_t kPrologue_call_rax_001091C1 = 0x001091C1; // file_off=0x1085C1
constexpr uint32_t kPrologue_call_rax_00109265 = 0x00109265; // file_off=0x108665
constexpr uint32_t kPrologue_call_rax_001092D5 = 0x001092D5; // file_off=0x1086D5
constexpr uint32_t kPrologue_call_rax_0010934A = 0x0010934A; // file_off=0x10874A
constexpr uint32_t kPrologue_enter_vm_001093CD = 0x001093CD; // file_off=0x1087CD
constexpr uint32_t kPrologue_enter_vm_001093FD = 0x001093FD; // file_off=0x1087FD
constexpr uint32_t kPrologue_push_rbx_rsi_00109580 = 0x00109580; // file_off=0x108980
constexpr uint32_t kPrologue_push_rbx_rsi_00109630 = 0x00109630; // file_off=0x108A30
constexpr uint32_t kPrologue_push_rbx_rsi_00109730 = 0x00109730; // file_off=0x108B30
constexpr uint32_t kPrologue_push_rbx_rsi_00109800 = 0x00109800; // file_off=0x108C00
constexpr uint32_t kPrologue_enter_vm_0010985D = 0x0010985D; // file_off=0x108C5D
constexpr uint32_t kPrologue_enter_vm_00109866 = 0x00109866; // file_off=0x108C66
constexpr uint32_t kPrologue_push_rbx_rsi_00109930 = 0x00109930; // file_off=0x108D30
constexpr uint32_t kPrologue_push_rbx_rsi_001099D0 = 0x001099D0; // file_off=0x108DD0
constexpr uint32_t kPrologue_push_rbx_rsi_0010A540 = 0x0010A540; // file_off=0x109940
constexpr uint32_t kPrologue_push_rbx_rsi_0010A5E0 = 0x0010A5E0; // file_off=0x1099E0
constexpr uint32_t kPrologue_push_rbx_rsi_0010A770 = 0x0010A770; // file_off=0x109B70
constexpr uint32_t kPrologue_push_rbx_rsi_0010A800 = 0x0010A800; // file_off=0x109C00
constexpr uint32_t kPrologue_push_rbx_rsi_0010A890 = 0x0010A890; // file_off=0x109C90
constexpr uint32_t kPrologue_push_rbx_rsi_0010B7C0 = 0x0010B7C0; // file_off=0x10ABC0
constexpr uint32_t kPrologue_push_rbx_rsi_0010B830 = 0x0010B830; // file_off=0x10AC30
constexpr uint32_t kPrologue_push_rbx_rsi_0010B8A0 = 0x0010B8A0; // file_off=0x10ACA0
constexpr uint32_t kPrologue_push_rbx_rsi_0010B910 = 0x0010B910; // file_off=0x10AD10
constexpr uint32_t kPrologue_push_rbx_rsi_0010B980 = 0x0010B980; // file_off=0x10AD80
constexpr uint32_t kPrologue_push_rbx_rsi_0010B9F0 = 0x0010B9F0; // file_off=0x10ADF0
constexpr uint32_t kPrologue_push_rbx_rsi_0010BA60 = 0x0010BA60; // file_off=0x10AE60
constexpr uint32_t kPrologue_push_rbx_rsi_0010BAD0 = 0x0010BAD0; // file_off=0x10AED0
constexpr uint32_t kPrologue_xor_eax_eax_ret_0010DE4A = 0x0010DE4A; // file_off=0x10D24A
constexpr uint32_t kPrologue_xor_eax_eax_ret_0010DE59 = 0x0010DE59; // file_off=0x10D259
constexpr uint32_t kPrologue_call_rax_0010DE94 = 0x0010DE94; // file_off=0x10D294
constexpr uint32_t kPrologue_xor_eax_eax_ret_0010DEAA = 0x0010DEAA; // file_off=0x10D2AA
constexpr uint32_t kPrologue_xor_eax_eax_ret_0010DED5 = 0x0010DED5; // file_off=0x10D2D5
constexpr uint32_t kPrologue_xor_eax_eax_ret_0010DEE9 = 0x0010DEE9; // file_off=0x10D2E9
constexpr uint32_t kPrologue_call_rax_0010E068 = 0x0010E068; // file_off=0x10D468
constexpr uint32_t kPrologue_enter_vm_0010E9B1 = 0x0010E9B1; // file_off=0x10DDB1
constexpr uint32_t kPrologue_enter_vm_0010EB3C = 0x0010EB3C; // file_off=0x10DF3C
constexpr uint32_t kPrologue_enter_vm_0010EB4F = 0x0010EB4F; // file_off=0x10DF4F
constexpr uint32_t kPrologue_enter_vm_0010EB5E = 0x0010EB5E; // file_off=0x10DF5E
constexpr uint32_t kPrologue_enter_vm_0010EB6A = 0x0010EB6A; // file_off=0x10DF6A
constexpr uint32_t kPrologue_enter_vm_0010EB76 = 0x0010EB76; // file_off=0x10DF76
constexpr uint32_t kPrologue_push_rbx_rsi_0010F030 = 0x0010F030; // file_off=0x10E430
constexpr uint32_t kPrologue_call_rax_0010F181 = 0x0010F181; // file_off=0x10E581
constexpr uint32_t kPrologue_push_rbx_rsi_0010F400 = 0x0010F400; // file_off=0x10E800
constexpr uint32_t kPrologue_mov_eax_1_ret_0010F4C4 = 0x0010F4C4; // file_off=0x10E8C4
constexpr uint32_t kPrologue_mov_eax_1_ret_0010F4D4 = 0x0010F4D4; // file_off=0x10E8D4
constexpr uint32_t kPrologue_push_rbx_rsi_0010F890 = 0x0010F890; // file_off=0x10EC90
constexpr uint32_t kPrologue_push_rbx_rsi_00110690 = 0x00110690; // file_off=0x10FA90
constexpr uint32_t kPrologue_push_rbx_rsi_00110850 = 0x00110850; // file_off=0x10FC50
constexpr uint32_t kPrologue_enter_vm_00111AB0 = 0x00111AB0; // file_off=0x110EB0
constexpr uint32_t kPrologue_enter_vm_00111AC0 = 0x00111AC0; // file_off=0x110EC0
constexpr uint32_t kPrologue_push_rbx_rsi_00111BB0 = 0x00111BB0; // file_off=0x110FB0
constexpr uint32_t kPrologue_call_rax_00111CE7 = 0x00111CE7; // file_off=0x1110E7
constexpr uint32_t kPrologue_call_rax_001120D0 = 0x001120D0; // file_off=0x1114D0
constexpr uint32_t kPrologue_call_rax_00112230 = 0x00112230; // file_off=0x111630
constexpr uint32_t kPrologue_call_rax_001127A1 = 0x001127A1; // file_off=0x111BA1
constexpr uint32_t kPrologue_call_rax_00112935 = 0x00112935; // file_off=0x111D35
constexpr uint32_t kPrologue_call_rax_001129A5 = 0x001129A5; // file_off=0x111DA5
constexpr uint32_t kPrologue_call_rax_00112A1A = 0x00112A1A; // file_off=0x111E1A
constexpr uint32_t kPrologue_enter_vm_00113400 = 0x00113400; // file_off=0x112800
constexpr uint32_t kPrologue_enter_vm_00113410 = 0x00113410; // file_off=0x112810
constexpr uint32_t kPrologue_push_rbx_rsi_001134A0 = 0x001134A0; // file_off=0x1128A0
constexpr uint32_t kPrologue_enter_vm_00113590 = 0x00113590; // file_off=0x112990
constexpr uint32_t kPrologue_enter_vm_001135A0 = 0x001135A0; // file_off=0x1129A0
constexpr uint32_t kPrologue_enter_vm_001136A4 = 0x001136A4; // file_off=0x112AA4
constexpr uint32_t kPrologue_enter_vm_001136AC = 0x001136AC; // file_off=0x112AAC
constexpr uint32_t kPrologue_enter_vm_001136B4 = 0x001136B4; // file_off=0x112AB4
constexpr uint32_t kPrologue_enter_vm_001136BC = 0x001136BC; // file_off=0x112ABC
constexpr uint32_t kPrologue_enter_vm_001136C4 = 0x001136C4; // file_off=0x112AC4
constexpr uint32_t kPrologue_enter_vm_001136CC = 0x001136CC; // file_off=0x112ACC
constexpr uint32_t kPrologue_enter_vm_001136D4 = 0x001136D4; // file_off=0x112AD4
constexpr uint32_t kPrologue_enter_vm_001136DC = 0x001136DC; // file_off=0x112ADC
constexpr uint32_t kPrologue_enter_vm_001136E4 = 0x001136E4; // file_off=0x112AE4
constexpr uint32_t kPrologue_enter_vm_001136EC = 0x001136EC; // file_off=0x112AEC
constexpr uint32_t kPrologue_enter_vm_001136F4 = 0x001136F4; // file_off=0x112AF4
constexpr uint32_t kPrologue_enter_vm_001136FC = 0x001136FC; // file_off=0x112AFC
constexpr uint32_t kPrologue_enter_vm_00113704 = 0x00113704; // file_off=0x112B04
constexpr uint32_t kPrologue_xor_eax_eax_ret_0011370C = 0x0011370C; // file_off=0x112B0C
constexpr uint32_t kPrologue_enter_vm_0011387A = 0x0011387A; // file_off=0x112C7A
constexpr uint32_t kPrologue_enter_vm_001138D0 = 0x001138D0; // file_off=0x112CD0
constexpr uint32_t kPrologue_xor_eax_eax_ret_001139C6 = 0x001139C6; // file_off=0x112DC6
constexpr uint32_t kPrologue_enter_vm_001139C9 = 0x001139C9; // file_off=0x112DC9
constexpr uint32_t kPrologue_enter_vm_001139D1 = 0x001139D1; // file_off=0x112DD1
constexpr uint32_t kPrologue_enter_vm_001139D9 = 0x001139D9; // file_off=0x112DD9
constexpr uint32_t kPrologue_enter_vm_00113ABA = 0x00113ABA; // file_off=0x112EBA
constexpr uint32_t kPrologue_enter_vm_00113B00 = 0x00113B00; // file_off=0x112F00
constexpr uint32_t kPrologue_xor_eax_eax_ret_00113BE7 = 0x00113BE7; // file_off=0x112FE7
constexpr uint32_t kPrologue_enter_vm_00113BF0 = 0x00113BF0; // file_off=0x112FF0
constexpr uint32_t kPrologue_enter_vm_00113C10 = 0x00113C10; // file_off=0x113010
constexpr uint32_t kPrologue_xor_eax_eax_ret_00113D06 = 0x00113D06; // file_off=0x113106
constexpr uint32_t kPrologue_enter_vm_00113D09 = 0x00113D09; // file_off=0x113109
constexpr uint32_t kPrologue_enter_vm_00113D11 = 0x00113D11; // file_off=0x113111
constexpr uint32_t kPrologue_enter_vm_00113D19 = 0x00113D19; // file_off=0x113119
constexpr uint32_t kPrologue_enter_vm_00113DC7 = 0x00113DC7; // file_off=0x1131C7
constexpr uint32_t kPrologue_push_rbx_rsi_00114060 = 0x00114060; // file_off=0x113460
constexpr uint32_t kPrologue_xor_eax_eax_ret_001143D0 = 0x001143D0; // file_off=0x1137D0
constexpr uint32_t kPrologue_xor_eax_eax_ret_0011452B = 0x0011452B; // file_off=0x11392B
constexpr uint32_t kPrologue_xor_eax_eax_ret_00114DDA = 0x00114DDA; // file_off=0x1141DA
constexpr uint32_t kPrologue_mov_eax_1_ret_00114E1B = 0x00114E1B; // file_off=0x11421B
constexpr uint32_t kPrologue_enter_vm_001155C0 = 0x001155C0; // file_off=0x1149C0
constexpr uint32_t kPrologue_enter_vm_001155D0 = 0x001155D0; // file_off=0x1149D0
constexpr uint32_t kPrologue_enter_vm_001155E0 = 0x001155E0; // file_off=0x1149E0
constexpr uint32_t kPrologue_enter_vm_001155F0 = 0x001155F0; // file_off=0x1149F0
constexpr uint32_t kPrologue_enter_vm_00115600 = 0x00115600; // file_off=0x114A00
constexpr uint32_t kPrologue_enter_vm_00115610 = 0x00115610; // file_off=0x114A10
constexpr uint32_t kPrologue_call_rax_00115A7E = 0x00115A7E; // file_off=0x114E7E
constexpr uint32_t kPrologue_enter_vm_001161B0 = 0x001161B0; // file_off=0x1155B0
constexpr uint32_t kPrologue_enter_vm_001161C0 = 0x001161C0; // file_off=0x1155C0
constexpr uint32_t kPrologue_enter_vm_001161D0 = 0x001161D0; // file_off=0x1155D0
constexpr uint32_t kPrologue_enter_vm_001161E0 = 0x001161E0; // file_off=0x1155E0
constexpr uint32_t kPrologue_enter_vm_001161F0 = 0x001161F0; // file_off=0x1155F0
constexpr uint32_t kPrologue_enter_vm_00116200 = 0x00116200; // file_off=0x115600
constexpr uint32_t kPrologue_enter_vm_00116210 = 0x00116210; // file_off=0x115610
constexpr uint32_t kPrologue_enter_vm_00116220 = 0x00116220; // file_off=0x115620
constexpr uint32_t kPrologue_enter_vm_00116230 = 0x00116230; // file_off=0x115630
constexpr uint32_t kPrologue_enter_vm_00116240 = 0x00116240; // file_off=0x115640
constexpr uint32_t kPrologue_enter_vm_00116250 = 0x00116250; // file_off=0x115650
constexpr uint32_t kPrologue_call_rax_001162FF = 0x001162FF; // file_off=0x1156FF
constexpr uint32_t kPrologue_call_rax_001163A7 = 0x001163A7; // file_off=0x1157A7
constexpr uint32_t kPrologue_call_rax_0011645E = 0x0011645E; // file_off=0x11585E
constexpr uint32_t kPrologue_enter_vm_00116720 = 0x00116720; // file_off=0x115B20
constexpr uint32_t kPrologue_push_rbx_rsi_00116730 = 0x00116730; // file_off=0x115B30
constexpr uint32_t kPrologue_push_rbx_rsi_001167A0 = 0x001167A0; // file_off=0x115BA0
constexpr uint32_t kPrologue_enter_vm_001167F0 = 0x001167F0; // file_off=0x115BF0
constexpr uint32_t kPrologue_enter_vm_00116800 = 0x00116800; // file_off=0x115C00
constexpr uint32_t kPrologue_push_rbx_rsi_00116810 = 0x00116810; // file_off=0x115C10
constexpr uint32_t kPrologue_enter_vm_00116DC0 = 0x00116DC0; // file_off=0x1161C0
constexpr uint32_t kPrologue_enter_vm_00117230 = 0x00117230; // file_off=0x116630
constexpr uint32_t kPrologue_enter_vm_00117240 = 0x00117240; // file_off=0x116640
constexpr uint32_t kPrologue_enter_vm_00117250 = 0x00117250; // file_off=0x116650
constexpr uint32_t kPrologue_enter_vm_00117260 = 0x00117260; // file_off=0x116660
constexpr uint32_t kPrologue_push_rbx_rsi_001174D0 = 0x001174D0; // file_off=0x1168D0
constexpr uint32_t kPrologue_enter_vm_00117910 = 0x00117910; // file_off=0x116D10
constexpr uint32_t kPrologue_enter_vm_00117920 = 0x00117920; // file_off=0x116D20
constexpr uint32_t kPrologue_enter_vm_00117930 = 0x00117930; // file_off=0x116D30
constexpr uint32_t kPrologue_enter_vm_00117940 = 0x00117940; // file_off=0x116D40
constexpr uint32_t kPrologue_enter_vm_00117950 = 0x00117950; // file_off=0x116D50
constexpr uint32_t kPrologue_enter_vm_00117960 = 0x00117960; // file_off=0x116D60
constexpr uint32_t kPrologue_push_rbx_rsi_00117970 = 0x00117970; // file_off=0x116D70
constexpr uint32_t kPrologue_enter_vm_00117D90 = 0x00117D90; // file_off=0x117190
constexpr uint32_t kPrologue_enter_vm_00117DA0 = 0x00117DA0; // file_off=0x1171A0
constexpr uint32_t kPrologue_enter_vm_00117DB0 = 0x00117DB0; // file_off=0x1171B0
constexpr uint32_t kPrologue_enter_vm_00117DC0 = 0x00117DC0; // file_off=0x1171C0
constexpr uint32_t kPrologue_push_rbx_rsi_00117DD0 = 0x00117DD0; // file_off=0x1171D0
constexpr uint32_t kPrologue_enter_vm_001181F0 = 0x001181F0; // file_off=0x1175F0
constexpr uint32_t kPrologue_enter_vm_00118200 = 0x00118200; // file_off=0x117600
constexpr uint32_t kPrologue_enter_vm_00118210 = 0x00118210; // file_off=0x117610
constexpr uint32_t kPrologue_enter_vm_00118220 = 0x00118220; // file_off=0x117620
constexpr uint32_t kPrologue_enter_vm_00118B78 = 0x00118B78; // file_off=0x117F78
constexpr uint32_t kPrologue_enter_vm_0011A308 = 0x0011A308; // file_off=0x119708
constexpr uint32_t kPrologue_enter_vm_0011A777 = 0x0011A777; // file_off=0x119B77
constexpr uint32_t kPrologue_enter_vm_0011A7D7 = 0x0011A7D7; // file_off=0x119BD7
constexpr uint32_t kPrologue_push_rbx_rsi_0011B190 = 0x0011B190; // file_off=0x11A590
constexpr uint32_t kPrologue_enter_vm_0011C351 = 0x0011C351; // file_off=0x11B751
constexpr uint32_t kPrologue_enter_vm_0011C43E = 0x0011C43E; // file_off=0x11B83E
constexpr uint32_t kPrologue_enter_vm_0011C920 = 0x0011C920; // file_off=0x11BD20
constexpr uint32_t kPrologue_enter_vm_0011C930 = 0x0011C930; // file_off=0x11BD30
constexpr uint32_t kPrologue_enter_vm_0011C940 = 0x0011C940; // file_off=0x11BD40
constexpr uint32_t kPrologue_enter_vm_0011C950 = 0x0011C950; // file_off=0x11BD50
constexpr uint32_t kPrologue_enter_vm_0011C960 = 0x0011C960; // file_off=0x11BD60
constexpr uint32_t kPrologue_enter_vm_0011C970 = 0x0011C970; // file_off=0x11BD70
constexpr uint32_t kPrologue_enter_vm_0011C980 = 0x0011C980; // file_off=0x11BD80
constexpr uint32_t kPrologue_enter_vm_0011C990 = 0x0011C990; // file_off=0x11BD90
constexpr uint32_t kPrologue_enter_vm_0011C9A0 = 0x0011C9A0; // file_off=0x11BDA0
constexpr uint32_t kPrologue_enter_vm_0011C9B0 = 0x0011C9B0; // file_off=0x11BDB0
constexpr uint32_t kPrologue_enter_vm_0011C9C0 = 0x0011C9C0; // file_off=0x11BDC0
constexpr uint32_t kPrologue_enter_vm_0011C9D0 = 0x0011C9D0; // file_off=0x11BDD0
constexpr uint32_t kPrologue_enter_vm_0011C9E0 = 0x0011C9E0; // file_off=0x11BDE0
constexpr uint32_t kPrologue_enter_vm_0011C9F0 = 0x0011C9F0; // file_off=0x11BDF0
constexpr uint32_t kPrologue_enter_vm_0011CA00 = 0x0011CA00; // file_off=0x11BE00
constexpr uint32_t kPrologue_enter_vm_0011CA10 = 0x0011CA10; // file_off=0x11BE10
constexpr uint32_t kPrologue_enter_vm_0011CA20 = 0x0011CA20; // file_off=0x11BE20
constexpr uint32_t kPrologue_enter_vm_0011CA30 = 0x0011CA30; // file_off=0x11BE30
constexpr uint32_t kPrologue_enter_vm_0011CA40 = 0x0011CA40; // file_off=0x11BE40
constexpr uint32_t kPrologue_enter_vm_0011CA50 = 0x0011CA50; // file_off=0x11BE50
constexpr uint32_t kPrologue_enter_vm_0011CA60 = 0x0011CA60; // file_off=0x11BE60
constexpr uint32_t kPrologue_enter_vm_0011CA70 = 0x0011CA70; // file_off=0x11BE70
constexpr uint32_t kPrologue_enter_vm_0011CA80 = 0x0011CA80; // file_off=0x11BE80
constexpr uint32_t kPrologue_enter_vm_0011CA90 = 0x0011CA90; // file_off=0x11BE90
constexpr uint32_t kPrologue_enter_vm_0011CAA0 = 0x0011CAA0; // file_off=0x11BEA0
constexpr uint32_t kPrologue_enter_vm_0011CAB0 = 0x0011CAB0; // file_off=0x11BEB0
constexpr uint32_t kPrologue_enter_vm_0011CAC0 = 0x0011CAC0; // file_off=0x11BEC0
constexpr uint32_t kPrologue_enter_vm_0011CD3D = 0x0011CD3D; // file_off=0x11C13D
constexpr uint32_t kPrologue_enter_vm_0011CD4B = 0x0011CD4B; // file_off=0x11C14B
constexpr uint32_t kPrologue_enter_vm_0011D340 = 0x0011D340; // file_off=0x11C740
constexpr uint32_t kPrologue_enter_vm_0011D350 = 0x0011D350; // file_off=0x11C750
constexpr uint32_t kPrologue_enter_vm_0011D360 = 0x0011D360; // file_off=0x11C760
constexpr uint32_t kPrologue_enter_vm_0011D370 = 0x0011D370; // file_off=0x11C770
constexpr uint32_t kPrologue_enter_vm_0011D380 = 0x0011D380; // file_off=0x11C780
constexpr uint32_t kPrologue_enter_vm_0011D390 = 0x0011D390; // file_off=0x11C790
constexpr uint32_t kPrologue_enter_vm_0011D3A0 = 0x0011D3A0; // file_off=0x11C7A0
constexpr uint32_t kPrologue_enter_vm_0011D3B0 = 0x0011D3B0; // file_off=0x11C7B0
constexpr uint32_t kPrologue_enter_vm_0011D3C0 = 0x0011D3C0; // file_off=0x11C7C0
constexpr uint32_t kPrologue_enter_vm_0011D3D0 = 0x0011D3D0; // file_off=0x11C7D0
constexpr uint32_t kPrologue_enter_vm_0011D3E0 = 0x0011D3E0; // file_off=0x11C7E0
constexpr uint32_t kPrologue_enter_vm_0011D3F0 = 0x0011D3F0; // file_off=0x11C7F0
constexpr uint32_t kPrologue_enter_vm_0011D400 = 0x0011D400; // file_off=0x11C800
constexpr uint32_t kPrologue_enter_vm_0011D410 = 0x0011D410; // file_off=0x11C810
constexpr uint32_t kPrologue_enter_vm_0011D420 = 0x0011D420; // file_off=0x11C820
constexpr uint32_t kPrologue_enter_vm_0011D430 = 0x0011D430; // file_off=0x11C830
constexpr uint32_t kPrologue_enter_vm_0011D440 = 0x0011D440; // file_off=0x11C840
constexpr uint32_t kPrologue_enter_vm_0011D450 = 0x0011D450; // file_off=0x11C850
constexpr uint32_t kPrologue_enter_vm_0011D460 = 0x0011D460; // file_off=0x11C860
constexpr uint32_t kPrologue_enter_vm_0011D470 = 0x0011D470; // file_off=0x11C870
constexpr uint32_t kPrologue_enter_vm_0011D480 = 0x0011D480; // file_off=0x11C880
constexpr uint32_t kPrologue_enter_vm_0011E030 = 0x0011E030; // file_off=0x11D430
constexpr uint32_t kPrologue_enter_vm_0011E040 = 0x0011E040; // file_off=0x11D440
constexpr uint32_t kPrologue_enter_vm_0011E720 = 0x0011E720; // file_off=0x11DB20
constexpr uint32_t kPrologue_enter_vm_0011E730 = 0x0011E730; // file_off=0x11DB30
constexpr uint32_t kPrologue_enter_vm_0011E740 = 0x0011E740; // file_off=0x11DB40
constexpr uint32_t kPrologue_enter_vm_0011E750 = 0x0011E750; // file_off=0x11DB50
constexpr uint32_t kPrologue_enter_vm_0011EC70 = 0x0011EC70; // file_off=0x11E070
constexpr uint32_t kPrologue_enter_vm_0011EC80 = 0x0011EC80; // file_off=0x11E080
constexpr uint32_t kPrologue_enter_vm_0011EC90 = 0x0011EC90; // file_off=0x11E090
constexpr uint32_t kPrologue_enter_vm_0011ECA0 = 0x0011ECA0; // file_off=0x11E0A0
constexpr uint32_t kPrologue_enter_vm_0011ECB0 = 0x0011ECB0; // file_off=0x11E0B0
constexpr uint32_t kPrologue_enter_vm_0011ED50 = 0x0011ED50; // file_off=0x11E150
constexpr uint32_t kPrologue_enter_vm_0011EDD0 = 0x0011EDD0; // file_off=0x11E1D0
constexpr uint32_t kPrologue_push_rbx_rsi_0011EE70 = 0x0011EE70; // file_off=0x11E270
constexpr uint32_t kPrologue_enter_vm_0011EEC0 = 0x0011EEC0; // file_off=0x11E2C0
constexpr uint32_t kPrologue_enter_vm_0011EFF0 = 0x0011EFF0; // file_off=0x11E3F0
constexpr uint32_t kPrologue_enter_vm_0011F000 = 0x0011F000; // file_off=0x11E400
constexpr uint32_t kPrologue_enter_vm_0011F0A0 = 0x0011F0A0; // file_off=0x11E4A0
constexpr uint32_t kPrologue_enter_vm_0011F120 = 0x0011F120; // file_off=0x11E520
constexpr uint32_t kPrologue_enter_vm_0011F1C0 = 0x0011F1C0; // file_off=0x11E5C0
constexpr uint32_t kPrologue_enter_vm_0011F260 = 0x0011F260; // file_off=0x11E660
constexpr uint32_t kPrologue_mov_eax_1_ret_0011F2F4 = 0x0011F2F4; // file_off=0x11E6F4
constexpr uint32_t kPrologue_mov_eax_1_ret_0011F3F4 = 0x0011F3F4; // file_off=0x11E7F4
constexpr uint32_t kPrologue_mov_eax_1_ret_0011F4F4 = 0x0011F4F4; // file_off=0x11E8F4
constexpr uint32_t kPrologue_mov_eax_1_ret_0011F5F4 = 0x0011F5F4; // file_off=0x11E9F4
constexpr uint32_t kPrologue_mov_eax_1_ret_001210E7 = 0x001210E7; // file_off=0x1204E7
constexpr uint32_t kPrologue_enter_vm_00121180 = 0x00121180; // file_off=0x120580
constexpr uint32_t kPrologue_enter_vm_00121930 = 0x00121930; // file_off=0x120D30
constexpr uint32_t kPrologue_push_rbx_rsi_00121AC0 = 0x00121AC0; // file_off=0x120EC0
constexpr uint32_t kPrologue_enter_vm_001222F0 = 0x001222F0; // file_off=0x1216F0
constexpr uint32_t kPrologue_call_rax_00122B57 = 0x00122B57; // file_off=0x121F57
constexpr uint32_t kPrologue_enter_vm_00122BC0 = 0x00122BC0; // file_off=0x121FC0
constexpr uint32_t kPrologue_push_rbx_rsi_00122DF0 = 0x00122DF0; // file_off=0x1221F0
constexpr uint32_t kPrologue_xor_eax_eax_ret_00122E46 = 0x00122E46; // file_off=0x122246
constexpr uint32_t kPrologue_mov_eax_1_ret_00122E4C = 0x00122E4C; // file_off=0x12224C
constexpr uint32_t kPrologue_xor_eax_eax_ret_00122E67 = 0x00122E67; // file_off=0x122267
constexpr uint32_t kPrologue_mov_eax_1_ret_00122E6E = 0x00122E6E; // file_off=0x12226E
constexpr uint32_t kPrologue_xor_eax_eax_ret_00122E86 = 0x00122E86; // file_off=0x122286
constexpr uint32_t kPrologue_mov_eax_1_ret_00122E8C = 0x00122E8C; // file_off=0x12228C
constexpr uint32_t kPrologue_xor_eax_eax_ret_00122EA7 = 0x00122EA7; // file_off=0x1222A7
constexpr uint32_t kPrologue_mov_eax_1_ret_00122EAE = 0x00122EAE; // file_off=0x1222AE
constexpr uint32_t kPrologue_enter_vm_0012327B = 0x0012327B; // file_off=0x12267B
constexpr uint32_t kPrologue_mov_eax_1_ret_001235E4 = 0x001235E4; // file_off=0x1229E4
constexpr uint32_t kPrologue_mov_eax_1_ret_001235F7 = 0x001235F7; // file_off=0x1229F7
constexpr uint32_t kPrologue_push_rbx_rsi_00123720 = 0x00123720; // file_off=0x122B20
constexpr uint32_t kPrologue_push_rbx_rsi_001242A0 = 0x001242A0; // file_off=0x1236A0
constexpr uint32_t kPrologue_push_rbx_rsi_00124B50 = 0x00124B50; // file_off=0x123F50
constexpr uint32_t kPrologue_xor_eax_eax_ret_00124E85 = 0x00124E85; // file_off=0x124285
constexpr uint32_t kPrologue_push_rbx_rsi_00125260 = 0x00125260; // file_off=0x124660
constexpr uint32_t kPrologue_mov_eax_1_ret_00125324 = 0x00125324; // file_off=0x124724
constexpr uint32_t kPrologue_push_rbx_rsi_00125400 = 0x00125400; // file_off=0x124800
constexpr uint32_t kPrologue_push_rbx_rsi_00125490 = 0x00125490; // file_off=0x124890
constexpr uint32_t kPrologue_push_rbx_rsi_00125A80 = 0x00125A80; // file_off=0x124E80
constexpr uint32_t kPrologue_push_rbx_rsi_00125D60 = 0x00125D60; // file_off=0x125160
constexpr uint32_t kPrologue_push_rbx_rsi_00126220 = 0x00126220; // file_off=0x125620
constexpr uint32_t kPrologue_enter_vm_001262E0 = 0x001262E0; // file_off=0x1256E0
constexpr uint32_t kPrologue_enter_vm_00126660 = 0x00126660; // file_off=0x125A60
constexpr uint32_t kPrologue_enter_vm_0012713D = 0x0012713D; // file_off=0x12653D
constexpr uint32_t kPrologue_enter_vm_001272A3 = 0x001272A3; // file_off=0x1266A3
constexpr uint32_t kPrologue_enter_vm_00127B16 = 0x00127B16; // file_off=0x126F16
constexpr uint32_t kPrologue_enter_vm_00127B70 = 0x00127B70; // file_off=0x126F70
constexpr uint32_t kPrologue_enter_vm_001280A7 = 0x001280A7; // file_off=0x1274A7
constexpr uint32_t kPrologue_push_rbx_rsi_00128110 = 0x00128110; // file_off=0x127510
constexpr uint32_t kPrologue_push_rbx_rsi_00128690 = 0x00128690; // file_off=0x127A90
constexpr uint32_t kPrologue_push_rbx_rsi_001287A0 = 0x001287A0; // file_off=0x127BA0
constexpr uint32_t kPrologue_xor_eax_eax_ret_001288AA = 0x001288AA; // file_off=0x127CAA
constexpr uint32_t kPrologue_xor_eax_eax_ret_0012899F = 0x0012899F; // file_off=0x127D9F
constexpr uint32_t kPrologue_mov_eax_1_ret_001289A2 = 0x001289A2; // file_off=0x127DA2
constexpr uint32_t kPrologue_push_regs_0012A390 = 0x0012A390; // file_off=0x129790
constexpr uint32_t kPrologue_enter_vm_0012AB93 = 0x0012AB93; // file_off=0x129F93
constexpr uint32_t kPrologue_enter_vm_0012AE27 = 0x0012AE27; // file_off=0x12A227
constexpr uint32_t kPrologue_call_rax_0012C369 = 0x0012C369; // file_off=0x12B769
constexpr uint32_t kPrologue_push_rbx_rsi_0012C5A0 = 0x0012C5A0; // file_off=0x12B9A0
constexpr uint32_t kPrologue_enter_vm_0012C7B0 = 0x0012C7B0; // file_off=0x12BBB0
constexpr uint32_t kPrologue_xor_eax_eax_ret_0012D2E7 = 0x0012D2E7; // file_off=0x12C6E7
constexpr uint32_t kPrologue_push_rbx_rsi_0012D930 = 0x0012D930; // file_off=0x12CD30
constexpr uint32_t kPrologue_enter_vm_0012DC30 = 0x0012DC30; // file_off=0x12D030
constexpr uint32_t kPrologue_push_rbx_rsi_0012DFB0 = 0x0012DFB0; // file_off=0x12D3B0
constexpr uint32_t kPrologue_push_rbx_rsi_0012E110 = 0x0012E110; // file_off=0x12D510
constexpr uint32_t kPrologue_xor_eax_eax_ret_0012EBF2 = 0x0012EBF2; // file_off=0x12DFF2
constexpr uint32_t kPrologue_call_rax_0012F3E0 = 0x0012F3E0; // file_off=0x12E7E0
constexpr uint32_t kPrologue_push_rbx_rsi_0012FC10 = 0x0012FC10; // file_off=0x12F010
constexpr uint32_t kPrologue_call_rax_001300B9 = 0x001300B9; // file_off=0x12F4B9
constexpr uint32_t kPrologue_call_rax_00130248 = 0x00130248; // file_off=0x12F648
constexpr uint32_t kPrologue_xor_eax_eax_ret_001312BC = 0x001312BC; // file_off=0x1306BC
constexpr uint32_t kPrologue_call_rax_00131620 = 0x00131620; // file_off=0x130A20
constexpr uint32_t kPrologue_call_rax_001319A6 = 0x001319A6; // file_off=0x130DA6
constexpr uint32_t kPrologue_push_rbx_rsi_00131A00 = 0x00131A00; // file_off=0x130E00
constexpr uint32_t kPrologue_call_rax_00131A6B = 0x00131A6B; // file_off=0x130E6B
constexpr uint32_t kPrologue_call_rax_00131A84 = 0x00131A84; // file_off=0x130E84
constexpr uint32_t kPrologue_call_rax_00131B26 = 0x00131B26; // file_off=0x130F26
constexpr uint32_t kPrologue_push_rbx_rsi_001328B0 = 0x001328B0; // file_off=0x131CB0
constexpr uint32_t kPrologue_enter_vm_00132B40 = 0x00132B40; // file_off=0x131F40
constexpr uint32_t kPrologue_call_rax_00132CE6 = 0x00132CE6; // file_off=0x1320E6
constexpr uint32_t kPrologue_push_rbx_rsi_00132D20 = 0x00132D20; // file_off=0x132120
constexpr uint32_t kPrologue_mov_eax_1_ret_00132F5A = 0x00132F5A; // file_off=0x13235A
constexpr uint32_t kPrologue_push_rbx_rsi_00132F60 = 0x00132F60; // file_off=0x132360
constexpr uint32_t kPrologue_enter_vm_00133614 = 0x00133614; // file_off=0x132A14
constexpr uint32_t kPrologue_enter_vm_00133630 = 0x00133630; // file_off=0x132A30
constexpr uint32_t kPrologue_enter_vm_00133641 = 0x00133641; // file_off=0x132A41
constexpr uint32_t kPrologue_enter_vm_0013364D = 0x0013364D; // file_off=0x132A4D
constexpr uint32_t kPrologue_enter_vm_0013365D = 0x0013365D; // file_off=0x132A5D
constexpr uint32_t kPrologue_enter_vm_00133746 = 0x00133746; // file_off=0x132B46
constexpr uint32_t kPrologue_enter_vm_001338DE = 0x001338DE; // file_off=0x132CDE
constexpr uint32_t kPrologue_enter_vm_001338ED = 0x001338ED; // file_off=0x132CED
constexpr uint32_t kPrologue_xor_eax_eax_ret_00133D35 = 0x00133D35; // file_off=0x133135
constexpr uint32_t kPrologue_enter_vm_00134354 = 0x00134354; // file_off=0x133754
constexpr uint32_t kPrologue_call_rax_00134A08 = 0x00134A08; // file_off=0x133E08
constexpr uint32_t kPrologue_xor_eax_eax_ret_001350B5 = 0x001350B5; // file_off=0x1344B5
constexpr uint32_t kPrologue_xor_eax_eax_ret_00136151 = 0x00136151; // file_off=0x135551
constexpr uint32_t kPrologue_enter_vm_001361C9 = 0x001361C9; // file_off=0x1355C9
constexpr uint32_t kPrologue_call_rax_001366DB = 0x001366DB; // file_off=0x135ADB
constexpr uint32_t kPrologue_call_rax_00136735 = 0x00136735; // file_off=0x135B35
constexpr uint32_t kPrologue_push_rbx_rsi_00136EB0 = 0x00136EB0; // file_off=0x1362B0
constexpr uint32_t kPrologue_xor_eax_eax_ret_00137041 = 0x00137041; // file_off=0x136441
constexpr uint32_t kPrologue_enter_vm_001370B9 = 0x001370B9; // file_off=0x1364B9
constexpr uint32_t kPrologue_enter_vm_0013718B = 0x0013718B; // file_off=0x13658B
constexpr uint32_t kPrologue_enter_vm_00137204 = 0x00137204; // file_off=0x136604
constexpr uint32_t kPrologue_xor_eax_eax_ret_00138E58 = 0x00138E58; // file_off=0x138258
constexpr uint32_t kPrologue_push_rbx_rsi_00139390 = 0x00139390; // file_off=0x138790
constexpr uint32_t kPrologue_push_rbx_rsi_00139410 = 0x00139410; // file_off=0x138810
constexpr uint32_t kPrologue_push_rbx_rsi_001399D0 = 0x001399D0; // file_off=0x138DD0
constexpr uint32_t kPrologue_push_rbx_rsi_00139B20 = 0x00139B20; // file_off=0x138F20
constexpr uint32_t kPrologue_call_rax_0013C4EF = 0x0013C4EF; // file_off=0x13B8EF
constexpr uint32_t kPrologue_call_rax_0013C5B9 = 0x0013C5B9; // file_off=0x13B9B9
constexpr uint32_t kPrologue_enter_vm_0013CE40 = 0x0013CE40; // file_off=0x13C240
constexpr uint32_t kPrologue_enter_vm_0013CE50 = 0x0013CE50; // file_off=0x13C250
constexpr uint32_t kPrologue_enter_vm_0013CE60 = 0x0013CE60; // file_off=0x13C260
constexpr uint32_t kPrologue_enter_vm_0013CE70 = 0x0013CE70; // file_off=0x13C270
constexpr uint32_t kPrologue_enter_vm_0013CE80 = 0x0013CE80; // file_off=0x13C280
constexpr uint32_t kPrologue_enter_vm_0013CE90 = 0x0013CE90; // file_off=0x13C290
constexpr uint32_t kPrologue_enter_vm_0013CEA0 = 0x0013CEA0; // file_off=0x13C2A0
constexpr uint32_t kPrologue_enter_vm_0013CEB0 = 0x0013CEB0; // file_off=0x13C2B0
constexpr uint32_t kPrologue_push_rbx_rsi_0013D250 = 0x0013D250; // file_off=0x13C650
constexpr uint32_t kPrologue_call_rax_0013E4CC = 0x0013E4CC; // file_off=0x13D8CC
constexpr uint32_t kPrologue_enter_vm_0013F44C = 0x0013F44C; // file_off=0x13E84C
constexpr uint32_t kPrologue_enter_vm_0013F690 = 0x0013F690; // file_off=0x13EA90
constexpr uint32_t kPrologue_call_rax_0013F824 = 0x0013F824; // file_off=0x13EC24
constexpr uint32_t kPrologue_enter_vm_0013F930 = 0x0013F930; // file_off=0x13ED30
constexpr uint32_t kPrologue_push_rbx_rsi_0013F9F0 = 0x0013F9F0; // file_off=0x13EDF0
constexpr uint32_t kPrologue_mov_eax_1_ret_001401C7 = 0x001401C7; // file_off=0x13F5C7
constexpr uint32_t kPrologue_enter_vm_001401D0 = 0x001401D0; // file_off=0x13F5D0
constexpr uint32_t kPrologue_call_rax_00140268 = 0x00140268; // file_off=0x13F668
constexpr uint32_t kPrologue_enter_vm_0014157D = 0x0014157D; // file_off=0x14097D
constexpr uint32_t kPrologue_push_rbx_rsi_001419D0 = 0x001419D0; // file_off=0x140DD0
constexpr uint32_t kPrologue_mov_eax_1_ret_00141A78 = 0x00141A78; // file_off=0x140E78
constexpr uint32_t kPrologue_call_rax_00141B64 = 0x00141B64; // file_off=0x140F64
constexpr uint32_t kPrologue_push_rbx_rsi_001425C0 = 0x001425C0; // file_off=0x1419C0
constexpr uint32_t kPrologue_push_rbx_rsi_00143AF0 = 0x00143AF0; // file_off=0x142EF0
constexpr uint32_t kPrologue_push_rbx_rsi_00144680 = 0x00144680; // file_off=0x143A80
constexpr uint32_t kPrologue_enter_vm_0014D6CC = 0x0014D6CC; // file_off=0x14CACC
constexpr uint32_t kPrologue_push_rbx_rsi_0014F6F0 = 0x0014F6F0; // file_off=0x14EAF0
constexpr uint32_t kPrologue_mov_eax_1_ret_00152D1C = 0x00152D1C; // file_off=0x15211C
constexpr uint32_t kPrologue_xor_eax_eax_ret_00152D69 = 0x00152D69; // file_off=0x152169
constexpr uint32_t kPrologue_mov_eax_1_ret_00152D6C = 0x00152D6C; // file_off=0x15216C
constexpr uint32_t kPrologue_xor_eax_eax_ret_00152DB5 = 0x00152DB5; // file_off=0x1521B5
constexpr uint32_t kPrologue_mov_eax_1_ret_00152DCB = 0x00152DCB; // file_off=0x1521CB
constexpr uint32_t kPrologue_xor_eax_eax_ret_00152DE5 = 0x00152DE5; // file_off=0x1521E5
constexpr uint32_t kPrologue_mov_eax_1_ret_00152DEA = 0x00152DEA; // file_off=0x1521EA
constexpr uint32_t kPrologue_xor_eax_eax_ret_00152DF5 = 0x00152DF5; // file_off=0x1521F5
constexpr uint32_t kPrologue_mov_eax_1_ret_00152DFB = 0x00152DFB; // file_off=0x1521FB
constexpr uint32_t kPrologue_xor_eax_eax_ret_00152E15 = 0x00152E15; // file_off=0x152215
constexpr uint32_t kPrologue_mov_eax_1_ret_00152E1B = 0x00152E1B; // file_off=0x15221B
constexpr uint32_t kPrologue_xor_eax_eax_ret_00152E35 = 0x00152E35; // file_off=0x152235
constexpr uint32_t kPrologue_mov_eax_1_ret_00152E3B = 0x00152E3B; // file_off=0x15223B
constexpr uint32_t kPrologue_push_rbx_rsi_00153A60 = 0x00153A60; // file_off=0x152E60
constexpr uint32_t kPrologue_enter_vm_001547DC = 0x001547DC; // file_off=0x153BDC
constexpr uint32_t kPrologue_xor_eax_eax_ret_00154E25 = 0x00154E25; // file_off=0x154225
constexpr uint32_t kPrologue_xor_eax_eax_ret_00154E51 = 0x00154E51; // file_off=0x154251
constexpr uint32_t kPrologue_xor_eax_eax_ret_00154F51 = 0x00154F51; // file_off=0x154351
constexpr uint32_t kPrologue_push_rbx_rsi_00155770 = 0x00155770; // file_off=0x154B70
constexpr uint32_t kPrologue_xor_eax_eax_ret_001557F5 = 0x001557F5; // file_off=0x154BF5
constexpr uint32_t kPrologue_xor_eax_eax_ret_00155926 = 0x00155926; // file_off=0x154D26
constexpr uint32_t kPrologue_xor_eax_eax_ret_00155961 = 0x00155961; // file_off=0x154D61
constexpr uint32_t kPrologue_push_rbx_rsi_00158250 = 0x00158250; // file_off=0x157650
constexpr uint32_t kPrologue_push_rbx_rsi_001582D0 = 0x001582D0; // file_off=0x1576D0
constexpr uint32_t kPrologue_push_rbx_rsi_00158380 = 0x00158380; // file_off=0x157780
constexpr uint32_t kPrologue_push_rbx_rsi_00158420 = 0x00158420; // file_off=0x157820
constexpr uint32_t kPrologue_push_rbx_rsi_00158920 = 0x00158920; // file_off=0x157D20
constexpr uint32_t kPrologue_push_rbx_rsi_001589E0 = 0x001589E0; // file_off=0x157DE0
constexpr uint32_t kPrologue_enter_vm_00159890 = 0x00159890; // file_off=0x158C90
constexpr uint32_t kPrologue_push_rbx_rsi_0015A100 = 0x0015A100; // file_off=0x159500
constexpr uint32_t kPrologue_enter_vm_0015B0E0 = 0x0015B0E0; // file_off=0x15A4E0
constexpr uint32_t kPrologue_enter_vm_0015BB20 = 0x0015BB20; // file_off=0x15AF20
constexpr uint32_t kPrologue_enter_vm_0015CD50 = 0x0015CD50; // file_off=0x15C150
constexpr uint32_t kPrologue_enter_vm_0015D9D0 = 0x0015D9D0; // file_off=0x15CDD0
constexpr uint32_t kPrologue_enter_vm_0015E110 = 0x0015E110; // file_off=0x15D510
constexpr uint32_t kPrologue_enter_vm_0015E260 = 0x0015E260; // file_off=0x15D660
constexpr uint32_t kPrologue_push_rbx_rsi_0015F400 = 0x0015F400; // file_off=0x15E800
constexpr uint32_t kPrologue_enter_vm_0015F550 = 0x0015F550; // file_off=0x15E950
constexpr uint32_t kPrologue_enter_vm_0015F560 = 0x0015F560; // file_off=0x15E960
constexpr uint32_t kPrologue_push_rbx_rsi_0015F6B0 = 0x0015F6B0; // file_off=0x15EAB0
constexpr uint32_t kPrologue_push_rbx_rsi_0015F830 = 0x0015F830; // file_off=0x15EC30
constexpr uint32_t kPrologue_enter_vm_0015FB10 = 0x0015FB10; // file_off=0x15EF10
constexpr uint32_t kPrologue_enter_vm_0015FF2D = 0x0015FF2D; // file_off=0x15F32D
constexpr uint32_t kPrologue_push_rbx_rsi_00160190 = 0x00160190; // file_off=0x15F590
constexpr uint32_t kPrologue_enter_vm_00160AA0 = 0x00160AA0; // file_off=0x15FEA0
constexpr uint32_t kPrologue_enter_vm_00160AB0 = 0x00160AB0; // file_off=0x15FEB0
constexpr uint32_t kPrologue_enter_vm_00161CFD = 0x00161CFD; // file_off=0x1610FD
constexpr uint32_t kPrologue_enter_vm_00161D0D = 0x00161D0D; // file_off=0x16110D
constexpr uint32_t kPrologue_enter_vm_00161DBD = 0x00161DBD; // file_off=0x1611BD
constexpr uint32_t kPrologue_enter_vm_00161DCB = 0x00161DCB; // file_off=0x1611CB
constexpr uint32_t kPrologue_enter_vm_00162470 = 0x00162470; // file_off=0x161870
constexpr uint32_t kPrologue_enter_vm_001628C0 = 0x001628C0; // file_off=0x161CC0
constexpr uint32_t kPrologue_push_rbx_rsi_00164820 = 0x00164820; // file_off=0x163C20
constexpr uint32_t kPrologue_enter_vm_00164970 = 0x00164970; // file_off=0x163D70
constexpr uint32_t kPrologue_enter_vm_00164980 = 0x00164980; // file_off=0x163D80
constexpr uint32_t kPrologue_enter_vm_00165B80 = 0x00165B80; // file_off=0x164F80
constexpr uint32_t kPrologue_enter_vm_00165B90 = 0x00165B90; // file_off=0x164F90
constexpr uint32_t kPrologue_enter_vm_001665C0 = 0x001665C0; // file_off=0x1659C0
constexpr uint32_t kPrologue_push_rbx_rsi_001669C0 = 0x001669C0; // file_off=0x165DC0
constexpr uint32_t kPrologue_enter_vm_00166BA0 = 0x00166BA0; // file_off=0x165FA0
constexpr uint32_t kPrologue_enter_vm_00166BB0 = 0x00166BB0; // file_off=0x165FB0
constexpr uint32_t kPrologue_enter_vm_00167170 = 0x00167170; // file_off=0x166570
constexpr uint32_t kPrologue_enter_vm_00167210 = 0x00167210; // file_off=0x166610
constexpr uint32_t kPrologue_push_rbx_rsi_00167630 = 0x00167630; // file_off=0x166A30
constexpr uint32_t kPrologue_enter_vm_001678A0 = 0x001678A0; // file_off=0x166CA0
constexpr uint32_t kPrologue_enter_vm_00167940 = 0x00167940; // file_off=0x166D40
constexpr uint32_t kPrologue_push_rbx_rsi_00167D60 = 0x00167D60; // file_off=0x167160
constexpr uint32_t kPrologue_push_rbx_rsi_00167F00 = 0x00167F00; // file_off=0x167300
constexpr uint32_t kPrologue_enter_vm_00168030 = 0x00168030; // file_off=0x167430
constexpr uint32_t kPrologue_push_rbx_rsi_00168040 = 0x00168040; // file_off=0x167440
constexpr uint32_t kPrologue_enter_vm_00168110 = 0x00168110; // file_off=0x167510
constexpr uint32_t kPrologue_push_rbx_rsi_001682A0 = 0x001682A0; // file_off=0x1676A0
constexpr uint32_t kPrologue_push_rbx_rsi_00168420 = 0x00168420; // file_off=0x167820
constexpr uint32_t kPrologue_enter_vm_00168560 = 0x00168560; // file_off=0x167960
constexpr uint32_t kPrologue_enter_vm_001685B0 = 0x001685B0; // file_off=0x1679B0
constexpr uint32_t kPrologue_push_rbx_rsi_00168B20 = 0x00168B20; // file_off=0x167F20
constexpr uint32_t kPrologue_push_rbx_rsi_00168C50 = 0x00168C50; // file_off=0x168050
constexpr uint32_t kPrologue_enter_vm_00168E80 = 0x00168E80; // file_off=0x168280
constexpr uint32_t kPrologue_push_rbx_rsi_00168E90 = 0x00168E90; // file_off=0x168290
constexpr uint32_t kPrologue_enter_vm_00168F60 = 0x00168F60; // file_off=0x168360
constexpr uint32_t kPrologue_enter_vm_001696B0 = 0x001696B0; // file_off=0x168AB0
constexpr uint32_t kPrologue_enter_vm_00169760 = 0x00169760; // file_off=0x168B60
constexpr uint32_t kPrologue_enter_vm_00169A3D = 0x00169A3D; // file_off=0x168E3D
constexpr uint32_t kPrologue_enter_vm_00169A56 = 0x00169A56; // file_off=0x168E56
constexpr uint32_t kPrologue_push_rbx_rsi_0016A1E0 = 0x0016A1E0; // file_off=0x1695E0
constexpr uint32_t kPrologue_enter_vm_0016A3E0 = 0x0016A3E0; // file_off=0x1697E0
constexpr uint32_t kPrologue_push_rbx_rsi_0016A3F0 = 0x0016A3F0; // file_off=0x1697F0
constexpr uint32_t kPrologue_enter_vm_0016A4E0 = 0x0016A4E0; // file_off=0x1698E0
constexpr uint32_t kPrologue_enter_vm_0016A9F0 = 0x0016A9F0; // file_off=0x169DF0
constexpr uint32_t kPrologue_enter_vm_0016AA00 = 0x0016AA00; // file_off=0x169E00
constexpr uint32_t kPrologue_push_rbx_rsi_0016AB30 = 0x0016AB30; // file_off=0x169F30
constexpr uint32_t kPrologue_enter_vm_0016AE30 = 0x0016AE30; // file_off=0x16A230
constexpr uint32_t kPrologue_enter_vm_0016AFE0 = 0x0016AFE0; // file_off=0x16A3E0
constexpr uint32_t kPrologue_push_rbx_rsi_0016B0A0 = 0x0016B0A0; // file_off=0x16A4A0
constexpr uint32_t kPrologue_push_rbx_rsi_0016B5A0 = 0x0016B5A0; // file_off=0x16A9A0
constexpr uint32_t kPrologue_enter_vm_0016B940 = 0x0016B940; // file_off=0x16AD40
constexpr uint32_t kPrologue_enter_vm_0016BA60 = 0x0016BA60; // file_off=0x16AE60
constexpr uint32_t kPrologue_push_rbx_rsi_0016BFB0 = 0x0016BFB0; // file_off=0x16B3B0
constexpr uint32_t kPrologue_enter_vm_0016C3B0 = 0x0016C3B0; // file_off=0x16B7B0
constexpr uint32_t kPrologue_enter_vm_0016C620 = 0x0016C620; // file_off=0x16BA20
constexpr uint32_t kPrologue_push_rbx_rsi_0016D190 = 0x0016D190; // file_off=0x16C590
constexpr uint32_t kPrologue_enter_vm_0016D600 = 0x0016D600; // file_off=0x16CA00
constexpr uint32_t kPrologue_enter_vm_0016D671 = 0x0016D671; // file_off=0x16CA71
constexpr uint32_t kPrologue_enter_vm_0016D6A0 = 0x0016D6A0; // file_off=0x16CAA0
constexpr uint32_t kPrologue_enter_vm_0016D7F0 = 0x0016D7F0; // file_off=0x16CBF0
constexpr uint32_t kPrologue_enter_vm_0016E200 = 0x0016E200; // file_off=0x16D600
constexpr uint32_t kPrologue_enter_vm_0016E2F0 = 0x0016E2F0; // file_off=0x16D6F0
constexpr uint32_t kPrologue_enter_vm_0016E7D0 = 0x0016E7D0; // file_off=0x16DBD0
constexpr uint32_t kPrologue_enter_vm_0016F500 = 0x0016F500; // file_off=0x16E900
constexpr uint32_t kPrologue_enter_vm_0016F670 = 0x0016F670; // file_off=0x16EA70
constexpr uint32_t kPrologue_push_rbx_rsi_0016F8B0 = 0x0016F8B0; // file_off=0x16ECB0
constexpr uint32_t kPrologue_enter_vm_0016FEF0 = 0x0016FEF0; // file_off=0x16F2F0
constexpr uint32_t kPrologue_enter_vm_00170060 = 0x00170060; // file_off=0x16F460
constexpr uint32_t kPrologue_push_rbx_rsi_00170730 = 0x00170730; // file_off=0x16FB30
constexpr uint32_t kPrologue_enter_vm_00170D70 = 0x00170D70; // file_off=0x170170
constexpr uint32_t kPrologue_enter_vm_00171020 = 0x00171020; // file_off=0x170420
constexpr uint32_t kPrologue_push_rbx_rsi_00171070 = 0x00171070; // file_off=0x170470
constexpr uint32_t kPrologue_enter_vm_00171680 = 0x00171680; // file_off=0x170A80
constexpr uint32_t kPrologue_enter_vm_00171960 = 0x00171960; // file_off=0x170D60
constexpr uint32_t kPrologue_push_rbx_rsi_001720C0 = 0x001720C0; // file_off=0x1714C0
constexpr uint32_t kPrologue_enter_vm_001724A0 = 0x001724A0; // file_off=0x1718A0
constexpr uint32_t kPrologue_enter_vm_00172570 = 0x00172570; // file_off=0x171970
constexpr uint32_t kPrologue_push_rbx_rsi_00172B10 = 0x00172B10; // file_off=0x171F10
constexpr uint32_t kPrologue_mov_eax_1_ret_00172DA9 = 0x00172DA9; // file_off=0x1721A9
constexpr uint32_t kPrologue_enter_vm_00172E70 = 0x00172E70; // file_off=0x172270
constexpr uint32_t kPrologue_enter_vm_00173000 = 0x00173000; // file_off=0x172400
constexpr uint32_t kPrologue_mov_eax_1_ret_00173297 = 0x00173297; // file_off=0x172697
constexpr uint32_t kPrologue_mov_eax_1_ret_001732A7 = 0x001732A7; // file_off=0x1726A7
constexpr uint32_t kPrologue_enter_vm_00173440 = 0x00173440; // file_off=0x172840
constexpr uint32_t kPrologue_enter_vm_0017373D = 0x0017373D; // file_off=0x172B3D
constexpr uint32_t kPrologue_enter_vm_00173750 = 0x00173750; // file_off=0x172B50
constexpr uint32_t kPrologue_enter_vm_0017375C = 0x0017375C; // file_off=0x172B5C
constexpr uint32_t kPrologue_enter_vm_00173768 = 0x00173768; // file_off=0x172B68
constexpr uint32_t kPrologue_enter_vm_00173A00 = 0x00173A00; // file_off=0x172E00
constexpr uint32_t kPrologue_enter_vm_00173B40 = 0x00173B40; // file_off=0x172F40
constexpr uint32_t kPrologue_mov_eax_1_ret_00173C27 = 0x00173C27; // file_off=0x173027
constexpr uint32_t kPrologue_xor_eax_eax_ret_00173C2D = 0x00173C2D; // file_off=0x17302D
constexpr uint32_t kPrologue_push_rbx_rsi_001741F0 = 0x001741F0; // file_off=0x1735F0
constexpr uint32_t kPrologue_enter_vm_001744BD = 0x001744BD; // file_off=0x1738BD
constexpr uint32_t kPrologue_enter_vm_001744D0 = 0x001744D0; // file_off=0x1738D0
constexpr uint32_t kPrologue_enter_vm_001744DC = 0x001744DC; // file_off=0x1738DC
constexpr uint32_t kPrologue_enter_vm_001744E8 = 0x001744E8; // file_off=0x1738E8
constexpr uint32_t kPrologue_push_rbx_rsi_00174570 = 0x00174570; // file_off=0x173970
constexpr uint32_t kPrologue_enter_vm_00174750 = 0x00174750; // file_off=0x173B50
constexpr uint32_t kPrologue_enter_vm_001748B0 = 0x001748B0; // file_off=0x173CB0
constexpr uint32_t kPrologue_mov_eax_1_ret_001749C0 = 0x001749C0; // file_off=0x173DC0
constexpr uint32_t kPrologue_xor_eax_eax_ret_001749C6 = 0x001749C6; // file_off=0x173DC6
constexpr uint32_t kPrologue_enter_vm_0017527D = 0x0017527D; // file_off=0x17467D
constexpr uint32_t kPrologue_enter_vm_00175290 = 0x00175290; // file_off=0x174690
constexpr uint32_t kPrologue_enter_vm_0017529C = 0x0017529C; // file_off=0x17469C
constexpr uint32_t kPrologue_enter_vm_001752A8 = 0x001752A8; // file_off=0x1746A8
constexpr uint32_t kPrologue_enter_vm_001753E0 = 0x001753E0; // file_off=0x1747E0
constexpr uint32_t kPrologue_enter_vm_00175630 = 0x00175630; // file_off=0x174A30
constexpr uint32_t kPrologue_xor_eax_eax_ret_0017575D = 0x0017575D; // file_off=0x174B5D
constexpr uint32_t kPrologue_mov_eax_1_ret_00176419 = 0x00176419; // file_off=0x175819
constexpr uint32_t kPrologue_enter_vm_00176960 = 0x00176960; // file_off=0x175D60
constexpr uint32_t kPrologue_push_rbx_rsi_00176CA0 = 0x00176CA0; // file_off=0x1760A0
constexpr uint32_t kPrologue_enter_vm_00176DE0 = 0x00176DE0; // file_off=0x1761E0
constexpr uint32_t kPrologue_enter_vm_00176E60 = 0x00176E60; // file_off=0x176260
constexpr uint32_t kPrologue_push_rbx_rsi_00176E70 = 0x00176E70; // file_off=0x176270
constexpr uint32_t kPrologue_enter_vm_00177420 = 0x00177420; // file_off=0x176820
constexpr uint32_t kPrologue_enter_vm_00177690 = 0x00177690; // file_off=0x176A90
constexpr uint32_t kPrologue_push_rbx_rsi_001776A0 = 0x001776A0; // file_off=0x176AA0
constexpr uint32_t kPrologue_enter_vm_00177F80 = 0x00177F80; // file_off=0x177380
constexpr uint32_t kPrologue_enter_vm_00178340 = 0x00178340; // file_off=0x177740
constexpr uint32_t kPrologue_push_rbx_rsi_00178350 = 0x00178350; // file_off=0x177750
constexpr uint32_t kPrologue_push_rbx_rsi_00178B60 = 0x00178B60; // file_off=0x177F60
constexpr uint32_t kPrologue_enter_vm_00178C90 = 0x00178C90; // file_off=0x178090
constexpr uint32_t kPrologue_enter_vm_00178CA0 = 0x00178CA0; // file_off=0x1780A0
constexpr uint32_t kPrologue_enter_vm_00179070 = 0x00179070; // file_off=0x178470
constexpr uint32_t kPrologue_push_rbx_rsi_00179080 = 0x00179080; // file_off=0x178480
constexpr uint32_t kPrologue_push_rbx_rsi_00179260 = 0x00179260; // file_off=0x178660
constexpr uint32_t kPrologue_enter_vm_00179443 = 0x00179443; // file_off=0x178843
constexpr uint32_t kPrologue_enter_vm_00179580 = 0x00179580; // file_off=0x178980
constexpr uint32_t kPrologue_push_rbx_rsi_001795E0 = 0x001795E0; // file_off=0x1789E0
constexpr uint32_t kPrologue_push_rbx_rsi_00179BC0 = 0x00179BC0; // file_off=0x178FC0
constexpr uint32_t kPrologue_enter_vm_00179CF0 = 0x00179CF0; // file_off=0x1790F0
constexpr uint32_t kPrologue_enter_vm_00179E40 = 0x00179E40; // file_off=0x179240
constexpr uint32_t kPrologue_enter_vm_00179E50 = 0x00179E50; // file_off=0x179250
constexpr uint32_t kPrologue_enter_vm_00179E80 = 0x00179E80; // file_off=0x179280
constexpr uint32_t kPrologue_enter_vm_00179E90 = 0x00179E90; // file_off=0x179290
constexpr uint32_t kPrologue_push_rbx_rsi_0017A090 = 0x0017A090; // file_off=0x179490
constexpr uint32_t kPrologue_enter_vm_0017AFF0 = 0x0017AFF0; // file_off=0x17A3F0
constexpr uint32_t kPrologue_enter_vm_0017B2D0 = 0x0017B2D0; // file_off=0x17A6D0
constexpr uint32_t kPrologue_enter_vm_0017B3B0 = 0x0017B3B0; // file_off=0x17A7B0
constexpr uint32_t kPrologue_push_rbx_rsi_0017B3C0 = 0x0017B3C0; // file_off=0x17A7C0
constexpr uint32_t kPrologue_xor_eax_eax_ret_0017B9AA = 0x0017B9AA; // file_off=0x17ADAA
constexpr uint32_t kPrologue_enter_vm_0017B9AD = 0x0017B9AD; // file_off=0x17ADAD
constexpr uint32_t kPrologue_enter_vm_0017B9B5 = 0x0017B9B5; // file_off=0x17ADB5
constexpr uint32_t kPrologue_enter_vm_0017BD80 = 0x0017BD80; // file_off=0x17B180
constexpr uint32_t kPrologue_enter_vm_0017BD90 = 0x0017BD90; // file_off=0x17B190
constexpr uint32_t kPrologue_enter_vm_0017BDC2 = 0x0017BDC2; // file_off=0x17B1C2
constexpr uint32_t kPrologue_push_rbx_rsi_0017C4F0 = 0x0017C4F0; // file_off=0x17B8F0
constexpr uint32_t kPrologue_push_rbx_rsi_0017CA10 = 0x0017CA10; // file_off=0x17BE10
constexpr uint32_t kPrologue_enter_vm_0017D0C0 = 0x0017D0C0; // file_off=0x17C4C0
constexpr uint32_t kPrologue_enter_vm_0017D0F0 = 0x0017D0F0; // file_off=0x17C4F0
constexpr uint32_t kPrologue_enter_vm_0017D170 = 0x0017D170; // file_off=0x17C570
constexpr uint32_t kPrologue_push_rbx_rsi_0017D180 = 0x0017D180; // file_off=0x17C580
constexpr uint32_t kPrologue_push_rbx_rsi_0017D2C0 = 0x0017D2C0; // file_off=0x17C6C0
constexpr uint32_t kPrologue_enter_vm_0017D420 = 0x0017D420; // file_off=0x17C820
constexpr uint32_t kPrologue_enter_vm_0017D5C0 = 0x0017D5C0; // file_off=0x17C9C0
constexpr uint32_t kPrologue_push_rbx_rsi_0017D5D0 = 0x0017D5D0; // file_off=0x17C9D0
constexpr uint32_t kPrologue_push_rbx_rsi_0017D6B0 = 0x0017D6B0; // file_off=0x17CAB0
constexpr uint32_t kPrologue_push_rbx_rsi_0017D9B0 = 0x0017D9B0; // file_off=0x17CDB0
constexpr uint32_t kPrologue_enter_vm_0017E420 = 0x0017E420; // file_off=0x17D820
constexpr uint32_t kPrologue_enter_vm_0017E580 = 0x0017E580; // file_off=0x17D980
constexpr uint32_t kPrologue_push_rbx_rsi_0017EC30 = 0x0017EC30; // file_off=0x17E030
constexpr uint32_t kPrologue_enter_vm_0017F4A0 = 0x0017F4A0; // file_off=0x17E8A0
constexpr uint32_t kPrologue_enter_vm_0017F610 = 0x0017F610; // file_off=0x17EA10
constexpr uint32_t kPrologue_push_rbx_rsi_0017F820 = 0x0017F820; // file_off=0x17EC20
constexpr uint32_t kPrologue_push_rbx_rsi_0017FB40 = 0x0017FB40; // file_off=0x17EF40
constexpr uint32_t kPrologue_push_rbx_rsi_0017FC00 = 0x0017FC00; // file_off=0x17F000
constexpr uint32_t kPrologue_enter_vm_001804D0 = 0x001804D0; // file_off=0x17F8D0
constexpr uint32_t kPrologue_enter_vm_00180610 = 0x00180610; // file_off=0x17FA10
constexpr uint32_t kPrologue_push_rbx_rsi_00180D30 = 0x00180D30; // file_off=0x180130
constexpr uint32_t kPrologue_push_rbx_rsi_00180D90 = 0x00180D90; // file_off=0x180190
constexpr uint32_t kPrologue_push_rbx_rsi_00180DF0 = 0x00180DF0; // file_off=0x1801F0
constexpr uint32_t kPrologue_enter_vm_00182090 = 0x00182090; // file_off=0x181490
constexpr uint32_t kPrologue_enter_vm_00182673 = 0x00182673; // file_off=0x181A73
constexpr uint32_t kPrologue_enter_vm_001826F0 = 0x001826F0; // file_off=0x181AF0
constexpr uint32_t kPrologue_enter_vm_00183CB0 = 0x00183CB0; // file_off=0x1830B0
constexpr uint32_t kPrologue_push_rbx_rsi_00183CC0 = 0x00183CC0; // file_off=0x1830C0
constexpr uint32_t kPrologue_enter_vm_001845A0 = 0x001845A0; // file_off=0x1839A0
constexpr uint32_t kPrologue_enter_vm_00184720 = 0x00184720; // file_off=0x183B20
constexpr uint32_t kPrologue_push_rbx_rsi_00185430 = 0x00185430; // file_off=0x184830
constexpr uint32_t kPrologue_push_rbx_rsi_00185520 = 0x00185520; // file_off=0x184920
constexpr uint32_t kPrologue_push_rbx_rsi_00185870 = 0x00185870; // file_off=0x184C70
constexpr uint32_t kPrologue_enter_vm_00185E70 = 0x00185E70; // file_off=0x185270
constexpr uint32_t kPrologue_enter_vm_00186090 = 0x00186090; // file_off=0x185490
constexpr uint32_t kPrologue_push_rbx_rsi_00186160 = 0x00186160; // file_off=0x185560
constexpr uint32_t kPrologue_push_rbx_rsi_001862C0 = 0x001862C0; // file_off=0x1856C0
constexpr uint32_t kPrologue_push_rbx_rsi_00186600 = 0x00186600; // file_off=0x185A00
constexpr uint32_t kPrologue_enter_vm_00186E10 = 0x00186E10; // file_off=0x186210
constexpr uint32_t kPrologue_enter_vm_001871A0 = 0x001871A0; // file_off=0x1865A0
constexpr uint32_t kPrologue_push_rbx_rsi_00187210 = 0x00187210; // file_off=0x186610
constexpr uint32_t kPrologue_enter_vm_00187594 = 0x00187594; // file_off=0x186994
constexpr uint32_t kPrologue_enter_vm_001875E0 = 0x001875E0; // file_off=0x1869E0
constexpr uint32_t kPrologue_enter_vm_00187640 = 0x00187640; // file_off=0x186A40
constexpr uint32_t kPrologue_enter_vm_00187900 = 0x00187900; // file_off=0x186D00
constexpr uint32_t kPrologue_enter_vm_001879A6 = 0x001879A6; // file_off=0x186DA6
constexpr uint32_t kPrologue_enter_vm_001879C0 = 0x001879C0; // file_off=0x186DC0
constexpr uint32_t kPrologue_enter_vm_00187ACC = 0x00187ACC; // file_off=0x186ECC
constexpr uint32_t kPrologue_enter_vm_00187DC0 = 0x00187DC0; // file_off=0x1871C0
constexpr uint32_t kPrologue_enter_vm_001882CD = 0x001882CD; // file_off=0x1876CD
constexpr uint32_t kPrologue_enter_vm_001884AD = 0x001884AD; // file_off=0x1878AD
constexpr uint32_t kPrologue_enter_vm_001887D4 = 0x001887D4; // file_off=0x187BD4
constexpr uint32_t kPrologue_push_rbx_rsi_001888D0 = 0x001888D0; // file_off=0x187CD0
constexpr uint32_t kPrologue_enter_vm_00188A5C = 0x00188A5C; // file_off=0x187E5C
constexpr uint32_t kPrologue_push_rbx_rsi_00188B50 = 0x00188B50; // file_off=0x187F50
constexpr uint32_t kPrologue_enter_vm_00188CDC = 0x00188CDC; // file_off=0x1880DC
constexpr uint32_t kPrologue_enter_vm_00188E31 = 0x00188E31; // file_off=0x188231
constexpr uint32_t kPrologue_enter_vm_00189355 = 0x00189355; // file_off=0x188755
constexpr uint32_t kPrologue_enter_vm_00189605 = 0x00189605; // file_off=0x188A05
constexpr uint32_t kPrologue_enter_vm_001897F5 = 0x001897F5; // file_off=0x188BF5
constexpr uint32_t kPrologue_enter_vm_00189A1E = 0x00189A1E; // file_off=0x188E1E
constexpr uint32_t kPrologue_enter_vm_00189C1E = 0x00189C1E; // file_off=0x18901E
constexpr uint32_t kPrologue_enter_vm_00189DC0 = 0x00189DC0; // file_off=0x1891C0
constexpr uint32_t kPrologue_enter_vm_00189DD8 = 0x00189DD8; // file_off=0x1891D8
constexpr uint32_t kPrologue_enter_vm_00189F50 = 0x00189F50; // file_off=0x189350
constexpr uint32_t kPrologue_enter_vm_00189F68 = 0x00189F68; // file_off=0x189368
constexpr uint32_t kPrologue_enter_vm_0018A11A = 0x0018A11A; // file_off=0x18951A
constexpr uint32_t kPrologue_enter_vm_0018A30E = 0x0018A30E; // file_off=0x18970E
constexpr uint32_t kPrologue_enter_vm_0018A561 = 0x0018A561; // file_off=0x189961
constexpr uint32_t kPrologue_enter_vm_0018A741 = 0x0018A741; // file_off=0x189B41
constexpr uint32_t kPrologue_enter_vm_0018A8E3 = 0x0018A8E3; // file_off=0x189CE3
constexpr uint32_t kPrologue_enter_vm_0018A8FB = 0x0018A8FB; // file_off=0x189CFB
constexpr uint32_t kPrologue_enter_vm_0018AA83 = 0x0018AA83; // file_off=0x189E83
constexpr uint32_t kPrologue_enter_vm_0018AA9B = 0x0018AA9B; // file_off=0x189E9B
constexpr uint32_t kPrologue_enter_vm_0018AC5D = 0x0018AC5D; // file_off=0x18A05D
constexpr uint32_t kPrologue_enter_vm_0018AE31 = 0x0018AE31; // file_off=0x18A231
constexpr uint32_t kPrologue_enter_vm_0018B0DB = 0x0018B0DB; // file_off=0x18A4DB
constexpr uint32_t kPrologue_enter_vm_0018B36B = 0x0018B36B; // file_off=0x18A76B
constexpr uint32_t kPrologue_enter_vm_0018B510 = 0x0018B510; // file_off=0x18A910
constexpr uint32_t kPrologue_enter_vm_0018B528 = 0x0018B528; // file_off=0x18A928
constexpr uint32_t kPrologue_enter_vm_0018B6A0 = 0x0018B6A0; // file_off=0x18AAA0
constexpr uint32_t kPrologue_enter_vm_0018B6B8 = 0x0018B6B8; // file_off=0x18AAB8
constexpr uint32_t kPrologue_enter_vm_0018B901 = 0x0018B901; // file_off=0x18AD01
constexpr uint32_t kPrologue_enter_vm_0018BB61 = 0x0018BB61; // file_off=0x18AF61
constexpr uint32_t kPrologue_enter_vm_0018BDE0 = 0x0018BDE0; // file_off=0x18B1E0
constexpr uint32_t kPrologue_enter_vm_0018C070 = 0x0018C070; // file_off=0x18B470
constexpr uint32_t kPrologue_enter_vm_0018C220 = 0x0018C220; // file_off=0x18B620
constexpr uint32_t kPrologue_enter_vm_0018C238 = 0x0018C238; // file_off=0x18B638
constexpr uint32_t kPrologue_enter_vm_0018C3B0 = 0x0018C3B0; // file_off=0x18B7B0
constexpr uint32_t kPrologue_enter_vm_0018C3C8 = 0x0018C3C8; // file_off=0x18B7C8
constexpr uint32_t kPrologue_enter_vm_0018C604 = 0x0018C604; // file_off=0x18BA04
constexpr uint32_t kPrologue_enter_vm_0018C864 = 0x0018C864; // file_off=0x18BC64
constexpr uint32_t kPrologue_enter_vm_0018CA4B = 0x0018CA4B; // file_off=0x18BE4B
constexpr uint32_t kPrologue_enter_vm_0018CBDB = 0x0018CBDB; // file_off=0x18BFDB
constexpr uint32_t kPrologue_enter_vm_0018CD2C = 0x0018CD2C; // file_off=0x18C12C
constexpr uint32_t kPrologue_enter_vm_0018CD44 = 0x0018CD44; // file_off=0x18C144
constexpr uint32_t kPrologue_enter_vm_0018CE6C = 0x0018CE6C; // file_off=0x18C26C
constexpr uint32_t kPrologue_enter_vm_0018CE84 = 0x0018CE84; // file_off=0x18C284
constexpr uint32_t kPrologue_enter_vm_0018CFE8 = 0x0018CFE8; // file_off=0x18C3E8
constexpr uint32_t kPrologue_enter_vm_0018D16B = 0x0018D16B; // file_off=0x18C56B
constexpr uint32_t kPrologue_enter_vm_0018D31B = 0x0018D31B; // file_off=0x18C71B
constexpr uint32_t kPrologue_enter_vm_0018D4AB = 0x0018D4AB; // file_off=0x18C8AB
constexpr uint32_t kPrologue_enter_vm_0018D5FC = 0x0018D5FC; // file_off=0x18C9FC
constexpr uint32_t kPrologue_enter_vm_0018D614 = 0x0018D614; // file_off=0x18CA14
constexpr uint32_t kPrologue_enter_vm_0018D73C = 0x0018D73C; // file_off=0x18CB3C
constexpr uint32_t kPrologue_enter_vm_0018D754 = 0x0018D754; // file_off=0x18CB54
constexpr uint32_t kPrologue_enter_vm_0018D8B8 = 0x0018D8B8; // file_off=0x18CCB8
constexpr uint32_t kPrologue_enter_vm_0018DA3B = 0x0018DA3B; // file_off=0x18CE3B
constexpr uint32_t kPrologue_enter_vm_0018DBEB = 0x0018DBEB; // file_off=0x18CFEB
constexpr uint32_t kPrologue_enter_vm_0018DD7B = 0x0018DD7B; // file_off=0x18D17B
constexpr uint32_t kPrologue_enter_vm_0018DECC = 0x0018DECC; // file_off=0x18D2CC
constexpr uint32_t kPrologue_enter_vm_0018DEE4 = 0x0018DEE4; // file_off=0x18D2E4
constexpr uint32_t kPrologue_enter_vm_0018E00C = 0x0018E00C; // file_off=0x18D40C
constexpr uint32_t kPrologue_enter_vm_0018E024 = 0x0018E024; // file_off=0x18D424
constexpr uint32_t kPrologue_enter_vm_0018E188 = 0x0018E188; // file_off=0x18D588
constexpr uint32_t kPrologue_enter_vm_0018E30B = 0x0018E30B; // file_off=0x18D70B
constexpr uint32_t kPrologue_enter_vm_0018E4CE = 0x0018E4CE; // file_off=0x18D8CE
constexpr uint32_t kPrologue_enter_vm_0018E61E = 0x0018E61E; // file_off=0x18DA1E
constexpr uint32_t kPrologue_enter_vm_0018E76C = 0x0018E76C; // file_off=0x18DB6C
constexpr uint32_t kPrologue_enter_vm_0018E8AC = 0x0018E8AC; // file_off=0x18DCAC
constexpr uint32_t kPrologue_enter_vm_0018E9EB = 0x0018E9EB; // file_off=0x18DDEB
constexpr uint32_t kPrologue_enter_vm_0018EB3B = 0x0018EB3B; // file_off=0x18DF3B
constexpr uint32_t kPrologue_enter_vm_0018ECDE = 0x0018ECDE; // file_off=0x18E0DE
constexpr uint32_t kPrologue_enter_vm_0018EE2E = 0x0018EE2E; // file_off=0x18E22E
constexpr uint32_t kPrologue_enter_vm_0018EF7C = 0x0018EF7C; // file_off=0x18E37C
constexpr uint32_t kPrologue_enter_vm_0018F0BC = 0x0018F0BC; // file_off=0x18E4BC
constexpr uint32_t kPrologue_enter_vm_0018F1FB = 0x0018F1FB; // file_off=0x18E5FB
constexpr uint32_t kPrologue_enter_vm_0018F34B = 0x0018F34B; // file_off=0x18E74B
constexpr uint32_t kPrologue_enter_vm_0018F4EE = 0x0018F4EE; // file_off=0x18E8EE
constexpr uint32_t kPrologue_enter_vm_0018F63E = 0x0018F63E; // file_off=0x18EA3E
constexpr uint32_t kPrologue_enter_vm_0018F78C = 0x0018F78C; // file_off=0x18EB8C
constexpr uint32_t kPrologue_enter_vm_0018F8CC = 0x0018F8CC; // file_off=0x18ECCC
constexpr uint32_t kPrologue_enter_vm_0018FA0B = 0x0018FA0B; // file_off=0x18EE0B
constexpr uint32_t kPrologue_enter_vm_0018FB5B = 0x0018FB5B; // file_off=0x18EF5B
constexpr uint32_t kPrologue_enter_vm_0018FCFE = 0x0018FCFE; // file_off=0x18F0FE
constexpr uint32_t kPrologue_enter_vm_0018FE4E = 0x0018FE4E; // file_off=0x18F24E
constexpr uint32_t kPrologue_enter_vm_0018FF9C = 0x0018FF9C; // file_off=0x18F39C
constexpr uint32_t kPrologue_enter_vm_001900DC = 0x001900DC; // file_off=0x18F4DC
constexpr uint32_t kPrologue_enter_vm_0019021B = 0x0019021B; // file_off=0x18F61B
constexpr uint32_t kPrologue_enter_vm_0019036B = 0x0019036B; // file_off=0x18F76B
constexpr uint32_t kPrologue_enter_vm_00190761 = 0x00190761; // file_off=0x18FB61
constexpr uint32_t kPrologue_enter_vm_0019095D = 0x0019095D; // file_off=0x18FD5D
constexpr uint32_t kPrologue_enter_vm_00190C4D = 0x00190C4D; // file_off=0x19004D
constexpr uint32_t kPrologue_enter_vm_001910A4 = 0x001910A4; // file_off=0x1904A4
constexpr uint32_t kPrologue_enter_vm_001911E5 = 0x001911E5; // file_off=0x1905E5
constexpr uint32_t kPrologue_push_rbx_rsi_001913E0 = 0x001913E0; // file_off=0x1907E0
constexpr uint32_t kPrologue_enter_vm_0019156C = 0x0019156C; // file_off=0x19096C
constexpr uint32_t kPrologue_enter_vm_001916A5 = 0x001916A5; // file_off=0x190AA5
constexpr uint32_t kPrologue_push_rbx_rsi_001917E0 = 0x001917E0; // file_off=0x190BE0
constexpr uint32_t kPrologue_enter_vm_0019196C = 0x0019196C; // file_off=0x190D6C
constexpr uint32_t kPrologue_enter_vm_00191AA5 = 0x00191AA5; // file_off=0x190EA5
constexpr uint32_t kPrologue_enter_vm_00191F31 = 0x00191F31; // file_off=0x191331
constexpr uint32_t kPrologue_enter_vm_001923F4 = 0x001923F4; // file_off=0x1917F4
constexpr uint32_t kPrologue_enter_vm_001925ED = 0x001925ED; // file_off=0x1919ED
constexpr uint32_t kPrologue_enter_vm_001928DD = 0x001928DD; // file_off=0x191CDD
constexpr uint32_t kPrologue_push_rbx_rsi_00192B40 = 0x00192B40; // file_off=0x191F40
constexpr uint32_t kPrologue_enter_vm_00192CCC = 0x00192CCC; // file_off=0x1920CC
constexpr uint32_t kPrologue_enter_vm_00192E05 = 0x00192E05; // file_off=0x192205
constexpr uint32_t kPrologue_push_rbx_rsi_001932D0 = 0x001932D0; // file_off=0x1926D0
constexpr uint32_t kPrologue_call_rax_001937B0 = 0x001937B0; // file_off=0x192BB0
constexpr uint32_t kPrologue_call_rax_00193890 = 0x00193890; // file_off=0x192C90
constexpr uint32_t kPrologue_call_rax_00193AA0 = 0x00193AA0; // file_off=0x192EA0
constexpr uint32_t kPrologue_call_rax_00193BD0 = 0x00193BD0; // file_off=0x192FD0
constexpr uint32_t kPrologue_push_rbx_rsi_00193E10 = 0x00193E10; // file_off=0x193210
constexpr uint32_t kPrologue_push_rbx_rsi_001941B0 = 0x001941B0; // file_off=0x1935B0
constexpr uint32_t kPrologue_enter_vm_001943F0 = 0x001943F0; // file_off=0x1937F0
constexpr uint32_t kPrologue_enter_vm_001944D5 = 0x001944D5; // file_off=0x1938D5
constexpr uint32_t kPrologue_enter_vm_00194545 = 0x00194545; // file_off=0x193945
constexpr uint32_t kPrologue_enter_vm_001945E5 = 0x001945E5; // file_off=0x1939E5
constexpr uint32_t kPrologue_enter_vm_00194655 = 0x00194655; // file_off=0x193A55
constexpr uint32_t kPrologue_enter_vm_00195FC0 = 0x00195FC0; // file_off=0x1953C0
constexpr uint32_t kPrologue_enter_vm_00196027 = 0x00196027; // file_off=0x195427
constexpr uint32_t kPrologue_enter_vm_00196153 = 0x00196153; // file_off=0x195553
constexpr uint32_t kPrologue_enter_vm_00196406 = 0x00196406; // file_off=0x195806
constexpr uint32_t kPrologue_enter_vm_00196424 = 0x00196424; // file_off=0x195824
constexpr uint32_t kPrologue_enter_vm_001964CB = 0x001964CB; // file_off=0x1958CB
constexpr uint32_t kPrologue_enter_vm_00196549 = 0x00196549; // file_off=0x195949
constexpr uint32_t kPrologue_enter_vm_001965A2 = 0x001965A2; // file_off=0x1959A2
constexpr uint32_t kPrologue_enter_vm_00196687 = 0x00196687; // file_off=0x195A87
constexpr uint32_t kPrologue_enter_vm_0019674E = 0x0019674E; // file_off=0x195B4E
constexpr uint32_t kPrologue_enter_vm_001967FA = 0x001967FA; // file_off=0x195BFA
constexpr uint32_t kPrologue_enter_vm_001968D9 = 0x001968D9; // file_off=0x195CD9
constexpr uint32_t kPrologue_enter_vm_00196A4F = 0x00196A4F; // file_off=0x195E4F
constexpr uint32_t kPrologue_enter_vm_00196B37 = 0x00196B37; // file_off=0x195F37
constexpr uint32_t kPrologue_enter_vm_00196DEE = 0x00196DEE; // file_off=0x1961EE
constexpr uint32_t kPrologue_call_rax_00197358 = 0x00197358; // file_off=0x196758
constexpr uint32_t kPrologue_call_rax_00197387 = 0x00197387; // file_off=0x196787
constexpr uint32_t kPrologue_push_rbx_rsi_001974E0 = 0x001974E0; // file_off=0x1968E0
constexpr uint32_t kPrologue_call_rax_00197530 = 0x00197530; // file_off=0x196930
constexpr uint32_t kPrologue_call_rax_001987E4 = 0x001987E4; // file_off=0x197BE4
constexpr uint32_t kPrologue_push_rbx_rsi_001989C0 = 0x001989C0; // file_off=0x197DC0
constexpr uint32_t kPrologue_call_rax_00198A10 = 0x00198A10; // file_off=0x197E10
constexpr uint32_t kPrologue_call_rax_00198C15 = 0x00198C15; // file_off=0x198015
constexpr uint32_t kPrologue_enter_vm_0019974C = 0x0019974C; // file_off=0x198B4C
constexpr uint32_t kPrologue_enter_vm_00199E00 = 0x00199E00; // file_off=0x199200
constexpr uint32_t kPrologue_enter_vm_0019A24F = 0x0019A24F; // file_off=0x19964F
constexpr uint32_t kPrologue_enter_vm_0019A26A = 0x0019A26A; // file_off=0x19966A
constexpr uint32_t kPrologue_enter_vm_0019A282 = 0x0019A282; // file_off=0x199682
constexpr uint32_t kPrologue_xor_eax_eax_ret_0019A965 = 0x0019A965; // file_off=0x199D65
constexpr uint32_t kPrologue_push_rbx_rsi_0019A9D0 = 0x0019A9D0; // file_off=0x199DD0
constexpr uint32_t kPrologue_push_rbx_rsi_0019AB10 = 0x0019AB10; // file_off=0x199F10
constexpr uint32_t kPrologue_push_rbx_rsi_0019AB80 = 0x0019AB80; // file_off=0x199F80
constexpr uint32_t kPrologue_call_rax_0019AC2F = 0x0019AC2F; // file_off=0x19A02F
constexpr uint32_t kPrologue_push_rbx_rsi_0019AF00 = 0x0019AF00; // file_off=0x19A300
constexpr uint32_t kPrologue_call_rax_0019B029 = 0x0019B029; // file_off=0x19A429
constexpr uint32_t kPrologue_push_rbx_rsi_0019B310 = 0x0019B310; // file_off=0x19A710
constexpr uint32_t kPrologue_push_rbx_rsi_0019BA80 = 0x0019BA80; // file_off=0x19AE80
constexpr uint32_t kPrologue_push_rbx_rsi_0019BAF0 = 0x0019BAF0; // file_off=0x19AEF0
constexpr uint32_t kPrologue_mov_eax_1_ret_0019BC07 = 0x0019BC07; // file_off=0x19B007
constexpr uint32_t kPrologue_xor_eax_eax_ret_0019BC0D = 0x0019BC0D; // file_off=0x19B00D
constexpr uint32_t kPrologue_enter_vm_0019BE00 = 0x0019BE00; // file_off=0x19B200
constexpr uint32_t kPrologue_enter_vm_0019D5F0 = 0x0019D5F0; // file_off=0x19C9F0
constexpr uint32_t kPrologue_enter_vm_0019D600 = 0x0019D600; // file_off=0x19CA00
constexpr uint32_t kPrologue_enter_vm_0019E210 = 0x0019E210; // file_off=0x19D610
constexpr uint32_t kPrologue_enter_vm_0019ECA0 = 0x0019ECA0; // file_off=0x19E0A0
constexpr uint32_t kPrologue_enter_vm_0019EFC0 = 0x0019EFC0; // file_off=0x19E3C0
constexpr uint32_t kPrologue_enter_vm_0019F3E0 = 0x0019F3E0; // file_off=0x19E7E0
constexpr uint32_t kPrologue_enter_vm_0019F4D0 = 0x0019F4D0; // file_off=0x19E8D0
constexpr uint32_t kPrologue_push_rbx_rsi_0019F550 = 0x0019F550; // file_off=0x19E950
constexpr uint32_t kPrologue_enter_vm_0019F6D7 = 0x0019F6D7; // file_off=0x19EAD7
constexpr uint32_t kPrologue_enter_vm_0019F862 = 0x0019F862; // file_off=0x19EC62
constexpr uint32_t kPrologue_enter_vm_0019F9DC = 0x0019F9DC; // file_off=0x19EDDC
constexpr uint32_t kPrologue_enter_vm_0019FB2F = 0x0019FB2F; // file_off=0x19EF2F
constexpr uint32_t kPrologue_enter_vm_0019FC31 = 0x0019FC31; // file_off=0x19F031
constexpr uint32_t kPrologue_xor_eax_eax_ret_0019FCE7 = 0x0019FCE7; // file_off=0x19F0E7
constexpr uint32_t kPrologue_mov_eax_1_ret_0019FCEA = 0x0019FCEA; // file_off=0x19F0EA
constexpr uint32_t kPrologue_push_rbx_rsi_0019FCF0 = 0x0019FCF0; // file_off=0x19F0F0
constexpr uint32_t kPrologue_enter_vm_0019FD0B = 0x0019FD0B; // file_off=0x19F10B
constexpr uint32_t kPrologue_push_rbx_rsi_001A0350 = 0x001A0350; // file_off=0x19F750
constexpr uint32_t kPrologue_enter_vm_001A0599 = 0x001A0599; // file_off=0x19F999
constexpr uint32_t kPrologue_push_rbx_rsi_001A0680 = 0x001A0680; // file_off=0x19FA80
constexpr uint32_t kPrologue_xor_eax_eax_ret_001A0C5E = 0x001A0C5E; // file_off=0x1A005E
constexpr uint32_t kPrologue_mov_eax_1_ret_001A0C61 = 0x001A0C61; // file_off=0x1A0061
constexpr uint32_t kPrologue_mov_eax_1_ret_001A1182 = 0x001A1182; // file_off=0x1A0582
constexpr uint32_t kPrologue_push_rbx_rsi_001A1320 = 0x001A1320; // file_off=0x1A0720
constexpr uint32_t kPrologue_push_rbx_rsi_001A15C0 = 0x001A15C0; // file_off=0x1A09C0
constexpr uint32_t kPrologue_push_rbx_rsi_001A2060 = 0x001A2060; // file_off=0x1A1460
constexpr uint32_t kPrologue_push_rbx_rsi_001A2680 = 0x001A2680; // file_off=0x1A1A80
constexpr uint32_t kPrologue_push_rbx_rsi_001A27E0 = 0x001A27E0; // file_off=0x1A1BE0
constexpr uint32_t kPrologue_push_rbx_rsi_001A2E70 = 0x001A2E70; // file_off=0x1A2270
constexpr uint32_t kPrologue_push_rbx_rsi_001A4200 = 0x001A4200; // file_off=0x1A3600
constexpr uint32_t kPrologue_push_rbx_rsi_001A5420 = 0x001A5420; // file_off=0x1A4820
constexpr uint32_t kPrologue_push_rbx_rsi_001A81D0 = 0x001A81D0; // file_off=0x1A75D0
constexpr uint32_t kPrologue_push_rbx_rsi_001A8DC0 = 0x001A8DC0; // file_off=0x1A81C0
constexpr uint32_t kPrologue_push_rbx_rsi_001AA390 = 0x001AA390; // file_off=0x1A9790
constexpr uint32_t kPrologue_push_rbx_rsi_001AA4E0 = 0x001AA4E0; // file_off=0x1A98E0
constexpr uint32_t kPrologue_enter_vm_001AC75C = 0x001AC75C; // file_off=0x1ABB5C
constexpr uint32_t kPrologue_enter_vm_001AC791 = 0x001AC791; // file_off=0x1ABB91
constexpr uint32_t kPrologue_enter_vm_001AD299 = 0x001AD299; // file_off=0x1AC699
constexpr uint32_t kPrologue_enter_vm_001AD2CF = 0x001AD2CF; // file_off=0x1AC6CF
constexpr uint32_t kPrologue_enter_vm_001AD551 = 0x001AD551; // file_off=0x1AC951
constexpr uint32_t kPrologue_enter_vm_001AD591 = 0x001AD591; // file_off=0x1AC991
constexpr uint32_t kPrologue_push_rbx_rsi_001ADE20 = 0x001ADE20; // file_off=0x1AD220
constexpr uint32_t kPrologue_push_rbx_rsi_001AE300 = 0x001AE300; // file_off=0x1AD700
constexpr uint32_t kPrologue_enter_vm_001AF6CE = 0x001AF6CE; // file_off=0x1AEACE
constexpr uint32_t kPrologue_enter_vm_001B05B0 = 0x001B05B0; // file_off=0x1AF9B0
constexpr uint32_t kPrologue_enter_vm_001B05BE = 0x001B05BE; // file_off=0x1AF9BE
constexpr uint32_t kPrologue_enter_vm_001B2EF4 = 0x001B2EF4; // file_off=0x1B22F4
constexpr uint32_t kPrologue_enter_vm_001B2F09 = 0x001B2F09; // file_off=0x1B2309
constexpr uint32_t kPrologue_enter_vm_001B2F2D = 0x001B2F2D; // file_off=0x1B232D
constexpr uint32_t kPrologue_enter_vm_001B2F7D = 0x001B2F7D; // file_off=0x1B237D
constexpr uint32_t kPrologue_push_rbx_rsi_001B2FB0 = 0x001B2FB0; // file_off=0x1B23B0
constexpr uint32_t kPrologue_push_rbx_rsi_001B3D50 = 0x001B3D50; // file_off=0x1B3150
constexpr uint32_t kPrologue_push_rbx_rsi_001B4EB0 = 0x001B4EB0; // file_off=0x1B42B0
constexpr uint32_t kPrologue_push_rbx_rsi_001B5B90 = 0x001B5B90; // file_off=0x1B4F90
constexpr uint32_t kPrologue_push_rbx_rsi_001BA530 = 0x001BA530; // file_off=0x1B9930
constexpr uint32_t kPrologue_push_rbx_rsi_001BC240 = 0x001BC240; // file_off=0x1BB640
constexpr uint32_t kPrologue_push_rbx_rsi_001BEF80 = 0x001BEF80; // file_off=0x1BE380
constexpr uint32_t kPrologue_push_regs_001BF990 = 0x001BF990; // file_off=0x1BED90
constexpr uint32_t kPrologue_xor_eax_eax_ret_001C1557 = 0x001C1557; // file_off=0x1C0957
constexpr uint32_t kPrologue_push_rbx_rsi_001C2410 = 0x001C2410; // file_off=0x1C1810
constexpr uint32_t kPrologue_push_rbx_rsi_001C2770 = 0x001C2770; // file_off=0x1C1B70
constexpr uint32_t kPrologue_enter_vm_001C28EE = 0x001C28EE; // file_off=0x1C1CEE
constexpr uint32_t kPrologue_enter_vm_001C7370 = 0x001C7370; // file_off=0x1C6770
constexpr uint32_t kPrologue_enter_vm_001C7420 = 0x001C7420; // file_off=0x1C6820
constexpr uint32_t kPrologue_push_rbx_rsi_001C7AD0 = 0x001C7AD0; // file_off=0x1C6ED0
constexpr uint32_t kPrologue_xor_eax_eax_ret_001C9164 = 0x001C9164; // file_off=0x1C8564
constexpr uint32_t kPrologue_call_rax_001C99D3 = 0x001C99D3; // file_off=0x1C8DD3
constexpr uint32_t kPrologue_push_rbx_rsi_001C9A80 = 0x001C9A80; // file_off=0x1C8E80
constexpr uint32_t kPrologue_push_rbx_rsi_001C9C50 = 0x001C9C50; // file_off=0x1C9050
constexpr uint32_t kPrologue_enter_vm_001C9F10 = 0x001C9F10; // file_off=0x1C9310
constexpr uint32_t kPrologue_enter_vm_001C9F2C = 0x001C9F2C; // file_off=0x1C932C
constexpr uint32_t kPrologue_enter_vm_001C9F3D = 0x001C9F3D; // file_off=0x1C933D
constexpr uint32_t kPrologue_enter_vm_001C9F49 = 0x001C9F49; // file_off=0x1C9349
constexpr uint32_t kPrologue_enter_vm_001C9F59 = 0x001C9F59; // file_off=0x1C9359
constexpr uint32_t kPrologue_enter_vm_001C9FB7 = 0x001C9FB7; // file_off=0x1C93B7
constexpr uint32_t kPrologue_enter_vm_001C9FC6 = 0x001C9FC6; // file_off=0x1C93C6
constexpr uint32_t kPrologue_enter_vm_001CA041 = 0x001CA041; // file_off=0x1C9441
constexpr uint32_t kPrologue_enter_vm_001CA54E = 0x001CA54E; // file_off=0x1C994E
constexpr uint32_t kPrologue_enter_vm_001CA55D = 0x001CA55D; // file_off=0x1C995D
constexpr uint32_t kPrologue_call_rax_001CA74C = 0x001CA74C; // file_off=0x1C9B4C
constexpr uint32_t kPrologue_enter_vm_001CB398 = 0x001CB398; // file_off=0x1CA798
constexpr uint32_t kPrologue_enter_vm_001CB3B2 = 0x001CB3B2; // file_off=0x1CA7B2
constexpr uint32_t kPrologue_enter_vm_001CBABC = 0x001CBABC; // file_off=0x1CAEBC
constexpr uint32_t kPrologue_mov_eax_1_ret_001CC2E4 = 0x001CC2E4; // file_off=0x1CB6E4
constexpr uint32_t kPrologue_enter_vm_001CC67D = 0x001CC67D; // file_off=0x1CBA7D
constexpr uint32_t kPrologue_enter_vm_001CC6AD = 0x001CC6AD; // file_off=0x1CBAAD
constexpr uint32_t kPrologue_push_rbx_rsi_001CC6D0 = 0x001CC6D0; // file_off=0x1CBAD0
constexpr uint32_t kPrologue_push_rbx_rsi_001CC7B0 = 0x001CC7B0; // file_off=0x1CBBB0
constexpr uint32_t kPrologue_call_rax_001CCBBF = 0x001CCBBF; // file_off=0x1CBFBF
constexpr uint32_t kPrologue_enter_vm_001CCC50 = 0x001CCC50; // file_off=0x1CC050
constexpr uint32_t kPrologue_enter_vm_001CCD80 = 0x001CCD80; // file_off=0x1CC180
constexpr uint32_t kPrologue_xor_eax_eax_ret_001CD254 = 0x001CD254; // file_off=0x1CC654
constexpr uint32_t kPrologue_mov_eax_1_ret_001CD279 = 0x001CD279; // file_off=0x1CC679
constexpr uint32_t kPrologue_xor_eax_eax_ret_001CD27F = 0x001CD27F; // file_off=0x1CC67F
constexpr uint32_t kPrologue_xor_eax_eax_ret_001CD295 = 0x001CD295; // file_off=0x1CC695
constexpr uint32_t kPrologue_mov_eax_1_ret_001CD29F = 0x001CD29F; // file_off=0x1CC69F
constexpr uint32_t kPrologue_mov_eax_1_ret_001CD5CD = 0x001CD5CD; // file_off=0x1CC9CD
constexpr uint32_t kPrologue_xor_eax_eax_ret_001CD5D3 = 0x001CD5D3; // file_off=0x1CC9D3
constexpr uint32_t kPrologue_push_rbx_rsi_001CD5E0 = 0x001CD5E0; // file_off=0x1CC9E0
constexpr uint32_t kPrologue_push_rbx_rsi_001CD660 = 0x001CD660; // file_off=0x1CCA60
constexpr uint32_t kPrologue_push_rbx_rsi_001CD700 = 0x001CD700; // file_off=0x1CCB00
constexpr uint32_t kPrologue_mov_eax_1_ret_001CD82D = 0x001CD82D; // file_off=0x1CCC2D
constexpr uint32_t kPrologue_push_rbx_rsi_001CD9D0 = 0x001CD9D0; // file_off=0x1CCDD0
constexpr uint32_t kPrologue_push_rbx_rsi_001CDD10 = 0x001CDD10; // file_off=0x1CD110
constexpr uint32_t kPrologue_enter_vm_001CE5E0 = 0x001CE5E0; // file_off=0x1CD9E0
constexpr uint32_t kPrologue_enter_vm_001CE5F0 = 0x001CE5F0; // file_off=0x1CD9F0
constexpr uint32_t kPrologue_enter_vm_001CE600 = 0x001CE600; // file_off=0x1CDA00
constexpr uint32_t kPrologue_enter_vm_001CEC70 = 0x001CEC70; // file_off=0x1CE070
constexpr uint32_t kPrologue_enter_vm_001CED20 = 0x001CED20; // file_off=0x1CE120
constexpr uint32_t kPrologue_xor_eax_eax_ret_001CF4CE = 0x001CF4CE; // file_off=0x1CE8CE
constexpr uint32_t kPrologue_xor_eax_eax_ret_001CF54E = 0x001CF54E; // file_off=0x1CE94E
constexpr uint32_t kPrologue_enter_vm_001CF590 = 0x001CF590; // file_off=0x1CE990
constexpr uint32_t kPrologue_enter_vm_001CF5C0 = 0x001CF5C0; // file_off=0x1CE9C0
constexpr uint32_t kPrologue_enter_vm_001CF5D0 = 0x001CF5D0; // file_off=0x1CE9D0
constexpr uint32_t kPrologue_enter_vm_001CF5E0 = 0x001CF5E0; // file_off=0x1CE9E0
constexpr uint32_t kPrologue_enter_vm_001CF610 = 0x001CF610; // file_off=0x1CEA10
constexpr uint32_t kPrologue_push_rbx_rsi_001CF6E0 = 0x001CF6E0; // file_off=0x1CEAE0
constexpr uint32_t kPrologue_enter_vm_001CFA30 = 0x001CFA30; // file_off=0x1CEE30
constexpr uint32_t kPrologue_enter_vm_001CFA40 = 0x001CFA40; // file_off=0x1CEE40
constexpr uint32_t kPrologue_enter_vm_001CFA50 = 0x001CFA50; // file_off=0x1CEE50
constexpr uint32_t kPrologue_enter_vm_001CFA60 = 0x001CFA60; // file_off=0x1CEE60
constexpr uint32_t kPrologue_push_rbx_rsi_001CFE30 = 0x001CFE30; // file_off=0x1CF230
constexpr uint32_t kPrologue_push_rbx_rsi_001D0000 = 0x001D0000; // file_off=0x1CF400
constexpr uint32_t kPrologue_enter_vm_001D0590 = 0x001D0590; // file_off=0x1CF990
constexpr uint32_t kPrologue_enter_vm_001D05A0 = 0x001D05A0; // file_off=0x1CF9A0
constexpr uint32_t kPrologue_enter_vm_001D07C0 = 0x001D07C0; // file_off=0x1CFBC0
constexpr uint32_t kPrologue_enter_vm_001D07FD = 0x001D07FD; // file_off=0x1CFBFD
constexpr uint32_t kPrologue_push_rbx_rsi_001D09F0 = 0x001D09F0; // file_off=0x1CFDF0
constexpr uint32_t kPrologue_enter_vm_001D1070 = 0x001D1070; // file_off=0x1D0470
constexpr uint32_t kPrologue_enter_vm_001D1080 = 0x001D1080; // file_off=0x1D0480
constexpr uint32_t kPrologue_enter_vm_001D1090 = 0x001D1090; // file_off=0x1D0490
constexpr uint32_t kPrologue_enter_vm_001D10A0 = 0x001D10A0; // file_off=0x1D04A0
constexpr uint32_t kPrologue_enter_vm_001D2510 = 0x001D2510; // file_off=0x1D1910
constexpr uint32_t kPrologue_enter_vm_001D2520 = 0x001D2520; // file_off=0x1D1920
constexpr uint32_t kPrologue_enter_vm_001D2530 = 0x001D2530; // file_off=0x1D1930
constexpr uint32_t kPrologue_enter_vm_001D2540 = 0x001D2540; // file_off=0x1D1940
constexpr uint32_t kPrologue_enter_vm_001D2550 = 0x001D2550; // file_off=0x1D1950
constexpr uint32_t kPrologue_push_rbx_rsi_001D39E0 = 0x001D39E0; // file_off=0x1D2DE0
constexpr uint32_t kPrologue_xor_eax_eax_ret_001D415D = 0x001D415D; // file_off=0x1D355D
constexpr uint32_t kPrologue_mov_eax_1_ret_001D42E6 = 0x001D42E6; // file_off=0x1D36E6
constexpr uint32_t kPrologue_enter_vm_001D4435 = 0x001D4435; // file_off=0x1D3835
constexpr uint32_t kPrologue_push_rbx_rsi_001D5770 = 0x001D5770; // file_off=0x1D4B70
constexpr uint32_t kPrologue_enter_vm_001D5E57 = 0x001D5E57; // file_off=0x1D5257
constexpr uint32_t kPrologue_call_rax_001D60DA = 0x001D60DA; // file_off=0x1D54DA
constexpr uint32_t kPrologue_call_rax_001D614D = 0x001D614D; // file_off=0x1D554D
constexpr uint32_t kPrologue_call_rax_001D6196 = 0x001D6196; // file_off=0x1D5596
constexpr uint32_t kPrologue_call_rax_001D62AE = 0x001D62AE; // file_off=0x1D56AE
constexpr uint32_t kPrologue_call_rax_001D62E6 = 0x001D62E6; // file_off=0x1D56E6
constexpr uint32_t kPrologue_enter_vm_001D642F = 0x001D642F; // file_off=0x1D582F
constexpr uint32_t kPrologue_enter_vm_001D65F0 = 0x001D65F0; // file_off=0x1D59F0
constexpr uint32_t kPrologue_xor_eax_eax_ret_001D6689 = 0x001D6689; // file_off=0x1D5A89
constexpr uint32_t kPrologue_mov_eax_1_ret_001D668C = 0x001D668C; // file_off=0x1D5A8C
constexpr uint32_t kPrologue_push_rbx_rsi_001D66A0 = 0x001D66A0; // file_off=0x1D5AA0
constexpr uint32_t kPrologue_enter_vm_001D6779 = 0x001D6779; // file_off=0x1D5B79
constexpr uint32_t kPrologue_enter_vm_001D68BF = 0x001D68BF; // file_off=0x1D5CBF
constexpr uint32_t kPrologue_enter_vm_001D694F = 0x001D694F; // file_off=0x1D5D4F
constexpr uint32_t kPrologue_enter_vm_001D69C7 = 0x001D69C7; // file_off=0x1D5DC7
constexpr uint32_t kPrologue_enter_vm_001D6A1F = 0x001D6A1F; // file_off=0x1D5E1F
constexpr uint32_t kPrologue_xor_eax_eax_ret_001D72D5 = 0x001D72D5; // file_off=0x1D66D5
constexpr uint32_t kPrologue_enter_vm_001D7310 = 0x001D7310; // file_off=0x1D6710
constexpr uint32_t kPrologue_enter_vm_001D7340 = 0x001D7340; // file_off=0x1D6740
constexpr uint32_t kPrologue_enter_vm_001D7370 = 0x001D7370; // file_off=0x1D6770
constexpr uint32_t kPrologue_enter_vm_001D7570 = 0x001D7570; // file_off=0x1D6970
constexpr uint32_t kPrologue_enter_vm_001D7580 = 0x001D7580; // file_off=0x1D6980
constexpr uint32_t kPrologue_enter_vm_001D7C60 = 0x001D7C60; // file_off=0x1D7060
constexpr uint32_t kPrologue_push_rbx_rsi_001D9090 = 0x001D9090; // file_off=0x1D8490
constexpr uint32_t kPrologue_push_rbx_rsi_001D9430 = 0x001D9430; // file_off=0x1D8830
constexpr uint32_t kPrologue_enter_vm_001D9B7F = 0x001D9B7F; // file_off=0x1D8F7F
constexpr uint32_t kPrologue_push_rbx_rsi_001DA190 = 0x001DA190; // file_off=0x1D9590
constexpr uint32_t kPrologue_enter_vm_001DA1C9 = 0x001DA1C9; // file_off=0x1D95C9
constexpr uint32_t kPrologue_push_rbx_rsi_001DAC70 = 0x001DAC70; // file_off=0x1DA070
constexpr uint32_t kPrologue_enter_vm_001DC4A0 = 0x001DC4A0; // file_off=0x1DB8A0
constexpr uint32_t kPrologue_call_rax_001DF37D = 0x001DF37D; // file_off=0x1DE77D
constexpr uint32_t kPrologue_call_rax_001E0E4E = 0x001E0E4E; // file_off=0x1E024E
constexpr uint32_t kPrologue_call_rax_001E1D6B = 0x001E1D6B; // file_off=0x1E116B
constexpr uint32_t kPrologue_enter_vm_001E1E50 = 0x001E1E50; // file_off=0x1E1250
constexpr uint32_t kPrologue_push_rbx_rsi_001E2540 = 0x001E2540; // file_off=0x1E1940
constexpr uint32_t kPrologue_enter_vm_001E25A3 = 0x001E25A3; // file_off=0x1E19A3
constexpr uint32_t kPrologue_xor_eax_eax_ret_001E25E1 = 0x001E25E1; // file_off=0x1E19E1
constexpr uint32_t kPrologue_call_rax_001E2642 = 0x001E2642; // file_off=0x1E1A42
constexpr uint32_t kPrologue_push_rbx_rsi_001E2650 = 0x001E2650; // file_off=0x1E1A50
constexpr uint32_t kPrologue_call_rax_001E2986 = 0x001E2986; // file_off=0x1E1D86
constexpr uint32_t kPrologue_call_rax_001E2C5D = 0x001E2C5D; // file_off=0x1E205D
constexpr uint32_t kPrologue_enter_vm_001E2D1F = 0x001E2D1F; // file_off=0x1E211F
constexpr uint32_t kPrologue_enter_vm_001E2D49 = 0x001E2D49; // file_off=0x1E2149
constexpr uint32_t kPrologue_call_rax_001E2DC6 = 0x001E2DC6; // file_off=0x1E21C6
constexpr uint32_t kPrologue_enter_vm_001E2E70 = 0x001E2E70; // file_off=0x1E2270
constexpr uint32_t kPrologue_call_rax_001E31DB = 0x001E31DB; // file_off=0x1E25DB
constexpr uint32_t kPrologue_enter_vm_001E33B1 = 0x001E33B1; // file_off=0x1E27B1
constexpr uint32_t kPrologue_enter_vm_001E33C9 = 0x001E33C9; // file_off=0x1E27C9
constexpr uint32_t kPrologue_enter_vm_001E33E0 = 0x001E33E0; // file_off=0x1E27E0
constexpr uint32_t kPrologue_enter_vm_001E33F2 = 0x001E33F2; // file_off=0x1E27F2
constexpr uint32_t kPrologue_enter_vm_001E3400 = 0x001E3400; // file_off=0x1E2800
constexpr uint32_t kPrologue_enter_vm_001E34AA = 0x001E34AA; // file_off=0x1E28AA
constexpr uint32_t kPrologue_enter_vm_001E353A = 0x001E353A; // file_off=0x1E293A
constexpr uint32_t kPrologue_enter_vm_001E35FB = 0x001E35FB; // file_off=0x1E29FB
constexpr uint32_t kPrologue_enter_vm_001E3613 = 0x001E3613; // file_off=0x1E2A13
constexpr uint32_t kPrologue_enter_vm_001E362A = 0x001E362A; // file_off=0x1E2A2A
constexpr uint32_t kPrologue_enter_vm_001E363C = 0x001E363C; // file_off=0x1E2A3C
constexpr uint32_t kPrologue_enter_vm_001E364A = 0x001E364A; // file_off=0x1E2A4A
constexpr uint32_t kPrologue_enter_vm_001E37EE = 0x001E37EE; // file_off=0x1E2BEE
constexpr uint32_t kPrologue_enter_vm_001E3829 = 0x001E3829; // file_off=0x1E2C29
constexpr uint32_t kPrologue_enter_vm_001E3853 = 0x001E3853; // file_off=0x1E2C53
constexpr uint32_t kPrologue_call_rax_001E3E22 = 0x001E3E22; // file_off=0x1E3222
constexpr uint32_t kPrologue_enter_vm_001E4315 = 0x001E4315; // file_off=0x1E3715
constexpr uint32_t kPrologue_enter_vm_001E43FC = 0x001E43FC; // file_off=0x1E37FC
constexpr uint32_t kPrologue_push_rbx_rsi_001E6D90 = 0x001E6D90; // file_off=0x1E6190
constexpr uint32_t kPrologue_push_rbx_rsi_001E70A0 = 0x001E70A0; // file_off=0x1E64A0
constexpr uint32_t kPrologue_enter_vm_001E9B50 = 0x001E9B50; // file_off=0x1E8F50
constexpr uint32_t kPrologue_enter_vm_001E9CE0 = 0x001E9CE0; // file_off=0x1E90E0
constexpr uint32_t kPrologue_enter_vm_001E9CF0 = 0x001E9CF0; // file_off=0x1E90F0
constexpr uint32_t kPrologue_enter_vm_001EAC70 = 0x001EAC70; // file_off=0x1EA070
constexpr uint32_t kPrologue_enter_vm_001EAC80 = 0x001EAC80; // file_off=0x1EA080
constexpr uint32_t kPrologue_push_rbx_rsi_001EAC90 = 0x001EAC90; // file_off=0x1EA090
constexpr uint32_t kPrologue_enter_vm_001EB040 = 0x001EB040; // file_off=0x1EA440
constexpr uint32_t kPrologue_enter_vm_001EB260 = 0x001EB260; // file_off=0x1EA660
constexpr uint32_t kPrologue_mov_eax_1_ret_001EB4F7 = 0x001EB4F7; // file_off=0x1EA8F7
constexpr uint32_t kPrologue_xor_eax_eax_ret_001EB811 = 0x001EB811; // file_off=0x1EAC11
constexpr uint32_t kPrologue_push_rbx_rsi_001EB820 = 0x001EB820; // file_off=0x1EAC20
constexpr uint32_t kPrologue_enter_vm_001EB87A = 0x001EB87A; // file_off=0x1EAC7A
constexpr uint32_t kPrologue_enter_vm_001EB90A = 0x001EB90A; // file_off=0x1EAD0A
constexpr uint32_t kPrologue_enter_vm_001EB935 = 0x001EB935; // file_off=0x1EAD35
constexpr uint32_t kPrologue_enter_vm_001EB940 = 0x001EB940; // file_off=0x1EAD40
constexpr uint32_t kPrologue_enter_vm_001EB95C = 0x001EB95C; // file_off=0x1EAD5C
constexpr uint32_t kPrologue_enter_vm_001EB967 = 0x001EB967; // file_off=0x1EAD67
constexpr uint32_t kPrologue_enter_vm_001EB9A1 = 0x001EB9A1; // file_off=0x1EADA1
constexpr uint32_t kPrologue_enter_vm_001EB9C3 = 0x001EB9C3; // file_off=0x1EADC3
constexpr uint32_t kPrologue_enter_vm_001EB9CD = 0x001EB9CD; // file_off=0x1EADCD
constexpr uint32_t kPrologue_enter_vm_001EB9DD = 0x001EB9DD; // file_off=0x1EADDD
constexpr uint32_t kPrologue_enter_vm_001EB9E7 = 0x001EB9E7; // file_off=0x1EADE7
constexpr uint32_t kPrologue_enter_vm_001EBB30 = 0x001EBB30; // file_off=0x1EAF30
constexpr uint32_t kPrologue_enter_vm_001EBB55 = 0x001EBB55; // file_off=0x1EAF55
constexpr uint32_t kPrologue_enter_vm_001EBC81 = 0x001EBC81; // file_off=0x1EB081
constexpr uint32_t kPrologue_enter_vm_001EBCA1 = 0x001EBCA1; // file_off=0x1EB0A1
constexpr uint32_t kPrologue_enter_vm_001EBCC1 = 0x001EBCC1; // file_off=0x1EB0C1
constexpr uint32_t kPrologue_enter_vm_001EBCE1 = 0x001EBCE1; // file_off=0x1EB0E1
constexpr uint32_t kPrologue_enter_vm_001EBD01 = 0x001EBD01; // file_off=0x1EB101
constexpr uint32_t kPrologue_enter_vm_001EBD21 = 0x001EBD21; // file_off=0x1EB121
constexpr uint32_t kPrologue_enter_vm_001EBD41 = 0x001EBD41; // file_off=0x1EB141
constexpr uint32_t kPrologue_enter_vm_001EBDDA = 0x001EBDDA; // file_off=0x1EB1DA
constexpr uint32_t kPrologue_enter_vm_001EBE02 = 0x001EBE02; // file_off=0x1EB202
constexpr uint32_t kPrologue_enter_vm_001EBF67 = 0x001EBF67; // file_off=0x1EB367
constexpr uint32_t kPrologue_enter_vm_001EBF8F = 0x001EBF8F; // file_off=0x1EB38F
constexpr uint32_t kPrologue_enter_vm_001EC001 = 0x001EC001; // file_off=0x1EB401
constexpr uint32_t kPrologue_enter_vm_001EC3AF = 0x001EC3AF; // file_off=0x1EB7AF
constexpr uint32_t kPrologue_enter_vm_001EC43B = 0x001EC43B; // file_off=0x1EB83B
constexpr uint32_t kPrologue_enter_vm_001EC4E9 = 0x001EC4E9; // file_off=0x1EB8E9
constexpr uint32_t kPrologue_enter_vm_001EC507 = 0x001EC507; // file_off=0x1EB907
constexpr uint32_t kPrologue_enter_vm_001EC561 = 0x001EC561; // file_off=0x1EB961
constexpr uint32_t kPrologue_push_rbx_rsi_001EC910 = 0x001EC910; // file_off=0x1EBD10
constexpr uint32_t kPrologue_push_rbx_rsi_001ED3B0 = 0x001ED3B0; // file_off=0x1EC7B0
constexpr uint32_t kPrologue_push_rbx_rsi_001ED550 = 0x001ED550; // file_off=0x1EC950
constexpr uint32_t kPrologue_enter_vm_001ED65F = 0x001ED65F; // file_off=0x1ECA5F
constexpr uint32_t kPrologue_enter_vm_001ED738 = 0x001ED738; // file_off=0x1ECB38
constexpr uint32_t kPrologue_enter_vm_001ED874 = 0x001ED874; // file_off=0x1ECC74
constexpr uint32_t kPrologue_enter_vm_001ED8B1 = 0x001ED8B1; // file_off=0x1ECCB1
constexpr uint32_t kPrologue_push_rbx_rsi_001EE6A0 = 0x001EE6A0; // file_off=0x1EDAA0
constexpr uint32_t kPrologue_enter_vm_001EE6E1 = 0x001EE6E1; // file_off=0x1EDAE1
constexpr uint32_t kPrologue_enter_vm_001EE6EF = 0x001EE6EF; // file_off=0x1EDAEF
constexpr uint32_t kPrologue_enter_vm_001EE774 = 0x001EE774; // file_off=0x1EDB74
constexpr uint32_t kPrologue_enter_vm_001EE795 = 0x001EE795; // file_off=0x1EDB95
constexpr uint32_t kPrologue_enter_vm_001EE7E1 = 0x001EE7E1; // file_off=0x1EDBE1
constexpr uint32_t kPrologue_enter_vm_001EE860 = 0x001EE860; // file_off=0x1EDC60
constexpr uint32_t kPrologue_enter_vm_001EE8A4 = 0x001EE8A4; // file_off=0x1EDCA4
constexpr uint32_t kPrologue_enter_vm_001EE8F0 = 0x001EE8F0; // file_off=0x1EDCF0
constexpr uint32_t kPrologue_enter_vm_001EE995 = 0x001EE995; // file_off=0x1EDD95
constexpr uint32_t kPrologue_enter_vm_001EEA60 = 0x001EEA60; // file_off=0x1EDE60
constexpr uint32_t kPrologue_enter_vm_001EEA70 = 0x001EEA70; // file_off=0x1EDE70
constexpr uint32_t kPrologue_enter_vm_001EEA80 = 0x001EEA80; // file_off=0x1EDE80
constexpr uint32_t kPrologue_enter_vm_001EEA90 = 0x001EEA90; // file_off=0x1EDE90
constexpr uint32_t kPrologue_enter_vm_001EEAA0 = 0x001EEAA0; // file_off=0x1EDEA0
constexpr uint32_t kPrologue_enter_vm_001EEAB0 = 0x001EEAB0; // file_off=0x1EDEB0
constexpr uint32_t kPrologue_enter_vm_001EEAC0 = 0x001EEAC0; // file_off=0x1EDEC0
constexpr uint32_t kPrologue_enter_vm_001EEBA0 = 0x001EEBA0; // file_off=0x1EDFA0
constexpr uint32_t kPrologue_enter_vm_001EEBB0 = 0x001EEBB0; // file_off=0x1EDFB0
constexpr uint32_t kPrologue_enter_vm_001EEBC0 = 0x001EEBC0; // file_off=0x1EDFC0
constexpr uint32_t kPrologue_enter_vm_001EEBD0 = 0x001EEBD0; // file_off=0x1EDFD0
constexpr uint32_t kPrologue_enter_vm_001EEBE0 = 0x001EEBE0; // file_off=0x1EDFE0
constexpr uint32_t kPrologue_enter_vm_001EEBF0 = 0x001EEBF0; // file_off=0x1EDFF0
constexpr uint32_t kPrologue_enter_vm_001EEC00 = 0x001EEC00; // file_off=0x1EE000
constexpr uint32_t kPrologue_enter_vm_001EEC50 = 0x001EEC50; // file_off=0x1EE050
constexpr uint32_t kPrologue_enter_vm_001EEC59 = 0x001EEC59; // file_off=0x1EE059
constexpr uint32_t kPrologue_enter_vm_001EED10 = 0x001EED10; // file_off=0x1EE110
constexpr uint32_t kPrologue_enter_vm_001EED20 = 0x001EED20; // file_off=0x1EE120
constexpr uint32_t kPrologue_enter_vm_001EED30 = 0x001EED30; // file_off=0x1EE130
constexpr uint32_t kPrologue_enter_vm_001EED40 = 0x001EED40; // file_off=0x1EE140
constexpr uint32_t kPrologue_enter_vm_001EED50 = 0x001EED50; // file_off=0x1EE150
constexpr uint32_t kPrologue_enter_vm_001EF130 = 0x001EF130; // file_off=0x1EE530
constexpr uint32_t kPrologue_call_rax_001EF345 = 0x001EF345; // file_off=0x1EE745
constexpr uint32_t kPrologue_enter_vm_001EF500 = 0x001EF500; // file_off=0x1EE900
constexpr uint32_t kPrologue_enter_vm_001EF510 = 0x001EF510; // file_off=0x1EE910
constexpr uint32_t kPrologue_push_rbx_rsi_001EF520 = 0x001EF520; // file_off=0x1EE920
constexpr uint32_t kPrologue_enter_vm_001EFB00 = 0x001EFB00; // file_off=0x1EEF00
constexpr uint32_t kPrologue_enter_vm_001EFB10 = 0x001EFB10; // file_off=0x1EEF10
constexpr uint32_t kPrologue_enter_vm_001EFB20 = 0x001EFB20; // file_off=0x1EEF20
constexpr uint32_t kPrologue_enter_vm_001EFB30 = 0x001EFB30; // file_off=0x1EEF30
constexpr uint32_t kPrologue_enter_vm_001EFB40 = 0x001EFB40; // file_off=0x1EEF40
constexpr uint32_t kPrologue_enter_vm_001EFB50 = 0x001EFB50; // file_off=0x1EEF50
constexpr uint32_t kPrologue_enter_vm_001EFB60 = 0x001EFB60; // file_off=0x1EEF60
constexpr uint32_t kPrologue_enter_vm_001EFB70 = 0x001EFB70; // file_off=0x1EEF70
constexpr uint32_t kPrologue_enter_vm_001EFB80 = 0x001EFB80; // file_off=0x1EEF80
constexpr uint32_t kPrologue_mov_eax_1_ret_001EFBFE = 0x001EFBFE; // file_off=0x1EEFFE
constexpr uint32_t kPrologue_mov_eax_1_ret_001EFC7E = 0x001EFC7E; // file_off=0x1EF07E
constexpr uint32_t kPrologue_enter_vm_001EFE70 = 0x001EFE70; // file_off=0x1EF270
constexpr uint32_t kPrologue_xor_eax_eax_ret_001EFF7C = 0x001EFF7C; // file_off=0x1EF37C
constexpr uint32_t kPrologue_xor_eax_eax_ret_001EFF89 = 0x001EFF89; // file_off=0x1EF389
constexpr uint32_t kPrologue_enter_vm_001F0960 = 0x001F0960; // file_off=0x1EFD60
constexpr uint32_t kPrologue_enter_vm_001F0C40 = 0x001F0C40; // file_off=0x1F0040
constexpr uint32_t kPrologue_push_rbx_rsi_001F0C50 = 0x001F0C50; // file_off=0x1F0050
constexpr uint32_t kPrologue_push_rbx_rsi_001F0F90 = 0x001F0F90; // file_off=0x1F0390
constexpr uint32_t kPrologue_push_rbx_rsi_001F1290 = 0x001F1290; // file_off=0x1F0690
constexpr uint32_t kPrologue_enter_vm_001F1AEB = 0x001F1AEB; // file_off=0x1F0EEB
constexpr uint32_t kPrologue_enter_vm_001F1B26 = 0x001F1B26; // file_off=0x1F0F26
constexpr uint32_t kPrologue_enter_vm_001F1B63 = 0x001F1B63; // file_off=0x1F0F63
constexpr uint32_t kPrologue_enter_vm_001F1BA0 = 0x001F1BA0; // file_off=0x1F0FA0
constexpr uint32_t kPrologue_enter_vm_001F1C1A = 0x001F1C1A; // file_off=0x1F101A
constexpr uint32_t kPrologue_push_rbx_rsi_001F2800 = 0x001F2800; // file_off=0x1F1C00
constexpr uint32_t kPrologue_mov_eax_1_ret_001F2BC3 = 0x001F2BC3; // file_off=0x1F1FC3
constexpr uint32_t kPrologue_xor_eax_eax_ret_001F2E2C = 0x001F2E2C; // file_off=0x1F222C
constexpr uint32_t kPrologue_mov_eax_1_ret_001F2E4F = 0x001F2E4F; // file_off=0x1F224F
constexpr uint32_t kPrologue_call_rax_001F3275 = 0x001F3275; // file_off=0x1F2675
constexpr uint32_t kPrologue_call_rax_001F354B = 0x001F354B; // file_off=0x1F294B
constexpr uint32_t kPrologue_call_rax_001F37A9 = 0x001F37A9; // file_off=0x1F2BA9
constexpr uint32_t kPrologue_call_rax_001F37C8 = 0x001F37C8; // file_off=0x1F2BC8
constexpr uint32_t kPrologue_push_rbx_rsi_001F38B0 = 0x001F38B0; // file_off=0x1F2CB0
constexpr uint32_t kPrologue_push_rbx_rsi_001F3E10 = 0x001F3E10; // file_off=0x1F3210
constexpr uint32_t kPrologue_call_rax_001F3E7E = 0x001F3E7E; // file_off=0x1F327E
constexpr uint32_t kPrologue_call_rax_001F40E3 = 0x001F40E3; // file_off=0x1F34E3
constexpr uint32_t kPrologue_call_rax_001F4312 = 0x001F4312; // file_off=0x1F3712
constexpr uint32_t kPrologue_call_rax_001F47A2 = 0x001F47A2; // file_off=0x1F3BA2
constexpr uint32_t kPrologue_enter_vm_001F4C5C = 0x001F4C5C; // file_off=0x1F405C
constexpr uint32_t kPrologue_call_rax_001F4D82 = 0x001F4D82; // file_off=0x1F4182
constexpr uint32_t kPrologue_mov_eax_1_ret_001F547A = 0x001F547A; // file_off=0x1F487A
constexpr uint32_t kPrologue_enter_vm_001F68ED = 0x001F68ED; // file_off=0x1F5CED
constexpr uint32_t kPrologue_enter_vm_001F68FF = 0x001F68FF; // file_off=0x1F5CFF
constexpr uint32_t kPrologue_enter_vm_001F6910 = 0x001F6910; // file_off=0x1F5D10
constexpr uint32_t kPrologue_push_rbx_rsi_001F7240 = 0x001F7240; // file_off=0x1F6640
constexpr uint32_t kPrologue_push_rbx_rsi_001F8F20 = 0x001F8F20; // file_off=0x1F8320
constexpr uint32_t kPrologue_xor_eax_eax_ret_001F9276 = 0x001F9276; // file_off=0x1F8676
constexpr uint32_t kPrologue_push_rbx_rsi_001F9370 = 0x001F9370; // file_off=0x1F8770
constexpr uint32_t kPrologue_call_rax_001FA6B8 = 0x001FA6B8; // file_off=0x1F9AB8
constexpr uint32_t kPrologue_enter_vm_001FB8B1 = 0x001FB8B1; // file_off=0x1FACB1
constexpr uint32_t kPrologue_enter_vm_001FC640 = 0x001FC640; // file_off=0x1FBA40
constexpr uint32_t kPrologue_enter_vm_001FC650 = 0x001FC650; // file_off=0x1FBA50
constexpr uint32_t kPrologue_enter_vm_001FC660 = 0x001FC660; // file_off=0x1FBA60
constexpr uint32_t kPrologue_enter_vm_001FC670 = 0x001FC670; // file_off=0x1FBA70
constexpr uint32_t kPrologue_enter_vm_001FCA60 = 0x001FCA60; // file_off=0x1FBE60
constexpr uint32_t kPrologue_enter_vm_001FCA70 = 0x001FCA70; // file_off=0x1FBE70
constexpr uint32_t kPrologue_enter_vm_001FCA80 = 0x001FCA80; // file_off=0x1FBE80
constexpr uint32_t kPrologue_enter_vm_001FCA90 = 0x001FCA90; // file_off=0x1FBE90
constexpr uint32_t kPrologue_enter_vm_001FCE30 = 0x001FCE30; // file_off=0x1FC230
constexpr uint32_t kPrologue_enter_vm_001FCE40 = 0x001FCE40; // file_off=0x1FC240
constexpr uint32_t kPrologue_enter_vm_001FCE50 = 0x001FCE50; // file_off=0x1FC250
constexpr uint32_t kPrologue_enter_vm_001FCE60 = 0x001FCE60; // file_off=0x1FC260
constexpr uint32_t kPrologue_enter_vm_001FD200 = 0x001FD200; // file_off=0x1FC600
constexpr uint32_t kPrologue_enter_vm_001FD210 = 0x001FD210; // file_off=0x1FC610
constexpr uint32_t kPrologue_enter_vm_001FD220 = 0x001FD220; // file_off=0x1FC620
constexpr uint32_t kPrologue_enter_vm_001FD230 = 0x001FD230; // file_off=0x1FC630
constexpr uint32_t kPrologue_enter_vm_001FD5E0 = 0x001FD5E0; // file_off=0x1FC9E0
constexpr uint32_t kPrologue_enter_vm_001FD5F0 = 0x001FD5F0; // file_off=0x1FC9F0
constexpr uint32_t kPrologue_enter_vm_001FD600 = 0x001FD600; // file_off=0x1FCA00
constexpr uint32_t kPrologue_enter_vm_001FD610 = 0x001FD610; // file_off=0x1FCA10
constexpr uint32_t kPrologue_enter_vm_001FD7A0 = 0x001FD7A0; // file_off=0x1FCBA0
constexpr uint32_t kPrologue_call_rax_001FD983 = 0x001FD983; // file_off=0x1FCD83
constexpr uint32_t kPrologue_enter_vm_001FDEB0 = 0x001FDEB0; // file_off=0x1FD2B0
constexpr uint32_t kPrologue_enter_vm_001FDEC0 = 0x001FDEC0; // file_off=0x1FD2C0
constexpr uint32_t kPrologue_enter_vm_001FDED0 = 0x001FDED0; // file_off=0x1FD2D0
constexpr uint32_t kPrologue_enter_vm_001FDEE0 = 0x001FDEE0; // file_off=0x1FD2E0
constexpr uint32_t kPrologue_enter_vm_001FDEF0 = 0x001FDEF0; // file_off=0x1FD2F0
constexpr uint32_t kPrologue_enter_vm_001FDF00 = 0x001FDF00; // file_off=0x1FD300
constexpr uint32_t kPrologue_enter_vm_001FDF70 = 0x001FDF70; // file_off=0x1FD370
constexpr uint32_t kPrologue_enter_vm_001FE500 = 0x001FE500; // file_off=0x1FD900
constexpr uint32_t kPrologue_enter_vm_001FEA29 = 0x001FEA29; // file_off=0x1FDE29
constexpr uint32_t kPrologue_enter_vm_001FECB0 = 0x001FECB0; // file_off=0x1FE0B0
constexpr uint32_t kPrologue_push_rbx_rsi_002000D0 = 0x002000D0; // file_off=0x1FF4D0
constexpr uint32_t kPrologue_push_rbx_rsi_00200680 = 0x00200680; // file_off=0x1FFA80
constexpr uint32_t kPrologue_enter_vm_00200D32 = 0x00200D32; // file_off=0x200132
constexpr uint32_t kPrologue_enter_vm_00200F39 = 0x00200F39; // file_off=0x200339
constexpr uint32_t kPrologue_push_rbx_rsi_00201110 = 0x00201110; // file_off=0x200510
constexpr uint32_t kPrologue_xor_eax_eax_ret_00201DD5 = 0x00201DD5; // file_off=0x2011D5
constexpr uint32_t kPrologue_xor_eax_eax_ret_00201DEC = 0x00201DEC; // file_off=0x2011EC
constexpr uint32_t kPrologue_xor_eax_eax_ret_00201E05 = 0x00201E05; // file_off=0x201205
constexpr uint32_t kPrologue_xor_eax_eax_ret_00201F29 = 0x00201F29; // file_off=0x201329
constexpr uint32_t kPrologue_xor_eax_eax_ret_00201F69 = 0x00201F69; // file_off=0x201369
constexpr uint32_t kPrologue_xor_eax_eax_ret_00201F89 = 0x00201F89; // file_off=0x201389
constexpr uint32_t kPrologue_xor_eax_eax_ret_00201FA9 = 0x00201FA9; // file_off=0x2013A9
constexpr uint32_t kPrologue_enter_vm_00202261 = 0x00202261; // file_off=0x201661
constexpr uint32_t kPrologue_call_rax_00202660 = 0x00202660; // file_off=0x201A60
constexpr uint32_t kPrologue_enter_vm_00202770 = 0x00202770; // file_off=0x201B70
constexpr uint32_t kPrologue_enter_vm_0020284F = 0x0020284F; // file_off=0x201C4F
constexpr uint32_t kPrologue_enter_vm_00202862 = 0x00202862; // file_off=0x201C62
constexpr uint32_t kPrologue_push_rbx_rsi_00202AD0 = 0x00202AD0; // file_off=0x201ED0
constexpr uint32_t kPrologue_push_rbx_rsi_00202B80 = 0x00202B80; // file_off=0x201F80
constexpr uint32_t kPrologue_enter_vm_00202C90 = 0x00202C90; // file_off=0x202090
constexpr uint32_t kPrologue_enter_vm_00202CA0 = 0x00202CA0; // file_off=0x2020A0
constexpr uint32_t kPrologue_call_rax_00204454 = 0x00204454; // file_off=0x203854
constexpr uint32_t kPrologue_enter_vm_00204460 = 0x00204460; // file_off=0x203860
constexpr uint32_t kPrologue_enter_vm_00204470 = 0x00204470; // file_off=0x203870
constexpr uint32_t kPrologue_enter_vm_00204480 = 0x00204480; // file_off=0x203880
constexpr uint32_t kPrologue_enter_vm_00204490 = 0x00204490; // file_off=0x203890
constexpr uint32_t kPrologue_enter_vm_002044A0 = 0x002044A0; // file_off=0x2038A0
constexpr uint32_t kPrologue_enter_vm_00204640 = 0x00204640; // file_off=0x203A40
constexpr uint32_t kPrologue_enter_vm_00204B30 = 0x00204B30; // file_off=0x203F30
constexpr uint32_t kPrologue_enter_vm_002052BF = 0x002052BF; // file_off=0x2046BF
constexpr uint32_t kPrologue_enter_vm_002053E0 = 0x002053E0; // file_off=0x2047E0
constexpr uint32_t kPrologue_call_rax_00205871 = 0x00205871; // file_off=0x204C71
constexpr uint32_t kPrologue_enter_vm_00205918 = 0x00205918; // file_off=0x204D18
constexpr uint32_t kPrologue_call_rax_00205AD1 = 0x00205AD1; // file_off=0x204ED1
constexpr uint32_t kPrologue_push_rbx_rsi_00205D10 = 0x00205D10; // file_off=0x205110
constexpr uint32_t kPrologue_enter_vm_002063B0 = 0x002063B0; // file_off=0x2057B0
constexpr uint32_t kPrologue_enter_vm_002063C0 = 0x002063C0; // file_off=0x2057C0
constexpr uint32_t kPrologue_enter_vm_002063D0 = 0x002063D0; // file_off=0x2057D0
constexpr uint32_t kPrologue_enter_vm_002063E0 = 0x002063E0; // file_off=0x2057E0
constexpr uint32_t kPrologue_enter_vm_002063F0 = 0x002063F0; // file_off=0x2057F0
constexpr uint32_t kPrologue_enter_vm_00206400 = 0x00206400; // file_off=0x205800
constexpr uint32_t kPrologue_enter_vm_00206410 = 0x00206410; // file_off=0x205810
constexpr uint32_t kPrologue_enter_vm_00206420 = 0x00206420; // file_off=0x205820
constexpr uint32_t kPrologue_enter_vm_00206430 = 0x00206430; // file_off=0x205830
constexpr uint32_t kPrologue_enter_vm_00206440 = 0x00206440; // file_off=0x205840
constexpr uint32_t kPrologue_enter_vm_00206450 = 0x00206450; // file_off=0x205850
constexpr uint32_t kPrologue_enter_vm_00206550 = 0x00206550; // file_off=0x205950
constexpr uint32_t kPrologue_enter_vm_00206560 = 0x00206560; // file_off=0x205960
constexpr uint32_t kPrologue_push_rbx_rsi_002065B0 = 0x002065B0; // file_off=0x2059B0
constexpr uint32_t kPrologue_enter_vm_002067B0 = 0x002067B0; // file_off=0x205BB0
constexpr uint32_t kPrologue_push_rbx_rsi_002068D0 = 0x002068D0; // file_off=0x205CD0
constexpr uint32_t kPrologue_xor_eax_eax_ret_00206AE9 = 0x00206AE9; // file_off=0x205EE9
constexpr uint32_t kPrologue_xor_eax_eax_ret_00206AFA = 0x00206AFA; // file_off=0x205EFA
constexpr uint32_t kPrologue_enter_vm_00206B10 = 0x00206B10; // file_off=0x205F10
constexpr uint32_t kPrologue_enter_vm_00206B20 = 0x00206B20; // file_off=0x205F20
constexpr uint32_t kPrologue_enter_vm_00206F90 = 0x00206F90; // file_off=0x206390
constexpr uint32_t kPrologue_enter_vm_00206FA0 = 0x00206FA0; // file_off=0x2063A0
constexpr uint32_t kPrologue_enter_vm_00206FB0 = 0x00206FB0; // file_off=0x2063B0
constexpr uint32_t kPrologue_enter_vm_00206FC0 = 0x00206FC0; // file_off=0x2063C0
constexpr uint32_t kPrologue_enter_vm_00206FD0 = 0x00206FD0; // file_off=0x2063D0
constexpr uint32_t kPrologue_enter_vm_00207660 = 0x00207660; // file_off=0x206A60
constexpr uint32_t kPrologue_push_rbx_rsi_00207B50 = 0x00207B50; // file_off=0x206F50
constexpr uint32_t kPrologue_push_rbx_rsi_00208160 = 0x00208160; // file_off=0x207560
constexpr uint32_t kPrologue_enter_vm_00209180 = 0x00209180; // file_off=0x208580
constexpr uint32_t kPrologue_enter_vm_00209ECF = 0x00209ECF; // file_off=0x2092CF
constexpr uint32_t kPrologue_call_rax_00209EE3 = 0x00209EE3; // file_off=0x2092E3
constexpr uint32_t kPrologue_push_rbx_rsi_0020A3F0 = 0x0020A3F0; // file_off=0x2097F0
constexpr uint32_t kPrologue_push_rbx_rsi_0020D010 = 0x0020D010; // file_off=0x20C410
constexpr uint32_t kPrologue_xor_eax_eax_ret_0020D966 = 0x0020D966; // file_off=0x20CD66
constexpr uint32_t kPrologue_enter_vm_0020DC63 = 0x0020DC63; // file_off=0x20D063
constexpr uint32_t kPrologue_enter_vm_0020E4E0 = 0x0020E4E0; // file_off=0x20D8E0
constexpr uint32_t kPrologue_enter_vm_0020E610 = 0x0020E610; // file_off=0x20DA10
constexpr uint32_t kPrologue_enter_vm_0020E620 = 0x0020E620; // file_off=0x20DA20
constexpr uint32_t kPrologue_enter_vm_0020EB40 = 0x0020EB40; // file_off=0x20DF40
constexpr uint32_t kPrologue_enter_vm_0020ED30 = 0x0020ED30; // file_off=0x20E130
constexpr uint32_t kPrologue_enter_vm_0020EDF0 = 0x0020EDF0; // file_off=0x20E1F0
constexpr uint32_t kPrologue_enter_vm_0020EE00 = 0x0020EE00; // file_off=0x20E200
constexpr uint32_t kPrologue_push_rbx_rsi_0020EF40 = 0x0020EF40; // file_off=0x20E340
constexpr uint32_t kPrologue_push_rbx_rsi_0020F870 = 0x0020F870; // file_off=0x20EC70
constexpr uint32_t kPrologue_enter_vm_0020FB54 = 0x0020FB54; // file_off=0x20EF54
constexpr uint32_t kPrologue_push_rbx_rsi_00210010 = 0x00210010; // file_off=0x20F410
constexpr uint32_t kPrologue_push_rbx_rsi_00210540 = 0x00210540; // file_off=0x20F940
constexpr uint32_t kPrologue_enter_vm_00210861 = 0x00210861; // file_off=0x20FC61
constexpr uint32_t kPrologue_enter_vm_002109B9 = 0x002109B9; // file_off=0x20FDB9
constexpr uint32_t kPrologue_enter_vm_00210DCD = 0x00210DCD; // file_off=0x2101CD
constexpr uint32_t kPrologue_enter_vm_00210F13 = 0x00210F13; // file_off=0x210313
constexpr uint32_t kPrologue_push_rbx_rsi_00210FC0 = 0x00210FC0; // file_off=0x2103C0
constexpr uint32_t kPrologue_push_rbx_rsi_00211060 = 0x00211060; // file_off=0x210460
constexpr uint32_t kPrologue_enter_vm_002113E0 = 0x002113E0; // file_off=0x2107E0
constexpr uint32_t kPrologue_enter_vm_002113F0 = 0x002113F0; // file_off=0x2107F0
constexpr uint32_t kPrologue_enter_vm_00211400 = 0x00211400; // file_off=0x210800
constexpr uint32_t kPrologue_enter_vm_00211410 = 0x00211410; // file_off=0x210810
constexpr uint32_t kPrologue_enter_vm_00211420 = 0x00211420; // file_off=0x210820
constexpr uint32_t kPrologue_enter_vm_002117CB = 0x002117CB; // file_off=0x210BCB
constexpr uint32_t kPrologue_enter_vm_002117EC = 0x002117EC; // file_off=0x210BEC
constexpr uint32_t kPrologue_enter_vm_00211801 = 0x00211801; // file_off=0x210C01
constexpr uint32_t kPrologue_enter_vm_00211983 = 0x00211983; // file_off=0x210D83
constexpr uint32_t kPrologue_enter_vm_00211C90 = 0x00211C90; // file_off=0x211090
constexpr uint32_t kPrologue_push_rbx_rsi_00211FE0 = 0x00211FE0; // file_off=0x2113E0
constexpr uint32_t kPrologue_push_rbx_rsi_00212FE0 = 0x00212FE0; // file_off=0x2123E0
constexpr uint32_t kPrologue_push_rbx_rsi_00214220 = 0x00214220; // file_off=0x213620
constexpr uint32_t kPrologue_push_rbx_rsi_00214360 = 0x00214360; // file_off=0x213760
constexpr uint32_t kPrologue_xor_eax_eax_ret_002149E5 = 0x002149E5; // file_off=0x213DE5
constexpr uint32_t kPrologue_enter_vm_00214EF0 = 0x00214EF0; // file_off=0x2142F0
constexpr uint32_t kPrologue_enter_vm_00214F00 = 0x00214F00; // file_off=0x214300
constexpr uint32_t kPrologue_enter_vm_00214F10 = 0x00214F10; // file_off=0x214310
constexpr uint32_t kPrologue_enter_vm_00214F20 = 0x00214F20; // file_off=0x214320
constexpr uint32_t kPrologue_enter_vm_00214F30 = 0x00214F30; // file_off=0x214330
constexpr uint32_t kPrologue_enter_vm_00214F40 = 0x00214F40; // file_off=0x214340
constexpr uint32_t kPrologue_enter_vm_00214F50 = 0x00214F50; // file_off=0x214350
constexpr uint32_t kPrologue_enter_vm_00214F60 = 0x00214F60; // file_off=0x214360
constexpr uint32_t kPrologue_enter_vm_00214F70 = 0x00214F70; // file_off=0x214370
constexpr uint32_t kPrologue_enter_vm_00214F80 = 0x00214F80; // file_off=0x214380
constexpr uint32_t kPrologue_enter_vm_00214F90 = 0x00214F90; // file_off=0x214390
constexpr uint32_t kPrologue_enter_vm_00214FA0 = 0x00214FA0; // file_off=0x2143A0
constexpr uint32_t kPrologue_xor_eax_eax_ret_00215195 = 0x00215195; // file_off=0x214595
constexpr uint32_t kPrologue_mov_eax_1_ret_002151DE = 0x002151DE; // file_off=0x2145DE
constexpr uint32_t kPrologue_xor_eax_eax_ret_002151E4 = 0x002151E4; // file_off=0x2145E4
constexpr uint32_t kPrologue_push_rbx_rsi_00215260 = 0x00215260; // file_off=0x214660
constexpr uint32_t kPrologue_mov_eax_1_ret_0021534D = 0x0021534D; // file_off=0x21474D
constexpr uint32_t kPrologue_mov_eax_1_ret_0021535A = 0x0021535A; // file_off=0x21475A
constexpr uint32_t kPrologue_mov_eax_1_ret_00215387 = 0x00215387; // file_off=0x214787
constexpr uint32_t kPrologue_xor_eax_eax_ret_0021538D = 0x0021538D; // file_off=0x21478D
constexpr uint32_t kPrologue_mov_eax_1_ret_002162DD = 0x002162DD; // file_off=0x2156DD
constexpr uint32_t kPrologue_xor_eax_eax_ret_002162E3 = 0x002162E3; // file_off=0x2156E3
constexpr uint32_t kPrologue_enter_vm_00216320 = 0x00216320; // file_off=0x215720
constexpr uint32_t kPrologue_push_rbx_rsi_002164C0 = 0x002164C0; // file_off=0x2158C0
constexpr uint32_t kPrologue_enter_vm_00216880 = 0x00216880; // file_off=0x215C80
constexpr uint32_t kPrologue_enter_vm_00217190 = 0x00217190; // file_off=0x216590
constexpr uint32_t kPrologue_enter_vm_002173ED = 0x002173ED; // file_off=0x2167ED
constexpr uint32_t kPrologue_sub_rsp_0x28_00217424 = 0x00217424; // file_off=0x216824
constexpr uint32_t kPrologue_sub_rsp_0x48_0021744C = 0x0021744C; // file_off=0x21684C
constexpr uint32_t kPrologue_sub_rsp_0x28_00217570 = 0x00217570; // file_off=0x216970
constexpr uint32_t kPrologue_sub_rsp_0x28_00217590 = 0x00217590; // file_off=0x216990
constexpr uint32_t kPrologue_push_rbx_rsi_002175B0 = 0x002175B0; // file_off=0x2169B0
constexpr uint32_t kPrologue_enter_vm_0021840F = 0x0021840F; // file_off=0x21780F
constexpr uint32_t kPrologue_enter_vm_0021855E = 0x0021855E; // file_off=0x21795E
constexpr uint32_t kPrologue_enter_vm_0021865E = 0x0021865E; // file_off=0x217A5E
constexpr uint32_t kPrologue_sub_rsp_0x68_002188F4 = 0x002188F4; // file_off=0x217CF4
constexpr uint32_t kPrologue_enter_vm_00218D2A = 0x00218D2A; // file_off=0x21812A
constexpr uint32_t kPrologue_sub_rsp_0x38_00218D91 = 0x00218D91; // file_off=0x218191
constexpr uint32_t kPrologue_sub_rsp_0x28_00218E60 = 0x00218E60; // file_off=0x218260
constexpr uint32_t kPrologue_sub_rsp_0x28_00218E78 = 0x00218E78; // file_off=0x218278
constexpr uint32_t kPrologue_sub_rsp_0x38_00219130 = 0x00219130; // file_off=0x218530
constexpr uint32_t kPrologue_sub_rsp_0x28_002191E4 = 0x002191E4; // file_off=0x2185E4
constexpr uint32_t kPrologue_sub_rsp_0x28_00219220 = 0x00219220; // file_off=0x218620
constexpr uint32_t kPrologue_sub_rsp_0x28_00219254 = 0x00219254; // file_off=0x218654
constexpr uint32_t kPrologue_sub_rsp_0x28_0021926C = 0x0021926C; // file_off=0x21866C
constexpr uint32_t kPrologue_sub_rsp_0x28_00219294 = 0x00219294; // file_off=0x218694
constexpr uint32_t kPrologue_sub_rsp_0x28_0021930C = 0x0021930C; // file_off=0x21870C
constexpr uint32_t kPrologue_sub_rsp_0x28_0021933C = 0x0021933C; // file_off=0x21873C
constexpr uint32_t kPrologue_sub_rsp_0x28_00219350 = 0x00219350; // file_off=0x218750
constexpr uint32_t kPrologue_sub_rsp_0x28_0021953C = 0x0021953C; // file_off=0x21893C
constexpr uint32_t kPrologue_sub_rsp_0x28_00219554 = 0x00219554; // file_off=0x218954
constexpr uint32_t kPrologue_push_rbx_rsi_002195A4 = 0x002195A4; // file_off=0x2189A4
constexpr uint32_t kPrologue_push_rbx_rsi_00219868 = 0x00219868; // file_off=0x218C68
constexpr uint32_t kPrologue_sub_rsp_0x28_002198A8 = 0x002198A8; // file_off=0x218CA8
constexpr uint32_t kPrologue_enter_vm_00219C28 = 0x00219C28; // file_off=0x219028
constexpr uint32_t kPrologue_enter_vm_00219C3B = 0x00219C3B; // file_off=0x21903B
constexpr uint32_t kPrologue_sub_rsp_0x48_00219C4C = 0x00219C4C; // file_off=0x21904C
constexpr uint32_t kPrologue_sub_rsp_0x28_00219E88 = 0x00219E88; // file_off=0x219288
constexpr uint32_t kPrologue_sub_rsp_0x28_00219EC8 = 0x00219EC8; // file_off=0x2192C8
constexpr uint32_t kPrologue_enter_vm_00219EE4 = 0x00219EE4; // file_off=0x2192E4
constexpr uint32_t kPrologue_enter_vm_0021BA00 = 0x0021BA00; // file_off=0x21AE00
constexpr uint32_t kPrologue_enter_vm_0021BB80 = 0x0021BB80; // file_off=0x21AF80
constexpr uint32_t kPrologue_sub_rsp_0x28_0021C3EB = 0x0021C3EB; // file_off=0x21B7EB
constexpr uint32_t kPrologue_sub_rsp_0x28_0021C4F0 = 0x0021C4F0; // file_off=0x21B8F0
constexpr uint32_t kPrologue_sub_rsp_0x28_0021C520 = 0x0021C520; // file_off=0x21B920
constexpr uint32_t kPrologue_sub_rsp_0x28_0021C540 = 0x0021C540; // file_off=0x21B940
constexpr uint32_t kPrologue_sub_rsp_0x28_0021C570 = 0x0021C570; // file_off=0x21B970
constexpr uint32_t kPrologue_sub_rsp_0x28_0021C590 = 0x0021C590; // file_off=0x21B990

// Critical string references (13 categories)
constexpr uint32_t kStr_AppSignatureKey_002E4A45 = 0x002E4A45; // "AppSignatureKey"
constexpr uint32_t kStr_AppSignatureKey_0031403D = 0x0031403D; // "AppSignatureKey"
constexpr uint32_t kStr_BrowserExamKey_002E4A5E = 0x002E4A5E; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_00314056 = 0x00314056; // "BrowserExamKey"
constexpr uint32_t kStr_CalculateAppSignatureKey_002E4A3C = 0x002E4A3C; // "CalculateAppSignatureKey"
constexpr uint32_t kStr_CalculateAppSignatureKey_00314034 = 0x00314034; // "CalculateAppSignatureKey"
constexpr uint32_t kStr_CalculateBrowserExamKey_002E4A55 = 0x002E4A55; // "CalculateBrowserExamKey"
constexpr uint32_t kStr_CalculateBrowserExamKey_0031404D = 0x0031404D; // "CalculateBrowserExamKey"
constexpr uint32_t kStr_GetModuleHandle_0031420F = 0x0031420F; // "GetModuleHandle"
constexpr uint32_t kStr_HyperV_002BCC14 = 0x002BCC14; // "HyperV"
constexpr uint32_t kStr_HyperV_002BCC39 = 0x002BCC39; // "HyperV"
constexpr uint32_t kStr_HyperV_002BCC5A = 0x002BCC5A; // "HyperV"
constexpr uint32_t kStr_IsVirtualMachine_002E4A6D = 0x002E4A6D; // "IsVirtualMachine"
constexpr uint32_t kStr_IsVirtualMachine_00314065 = 0x00314065; // "IsVirtualMachine"
constexpr uint32_t kStr_M_VCS_002C4DC0 = 0x002C4DC0; // "M-VCS"
constexpr uint32_t kStr_Sandboxie_002BCCC8 = 0x002BCCC8; // "Sandboxie"
constexpr uint32_t kStr_Sandboxie_002C3B39 = 0x002C3B39; // "Sandboxie"
constexpr uint32_t kStr_Sandboxie_002C4750 = 0x002C4750; // "Sandboxie"
constexpr uint32_t kStr_VMware_002BCB64 = 0x002BCB64; // "VMware"
constexpr uint32_t kStr_VMware_002BCB70 = 0x002BCB70; // "VMware"
constexpr uint32_t kStr_VMware_002BCB80 = 0x002BCB80; // "VMware"
constexpr uint32_t kStr_VerifyCodeSignature_002E4A7E = 0x002E4A7E; // "VerifyCodeSignature"
constexpr uint32_t kStr_VerifyCodeSignature_00314076 = 0x00314076; // "VerifyCodeSignature"
constexpr uint32_t kStr_VirtualBox_002BCB58 = 0x002BCB58; // "VirtualBox"
constexpr uint32_t kStr_VirtualBox_002BD240 = 0x002BD240; // "VirtualBox"
constexpr uint32_t kStr_WinLicense_0036A204 = 0x0036A204; // "WinLicense"
constexpr uint32_t kStr_WinLicense_003776C2 = 0x003776C2; // "WinLicense"
constexpr uint32_t kStr_WinLicense_003CCBDB = 0x003CCBDB; // "WinLicense"

} // namespace seb_x64

// ── SERVICE ──
namespace safeexambrowser_communication_contracts {
// SafeExamBrowser.Communication.Contracts.dll (x64, .NET, 0 functions)


// Critical string references (1 categories)
constexpr uint32_t kStr_Shutdown_00005B16 = 0x00005B16; // "Shutdown"
constexpr uint32_t kStr_Shutdown_00005B2F = 0x00005B2F; // "Shutdown"
constexpr uint32_t kStr_Shutdown_00006914 = 0x00006914; // "Shutdown"

} // namespace safeexambrowser_communication_contracts

namespace safeexambrowser_communication {
// SafeExamBrowser.Communication.dll (x64, .NET, 0 functions)


// Critical string references (1 categories)
constexpr uint32_t kStr_Shutdown_000055D6 = 0x000055D6; // "Shutdown"
constexpr uint32_t kStr_Shutdown_000055E6 = 0x000055E6; // "Shutdown"

} // namespace safeexambrowser_communication

namespace safeexambrowser_configuration_contracts {
// SafeExamBrowser.Configuration.Contracts.dll (x64, .NET, 0 functions)


// Critical string references (12 categories)
constexpr uint32_t kStr_AppSignatureKey_000053B7 = 0x000053B7; // "AppSignatureKey"
constexpr uint32_t kStr_BrowserExamKey_00004A5F = 0x00004A5F; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_000053E3 = 0x000053E3; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_000053FB = 0x000053FB; // "BrowserExamKey"
constexpr uint32_t kStr_CacheSession_00004E3C = 0x00004E3C; // "CacheSession"
constexpr uint32_t kStr_CalculateAppSignatureKey_000053AE = 0x000053AE; // "CalculateAppSignatureKey"
constexpr uint32_t kStr_CalculateBrowserExamKey_00004A56 = 0x00004A56; // "CalculateBrowserExamKey"
constexpr uint32_t kStr_CalculateBrowserExamKey_000053DA = 0x000053DA; // "CalculateBrowserExamKey"
constexpr uint32_t kStr_CalculateConfigurationKey_00004A72 = 0x00004A72; // "CalculateConfigurationKey"
constexpr uint32_t kStr_ClearSession_00004E49 = 0x00004E49; // "ClearSession"
constexpr uint32_t kStr_ConfigurationKey_00004A7B = 0x00004A7B; // "ConfigurationKey"
constexpr uint32_t kStr_IsVirtualMachine_000046EF = 0x000046EF; // "IsVirtualMachine"
constexpr uint32_t kStr_SebUriScheme_0000411C = 0x0000411C; // "SebUriScheme"
constexpr uint32_t kStr_SebUriScheme_0000418B = 0x0000418B; // "SebUriScheme"
constexpr uint32_t kStr_SebUriScheme_00004696 = 0x00004696; // "SebUriScheme"
constexpr uint32_t kStr_TryVerifySessionIntegrity_000054EB = 0x000054EB; // "TryVerifySessionIntegrity"
constexpr uint32_t kStr_VerifyCodeSignature_0000479A = 0x0000479A; // "VerifyCodeSignature"

} // namespace safeexambrowser_configuration_contracts

namespace safeexambrowser_core_contracts {
// SafeExamBrowser.Core.Contracts.dll (x64, .NET, 24 functions)

// Methods (RVA)
constexpr uint32_t kSafeExamBrowser_Core_Contracts_ResponsibilityModel_IResponsibility_1_get_Uri = 0x0000205F; // off=0x25F
constexpr uint32_t kIResponsibilityCollection_1_set_Uri = 0x00002067; // off=0x267
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_BitmapIconResource__ctor = 0x00002070; // off=0x270
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_BitmapIconResource_get_FilePath = 0x00002078; // off=0x278
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_BitmapIconResource_set_FilePath = 0x00002080; // off=0x280
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_EmbeddedIconResource__ctor = 0x00002089; // off=0x289
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_EmbeddedIconResource__ctor = 0x00002091; // off=0x291
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_EmbeddedIconResource_get_Handle = 0x00002099; // off=0x299
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_IconResource_set_Handle = 0x000020A1; // off=0x2A1
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_NativeIconResource__ctor = 0x000020AA; // off=0x2AA
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_NativeIconResource_get_Uri = 0x000020B2; // off=0x2B2
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_NativeIconResource_set_Uri = 0x000020BA; // off=0x2BA
constexpr uint32_t kSafeExamBrowser_Core_Contracts_Resources_Icons_XamlIconResource__ctor = 0x000020C3; // off=0x2C3
constexpr uint32_t kIRepeatableOperation_get_CurrentValue = 0x000020CB; // off=0x2CB
constexpr uint32_t kIRepeatableOperationSequence_set_CurrentValue = 0x000020D3; // off=0x2D3
constexpr uint32_t kProgressChangedEventArgs_get_IsIndeterminate = 0x000020DC; // off=0x2DC
constexpr uint32_t kProgressChangedEventArgs_set_IsIndeterminate = 0x000020E4; // off=0x2E4
constexpr uint32_t kProgressChangedEventArgs_get_MaxValue = 0x000020ED; // off=0x2ED
constexpr uint32_t kProgressChangedEventArgs_set_MaxValue = 0x000020F5; // off=0x2F5
constexpr uint32_t kProgressChangedEventArgs_get_Progress = 0x000020FE; // off=0x2FE
constexpr uint32_t kProgressChangedEventArgs_set_Progress = 0x00002106; // off=0x306
constexpr uint32_t kProgressChangedEventArgs_get_Regress = 0x0000210F; // off=0x30F
constexpr uint32_t kProgressChangedEventArgs_set_Regress = 0x00002117; // off=0x317
constexpr uint32_t k_ctor = 0x00002120; // off=0x320

} // namespace safeexambrowser_core_contracts

namespace safeexambrowser_core {
// SafeExamBrowser.Core.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_core

namespace safeexambrowser_i18n_contracts {
// SafeExamBrowser.I18n.Contracts.dll (x64, .NET, 0 functions)


// Critical string references (2 categories)
constexpr uint32_t kStr_Restart_000054E2 = 0x000054E2; // "Restart"
constexpr uint32_t kStr_Shutdown_00003F6C = 0x00003F6C; // "Shutdown"
constexpr uint32_t kStr_Shutdown_0000512D = 0x0000512D; // "Shutdown"

} // namespace safeexambrowser_i18n_contracts

namespace safeexambrowser_lockdown_contracts {
// SafeExamBrowser.Lockdown.Contracts.dll (x64, .NET, 0 functions)


// Critical string references (1 categories)
constexpr uint32_t kStr_VMware_00002B45 = 0x00002B45; // "VMware"

} // namespace safeexambrowser_lockdown_contracts

namespace safeexambrowser_lockdown {
// SafeExamBrowser.Lockdown.dll (x64, .NET, 0 functions)


// Critical string references (1 categories)
constexpr uint32_t kStr_VMware_000066F4 = 0x000066F4; // "VMware"

} // namespace safeexambrowser_lockdown

namespace safeexambrowser_logging_contracts {
// SafeExamBrowser.Logging.Contracts.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_logging_contracts

namespace safeexambrowser_logging {
// SafeExamBrowser.Logging.dll (x64, .NET, 0 functions)


} // namespace safeexambrowser_logging

namespace safeexambrowser_service {
// SafeExamBrowser.Service.exe (x64, .NET, 1 functions)

// Methods (RVA)
constexpr uint32_t kSafeExamBrowser_Service_Communication_ServiceHost_erationSequence_1 = 0x00020000; // off=0x1DA00

// Critical string references (2 categories)
constexpr uint32_t kStr_Shutdown_00005350 = 0x00005350; // "Shutdown"
constexpr uint32_t kStr_VMware_0000548D = 0x0000548D; // "VMware"
constexpr uint32_t kStr_VMware_0000564F = 0x0000564F; // "VMware"
constexpr uint32_t kStr_VMware_00005EED = 0x00005EED; // "VMware"

} // namespace safeexambrowser_service

namespace safeexambrowser_settings {
// SafeExamBrowser.Settings.dll (x64, .NET, 0 functions)


// Critical string references (4 categories)
constexpr uint32_t kStr_BrowserExamKey_00009D17 = 0x00009D17; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_0000A00E = 0x0000A00E; // "BrowserExamKey"
constexpr uint32_t kStr_BrowserExamKey_0000A034 = 0x0000A034; // "BrowserExamKey"
constexpr uint32_t kStr_ConfigurationKey_0000A074 = 0x0000A074; // "ConfigurationKey"
constexpr uint32_t kStr_ConfigurationKey_0000A09A = 0x0000A09A; // "ConfigurationKey"
constexpr uint32_t kStr_ConfigurationKey_0000C5A7 = 0x0000C5A7; // "ConfigurationKey"
constexpr uint32_t kStr_Shutdown_000096A1 = 0x000096A1; // "Shutdown"
constexpr uint32_t kStr_Shutdown_000096CA = 0x000096CA; // "Shutdown"
constexpr uint32_t kStr_Shutdown_0000B5CD = 0x0000B5CD; // "Shutdown"
constexpr uint32_t kStr_VMware_000094D1 = 0x000094D1; // "VMware"
constexpr uint32_t kStr_VMware_00009F54 = 0x00009F54; // "VMware"
constexpr uint32_t kStr_VMware_0000B33D = 0x0000B33D; // "VMware"

} // namespace safeexambrowser_settings

#ifdef __clang__
#pragma clang diagnostic pop
#endif
