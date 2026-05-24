#pragma once
#include <cstdint>

//
// IMPORTANT: These structures are ESTIMATED from .NET metadata.
// Field ordering and sizes may differ from runtime layout, but worked fine for my testing


// ── SafeExamBrowser.Applications.Contracts.dll ──
namespace safeexambrowser_applications_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Applications.Contracts.FactoryResult
// Flags: 0x0101
struct SafeExamBrowser_Applications_Contracts_FactoryResult {
    void* field_m_Collections_Generic; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_NotFound; // +0x10 (idx=4)
    void* field_ollections_Generic; // +0x18 (idx=5)
    void* field___6278_; // +0x20 (idx=6)
};

// Method count by type:
//   SafeExamBrowser.Applications.Contracts.IApplicationWindow: 7 methods
//   SafeExamBrowser.Applications.Contracts.IApplication`1: 6 methods
//   SafeExamBrowser.Applications.Contracts.Events.IconChangedEventHandler: 4 methods
//   SafeExamBrowser.Applications.Contracts.Events.TitleChangedEventHandler: 4 methods
//   SafeExamBrowser.Applications.Contracts.Events.WindowsChangedEventHandler: 3 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Applications.Contracts.IApplicationFactory: 1 methods

} // namespace safeexambrowser_applications_contracts

// ── SafeExamBrowser.Applications.dll ──
namespace safeexambrowser_applications {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Applications.ApplicationFactory
// Flags: 0x100001
struct SafeExamBrowser_Applications_ApplicationFactory {
    void* field__data0; // +0x0 (idx=2)
    void* field__data1; // +0x8 (idx=3)
    void* field_processFactory; // +0x10 (idx=4)
    void* field__unk3; // +0x18 (idx=5)
    void* field__data4; // +0x20 (idx=6)
};

// SafeExamBrowser.Applications.ExternalApplication
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Applications_ExternalApplication {
    void* field_executablePath; // +0x0 (idx=7)
    void* field_t_k__BackingField; // +0x8 (idx=8)
    void* field__data2; // +0x10 (idx=9)
    void* field_processFactory; // +0x18 (idx=10)
    void* field_ingField; // +0x20 (idx=11)
    void* field__data5; // +0x28 (idx=12)
    void* field__data6; // +0x30 (idx=13)
    void* field_nd; // +0x38 (idx=14)
    void* field__data8; // +0x40 (idx=15)
    void* field_WindowsChanged; // +0x48 (idx=16)
    void* field_toStart_k__BackingField; // +0x50 (idx=17)
    void* field__data11; // +0x58 (idx=18)
    void* field_nativeMethods; // +0x60 (idx=19)
    void* field_lOrWhiteSpace; // +0x68 (idx=20)
    void* field__data14; // +0x70 (idx=21)
};

// SafeExamBrowser.Applications.ExternalApplicationInstance
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Applications_ExternalApplicationInstance {
    void* field_timer; // +0x0 (idx=22)
    void* field_layClass37_0; // +0x8 (idx=23)
    void* field__data2; // +0x10 (idx=24)
    void* field_nativeMethods; // +0x18 (idx=25)
    void* field__data4; // +0x20 (idx=26)
    void* field__data5; // +0x28 (idx=27)
    void* field_IconChanged; // +0x30 (idx=28)
    void* field_ance; // +0x38 (idx=29)
    void* field___40_0; // +0x40 (idx=30)
    void* field_process; // +0x48 (idx=31)
    void* field_layClass37_0; // +0x50 (idx=32)
};

// SafeExamBrowser.Applications.ExternalApplicationWindow
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Applications_ExternalApplicationWindow {
    void* field_ializeInstance_b__40_0; // +0x0 (idx=33)
    void* field_w; // +0x8 (idx=34)
    void* field__data2; // +0x10 (idx=35)
    void* field___6278_; // +0x18 (idx=36)
    void* field___8272_; // +0x20 (idx=37)
    void* field__ctor; // +0x28 (idx=38)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field__unk0; // +0x0 (idx=39)
    void* field_oInstance; // +0x8 (idx=40)
};

// Method count by type:

} // namespace safeexambrowser_applications

// ── SafeExamBrowser.Browser.Contracts.dll ──
namespace safeexambrowser_browser_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Browser.Contracts.Filters.Request
// Flags: 0x100001
struct SafeExamBrowser_Browser_Contracts_Filters_Request {
    void* field__unk0; // +0x0 (idx=2)
};

// SafeExamBrowser.Browser.Contracts.Events.DownloadEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Browser_Contracts_Events_DownloadEventArgs {
    void* field_IApplication_1; // +0x0 (idx=3)
    void* field__data1; // +0x8 (idx=4)
    void* field__unk2; // +0x10 (idx=5)
    void* field___6278_; // +0x18 (idx=6)
};

// Method count by type:
//   SafeExamBrowser.Browser.Contracts.IBrowserApplication: 9 methods
//   SafeExamBrowser.Browser.Contracts.Events.DownloadEventArgs: 9 methods
//   SafeExamBrowser.Browser.Contracts.Filters.IRequestFilter: 4 methods
//   SafeExamBrowser.Browser.Contracts.Events.DownloadFinishedCallback: 4 methods
//   SafeExamBrowser.Browser.Contracts.Events.DownloadRequestedEventHandler: 4 methods
//   SafeExamBrowser.Browser.Contracts.Events.TabPressedEventHandler: 4 methods
//   SafeExamBrowser.Browser.Contracts.Events.LoseFocusRequestedEventHandler: 4 methods
//   SafeExamBrowser.Browser.Contracts.Events.UserIdentifierDetectedEventHandler: 4 methods
//   SafeExamBrowser.Browser.Contracts.Filters.IRule: 3 methods
//   SafeExamBrowser.Browser.Contracts.Filters.Request: 3 methods
//   SafeExamBrowser.Browser.Contracts.Events.TerminationRequestedEventHandler: 3 methods
//   SafeExamBrowser.Browser.Contracts.IBrowserWindow: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Browser.Contracts.Filters.IRuleFactory: 1 methods

} // namespace safeexambrowser_browser_contracts

// ── SafeExamBrowser.Browser.dll ──
namespace safeexambrowser_browser {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Browser.BrowserApplication
// Flags: 0x100001
struct SafeExamBrowser_Browser_BrowserApplication {
    void* field_add_ContextCreated; // +0x0 (idx=2)
    void* field__b__37_20; // +0x8 (idx=3)
    void* field_fileSystemDialog; // +0x10 (idx=4)
    void* field_ted; // +0x18 (idx=5)
    void* field__b__37_20; // +0x20 (idx=6)
    void* field_messageBox; // +0x28 (idx=7)
    void* field_eated; // +0x30 (idx=8)
    void* field__b__37_20; // +0x38 (idx=9)
    void* field_text; // +0x40 (idx=10)
    void* field_ed; // +0x48 (idx=11)
    void* field__data10; // +0x50 (idx=12)
    void* field__data11; // +0x58 (idx=13)
    void* field_etected; // +0x60 (idx=14)
    void* field__data13; // +0x68 (idx=15)
    void* field_ConfigurationDownloadRequested; // +0x70 (idx=16)
    void* field_emove_UserIdentifierDetected; // +0x78 (idx=17)
    void* field__data16; // +0x80 (idx=18)
    void* field_WindowsChanged; // +0x88 (idx=19)
    void* field__b__9_0; // +0x90 (idx=20)
    void* field__b__37_20; // +0x98 (idx=21)
    void* field_clipboard; // +0xA0 (idx=22)
    void* field_Created; // +0xA8 (idx=23)
    void* field__b__37_20; // +0xB0 (idx=24)
    void* field_integrations; // +0xB8 (idx=25)
};

// SafeExamBrowser.Browser.BrowserWindow
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_BrowserWindow {
    void* field_emove_ContextCreated; // +0x0 (idx=26)
    void* field__b__37_20; // +0x8 (idx=27)
    void* field_sessionMode; // +0x10 (idx=28)
    void* field_sCompleted; // +0x18 (idx=29)
    void* field__b__37_20; // +0x20 (idx=30)
    void* field_text; // +0x28 (idx=31)
    void* field_ed; // +0x30 (idx=32)
    void* field__data7; // +0x38 (idx=33)
    void* field_zoomLevel; // +0x40 (idx=34)
    void* field_ted; // +0x48 (idx=35)
    void* field__data10; // +0x50 (idx=36)
    void* field__data11; // +0x58 (idx=37)
    void* field_ntifierDetected; // +0x60 (idx=38)
    void* field__data13; // +0x68 (idx=39)
    void* field_Closed; // +0x70 (idx=40)
    void* field_ed; // +0x78 (idx=41)
    void* field__data16; // +0x80 (idx=42)
    void* field_ResetRequested; // +0x88 (idx=43)
    void* field_e_UserIdentifierDetected; // +0x90 (idx=44)
    void* field__data19; // +0x98 (idx=45)
    void* field_TitleChanged; // +0xA0 (idx=46)
    void* field_Handler_QuitUrlVisited; // +0xA8 (idx=47)
    void* field__data22; // +0xB0 (idx=48)
    void* field_Changed; // +0xB8 (idx=49)
    void* field_textCreated; // +0xC0 (idx=50)
    void* field__b__37_20; // +0xC8 (idx=51)
    void* field_dialogHandler; // +0xD0 (idx=52)
    void* field_dd_DownloadAborted; // +0xD8 (idx=53)
    void* field__b__37_20; // +0xE0 (idx=54)
    void* field_focusHandler; // +0xE8 (idx=55)
    void* field_emove_DownloadAborted; // +0xF0 (idx=56)
    void* field__b__37_20; // +0xF8 (idx=57)
    void* field_renderProcessMessageHandler; // +0x100 (idx=58)
    void* field_borted; // +0x108 (idx=59)
    void* field__data34; // +0x110 (idx=60)
    void* field_LoadingStateChanged; // +0x118 (idx=61)
};

// SafeExamBrowser.Browser.Clipboard
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Clipboard {
    void* field_er_DownloadAborted; // +0x0 (idx=62)
    void* field__data1; // +0x8 (idx=63)
    void* field_BeforeContextMenu; // +0x10 (idx=64)
    void* field_d; // +0x18 (idx=65)
};

// SafeExamBrowser.Browser.BrowserControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_BrowserControl {
    void* field__data0; // +0x0 (idx=66)
    void* field_ContextCreated; // +0x8 (idx=67)
    void* field_ested; // +0x10 (idx=68)
    void* field__data3; // +0x18 (idx=69)
    void* field_DialogClosed; // +0x20 (idx=70)
    void* field_dRequested; // +0x28 (idx=71)
    void* field__data6; // +0x30 (idx=72)
    void* field_FaviconUrlChanged; // +0x38 (idx=73)
    void* field_gurationDownloadRequested; // +0x40 (idx=74)
    void* field__data9; // +0x48 (idx=75)
    void* field_JavaScriptDialog; // +0x50 (idx=76)
    void* field_ested; // +0x58 (idx=77)
    void* field__data12; // +0x60 (idx=78)
    void* field_PreKeyEvent; // +0x68 (idx=79)
    void* field_rationDownloadRequested; // +0x70 (idx=80)
    void* field__data15; // +0x78 (idx=81)
    void* field_SetFocus; // +0x80 (idx=82)
};

// SafeExamBrowser.Browser.Wrapper.CefSharpBrowserControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Wrapper_CefSharpBrowserControl {
    void* field_ted; // +0x0 (idx=83)
    void* field__data1; // +0x8 (idx=84)
    void* field_BeforeBrowse; // +0x10 (idx=85)
    void* field_orted; // +0x18 (idx=86)
    void* field__data4; // +0x20 (idx=87)
    void* field_CanDownload; // +0x28 (idx=88)
    void* field_Requested; // +0x30 (idx=89)
    void* field__data7; // +0x38 (idx=90)
    void* field_ContextReleased; // +0x40 (idx=91)
    void* field_ReloadRequested; // +0x48 (idx=92)
    void* field__data10; // +0x50 (idx=93)
    void* field_DraggableRegionsChanged; // +0x58 (idx=94)
    void* field_ConfigurationDownloadRequested; // +0x60 (idx=95)
    void* field__data13; // +0x68 (idx=96)
    void* field_GotFocusCefSharp; // +0x70 (idx=97)
    void* field_dRequested; // +0x78 (idx=98)
    void* field__data16; // +0x80 (idx=99)
    void* field_OpenUrlFromTab; // +0x88 (idx=100)
    void* field_nfigurationDownloadRequested; // +0x90 (idx=101)
    void* field__data19; // +0x98 (idx=102)
    void* field_RunContextMenu; // +0xA0 (idx=103)
    void* field_equested; // +0xA8 (idx=104)
    void* field__data22; // +0xB0 (idx=105)
    void* field__data23; // +0xB8 (idx=106)
    void* field_adHandler_ConfigurationDownloadRequested; // +0xC0 (idx=107)
    void* field__b__37_20; // +0xC8 (idx=108)
    void* field_activeUserIdentifier; // +0xD0 (idx=109)
    void* field__b__9_0; // +0xD8 (idx=110)
    void* field___32849_; // +0xE0 (idx=111)
};

// SafeExamBrowser.Browser.Wrapper.CefSharpPopupControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Wrapper_CefSharpPopupControl {
    void* field_logger; // +0x0 (idx=112)
    void* field_Created; // +0x8 (idx=113)
    void* field__data2; // +0x10 (idx=114)
    void* field_pageZoom; // +0x18 (idx=115)
    void* field_cted; // +0x20 (idx=116)
    void* field__data5; // +0x28 (idx=117)
    void* field_FaviconChanged; // +0x30 (idx=118)
    void* field_gurationDownloadRequested; // +0x38 (idx=119)
    void* field__b__37_20; // +0x40 (idx=120)
    void* field_downloads; // +0x48 (idx=121)
    void* field_Handler_QuitUrlVisited; // +0x50 (idx=122)
    void* field__b__37_20; // +0x58 (idx=123)
    void* field_ConfigurationDownloadRequested; // +0x60 (idx=124)
    void* field_ndRequested; // +0x68 (idx=125)
    void* field__data14; // +0x70 (idx=126)
    void* field_HomeNavigationRequested; // +0x78 (idx=127)
    void* field_d; // +0x80 (idx=128)
    void* field__data17; // +0x88 (idx=129)
    void* field_ZoomResetRequested; // +0x90 (idx=130)
    void* field_d; // +0x98 (idx=131)
    void* field__data20; // +0xA0 (idx=132)
    void* field_appConfig; // +0xA8 (idx=133)
    void* field_textCreated; // +0xB0 (idx=134)
    void* field__b__37_20; // +0xB8 (idx=135)
    void* field_settings; // +0xC0 (idx=136)
    void* field_Created; // +0xC8 (idx=137)
    void* field__b__37_20; // +0xD0 (idx=138)
    void* field_logger; // +0xD8 (idx=139)
    void* field_ardHandler_FindRequested; // +0xE0 (idx=140)
};

// SafeExamBrowser.Browser.Wrapper.Events.GenericEventArgs
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Wrapper_Events_GenericEventArgs {
    void* field__b__37_20; // +0x0 (idx=141)
};

// SafeExamBrowser.Browser.Wrapper.Events.ResourceRequestEventArgs
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Wrapper_Events_ResourceRequestEventArgs {
    void* field_quitUrlPattern; // +0x0 (idx=142)
};

// SafeExamBrowser.Browser.Integrations.EdxIntegration
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Integrations_EdxIntegration {
    void* field_ndler_FindRequested; // +0x0 (idx=143)
};

// SafeExamBrowser.Browser.Integrations.GenericIntegration
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Integrations_GenericIntegration {
    void* field__b__37_20; // +0x0 (idx=144)
};

// SafeExamBrowser.Browser.Integrations.Integration
// Flags: 0x100080
struct /* class */ SafeExamBrowser_Browser_Integrations_Integration {
    void* field_contentLoader; // +0x0 (idx=145)
};

// SafeExamBrowser.Browser.Integrations.MoodleIntegration
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Integrations_MoodleIntegration {
    void* field_KeyboardHandler_FindRequested; // +0x0 (idx=146)
    void* field__b__37_20; // +0x8 (idx=147)
    void* field_logger; // +0x10 (idx=148)
    void* field__unk3; // +0x18 (idx=149)
};

// SafeExamBrowser.Browser.Content.ContentLoader
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Content_ContentLoader {
    void* field__b__37_20; // +0x0 (idx=150)
    void* field_contentHandler; // +0x8 (idx=151)
    void* field__data2; // +0x10 (idx=152)
    void* field__data3; // +0x18 (idx=153)
};

// SafeExamBrowser.Browser.Handlers.CookieVisitor
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Handlers_CookieVisitor {
    void* field_allowRules; // +0x0 (idx=154)
    void* field_sted; // +0x8 (idx=155)
};

// SafeExamBrowser.Browser.Handlers.DialogHandler
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Handlers_DialogHandler {
    void* field__data0; // +0x0 (idx=156)
};

// SafeExamBrowser.Browser.Handlers.DisplayHandler
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Handlers_DisplayHandler {
    void* field__data0; // +0x0 (idx=157)
    void* field__b__9_0; // +0x8 (idx=158)
};

// SafeExamBrowser.Browser.Handlers.DownloadHandler
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Handlers_DownloadHandler {
    void* field__data0; // +0x0 (idx=159)
    void* field_path; // +0x8 (idx=160)
    void* field_indRequested; // +0x10 (idx=161)
    void* field__data3; // +0x18 (idx=162)
    void* field_userInfo; // +0x20 (idx=163)
    void* field_w_FindRequested; // +0x28 (idx=164)
    void* field__data6; // +0x30 (idx=165)
    void* field__data7; // +0x38 (idx=166)
    void* field__b__9_0; // +0x40 (idx=167)
};

// SafeExamBrowser.Browser.Handlers.KeyboardHandler
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Handlers_KeyboardHandler {
    void* field__data0; // +0x0 (idx=168)
    void* field__data1; // +0x8 (idx=169)
    void* field_DeveloperConsoleRequested; // +0x10 (idx=170)
    void* field___32854_; // +0x18 (idx=171)
    void* field_Reload; // +0x20 (idx=172)
    void* field_operConsoleRequested; // +0x28 (idx=173)
    void* field__data6; // +0x30 (idx=174)
    void* field_forward; // +0x38 (idx=175)
    void* field_add_ContextCreated; // +0x40 (idx=176)
};

// SafeExamBrowser.Browser.Handlers.RenderProcessMessageHandler
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Handlers_RenderProcessMessageHandler {
    void* field_ialize_b__37_10; // +0x0 (idx=177)
    void* field___4__this; // +0x8 (idx=178)
    void* field_add_ContextCreated; // +0x10 (idx=179)
    void* field_ialize_b__37_10; // +0x18 (idx=180)
    void* field___4__this; // +0x20 (idx=181)
    void* field__b__9_0; // +0x28 (idx=182)
};

// SafeExamBrowser.Browser.Handlers.RequestHandler
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Handlers_RequestHandler {
    void* field_ialize_b__37_10; // +0x0 (idx=183)
    void* field___4__this; // +0x8 (idx=184)
    void* field__b__9_0; // +0x10 (idx=185)
    void* field_ialize_b__37_10; // +0x18 (idx=186)
    void* field__data4; // +0x20 (idx=187)
    void* field__b__9_0; // +0x28 (idx=188)
    void* field_ialize_b__37_10; // +0x30 (idx=189)
    void* field_data; // +0x38 (idx=190)
    void* field_perConsoleRequested; // +0x40 (idx=191)
};

// SafeExamBrowser.Browser.Handlers.ResourceHandler
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Handlers_ResourceHandler {
    void* field_ialize_b__37_10; // +0x0 (idx=192)
    void* field_CS___8__locals1; // +0x8 (idx=193)
    void* field_add_DialogRequested; // +0x10 (idx=194)
    void* field_lection_1; // +0x18 (idx=195)
    void* field_Plugin; // +0x20 (idx=196)
    void* field_ested; // +0x28 (idx=197)
    void* field__data6; // +0x30 (idx=198)
    void* field___9__9_0; // +0x38 (idx=199)
    void* field__b__9_0; // +0x40 (idx=200)
    void* field_ialize_b__37_10; // +0x48 (idx=201)
    void* field_args; // +0x50 (idx=202)
    void* field_ted; // +0x58 (idx=203)
};

// SafeExamBrowser.Browser.Handlers.JavaScriptDialogHandler
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Handlers_JavaScriptDialogHandler {
    void* field_ialize_b__37_10; // +0x0 (idx=204)
};

// SafeExamBrowser.Browser.Filters.RequestFilter
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Filters_RequestFilter {
    void* field_callback; // +0x0 (idx=205)
    void* field_avaScriptDialogHandler_DialogRequested; // +0x8 (idx=206)
    void* field_ialize_b__37_10; // +0x10 (idx=207)
};

// SafeExamBrowser.Browser.Filters.Rules.RegexRule
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Filters_Rules_RegexRule {
    void* field_CS___8__locals1; // +0x0 (idx=208)
    void* field_alogRequested; // +0x8 (idx=209)
};

// SafeExamBrowser.Browser.Filters.Rules.SimplifiedRule
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Filters_Rules_SimplifiedRule {
    void* field_ialize_b__37_10; // +0x0 (idx=210)
    void* field___4__this; // +0x8 (idx=211)
    void* field_equested; // +0x10 (idx=212)
    void* field_ialize_b__37_10; // +0x18 (idx=213)
    void* field__unk4; // +0x20 (idx=214)
    void* field__data5; // +0x28 (idx=215)
    void* field__unk6; // +0x30 (idx=216)
    void* field__data7; // +0x38 (idx=217)
    void* field_TERM; // +0x40 (idx=218)
};

// SafeExamBrowser.Browser.Events.DialogRequestedEventArgs
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Events_DialogRequestedEventArgs {
    void* field_perConsole; // +0x0 (idx=219)
    void* field_set_AutoStart; // +0x8 (idx=220)
    void* field__unk2; // +0x10 (idx=221)
    void* field_leDialogRequested; // +0x18 (idx=222)
    void* field__unk4; // +0x20 (idx=223)
    void* field_Initialize_b__37_10; // +0x28 (idx=224)
};

// SafeExamBrowser.Browser.Events.JavaScriptDialogRequestedEventArgs
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Events_JavaScriptDialogRequestedEventArgs {
    void* field_TERM; // +0x0 (idx=225)
    void* field_ateTitle; // +0x8 (idx=226)
};

// SafeExamBrowser.Browser.Events.JavaScriptDialogType
// Flags: 0x0100
struct /* class */ SafeExamBrowser_Browser_Events_JavaScriptDialogType {
    void* field_set_Id; // +0x0 (idx=227)
    void* field__unk1; // +0x8 (idx=228)
    void* field__data2; // +0x10 (idx=229)
};

// SafeExamBrowser.Browser.Events.PopupRequestedEventArgs
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Browser_Events_PopupRequestedEventArgs {
    void* field__unk0; // +0x0 (idx=230)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_itialize_b__37_10; // +0x0 (idx=231)
    void* field_TERM; // +0x8 (idx=232)
    void* field__unk2; // +0x10 (idx=258)
    void* field_alize_b__37_20; // +0x18 (idx=259)
    void* field__unk4; // +0x20 (idx=263)
    void* field__data5; // +0x28 (idx=264)
    void* field__unk6; // +0x30 (idx=265)
};

// Data
// Flags: 0x100003
struct Data {
    void* field__unk0; // +0x0 (idx=249)
    void* field_ialogRequested; // +0x8 (idx=250)
    void* field__unk2; // +0x10 (idx=251)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_itialize_b__37_10; // +0x0 (idx=231)
    void* field_TERM; // +0x8 (idx=232)
    void* field__unk2; // +0x10 (idx=258)
    void* field_alize_b__37_20; // +0x18 (idx=259)
    void* field__unk4; // +0x20 (idx=263)
    void* field__data5; // +0x28 (idx=264)
    void* field__unk6; // +0x30 (idx=265)
};

// RequestType
// Flags: 0x0103
struct RequestType {
    void* field_splayClass6_0; // +0x0 (idx=260)
    void* field_Update; // +0x8 (idx=261)
    void* field_Terminate; // +0x10 (idx=262)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_itialize_b__37_10; // +0x0 (idx=231)
    void* field_TERM; // +0x8 (idx=232)
    void* field__unk2; // +0x10 (idx=258)
    void* field_alize_b__37_20; // +0x18 (idx=259)
    void* field__unk4; // +0x20 (idx=263)
    void* field__data5; // +0x28 (idx=264)
    void* field__unk6; // +0x30 (idx=265)
};

// Method count by type:
//   Data: 5 methods
//   <>c: 4 methods

} // namespace safeexambrowser_browser

// ── SafeExamBrowser.Client.exe ──
namespace safeexambrowser_client {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Client.App
// Flags: 0x100001
struct SafeExamBrowser_Client_App {
    void* field_entinel_EaseOfAccessChanged; // +0x0 (idx=2)
    void* field_on_b__21_0; // +0x8 (idx=3)
    void* field_instances; // +0x10 (idx=4)
    void* field_add_ServerFailureActionRequested; // +0x18 (idx=5)
};

// SafeExamBrowser.Client.ClientContext
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_ClientContext {
    void* field___9__21_0; // +0x0 (idx=6)
    void* field__data1; // +0x8 (idx=7)
    void* field_ted; // +0x10 (idx=8)
    void* field___9__21_0; // +0x18 (idx=9)
    void* field__data4; // +0x20 (idx=10)
    void* field_lureActionRequested; // +0x28 (idx=11)
    void* field___9__21_0; // +0x30 (idx=12)
    void* field__data7; // +0x38 (idx=13)
    void* field_ientHost_ServerFailureActionRequested; // +0x40 (idx=14)
    void* field___9__21_0; // +0x48 (idx=15)
    void* field__data10; // +0x50 (idx=16)
    void* field_reActionRequested; // +0x58 (idx=17)
    void* field_icationTermination_b__21_0; // +0x60 (idx=18)
    void* field_operations; // +0x68 (idx=19)
    void* field_uested; // +0x70 (idx=20)
    void* field_icationTermination_b__21_0; // +0x78 (idx=21)
    void* field_reconfiguration; // +0x80 (idx=22)
};

// SafeExamBrowser.Client.ClientController
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_ClientController {
    void* field_amSelectionRequested; // +0x0 (idx=23)
    void* field___32849_; // +0x8 (idx=24)
    void* field_authenticationToken; // +0x10 (idx=25)
    void* field_ionRequested; // +0x18 (idx=26)
    void* field___9__21_0; // +0x20 (idx=27)
    void* field_runtimeHostUri; // +0x28 (idx=28)
};

// SafeExamBrowser.Client.Coordinator
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Coordinator {
    void* field_ested; // +0x0 (idx=29)
    void* field___9__21_0; // +0x8 (idx=30)
};

// SafeExamBrowser.Client.CompositionRoot
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_CompositionRoot {
    void* field_logger; // +0x0 (idx=31)
    void* field_lureActionRequested; // +0x8 (idx=32)
    void* field___9__21_0; // +0x10 (idx=33)
    void* field_splashScreen; // +0x18 (idx=34)
    void* field_nRequested; // +0x20 (idx=35)
    void* field___9__21_0; // +0x28 (idx=36)
    void* field_taskview; // +0x30 (idx=37)
    void* field_t_ExamSelectionRequested; // +0x38 (idx=38)
    void* field___9__21_0; // +0x40 (idx=39)
    void* field_uiFactory; // +0x48 (idx=40)
    void* field_Requested; // +0x50 (idx=41)
    void* field_icationTermination_b__21_0; // +0x58 (idx=42)
    void* field_runtime; // +0x60 (idx=43)
    void* field_dd_ExamSelectionRequested; // +0x68 (idx=44)
    void* field_icationTermination_b__21_0; // +0x70 (idx=45)
    void* field_messageBox; // +0x78 (idx=46)
    void* field_ientHost_ServerFailureActionRequested; // +0x80 (idx=47)
    void* field_icationTermination_b__21_0; // +0x88 (idx=48)
    void* field_text; // +0x90 (idx=49)
    void* field_reActionRequested; // +0x98 (idx=50)
    void* field___9__21_0; // +0xA0 (idx=51)
    void* field_text; // +0xA8 (idx=52)
    void* field__unk22; // +0xB0 (idx=53)
    void* field_icationTermination_b__21_0; // +0xB8 (idx=54)
};

// SafeExamBrowser.Client.Responsibilities.BrowserResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Responsibilities_BrowserResponsibility {
    void* field_displayMonitor; // +0x0 (idx=55)
    void* field_equested; // +0x8 (idx=56)
    void* field_icationTermination_b__21_0; // +0x10 (idx=57)
    void* field_text; // +0x18 (idx=58)
    void* field_ectionRequested; // +0x20 (idx=59)
};

// SafeExamBrowser.Client.Responsibilities.CommunicationResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Responsibilities_CommunicationResponsibility {
    void* field_icationTermination_b__21_0; // +0x0 (idx=60)
    void* field_messageBox; // +0x8 (idx=61)
    void* field_reActionRequested; // +0x10 (idx=62)
    void* field_hanged; // +0x18 (idx=63)
    void* field_AutoStartApplications; // +0x20 (idx=64)
    void* field_emove_LoseFocusRequested; // +0x28 (idx=65)
    void* field___32854_; // +0x30 (idx=66)
};

// SafeExamBrowser.Client.Responsibilities.ClientResponsibility
// Flags: 0x100080
struct /* class */ SafeExamBrowser_Client_Responsibilities_ClientResponsibility {
    void* field_PrepareShutdown_Wave2; // +0x0 (idx=67)
    void* field_emove_LoseFocusRequested; // +0x8 (idx=68)
};

// SafeExamBrowser.Client.Responsibilities.IntegrityResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Responsibilities_IntegrityResponsibility {
    void* field___32854_; // +0x0 (idx=69)
};

// SafeExamBrowser.Client.Responsibilities.MonitoringResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Responsibilities_MonitoringResponsibility {
    void* field_StartMonitoring; // +0x0 (idx=70)
    void* field_emove_LoseFocusRequested; // +0x8 (idx=71)
    void* field_icationTermination_b__21_0; // +0x10 (idx=72)
    void* field_text; // +0x18 (idx=73)
    void* field__unk4; // +0x20 (idx=74)
    void* field_icationTermination_b__21_0; // +0x28 (idx=75)
    void* field_taskbar; // +0x30 (idx=76)
    void* field_reActionRequested; // +0x38 (idx=77)
};

// SafeExamBrowser.Client.Responsibilities.NetworkResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Responsibilities_NetworkResponsibility {
    void* field_mAboutFailedApplicationTermination_b__21_0; // +0x0 (idx=78)
    void* field_defaultInstance; // +0x8 (idx=79)
    void* field_ionRequested; // +0x10 (idx=80)
};

// SafeExamBrowser.Client.Responsibilities.ProctoringResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Responsibilities_ProctoringResponsibility {
    void* field___9__21_0; // +0x0 (idx=81)
    void* field__data1; // +0x8 (idx=82)
    void* field_Class25_0; // +0x10 (idx=83)
};

// SafeExamBrowser.Client.Responsibilities.ClientTask
// Flags: 0x0100
struct /* class */ SafeExamBrowser_Client_Responsibilities_ClientTask {
    void* field_icationTermination_b__21_0; // +0x0 (idx=84)
    void* field_uiFactory; // +0x8 (idx=85)
    void* field_uested; // +0x10 (idx=86)
    void* field_icationTermination_b__21_0; // +0x18 (idx=87)
    void* field__data4; // +0x20 (idx=88)
    void* field_Requested; // +0x28 (idx=89)
    void* field___9__21_0; // +0x30 (idx=90)
    void* field__data7; // +0x38 (idx=91)
    void* field_kbar_LoseFocusRequested; // +0x40 (idx=92)
    void* field___9__21_0; // +0x48 (idx=93)
    void* field_ReconfigurationAborted; // +0x50 (idx=94)
    void* field_eFocusRequested; // +0x58 (idx=95)
};

// SafeExamBrowser.Client.Responsibilities.ServerResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Responsibilities_ServerResponsibility {
    void* field___9__21_0; // +0x0 (idx=96)
    void* field_Shutdown; // +0x8 (idx=97)
};

// SafeExamBrowser.Client.Responsibilities.ShellResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Responsibilities_ShellResponsibility {
    void* field_equested; // +0x0 (idx=98)
    void* field___9__21_0; // +0x8 (idx=99)
    void* field__data2; // +0x10 (idx=100)
    void* field_dd_ExamSelectionRequested; // +0x18 (idx=101)
    void* field_icationTermination_b__21_0; // +0x20 (idx=102)
};

// SafeExamBrowser.Client.Properties.Resources
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Properties_Resources {
    void* field_StatusChanged; // +0x0 (idx=103)
    void* field_equested; // +0x8 (idx=104)
};

// SafeExamBrowser.Client.Properties.Settings
// Flags: 0x100100
struct /* class */ SafeExamBrowser_Client_Properties_Settings {
    void* field___9__21_0; // +0x0 (idx=105)
};

// SafeExamBrowser.Client.Notifications.AboutNotification
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Notifications_AboutNotification {
    void* field_actionCenter; // +0x0 (idx=106)
    void* field_ctionRequested; // +0x8 (idx=107)
    void* field_icationTermination_b__21_0; // +0x10 (idx=108)
    void* field_uiFactory; // +0x18 (idx=109)
    void* field_MessageBoxRequested; // +0x20 (idx=110)
    void* field_icationTermination_b__21_0; // +0x28 (idx=111)
};

// SafeExamBrowser.Client.Notifications.LogNotification
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Notifications_LogNotification {
    void* field_token; // +0x0 (idx=112)
    void* field_MessageBoxRequested; // +0x8 (idx=113)
    void* field_icationTermination_b__21_0; // +0x10 (idx=114)
    void* field_taskbar; // +0x18 (idx=115)
    void* field_ntHost_ExamSelectionRequested; // +0x20 (idx=116)
    void* field___9__21_0; // +0x28 (idx=117)
};

// SafeExamBrowser.Client.Communication.ClientHost
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Communication_ClientHost {
    void* field_clipboard; // +0x0 (idx=118)
    void* field_equested; // +0x8 (idx=119)
    void* field_icationTermination_b__21_0; // +0x10 (idx=120)
    void* field_logger; // +0x18 (idx=121)
    void* field__unk4; // +0x20 (idx=122)
    void* field_icationTermination_b__21_0; // +0x28 (idx=123)
    void* field_logger; // +0x30 (idx=124)
    void* field_MessageBoxRequested; // +0x38 (idx=125)
    void* field_icationTermination_b__21_0; // +0x40 (idx=126)
    void* field_StatusChanged; // +0x48 (idx=127)
    void* field_remove_MessageBoxRequested; // +0x50 (idx=128)
    void* field_icationTermination_b__21_0; // +0x58 (idx=129)
};

// SafeExamBrowser.Client.Operations.ClientHostDisconnectionOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_ClientHostDisconnectionOperation {
    void* field_messageBox; // +0x0 (idx=130)
    void* field_LoseFocusRequested; // +0x8 (idx=131)
    void* field_icationTermination_b__21_0; // +0x10 (idx=132)
};

// SafeExamBrowser.Client.Operations.ClientOperation
// Flags: 0x100080
struct /* class */ SafeExamBrowser_Client_Operations_ClientOperation {
    void* field_StatusChanged; // +0x0 (idx=133)
};

// SafeExamBrowser.Client.Operations.ClientOperationSequence
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_ClientOperationSequence {
    void* field__unk0; // +0x0 (idx=134)
};

// SafeExamBrowser.Client.Operations.ConfigurationOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_ConfigurationOperation {
    void* field_icationTermination_b__21_0; // +0x0 (idx=135)
    void* field_server; // +0x8 (idx=136)
    void* field__unk2; // +0x10 (idx=137)
};

// SafeExamBrowser.Client.Operations.PermissionOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_PermissionOperation {
    void* field___9__21_0; // +0x0 (idx=138)
    void* field_actionCenter; // +0x8 (idx=139)
    void* field_oxRequested; // +0x10 (idx=140)
};

// SafeExamBrowser.Client.Operations.ProctoringOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_ProctoringOperation {
    void* field_icationTermination_b__21_0; // +0x0 (idx=141)
    void* field_logger; // +0x8 (idx=142)
    void* field_uested; // +0x10 (idx=143)
    void* field_icationTermination_b__21_0; // +0x18 (idx=144)
    void* field_powerSupply; // +0x20 (idx=145)
    void* field_ested; // +0x28 (idx=146)
};

// SafeExamBrowser.Client.Operations.RuntimeConnectionOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_RuntimeConnectionOperation {
    void* field_icationTermination_b__21_0; // +0x0 (idx=147)
    void* field_text; // +0x8 (idx=148)
    void* field_reActionRequested; // +0x10 (idx=149)
    void* field_icationTermination_b__21_0; // +0x18 (idx=150)
};

// SafeExamBrowser.Client.Operations.BrowserOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_BrowserOperation {
    void* field_guard; // +0x0 (idx=151)
    void* field_MessageBoxRequested; // +0x8 (idx=152)
    void* field_tFailedApplicationTermination_b__21_0; // +0x10 (idx=153)
    void* field___9; // +0x18 (idx=154)
    void* field_Allowed; // +0x20 (idx=155)
    void* field__21_0; // +0x28 (idx=156)
};

// SafeExamBrowser.Client.Operations.ClipboardOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_ClipboardOperation {
    void* field_dialog; // +0x0 (idx=157)
    void* field__unk1; // +0x8 (idx=158)
    void* field__21_0; // +0x10 (idx=159)
};

// SafeExamBrowser.Client.Operations.DisplayMonitorOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_DisplayMonitorOperation {
    void* field___9__16_0; // +0x0 (idx=160)
    void* field_Allowed; // +0x8 (idx=161)
    void* field_tFailedApplicationTermination_b__21_0; // +0x10 (idx=162)
    void* field_application; // +0x18 (idx=163)
};

// SafeExamBrowser.Client.Operations.KeyboardInterceptorOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_KeyboardInterceptorOperation {
    void* field__unk0; // +0x0 (idx=164)
    void* field___9__21_0; // +0x8 (idx=165)
    void* field__unk2; // +0x10 (idx=166)
};

// SafeExamBrowser.Client.Operations.MouseInterceptorOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_MouseInterceptorOperation {
    void* field_og; // +0x0 (idx=167)
    void* field_Main; // +0x8 (idx=168)
    void* field__unk2; // +0x10 (idx=169)
};

// SafeExamBrowser.Client.Operations.ApplicationOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_ApplicationOperation {
    void* field_BackingField; // +0x0 (idx=170)
    void* field__unk1; // +0x8 (idx=171)
    void* field___9__21_0; // +0x10 (idx=172)
    void* field_onitor_TerminationFailed_b__15_0; // +0x18 (idx=173)
    void* field_eateExamSelectionDialog; // +0x20 (idx=174)
    void* field_Shutdown; // +0x28 (idx=175)
    void* field__unk6; // +0x30 (idx=176)
    void* field_ield; // +0x38 (idx=177)
};

// SafeExamBrowser.Client.Operations.ServerOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_ServerOperation {
    void* field_skForAutomaticApplicationTermination_b__23_0; // +0x0 (idx=178)
    void* field__9__21_0; // +0x8 (idx=179)
    void* field__unk2; // +0x10 (idx=180)
    void* field_eateCredentialsDialog; // +0x18 (idx=181)
    void* field__cctor; // +0x20 (idx=182)
    void* field__unk5; // +0x28 (idx=183)
    void* field__21_0; // +0x30 (idx=184)
};

// SafeExamBrowser.Client.Operations.ShellOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_ShellOperation {
    void* field__unk0; // +0x0 (idx=185)
    void* field__9__21_0; // +0x8 (idx=186)
    void* field_Shell_QuitButtonClicked; // +0x10 (idx=187)
    void* field__unk3; // +0x18 (idx=188)
    void* field_get_AppConfig; // +0x20 (idx=189)
    void* field__unk5; // +0x28 (idx=190)
    void* field_ss25_0; // +0x30 (idx=191)
    void* field__unk7; // +0x38 (idx=192)
    void* field___21_0; // +0x40 (idx=193)
    void* field_Shell_QuitButtonClicked; // +0x48 (idx=194)
    void* field_Path; // +0x50 (idx=195)
    void* field_get_ClientHost; // +0x58 (idx=196)
    void* field__unk12; // +0x60 (idx=197)
    void* field_nected_k__BackingField; // +0x68 (idx=198)
    void* field__unk14; // +0x70 (idx=199)
};

// SafeExamBrowser.Client.Operations.WindowGuardOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Client_Operations_WindowGuardOperation {
    void* field__21_0; // +0x0 (idx=200)
    void* field_Shell_QuitButtonClicked; // +0x8 (idx=201)
    void* field_th; // +0x10 (idx=202)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_get_IntegrityModule; // +0x0 (idx=203)
    void* field__unk1; // +0x8 (idx=204)
    void* field_onResource_k__BackingField; // +0x10 (idx=205)
    void* field__unk3; // +0x18 (idx=206)
    void* field__0; // +0x20 (idx=207)
    void* field__unk5; // +0x28 (idx=212)
    void* field__unk6; // +0x30 (idx=213)
    void* field__unk7; // +0x38 (idx=214)
    void* field_Shell_QuitButtonClicked; // +0x40 (idx=215)
    void* field_TryAskForApplicationPath; // +0x48 (idx=216)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_get_IntegrityModule; // +0x0 (idx=203)
    void* field__unk1; // +0x8 (idx=204)
    void* field_onResource_k__BackingField; // +0x10 (idx=205)
    void* field__unk3; // +0x18 (idx=206)
    void* field__0; // +0x20 (idx=207)
    void* field__unk5; // +0x28 (idx=212)
    void* field__unk6; // +0x30 (idx=213)
    void* field__unk7; // +0x38 (idx=214)
    void* field_Shell_QuitButtonClicked; // +0x40 (idx=215)
    void* field_TryAskForApplicationPath; // +0x48 (idx=216)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_get_IntegrityModule; // +0x0 (idx=203)
    void* field__unk1; // +0x8 (idx=204)
    void* field_onResource_k__BackingField; // +0x10 (idx=205)
    void* field__unk3; // +0x18 (idx=206)
    void* field__0; // +0x20 (idx=207)
    void* field__unk5; // +0x28 (idx=212)
    void* field__unk6; // +0x30 (idx=213)
    void* field__unk7; // +0x38 (idx=214)
    void* field_Shell_QuitButtonClicked; // +0x40 (idx=215)
    void* field_TryAskForApplicationPath; // +0x48 (idx=216)
};

// Method count by type:
//   SafeExamBrowser.Client.ClientContext: 33 methods
//   SafeExamBrowser.Client.CompositionRoot: 25 methods
//   SafeExamBrowser.Client.Operations.ShellOperation: 25 methods
//   SafeExamBrowser.Client.Communication.ClientHost: 21 methods
//   SafeExamBrowser.Client.Responsibilities.ClientResponsibility: 16 methods
//   SafeExamBrowser.Client.Operations.ApplicationOperation: 16 methods
//   SafeExamBrowser.Client.Responsibilities.CommunicationResponsibility: 13 methods
//   SafeExamBrowser.Client.Responsibilities.MonitoringResponsibility: 13 methods
//   SafeExamBrowser.Client.Responsibilities.ShellResponsibility: 12 methods
//   SafeExamBrowser.Client.Responsibilities.BrowserResponsibility: 11 methods
//   SafeExamBrowser.Client.App: 10 methods
//   SafeExamBrowser.Client.Responsibilities.IntegrityResponsibility: 9 methods
//   SafeExamBrowser.Client.Notifications.AboutNotification: 9 methods
//   SafeExamBrowser.Client.Notifications.LogNotification: 9 methods
//   <>c: 9 methods
//   SafeExamBrowser.Client.ClientController: 8 methods
//   SafeExamBrowser.Client.Responsibilities.ServerResponsibility: 8 methods
//   SafeExamBrowser.Client.Coordinator: 7 methods
//   SafeExamBrowser.Client.Operations.ClipboardOperation: 7 methods
//   SafeExamBrowser.Client.Responsibilities.ProctoringResponsibility: 6 methods
//   SafeExamBrowser.Client.Operations.ClientOperation: 6 methods
//   SafeExamBrowser.Client.Operations.PermissionOperation: 6 methods
//   SafeExamBrowser.Client.Responsibilities.NetworkResponsibility: 5 methods
//   SafeExamBrowser.Client.Operations.ClientHostDisconnectionOperation: 5 methods
//   SafeExamBrowser.Client.Operations.ConfigurationOperation: 5 methods
//   SafeExamBrowser.Client.Operations.ProctoringOperation: 5 methods
//   SafeExamBrowser.Client.Operations.RuntimeConnectionOperation: 5 methods
//   SafeExamBrowser.Client.Operations.BrowserOperation: 5 methods
//   SafeExamBrowser.Client.Operations.DisplayMonitorOperation: 5 methods
//   SafeExamBrowser.Client.Operations.KeyboardInterceptorOperation: 5 methods
//   SafeExamBrowser.Client.Operations.MouseInterceptorOperation: 5 methods
//   SafeExamBrowser.Client.Operations.ServerOperation: 5 methods
//   SafeExamBrowser.Client.Properties.Resources: 4 methods
//   SafeExamBrowser.Client.Operations.WindowGuardOperation: 4 methods
//   SafeExamBrowser.Client.Contracts.ICoordinator: 4 methods
//   SafeExamBrowser.Client.Responsibilities.ApplicationsResponsibility: 3 methods
//   SafeExamBrowser.Client.Properties.Settings: 3 methods
//   SafeExamBrowser.Client.Operations.ClientOperationSequence: 3 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods

} // namespace safeexambrowser_client

// ── SafeExamBrowser.Communication.Contracts.dll ──
namespace safeexambrowser_communication_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Communication.Contracts.Interlocutor
// Flags: 0x2101
struct SafeExamBrowser_Communication_Contracts_Interlocutor {
    void* field_xamBrowser_Communication_Contracts_Data; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_Runtime; // +0x10 (idx=4)
    void* field_ssId; // +0x18 (idx=5)
    void* field__data4; // +0x20 (idx=6)
};

// SafeExamBrowser.Communication.Contracts.Proxies.CommunicationResult
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Proxies_CommunicationResult {
    void* field__data0; // +0x0 (idx=7)
};

// SafeExamBrowser.Communication.Contracts.Proxies.CommunicationResult`1
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Proxies_CommunicationResult_1 {
    void* field_ocessId; // +0x0 (idx=8)
};

// SafeExamBrowser.Communication.Contracts.Events.ClientConfigurationEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ClientConfigurationEventArgs {
    void* field__data0; // +0x0 (idx=9)
};

// SafeExamBrowser.Communication.Contracts.Events.ExamSelectionReplyEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ExamSelectionReplyEventArgs {
    void* field__data0; // +0x0 (idx=10)
    void* field_ocessId; // +0x8 (idx=11)
    void* field__data2; // +0x10 (idx=12)
};

// SafeExamBrowser.Communication.Contracts.Events.ExamSelectionRequestEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ExamSelectionRequestEventArgs {
    void* field__data0; // +0x0 (idx=13)
    void* field_xamBrowser_Communication_Contracts_Data; // +0x8 (idx=14)
};

// SafeExamBrowser.Communication.Contracts.Events.MessageBoxReplyEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_MessageBoxReplyEventArgs {
    void* field__data0; // +0x0 (idx=15)
    void* field__data1; // +0x8 (idx=16)
};

// SafeExamBrowser.Communication.Contracts.Events.MessageBoxRequestEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_MessageBoxRequestEventArgs {
    void* field_sId; // +0x0 (idx=17)
    void* field__data1; // +0x8 (idx=18)
    void* field__data2; // +0x10 (idx=19)
    void* field_ocessId; // +0x18 (idx=20)
    void* field__data4; // +0x20 (idx=21)
};

// SafeExamBrowser.Communication.Contracts.Events.PasswordReplyEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_PasswordReplyEventArgs {
    void* field__data0; // +0x0 (idx=22)
    void* field__unk1; // +0x8 (idx=23)
    void* field__data2; // +0x10 (idx=24)
};

// SafeExamBrowser.Communication.Contracts.Events.PasswordRequestEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_PasswordRequestEventArgs {
    void* field__data0; // +0x0 (idx=25)
    void* field__unk1; // +0x8 (idx=26)
};

// SafeExamBrowser.Communication.Contracts.Events.ReconfigurationEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ReconfigurationEventArgs {
    void* field__data0; // +0x0 (idx=27)
    void* field__data1; // +0x8 (idx=28)
};

// SafeExamBrowser.Communication.Contracts.Events.ServerFailureActionReplyEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ServerFailureActionReplyEventArgs {
    void* field_xamBrowser_Communication_Contracts_Data; // +0x0 (idx=29)
    void* field__data1; // +0x8 (idx=30)
    void* field__data2; // +0x10 (idx=31)
    void* field_ssId; // +0x18 (idx=32)
};

// SafeExamBrowser.Communication.Contracts.Events.ServerFailureActionRequestEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ServerFailureActionRequestEventArgs {
    void* field_c_b__0; // +0x0 (idx=33)
    void* field__data1; // +0x8 (idx=34)
    void* field__unk2; // +0x10 (idx=35)
};

// SafeExamBrowser.Communication.Contracts.Events.SessionStartEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_SessionStartEventArgs {
    void* field_c_b__0; // +0x0 (idx=36)
};

// SafeExamBrowser.Communication.Contracts.Events.SessionStopEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_SessionStopEventArgs {
    void* field__data0; // +0x0 (idx=37)
};

// SafeExamBrowser.Communication.Contracts.Data.AuthenticationResponse
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_AuthenticationResponse {
    void* field_ocessId; // +0x0 (idx=38)
};

// SafeExamBrowser.Communication.Contracts.Data.ConfigurationResponse
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ConfigurationResponse {
    void* field__data0; // +0x0 (idx=39)
};

// SafeExamBrowser.Communication.Contracts.Data.ConnectionResponse
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ConnectionResponse {
    void* field__data0; // +0x0 (idx=40)
    void* field_sId; // +0x8 (idx=41)
};

// SafeExamBrowser.Communication.Contracts.Data.DisconnectionMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_DisconnectionMessage {
    void* field__data0; // +0x0 (idx=42)
};

// SafeExamBrowser.Communication.Contracts.Data.DisconnectionResponse
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_DisconnectionResponse {
    void* field__data0; // +0x0 (idx=43)
};

// SafeExamBrowser.Communication.Contracts.Data.ExamSelectionReplyMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ExamSelectionReplyMessage {
    void* field_ocessId; // +0x0 (idx=44)
    void* field__data1; // +0x8 (idx=45)
    void* field__data2; // +0x10 (idx=46)
};

// SafeExamBrowser.Communication.Contracts.Data.ExamSelectionRequestMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ExamSelectionRequestMessage {
    void* field_xamBrowser_Communication_Contracts_Data; // +0x0 (idx=47)
    void* field___32854_; // +0x8 (idx=48)
};

// SafeExamBrowser.Communication.Contracts.Data.Message
// Flags: 0x102081
struct SafeExamBrowser_Communication_Contracts_Data_Message {
    void* field_Settings; // +0x0 (idx=49)
};

// SafeExamBrowser.Communication.Contracts.Data.MessageBoxReplyMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_MessageBoxReplyMessage {
    void* field_sId; // +0x0 (idx=50)
    void* field__data1; // +0x8 (idx=51)
};

// SafeExamBrowser.Communication.Contracts.Data.MessageBoxRequestMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_MessageBoxRequestMessage {
    void* field__data0; // +0x0 (idx=52)
    void* field__unk1; // +0x8 (idx=53)
    void* field__data2; // +0x10 (idx=54)
    void* field__data3; // +0x18 (idx=55)
    void* field__unk4; // +0x20 (idx=56)
};

// SafeExamBrowser.Communication.Contracts.Data.PasswordReplyMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_PasswordReplyMessage {
    void* field_c_b__0; // +0x0 (idx=57)
    void* field__data1; // +0x8 (idx=58)
    void* field_estId; // +0x10 (idx=59)
};

// SafeExamBrowser.Communication.Contracts.Data.PasswordRequestMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_PasswordRequestMessage {
    void* field___32854_; // +0x0 (idx=60)
    void* field_ClientIsReady; // +0x8 (idx=61)
};

// SafeExamBrowser.Communication.Contracts.Data.PasswordRequestPurpose
// Flags: 0x0101
struct SafeExamBrowser_Communication_Contracts_Data_PasswordRequestPurpose {
    void* field_estId; // +0x0 (idx=62)
    void* field___32854_; // +0x8 (idx=63)
    void* field_RequestShutdown; // +0x10 (idx=64)
    void* field_estId; // +0x18 (idx=65)
};

// SafeExamBrowser.Communication.Contracts.Data.ReconfigurationDeniedMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ReconfigurationDeniedMessage {
    void* field__data0; // +0x0 (idx=66)
};

// SafeExamBrowser.Communication.Contracts.Data.ReconfigurationMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ReconfigurationMessage {
    void* field_value__; // +0x0 (idx=67)
    void* field__unk1; // +0x8 (idx=68)
};

// SafeExamBrowser.Communication.Contracts.Data.ServerFailureActionReplyMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ServerFailureActionReplyMessage {
    void* field___32854_; // +0x0 (idx=69)
    void* field_handler; // +0x8 (idx=70)
    void* field___; // +0x10 (idx=71)
    void* field_DisplayClass0_0; // +0x18 (idx=72)
};

// SafeExamBrowser.Communication.Contracts.Data.ServerFailureActionRequestMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ServerFailureActionRequestMessage {
    void* field__data0; // +0x0 (idx=73)
    void* field_ClientConfigurationNeeded; // +0x8 (idx=74)
    void* field_DisplayClass0_0; // +0x10 (idx=75)
};

// SafeExamBrowser.Communication.Contracts.Data.SessionStartMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_SessionStartMessage {
    void* field__data0; // +0x0 (idx=76)
};

// SafeExamBrowser.Communication.Contracts.Data.SessionStopMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_SessionStopMessage {
    void* field___; // +0x0 (idx=77)
};

// SafeExamBrowser.Communication.Contracts.Data.SimpleMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_SimpleMessage {
    void* field__data0; // +0x0 (idx=78)
};

// SafeExamBrowser.Communication.Contracts.Data.SimpleMessagePurport
// Flags: 0x2101
struct SafeExamBrowser_Communication_Contracts_Data_SimpleMessagePurport {
    void* field__unk0; // +0x0 (idx=79)
    void* field__data1; // +0x8 (idx=80)
    void* field__unk2; // +0x10 (idx=81)
    void* field__data3; // +0x18 (idx=82)
    void* field_Requested; // +0x20 (idx=83)
    void* field__unk5; // +0x28 (idx=84)
    void* field_Disconnect; // +0x30 (idx=85)
    void* field__unk7; // +0x38 (idx=86)
    void* field__unk8; // +0x40 (idx=87)
};

// SafeExamBrowser.Communication.Contracts.Data.SimpleResponse
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_SimpleResponse {
    void* field__unk0; // +0x0 (idx=88)
};

// SafeExamBrowser.Communication.Contracts.Data.SimpleResponsePurport
// Flags: 0x2101
struct SafeExamBrowser_Communication_Contracts_Data_SimpleResponsePurport {
    void* field__data0; // +0x0 (idx=89)
    void* field_Requested; // +0x8 (idx=90)
    void* field__unk2; // +0x10 (idx=91)
    void* field_Stop; // +0x18 (idx=92)
};

// <InvokeAsync>d__0
// Flags: 0x100103
struct _InvokeAsync_d__0 {
    void* field__data0; // +0x0 (idx=96)
    void* field_ateMachineAttribute; // +0x8 (idx=97)
    void* field__unk2; // +0x10 (idx=98)
    void* field_Connect; // +0x18 (idx=99)
};

// <InvokeAsync>d__1`1
// Flags: 0x100103
struct _InvokeAsync_d__1_1 {
    void* field__unk0; // +0x0 (idx=100)
    void* field__unk1; // +0x8 (idx=101)
    void* field__unk2; // +0x10 (idx=102)
    void* field_splayClass0_0; // +0x18 (idx=103)
    void* field_kingField; // +0x20 (idx=104)
};

// Method count by type:
//   SafeExamBrowser.Communication.Contracts.Hosts.IClientHost: 18 methods
//   SafeExamBrowser.Communication.Contracts.Hosts.IRuntimeHost: 18 methods
//   SafeExamBrowser.Communication.Contracts.Events.MessageBoxRequestEventArgs: 11 methods
//   SafeExamBrowser.Communication.Contracts.Data.MessageBoxRequestMessage: 11 methods
//   SafeExamBrowser.Communication.Contracts.Events.ServerFailureActionReplyEventArgs: 9 methods
//   SafeExamBrowser.Communication.Contracts.Data.ServerFailureActionReplyMessage: 9 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.IClientProxy: 8 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.IRuntimeProxy: 8 methods
//   SafeExamBrowser.Communication.Contracts.Events.ExamSelectionReplyEventArgs: 7 methods
//   SafeExamBrowser.Communication.Contracts.Events.PasswordReplyEventArgs: 7 methods
//   SafeExamBrowser.Communication.Contracts.Events.ServerFailureActionRequestEventArgs: 7 methods
//   SafeExamBrowser.Communication.Contracts.Data.PasswordReplyMessage: 7 methods
//   SafeExamBrowser.Communication.Contracts.Data.ServerFailureActionRequestMessage: 6 methods
//   SafeExamBrowser.Communication.Contracts.ICommunicationProxy: 5 methods
//   SafeExamBrowser.Communication.Contracts.Events.ExamSelectionRequestEventArgs: 5 methods
//   SafeExamBrowser.Communication.Contracts.Events.MessageBoxReplyEventArgs: 5 methods
//   SafeExamBrowser.Communication.Contracts.Events.PasswordRequestEventArgs: 5 methods
//   SafeExamBrowser.Communication.Contracts.Events.ReconfigurationEventArgs: 5 methods
//   SafeExamBrowser.Communication.Contracts.Data.ConnectionResponse: 5 methods
//   SafeExamBrowser.Communication.Contracts.Data.MessageBoxReplyMessage: 5 methods
//   SafeExamBrowser.Communication.Contracts.Data.PasswordRequestMessage: 5 methods
//   SafeExamBrowser.Communication.Contracts.Data.ReconfigurationMessage: 5 methods
//   SafeExamBrowser.Communication.Contracts.Events.CommunicationEventHandler: 4 methods
//   SafeExamBrowser.Communication.Contracts.Events.CommunicationEventHandler`1: 4 methods
//   SafeExamBrowser.Communication.Contracts.Data.ExamSelectionReplyMessage: 4 methods
//   SafeExamBrowser.Communication.Contracts.Data.Message: 4 methods
//   SafeExamBrowser.Communication.Contracts.ICommunication: 3 methods
//   SafeExamBrowser.Communication.Contracts.ICommunicationHost: 3 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.CommunicationResult: 3 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.CommunicationResult`1: 3 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.IServiceProxy: 3 methods
//   SafeExamBrowser.Communication.Contracts.Hosts.IServiceHost: 3 methods
//   SafeExamBrowser.Communication.Contracts.Events.ClientConfigurationEventArgs: 3 methods
//   SafeExamBrowser.Communication.Contracts.Events.SessionStartEventArgs: 3 methods
//   SafeExamBrowser.Communication.Contracts.Events.SessionStopEventArgs: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.AuthenticationResponse: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.ConfigurationResponse: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.DisconnectionMessage: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.DisconnectionResponse: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.ExamSelectionRequestMessage: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.ReconfigurationDeniedMessage: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.SimpleMessage: 3 methods
//   SafeExamBrowser.Communication.Contracts.Events.CommunicationEventHandlerExtensions: 2 methods
//   SafeExamBrowser.Communication.Contracts.Data.Response: 2 methods
//   SafeExamBrowser.Communication.Contracts.Data.SessionStartMessage: 2 methods
//   SafeExamBrowser.Communication.Contracts.Data.SessionStopMessage: 2 methods
//   SafeExamBrowser.Communication.Contracts.Data.SimpleResponse: 2 methods
//   <InvokeAsync>d__1`1: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.IProxyFactory: 1 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.IProxyObjectFactory: 1 methods
//   SafeExamBrowser.Communication.Contracts.Hosts.IHostObjectFactory: 1 methods
//   SafeExamBrowser.Communication.Contracts.Events.CommunicationEventArgs: 1 methods
//   <InvokeAsync>d__0: 1 methods

} // namespace safeexambrowser_communication_contracts

// ── SafeExamBrowser.Communication.dll ──
namespace safeexambrowser_communication {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Communication.Proxies.BaseProxy
// Flags: 0x100081
struct SafeExamBrowser_Communication_Proxies_BaseProxy {
    void* field__data0; // +0x0 (idx=2)
    void* field__data1; // +0x8 (idx=3)
    void* field_owner; // +0x10 (idx=4)
    void* field_gField; // +0x18 (idx=5)
    void* field__data4; // +0x20 (idx=6)
    void* field_timer; // +0x28 (idx=7)
    void* field_ckground; // +0x30 (idx=8)
    void* field__data7; // +0x38 (idx=9)
    void* field_logger; // +0x40 (idx=10)
    void* field__data9; // +0x48 (idx=11)
};

// SafeExamBrowser.Communication.Proxies.ProxyFactory
// Flags: 0x100001
struct SafeExamBrowser_Communication_Proxies_ProxyFactory {
    void* field__data0; // +0x0 (idx=12)
    void* field_factory; // +0x8 (idx=13)
};

// SafeExamBrowser.Communication.Hosts.BaseHost
// Flags: 0x100081
struct SafeExamBrowser_Communication_Hosts_BaseHost {
    void* field__unk0; // +0x0 (idx=14)
    void* field__data1; // +0x8 (idx=15)
    void* field__data2; // +0x10 (idx=16)
    void* field_rd; // +0x18 (idx=17)
    void* field_DisplayClass24_0; // +0x20 (idx=18)
    void* field__unk5; // +0x28 (idx=19)
    void* field_DisplayClass24_0; // +0x30 (idx=20)
    void* field__unk7; // +0x38 (idx=21)
};

// Method count by type:
//   SafeExamBrowser.Communication.Proxies.BaseProxy: 25 methods
//   SafeExamBrowser.Communication.Hosts.BaseHost: 21 methods
//   SafeExamBrowser.Communication.Proxies.ClientProxy: 9 methods
//   SafeExamBrowser.Communication.Proxies.RuntimeProxy: 9 methods
//   SafeExamBrowser.Communication.Proxies.ServiceProxy: 4 methods
//   SafeExamBrowser.Communication.Proxies.ProxyFactory: 2 methods
//   SafeExamBrowser.Communication.Proxies.ProxyObjectFactory: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Communication.Hosts.HostObjectFactory: 1 methods
//   Host: 1 methods

} // namespace safeexambrowser_communication

// ── SafeExamBrowser.Configuration.Contracts.dll ──
namespace safeexambrowser_configuration_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Configuration.Contracts.AppConfig
// Flags: 0x102001
struct SafeExamBrowser_Configuration_Contracts_AppConfig {
    void* field_rted; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_RUNTIME_MUTEX_NAME; // +0x10 (idx=4)
    void* field_rted; // +0x18 (idx=5)
    void* field_IDictionary_2; // +0x20 (idx=6)
    void* field__data5; // +0x28 (idx=7)
    void* field_rted; // +0x30 (idx=8)
    void* field_IDictionary_2; // +0x38 (idx=9)
    void* field__data8; // +0x40 (idx=10)
    void* field_t_UserSid; // +0x48 (idx=11)
    void* field_IDictionary_2; // +0x50 (idx=12)
    void* field__data11; // +0x58 (idx=13)
    void* field_rted; // +0x60 (idx=14)
    void* field_IDictionary_2; // +0x68 (idx=15)
    void* field__data14; // +0x70 (idx=16)
    void* field_rted; // +0x78 (idx=17)
    void* field_IDictionary_2; // +0x80 (idx=18)
    void* field__data17; // +0x88 (idx=19)
    void* field_rted; // +0x90 (idx=20)
    void* field_IDictionary_2; // +0x98 (idx=21)
    void* field__data20; // +0xA0 (idx=22)
    void* field_rted; // +0xA8 (idx=23)
    void* field_IDictionary_2; // +0xB0 (idx=24)
    void* field__data23; // +0xB8 (idx=25)
    void* field_rted; // +0xC0 (idx=26)
    void* field_IDictionary_2; // +0xC8 (idx=27)
    void* field__data26; // +0xD0 (idx=28)
    void* field_erSid; // +0xD8 (idx=29)
    void* field_IDictionary_2; // +0xE0 (idx=30)
    void* field_value__; // +0xE8 (idx=31)
    void* field_t_UserSid; // +0xF0 (idx=32)
    void* field___32854_; // +0xF8 (idx=33)
    void* field_PasswordNeeded; // +0x100 (idx=34)
    void* field_t_UserSid; // +0x108 (idx=35)
    void* field_Field; // +0x110 (idx=36)
    void* field_InvalidData; // +0x118 (idx=37)
};

// SafeExamBrowser.Configuration.Contracts.ClientConfiguration
// Flags: 0x102001
struct SafeExamBrowser_Configuration_Contracts_ClientConfiguration {
    void* field_erSid; // +0x0 (idx=38)
    void* field___32854_; // +0x8 (idx=39)
    void* field__data2; // +0x10 (idx=40)
};

// SafeExamBrowser.Configuration.Contracts.LoadStatus
// Flags: 0x0101
struct SafeExamBrowser_Configuration_Contracts_LoadStatus {
    void* field_t_UserSid; // +0x0 (idx=41)
    void* field_IDictionary_2; // +0x8 (idx=42)
    void* field__data2; // +0x10 (idx=43)
    void* field_erSid; // +0x18 (idx=44)
    void* field_IDictionary_2; // +0x20 (idx=45)
    void* field__data5; // +0x28 (idx=46)
    void* field_d; // +0x30 (idx=47)
};

// SafeExamBrowser.Configuration.Contracts.SaveStatus
// Flags: 0x0101
struct SafeExamBrowser_Configuration_Contracts_SaveStatus {
    void* field___32854_; // +0x0 (idx=48)
    void* field_Xml; // +0x8 (idx=49)
    void* field_id; // +0x10 (idx=50)
    void* field_IDictionary_2; // +0x18 (idx=51)
    void* field__data4; // +0x20 (idx=52)
};

// SafeExamBrowser.Configuration.Contracts.ServiceConfiguration
// Flags: 0x102001
struct SafeExamBrowser_Configuration_Contracts_ServiceConfiguration {
    void* field_a_k__BackingField; // +0x0 (idx=53)
    void* field_IDictionary_2; // +0x8 (idx=54)
    void* field__data2; // +0x10 (idx=55)
    void* field__data3; // +0x18 (idx=56)
    void* field_IDictionary_2; // +0x20 (idx=57)
};

// SafeExamBrowser.Configuration.Contracts.SessionConfiguration
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Contracts_SessionConfiguration {
    void* field__unk0; // +0x0 (idx=58)
    void* field_ionary_2; // +0x8 (idx=59)
    void* field__unk2; // +0x10 (idx=60)
    void* field_IDictionary_2; // +0x18 (idx=61)
    void* field_rviceEventName; // +0x20 (idx=62)
};

// SafeExamBrowser.Configuration.Contracts.DataFormats.FormatType
// Flags: 0x0101
struct SafeExamBrowser_Configuration_Contracts_DataFormats_FormatType {
    void* field___8295_; // +0x0 (idx=63)
    void* field_set_AppDataFilePath; // +0x8 (idx=64)
    void* field__unk2; // +0x10 (idx=65)
};

// SafeExamBrowser.Configuration.Contracts.DataFormats.ParseResult
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Contracts_DataFormats_ParseResult {
    void* field_d; // +0x0 (idx=66)
    void* field__unk1; // +0x8 (idx=67)
    void* field_Dictionary_2; // +0x10 (idx=68)
    void* field_rviceEventName; // +0x18 (idx=69)
};

// SafeExamBrowser.Configuration.Contracts.DataFormats.SerializeResult
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Contracts_DataFormats_SerializeResult {
    void* field___8329_; // +0x0 (idx=70)
    void* field_set_BrowserCachePath; // +0x8 (idx=71)
};

// SafeExamBrowser.Configuration.Contracts.Cryptography.PasswordParameters
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Contracts_Cryptography_PasswordParameters {
    void* field__unk0; // +0x0 (idx=72)
    void* field_Field; // +0x8 (idx=73)
};

// SafeExamBrowser.Configuration.Contracts.Cryptography.PublicKeyParameters
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Contracts_Cryptography_PublicKeyParameters {
    void* field__unk0; // +0x0 (idx=74)
    void* field_ctionary_2; // +0x8 (idx=75)
    void* field_rviceEventName; // +0x10 (idx=76)
};

// Method count by type:
//   SafeExamBrowser.Configuration.Contracts.AppConfig: 62 methods
//   SafeExamBrowser.Configuration.Contracts.ServiceConfiguration: 11 methods
//   SafeExamBrowser.Configuration.Contracts.SessionConfiguration: 11 methods
//   SafeExamBrowser.Configuration.Contracts.IConfigurationRepository: 9 methods
//   SafeExamBrowser.Configuration.Contracts.DataFormats.ParseResult: 9 methods
//   SafeExamBrowser.Configuration.Contracts.ClientConfiguration: 7 methods
//   SafeExamBrowser.Configuration.Contracts.Integrity.IIntegrityModule: 7 methods
//   SafeExamBrowser.Configuration.Contracts.DataFormats.SerializeResult: 5 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.PublicKeyParameters: 5 methods
//   SafeExamBrowser.Configuration.Contracts.DataCompression.IDataCompressor: 4 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.IKeyGenerator: 4 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.PasswordParameters: 3 methods
//   SafeExamBrowser.Configuration.Contracts.DataResources.IResourceLoader: 2 methods
//   SafeExamBrowser.Configuration.Contracts.DataResources.IResourceSaver: 2 methods
//   SafeExamBrowser.Configuration.Contracts.DataFormats.IDataParser: 2 methods
//   SafeExamBrowser.Configuration.Contracts.DataFormats.IDataSerializer: 2 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.ICertificateStore: 2 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.IPasswordEncryption: 2 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.IPublicKeyEncryption: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.EncryptionParameters: 1 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.IHashAlgorithm: 1 methods

} // namespace safeexambrowser_configuration_contracts

// ── SafeExamBrowser.Configuration.dll ──
namespace safeexambrowser_configuration {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Configuration.ConfigurationRepository
// Flags: 0x100001
struct SafeExamBrowser_Configuration_ConfigurationRepository {
    void* field_gger; // +0x0 (idx=2)
    void* field_isplayClass20_0; // +0x8 (idx=3)
    void* field_dataMapper; // +0x10 (idx=4)
    void* field_r; // +0x18 (idx=5)
    void* field_isplayClass20_0; // +0x20 (idx=6)
    void* field_resourceLoaders; // +0x28 (idx=7)
    void* field_apper; // +0x30 (idx=8)
    void* field_MapEnableF10; // +0x38 (idx=9)
    void* field_original; // +0x40 (idx=10)
};

// SafeExamBrowser.Configuration.SubStream
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Configuration_SubStream {
    void* field_rviceDataMapper; // +0x0 (idx=11)
    void* field___9__0_0; // +0x8 (idx=12)
    void* field_SESSION_DATA_KEY; // +0x10 (idx=13)
    void* field__data3; // +0x18 (idx=14)
};

// SafeExamBrowser.Configuration.Integrity.IntegrityModule
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Integrity_IntegrityModule {
    void* field_isplayClass20_0; // +0x0 (idx=15)
    void* field_logger; // +0x8 (idx=16)
    void* field_terfaceDataMapper; // +0x10 (idx=17)
    void* field_isplayClass20_0; // +0x18 (idx=18)
    void* field_PREFIX_LENGTH; // +0x20 (idx=19)
    void* field_onfigurationFileDataMapper; // +0x28 (idx=20)
};

// SafeExamBrowser.Configuration.DataResources.FileResourceSaver
// Flags: 0x100001
struct SafeExamBrowser_Configuration_DataResources_FileResourceSaver {
    void* field_MapEnableF10; // +0x0 (idx=21)
};

// SafeExamBrowser.Configuration.DataResources.FileResourceLoader
// Flags: 0x100001
struct SafeExamBrowser_Configuration_DataResources_FileResourceLoader {
    void* field_passwordEncryption; // +0x0 (idx=22)
};

// SafeExamBrowser.Configuration.DataResources.NetworkResourceLoader
// Flags: 0x100001
struct SafeExamBrowser_Configuration_DataResources_NetworkResourceLoader {
    void* field_eDataMapper; // +0x0 (idx=23)
    void* field_isplayClass20_0; // +0x8 (idx=24)
};

// SafeExamBrowser.Configuration.DataFormats.BinaryParser
// Flags: 0x100001
struct SafeExamBrowser_Configuration_DataFormats_BinaryParser {
    void* field_compressor; // +0x0 (idx=25)
    void* field_terfaceDataMapper; // +0x8 (idx=26)
    void* field_MapEnableF10; // +0x10 (idx=27)
    void* field_symmetricEncryption; // +0x18 (idx=28)
    void* field_er; // +0x20 (idx=29)
    void* field___32851_; // +0x28 (idx=30)
    void* field_PlainData; // +0x30 (idx=31)
    void* field__data7; // +0x38 (idx=32)
};

// SafeExamBrowser.Configuration.DataFormats.BinarySerializer
// Flags: 0x100001
struct SafeExamBrowser_Configuration_DataFormats_BinarySerializer {
    void* field___32854_; // +0x0 (idx=33)
    void* field_Data; // +0x8 (idx=34)
    void* field__data2; // +0x10 (idx=35)
    void* field___32854_; // +0x18 (idx=36)
    void* field_Integer; // +0x20 (idx=37)
    void* field__data5; // +0x28 (idx=38)
};

// SafeExamBrowser.Configuration.DataFormats.BinaryBlock
// Flags: 0x100180
struct /* class */ SafeExamBrowser_Configuration_DataFormats_BinaryBlock {
    void* field___32854_; // +0x0 (idx=39)
    void* field_String; // +0x8 (idx=40)
    void* field__data2; // +0x10 (idx=41)
    void* field_isplayClass20_0; // +0x18 (idx=42)
    void* field_logger; // +0x20 (idx=43)
};

// SafeExamBrowser.Configuration.DataFormats.XmlElement
// Flags: 0x100180
struct /* class */ SafeExamBrowser_Configuration_DataFormats_XmlElement {
    void* field_terfaceDataMapper; // +0x0 (idx=44)
    void* field___32849_; // +0x8 (idx=45)
    void* field_CM; // +0x10 (idx=46)
    void* field_c; // +0x18 (idx=47)
    void* field_MapEnableF10; // +0x20 (idx=48)
    void* field_logger; // +0x28 (idx=49)
    void* field_aseDataMapper; // +0x30 (idx=50)
    void* field_isplayClass20_0; // +0x38 (idx=51)
    void* field_appConfig; // +0x40 (idx=52)
    void* field_oringDataMapper; // +0x48 (idx=53)
    void* field_MapEnableF10; // +0x50 (idx=54)
};

// SafeExamBrowser.Configuration.DataFormats.XmlParser
// Flags: 0x100001
struct SafeExamBrowser_Configuration_DataFormats_XmlParser {
    void* field_BLOCK_SIZE; // +0x0 (idx=55)
    void* field_c; // +0x8 (idx=56)
    void* field___32849_; // +0x10 (idx=57)
};

// SafeExamBrowser.Configuration.DataFormats.XmlSerializer
// Flags: 0x100001
struct SafeExamBrowser_Configuration_DataFormats_XmlSerializer {
    void* field_OPTIONS; // +0x0 (idx=58)
};

// SafeExamBrowser.Configuration.DataCompression.GZipCompressor
// Flags: 0x100001
struct SafeExamBrowser_Configuration_DataCompression_GZipCompressor {
    void* field_c; // +0x0 (idx=59)
    void* field_MapEnableF10; // +0x8 (idx=60)
    void* field_PUBLIC_KEY_HASH_SIZE; // +0x10 (idx=61)
    void* field_gger; // +0x18 (idx=62)
    void* field___32849_; // +0x20 (idx=63)
    void* field_KEY_LENGTH_SIZE; // +0x28 (idx=64)
};

// SafeExamBrowser.Configuration.Cryptography.CertificateStore
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Cryptography_CertificateStore {
    void* field_DataMapper; // +0x0 (idx=65)
    void* field___32849_; // +0x8 (idx=66)
};

// SafeExamBrowser.Configuration.Cryptography.KeyGenerator
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Cryptography_KeyGenerator {
    void* field_appConfig; // +0x0 (idx=67)
    void* field_Mapper; // +0x8 (idx=68)
    void* field__data2; // +0x10 (idx=69)
    void* field_resource; // +0x18 (idx=70)
    void* field_ceDataMapper; // +0x20 (idx=71)
    void* field_ableF10; // +0x28 (idx=72)
};

// SafeExamBrowser.Configuration.Cryptography.PasswordEncryption
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Cryptography_PasswordEncryption {
    void* field_configurationKey; // +0x0 (idx=73)
    void* field__data1; // +0x8 (idx=74)
    void* field_ableF10; // +0x10 (idx=75)
    void* field_request; // +0x18 (idx=76)
    void* field_mDataMapper; // +0x20 (idx=77)
    void* field__0_0; // +0x28 (idx=78)
    void* field___9__5_0; // +0x30 (idx=79)
    void* field_taMapper; // +0x38 (idx=80)
};

// SafeExamBrowser.Configuration.Cryptography.PublicKeyEncryption
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Cryptography_PublicKeyEncryption {
    void* field_wF10; // +0x0 (idx=81)
    void* field___9; // +0x8 (idx=82)
    void* field_ataMapper; // +0x10 (idx=83)
};

// SafeExamBrowser.Configuration.Cryptography.PublicKeySymmetricEncryption
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Cryptography_PublicKeySymmetricEncryption {
    void* field_wF10; // +0x0 (idx=84)
    void* field_Active; // +0x8 (idx=85)
    void* field__data2; // +0x10 (idx=86)
};

// SafeExamBrowser.Configuration.ConfigurationData.Keys
// Flags: 0x100180
struct /* class */ SafeExamBrowser_Configuration_ConfigurationData_Keys {
    void* field___32851_; // +0x0 (idx=87)
};

// SafeExamBrowser.Configuration.ConfigurationData.DataValues
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Configuration_ConfigurationData_DataValues {
    void* field_Arguments; // +0x0 (idx=88)
    void* field__data1; // +0x8 (idx=89)
};

// SafeExamBrowser.Configuration.ConfigurationData.DataMapper
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Configuration_ConfigurationData_DataMapper {
    void* field___32851_; // +0x0 (idx=90)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field__data0; // +0x0 (idx=104)
    void* field___32851_; // +0x8 (idx=105)
    void* field__data2; // +0x10 (idx=107)
    void* field___32851_; // +0x18 (idx=108)
    void* field_DeleteCacheOnShutdown; // +0x20 (idx=109)
    void* field__data5; // +0x28 (idx=110)
    void* field___32851_; // +0x30 (idx=111)
    void* field_DownloadPdfFiles; // +0x38 (idx=112)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field__data0; // +0x0 (idx=104)
    void* field___32851_; // +0x8 (idx=105)
    void* field__data2; // +0x10 (idx=107)
    void* field___32851_; // +0x18 (idx=108)
    void* field_DeleteCacheOnShutdown; // +0x20 (idx=109)
    void* field__data5; // +0x28 (idx=110)
    void* field___32851_; // +0x30 (idx=111)
    void* field_DownloadPdfFiles; // +0x38 (idx=112)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field__data0; // +0x0 (idx=104)
    void* field___32851_; // +0x8 (idx=105)
    void* field__data2; // +0x10 (idx=107)
    void* field___32851_; // +0x18 (idx=108)
    void* field_DeleteCacheOnShutdown; // +0x20 (idx=109)
    void* field__data5; // +0x28 (idx=110)
    void* field___32851_; // +0x30 (idx=111)
    void* field_DownloadPdfFiles; // +0x38 (idx=112)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field__data0; // +0x0 (idx=104)
    void* field___32851_; // +0x8 (idx=105)
    void* field__data2; // +0x10 (idx=107)
    void* field___32851_; // +0x18 (idx=108)
    void* field_DeleteCacheOnShutdown; // +0x20 (idx=109)
    void* field__data5; // +0x28 (idx=110)
    void* field___32851_; // +0x30 (idx=111)
    void* field_DownloadPdfFiles; // +0x38 (idx=112)
};

// Applications
// Flags: 0x100185
struct Applications {
    void* field__data0; // +0x0 (idx=113)
    void* field___32851_; // +0x8 (idx=114)
    void* field_HomeButtonRequiresPassword; // +0x10 (idx=115)
    void* field__data3; // +0x18 (idx=116)
    void* field___32851_; // +0x20 (idx=117)
    void* field_PopupBlockForeignHost; // +0x28 (idx=118)
    void* field__data6; // +0x30 (idx=119)
    void* field___32851_; // +0x38 (idx=120)
    void* field_SendCustomHeaders; // +0x40 (idx=121)
    void* field__data9; // +0x48 (idx=122)
    void* field___32851_; // +0x50 (idx=123)
    void* field_StartUrl; // +0x58 (idx=124)
    void* field__data12; // +0x60 (idx=125)
    void* field___32851_; // +0x68 (idx=126)
    void* field_UseStartUrlQuery; // +0x70 (idx=127)
    void* field__data15; // +0x78 (idx=128)
    void* field___32851_; // +0x80 (idx=129)
};

// Audio
// Flags: 0x100185
struct Audio {
    void* field_SessionMode; // +0x0 (idx=130)
    void* field__data1; // +0x8 (idx=131)
    void* field___32851_; // +0x10 (idx=132)
    void* field_lowBrowserToolbarForReloading; // +0x18 (idx=336)
};

// Browser
// Flags: 0x100185
struct Browser {
    void* field_InternalDisplayOnly; // +0x0 (idx=133)
    void* field__data1; // +0x8 (idx=134)
    void* field___32851_; // +0x10 (idx=135)
    void* field_EnableAltTab; // +0x18 (idx=136)
    void* field__data4; // +0x20 (idx=137)
    void* field___32851_; // +0x28 (idx=138)
    void* field_EnableF1; // +0x30 (idx=139)
    void* field__data7; // +0x38 (idx=140)
    void* field___32851_; // +0x40 (idx=141)
    void* field_EnableF5; // +0x48 (idx=142)
    void* field__data10; // +0x50 (idx=143)
    void* field___32851_; // +0x58 (idx=144)
    void* field_EnableF9; // +0x60 (idx=145)
    void* field__data13; // +0x68 (idx=146)
    void* field___32851_; // +0x70 (idx=147)
    void* field_EnablePrintScreen; // +0x78 (idx=148)
    void* field__data16; // +0x80 (idx=149)
    void* field___32851_; // +0x88 (idx=150)
    void* field_ShowTaskbarNotification; // +0x90 (idx=151)
    void* field__data19; // +0x98 (idx=152)
    void* field___32851_; // +0xA0 (idx=153)
    void* field_AllowStickyKeys; // +0xA8 (idx=154)
    void* field__data22; // +0xB0 (idx=155)
    void* field___32851_; // +0xB8 (idx=156)
    void* field_ClipboardPolicy; // +0xC0 (idx=157)
    void* field__data25; // +0xC8 (idx=158)
    void* field___32851_; // +0xD0 (idx=159)
    void* field_QuitPasswordHash; // +0xD8 (idx=160)
    void* field__data28; // +0xE0 (idx=161)
    void* field___32851_; // +0xE8 (idx=162)
    void* field_VersionRestrictions; // +0xF0 (idx=163)
    void* field__data31; // +0xF8 (idx=164)
    void* field___32851_; // +0x100 (idx=165)
    void* field_Configuration; // +0x108 (idx=166)
    void* field__data34; // +0x110 (idx=167)
    void* field___32851_; // +0x118 (idx=168)
    void* field_Institution; // +0x120 (idx=169)
    void* field__data37; // +0x128 (idx=170)
};

// ConfigurationFile
// Flags: 0x100185
struct ConfigurationFile {
    void* field___32851_; // +0x0 (idx=171)
    void* field_RequestAttemptInterval; // +0x8 (idx=172)
    void* field__data2; // +0x10 (idx=173)
};

// Display
// Flags: 0x100185
struct Display {
    void* field___32851_; // +0x0 (idx=174)
    void* field_EnableChromeNotifications; // +0x8 (idx=175)
    void* field__data2; // +0x10 (idx=176)
    void* field___32851_; // +0x18 (idx=177)
};

// General
// Flags: 0x100185
struct General {
    void* field_EnablePasswordChange; // +0x0 (idx=178)
    void* field__data1; // +0x8 (idx=179)
};

// Keyboard
// Flags: 0x100185
struct Keyboard {
    void* field___32851_; // +0x0 (idx=180)
    void* field_EnableTaskManager; // +0x8 (idx=181)
    void* field__data2; // +0x10 (idx=182)
    void* field___32851_; // +0x18 (idx=183)
    void* field_EnableWindowsUpdate; // +0x20 (idx=184)
    void* field__data5; // +0x28 (idx=185)
    void* field___32851_; // +0x30 (idx=186)
    void* field_AlwaysOn; // +0x38 (idx=187)
    void* field__data8; // +0x40 (idx=188)
    void* field_ableF10; // +0x48 (idx=189)
    void* field__data10; // +0x50 (idx=190)
    void* field_putDataMapper; // +0x58 (idx=191)
    void* field_MapEnableF10; // +0x60 (idx=192)
    void* field___1__state; // +0x68 (idx=193)
    void* field_yDataMapper; // +0x70 (idx=194)
    void* field_MapEnableF10; // +0x78 (idx=195)
    void* field_AllowAddressBar; // +0x80 (idx=196)
    void* field__data17; // +0x88 (idx=197)
    void* field___32851_; // +0x90 (idx=198)
};

// Mouse
// Flags: 0x100185
struct Mouse {
    void* field_UrlPolicy; // +0x0 (idx=199)
    void* field__data1; // +0x8 (idx=200)
};

// Network
// Flags: 0x100185
struct Network {
    void* field__unk0; // +0x0 (idx=339)
};

// Proctoring
// Flags: 0x100185
struct Proctoring {
    void* field___32851_; // +0x0 (idx=201)
};

// Security
// Flags: 0x100185
struct Security {
    void* field_EnableContentRequestFilter; // +0x0 (idx=202)
    void* field__data1; // +0x8 (idx=203)
    void* field___32851_; // +0x10 (idx=204)
    void* field_RuleIsActive; // +0x18 (idx=205)
    void* field__data4; // +0x20 (idx=206)
    void* field___32851_; // +0x28 (idx=207)
    void* field_AllowNavigation; // +0x30 (idx=208)
    void* field__data7; // +0x38 (idx=209)
    void* field___32851_; // +0x40 (idx=210)
    void* field_WindowHeight; // +0x48 (idx=211)
    void* field__data10; // +0x50 (idx=212)
    void* field___32851_; // +0x58 (idx=213)
    void* field_AutoConfigure; // +0x60 (idx=214)
    void* field__data13; // +0x68 (idx=215)
    void* field___32851_; // +0x70 (idx=216)
    void* field_Policy; // +0x78 (idx=217)
};

// Server
// Flags: 0x100185
struct Server {
    void* field__data0; // +0x0 (idx=218)
    void* field___32851_; // +0x8 (idx=219)
    void* field_EmbeddedCertificates; // +0x10 (idx=220)
    void* field__data3; // +0x18 (idx=221)
    void* field___32851_; // +0x20 (idx=222)
    void* field_Enabled; // +0x28 (idx=223)
    void* field__data6; // +0x30 (idx=224)
    void* field___32851_; // +0x38 (idx=225)
    void* field_ImageQuantization; // +0x40 (idx=226)
    void* field__data9; // +0x48 (idx=227)
    void* field___32851_; // +0x50 (idx=228)
    void* field_EnableActionCenter; // +0x58 (idx=229)
    void* field__data12; // +0x60 (idx=230)
    void* field___32851_; // +0x68 (idx=231)
    void* field_Enable; // +0x70 (idx=232)
};

// Service
// Flags: 0x100185
struct Service {
    void* field__data0; // +0x0 (idx=233)
    void* field___32851_; // +0x8 (idx=234)
    void* field_RequiresAuthentication; // +0x10 (idx=235)
    void* field__data3; // +0x18 (idx=236)
    void* field___32851_; // +0x20 (idx=237)
    void* field_Password; // +0x28 (idx=238)
    void* field__data6; // +0x30 (idx=239)
    void* field___32851_; // +0x38 (idx=240)
    void* field_Enable; // +0x40 (idx=241)
    void* field__data9; // +0x48 (idx=242)
    void* field___32851_; // +0x50 (idx=243)
    void* field_RequiresAuthentication; // +0x58 (idx=244)
    void* field__data12; // +0x60 (idx=245)
    void* field___32851_; // +0x68 (idx=246)
    void* field_Password; // +0x70 (idx=247)
    void* field__data15; // +0x78 (idx=248)
};

// System
// Flags: 0x100185
struct System {
    void* field___32851_; // +0x0 (idx=249)
};

// UserInterface
// Flags: 0x100185
struct UserInterface {
    void* field_CaptureApplicationData; // +0x0 (idx=250)
};

// <<Execute>b__0>d
// Flags: 0x100103
struct __Execute_b__0_d {
    void* field___32851_; // +0x0 (idx=252)
    void* field_Show; // +0x8 (idx=253)
    void* field__data2; // +0x10 (idx=254)
    void* field___32851_; // +0x18 (idx=255)
    void* field_ChargeThresholdLow; // +0x20 (idx=256)
};

// <<Extract>b__0>d
// Flags: 0x100103
struct __Extract_b__0_d {
    void* field__unk0; // +0x0 (idx=257)
    void* field_MapEnableF10; // +0x8 (idx=258)
    void* field_lowBrowserToolbarForReloading; // +0x10 (idx=259)
    void* field_ork; // +0x18 (idx=260)
};

// AdditionalWindow
// Flags: 0x100185
struct AdditionalWindow {
    void* field__ctor; // +0x0 (idx=261)
    void* field__unk1; // +0x8 (idx=262)
    void* field_taMapper; // +0x10 (idx=263)
    void* field__unk3; // +0x18 (idx=264)
    void* field_nableF10; // +0x20 (idx=265)
    void* field_ession_b__0; // +0x28 (idx=266)
    void* field__unk6; // +0x30 (idx=267)
    void* field_LoadDefaultSettings; // +0x38 (idx=268)
};

// Filter
// Flags: 0x100185
struct Filter {
    void* field__unk0; // +0x0 (idx=269)
    void* field_r; // +0x8 (idx=270)
    void* field__unk2; // +0x10 (idx=271)
    void* field_ableF10; // +0x18 (idx=272)
    void* field_ession_b__0; // +0x20 (idx=273)
    void* field_apServiceUrl; // +0x28 (idx=274)
    void* field_Register; // +0x30 (idx=275)
};

// MainWindow
// Flags: 0x100185
struct MainWindow {
    void* field__unk0; // +0x0 (idx=276)
    void* field_er; // +0x8 (idx=277)
    void* field__unk2; // +0x10 (idx=278)
    void* field__0; // +0x18 (idx=279)
    void* field_splayClass21_0; // +0x20 (idx=280)
    void* field_xamBrowser_Settings_System; // +0x28 (idx=281)
    void* field_TryParseData; // +0x30 (idx=282)
    void* field__unk7; // +0x38 (idx=283)
    void* field_TrySaveData_b__0; // +0x40 (idx=284)
};

// Proxy
// Flags: 0x100185
struct Proxy {
    void* field__unk0; // +0x0 (idx=285)
    void* field_F10; // +0x8 (idx=286)
    void* field_mscorlib; // +0x10 (idx=287)
    void* field__data3; // +0x18 (idx=288)
    void* field_get_CanSeek; // +0x20 (idx=289)
    void* field__unk5; // +0x28 (idx=290)
};

// Certificates
// Flags: 0x100185
struct Certificates {
    void* field___0; // +0x0 (idx=291)
    void* field__unk1; // +0x8 (idx=292)
    void* field__data2; // +0x10 (idx=293)
};

// ScreenProctoring
// Flags: 0x100185
struct ScreenProctoring {
    void* field_mscorlib; // +0x0 (idx=294)
    void* field_ProgramBuildVersion; // +0x8 (idx=295)
    void* field_set_Position; // +0x10 (idx=296)
    void* field__unk3; // +0x18 (idx=297)
    void* field_rowser; // +0x20 (idx=298)
    void* field__unk5; // +0x28 (idx=299)
    void* field__data6; // +0x30 (idx=300)
    void* field_yClass22_0; // +0x38 (idx=301)
    void* field_s_DataCompression; // +0x40 (idx=302)
    void* field_ReadByte; // +0x48 (idx=303)
    void* field__unk10; // +0x50 (idx=304)
};

// ActionCenter
// Flags: 0x100185
struct ActionCenter {
    void* field_ExtractAndImportIdentities_b__0; // +0x0 (idx=305)
};

// LockScreen
// Flags: 0x100185
struct LockScreen {
    void* field__unk0; // +0x0 (idx=306)
};

// Taskbar
// Flags: 0x100185
struct Taskbar {
    void* field_layClass20_0; // +0x0 (idx=307)
    void* field_yClass22_0; // +0x8 (idx=308)
};

// Ftp
// Flags: 0x100185
struct Ftp {
    void* field_istApplication; // +0x0 (idx=309)
    void* field__ctor; // +0x8 (idx=310)
    void* field__unk2; // +0x10 (idx=311)
    void* field__data3; // +0x18 (idx=312)
    void* field__unk4; // +0x20 (idx=313)
    void* field__20_0; // +0x28 (idx=314)
};

// Http
// Flags: 0x100185
struct Http {
    void* field_ession_b__0; // +0x0 (idx=315)
    void* field_ion; // +0x8 (idx=316)
    void* field_TryCalculateAppSignatureKey; // +0x10 (idx=317)
    void* field__unk3; // +0x18 (idx=318)
    void* field_llowAltEsc; // +0x20 (idx=319)
    void* field__unk5; // +0x28 (idx=320)
};

// Https
// Flags: 0x100185
struct Https {
    void* field__0_0; // +0x0 (idx=321)
    void* field_ession_b__0; // +0x8 (idx=322)
    void* field_ion; // +0x10 (idx=323)
    void* field_TryReadSessionCache; // +0x18 (idx=324)
    void* field__unk4; // +0x20 (idx=325)
    void* field_rameter; // +0x28 (idx=326)
};

// Socks
// Flags: 0x100185
struct Socks {
    void* field_isplayClass21_0; // +0x0 (idx=327)
    void* field_erialize_b__0_0; // +0x8 (idx=328)
    void* field_hresholdCritical; // +0x10 (idx=329)
    void* field__unk3; // +0x18 (idx=330)
    void* field_IsVirtualMachine; // +0x20 (idx=331)
    void* field__unk5; // +0x28 (idx=332)
};

// MetaData
// Flags: 0x100185
struct MetaData {
    void* field_iter; // +0x0 (idx=333)
    void* field__unk1; // +0x8 (idx=334)
    void* field__b__0_0; // +0x10 (idx=335)
};

// Audio
// Flags: 0x100185
struct Audio {
    void* field_SessionMode; // +0x0 (idx=130)
    void* field__data1; // +0x8 (idx=131)
    void* field___32851_; // +0x10 (idx=132)
    void* field_lowBrowserToolbarForReloading; // +0x18 (idx=336)
};

// Clock
// Flags: 0x100185
struct Clock {
    void* field_eyEncryption; // +0x0 (idx=337)
};

// KeyboardLayout
// Flags: 0x100185
struct KeyboardLayout {
    void* field_CanSave; // +0x0 (idx=338)
};

// Network
// Flags: 0x100185
struct Network {
    void* field__unk0; // +0x0 (idx=339)
};

// PowerSupply
// Flags: 0x100185
struct PowerSupply {
    void* field_TrySaveData_b__0; // +0x0 (idx=340)
    void* field__unk1; // +0x8 (idx=341)
};

// Method count by type:
//   SafeExamBrowser.Configuration.ConfigurationData.DataMapping.UserInterfaceDataMapper: 11 methods
//   <>c: 9 methods
//   <<Execute>b__0>d: 2 methods
//   <<Extract>b__0>d: 2 methods

} // namespace safeexambrowser_configuration

// ── SafeExamBrowser.Core.Contracts.dll ──
namespace safeexambrowser_core_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Core.Contracts.Resources.Icons.BitmapIconResource
// Flags: 0x100001
struct SafeExamBrowser_Core_Contracts_Resources_Icons_BitmapIconResource {
    void* field_Module_; // +0x0 (idx=2)
};

// SafeExamBrowser.Core.Contracts.Resources.Icons.EmbeddedIconResource
// Flags: 0x100001
struct SafeExamBrowser_Core_Contracts_Resources_Icons_EmbeddedIconResource {
    void* field_Nullable_1; // +0x0 (idx=3)
};

// SafeExamBrowser.Core.Contracts.Resources.Icons.NativeIconResource
// Flags: 0x100001
struct SafeExamBrowser_Core_Contracts_Resources_Icons_NativeIconResource {
    void* field__data0; // +0x0 (idx=4)
};

// SafeExamBrowser.Core.Contracts.Resources.Icons.XamlIconResource
// Flags: 0x100001
struct SafeExamBrowser_Core_Contracts_Resources_Icons_XamlIconResource {
    void* field__1; // +0x0 (idx=5)
};

// SafeExamBrowser.Core.Contracts.OperationModel.OperationResult
// Flags: 0x0101
struct SafeExamBrowser_Core_Contracts_OperationModel_OperationResult {
    void* field___32854_; // +0x0 (idx=6)
    void* field_Success; // +0x8 (idx=7)
    void* field_e__; // +0x10 (idx=8)
    void* field_Nullable_1; // +0x18 (idx=9)
};

// SafeExamBrowser.Core.Contracts.OperationModel.Events.ProgressChangedEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Core_Contracts_OperationModel_Events_ProgressChangedEventArgs {
    void* field__data0; // +0x0 (idx=10)
    void* field_orlib; // +0x8 (idx=11)
    void* field___6278_; // +0x10 (idx=12)
    void* field___8272_; // +0x18 (idx=13)
    void* field__ctor; // +0x20 (idx=14)
};

// Method count by type:
//   SafeExamBrowser.Core.Contracts.OperationModel.Events.ProgressChangedEventArgs: 9 methods
//   SafeExamBrowser.Core.Contracts.Resources.Icons.BitmapIconResource: 3 methods
//   SafeExamBrowser.Core.Contracts.Resources.Icons.EmbeddedIconResource: 3 methods
//   SafeExamBrowser.Core.Contracts.Resources.Icons.NativeIconResource: 3 methods
//   SafeExamBrowser.Core.Contracts.Notifications.Events.NotificationChangedEventHandler: 2 methods
//   SafeExamBrowser.Core.Contracts.ResponsibilityModel.IResponsibility`1: 1 methods
//   SafeExamBrowser.Core.Contracts.ResponsibilityModel.IResponsibilityCollection`1: 1 methods
//   SafeExamBrowser.Core.Contracts.Resources.Icons.IconResource: 1 methods
//   SafeExamBrowser.Core.Contracts.Resources.Icons.XamlIconResource: 1 methods
//   SafeExamBrowser.Core.Contracts.OperationModel.IRepeatableOperation: 1 methods
//   SafeExamBrowser.Core.Contracts.OperationModel.IRepeatableOperationSequence: 1 methods

} // namespace safeexambrowser_core_contracts

// ── SafeExamBrowser.Core.dll ──
namespace safeexambrowser_core {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Core.ResponsibilityModel.ResponsibilityCollection`1
// Flags: 0x100001
struct SafeExamBrowser_Core_ResponsibilityModel_ResponsibilityCollection_1 {
    void* field_sChanged_b__0; // +0x0 (idx=2)
    void* field_yClass8_0; // +0x8 (idx=3)
};

// SafeExamBrowser.Core.Operations.CommunicationHostOperation
// Flags: 0x100001
struct SafeExamBrowser_Core_Operations_CommunicationHostOperation {
    void* field_logger; // +0x0 (idx=4)
    void* field_ompareExchange; // +0x8 (idx=5)
    void* field__data2; // +0x10 (idx=6)
};

// SafeExamBrowser.Core.Operations.LazyInitializationOperation
// Flags: 0x100001
struct SafeExamBrowser_Core_Operations_LazyInitializationOperation {
    void* field_StatusChangedImpl; // +0x0 (idx=7)
    void* field_sChanged_b__0; // +0x8 (idx=8)
    void* field_yClass8_0; // +0x10 (idx=9)
};

// SafeExamBrowser.Core.Operations.I18nOperation
// Flags: 0x100001
struct SafeExamBrowser_Core_Operations_I18nOperation {
    void* field_repeat; // +0x0 (idx=10)
    void* field_e; // +0x8 (idx=11)
};

// SafeExamBrowser.Core.Operations.DelegateOperation
// Flags: 0x100001
struct SafeExamBrowser_Core_Operations_DelegateOperation {
    void* field__data0; // +0x0 (idx=12)
    void* field_stack; // +0x8 (idx=13)
    void* field_peatableOperationSequence; // +0x10 (idx=14)
};

// SafeExamBrowser.Core.OperationModel.OperationSequence`1
// Flags: 0x100001
struct SafeExamBrowser_Core_OperationModel_OperationSequence_1 {
    void* field_DisplayClass7_0; // +0x0 (idx=15)
    void* field__unk1; // +0x8 (idx=16)
    void* field__data2; // +0x10 (idx=17)
    void* field__unk3; // +0x18 (idx=18)
};

// Method count by type:
//   SafeExamBrowser.Core.OperationModel.OperationSequence`1: 11 methods
//   SafeExamBrowser.Core.Operations.LazyInitializationOperation: 7 methods
//   SafeExamBrowser.Core.Operations.CommunicationHostOperation: 6 methods
//   SafeExamBrowser.Core.Operations.DelegateOperation: 6 methods
//   SafeExamBrowser.Core.Operations.I18nOperation: 5 methods
//   SafeExamBrowser.Core.OperationModel.RepeatableOperationSequence`1: 3 methods
//   SafeExamBrowser.Core.ResponsibilityModel.ResponsibilityCollection`1: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Core.OperationModel.QueueExtensions: 1 methods

} // namespace safeexambrowser_core

// ── SafeExamBrowser.exe ──
namespace safeexambrowser {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Runtime.App
// Flags: 0x100001
struct SafeExamBrowser_Runtime_App {
    void* field_sage; // +0x0 (idx=2)
    void* field___32849_; // +0x8 (idx=3)
};

// SafeExamBrowser.Runtime.CompositionRoot
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_CompositionRoot {
    void* field_THIRTY_SECONDS; // +0x0 (idx=4)
    void* field_onfigurationMessage; // +0x8 (idx=5)
    void* field__data2; // +0x10 (idx=6)
    void* field_systemInfo; // +0x18 (idx=7)
    void* field_age; // +0x20 (idx=8)
    void* field_yClass5_0; // +0x28 (idx=9)
    void* field_bootstrapSequence; // +0x30 (idx=10)
    void* field_ownErrorMessage; // +0x38 (idx=11)
};

// SafeExamBrowser.Runtime.RuntimeController
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_RuntimeController {
    void* field_yClass5_0; // +0x0 (idx=12)
    void* field_splashScreen; // +0x8 (idx=13)
    void* field_rtupErrorMessage; // +0x10 (idx=14)
    void* field__data3; // +0x18 (idx=15)
    void* field__data4; // +0x20 (idx=16)
    void* field_Result_1; // +0x28 (idx=17)
};

// SafeExamBrowser.Runtime.RuntimeContext
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_RuntimeContext {
    void* field__data0; // +0x0 (idx=18)
    void* field_messageBox; // +0x8 (idx=19)
    void* field_ge; // +0x10 (idx=20)
    void* field_yClass5_0; // +0x18 (idx=21)
    void* field_shutdown; // +0x20 (idx=22)
    void* field_onfigurationMessage; // +0x28 (idx=23)
    void* field_yClass5_0; // +0x30 (idx=24)
};

// SafeExamBrowser.Runtime.Responsibilities.ClientResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Responsibilities_ClientResponsibility {
    void* field_text; // +0x0 (idx=25)
    void* field_essage; // +0x8 (idx=26)
    void* field_rations_StatusChanged; // +0x10 (idx=27)
};

// SafeExamBrowser.Runtime.Responsibilities.CommunicationResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Responsibilities_CommunicationResponsibility {
    void* field_DeregisterEvents; // +0x0 (idx=28)
    void* field_age; // +0x8 (idx=29)
};

// SafeExamBrowser.Runtime.Responsibilities.ErrorMessageResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Responsibilities_ErrorMessageResponsibility {
    void* field___32854_; // +0x0 (idx=30)
    void* field_ShowShutdownError; // +0x8 (idx=31)
    void* field_age; // +0x10 (idx=32)
    void* field___32854_; // +0x18 (idx=33)
};

// SafeExamBrowser.Runtime.Responsibilities.RuntimeResponsibility
// Flags: 0x100080
struct /* class */ SafeExamBrowser_Runtime_Responsibilities_RuntimeResponsibility {
    void* field_messageBox; // +0x0 (idx=34)
    void* field_ge; // +0x8 (idx=35)
};

// SafeExamBrowser.Runtime.Responsibilities.RuntimeTask
// Flags: 0x0100
struct /* class */ SafeExamBrowser_Runtime_Responsibilities_RuntimeTask {
    void* field_yClass5_0; // +0x0 (idx=36)
    void* field_appConfig; // +0x8 (idx=37)
    void* field_e; // +0x10 (idx=38)
    void* field_yClass5_0; // +0x18 (idx=39)
    void* field_shutdown; // +0x20 (idx=40)
    void* field_age; // +0x28 (idx=41)
    void* field_s4_0; // +0x30 (idx=42)
    void* field_defaultInstance; // +0x38 (idx=43)
    void* field_yMessage; // +0x40 (idx=44)
};

// SafeExamBrowser.Runtime.Responsibilities.ServiceResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Responsibilities_ServiceResponsibility {
    void* field_yClass5_0; // +0x0 (idx=45)
    void* field_timeout_ms; // +0x8 (idx=46)
    void* field_erverFailureActionReplyMessage; // +0x10 (idx=47)
    void* field_ass5_0; // +0x18 (idx=48)
};

// SafeExamBrowser.Runtime.Responsibilities.SessionResponsibility
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Responsibilities_SessionResponsibility {
    void* field_commandLineArgs; // +0x0 (idx=49)
    void* field_tionReplyMessage; // +0x8 (idx=50)
    void* field__data2; // +0x10 (idx=51)
    void* field_StatusChanged; // +0x18 (idx=52)
    void* field_essage; // +0x20 (idx=53)
    void* field_yClass5_0; // +0x28 (idx=54)
};

// SafeExamBrowser.Runtime.Properties.Resources
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Properties_Resources {
    void* field_desktopMonitor; // +0x0 (idx=55)
    void* field_ctionReplyMessage; // +0x8 (idx=56)
};

// SafeExamBrowser.Runtime.Properties.Settings
// Flags: 0x100100
struct /* class */ SafeExamBrowser_Runtime_Properties_Settings {
    void* field__data0; // +0x0 (idx=57)
};

// SafeExamBrowser.Runtime.Operations.Session.ClientOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_ClientOperation {
    void* field_customDesktop; // +0x0 (idx=58)
    void* field_ge; // +0x8 (idx=59)
    void* field_yClass5_0; // +0x10 (idx=60)
    void* field_StatusChanged; // +0x18 (idx=61)
    void* field_ge; // +0x20 (idx=62)
};

// SafeExamBrowser.Runtime.Operations.Session.ConfigurationBaseOperation
// Flags: 0x100080
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_ConfigurationBaseOperation {
    void* field_yClass5_0; // +0x0 (idx=63)
    void* field_StatusChanged; // +0x8 (idx=64)
};

// SafeExamBrowser.Runtime.Operations.Session.ConfigurationOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_ConfigurationOperation {
    void* field_rMessage; // +0x0 (idx=65)
    void* field_yClass5_0; // +0x8 (idx=66)
    void* field_userInfo; // +0x10 (idx=67)
    void* field_Result_1; // +0x18 (idx=68)
};

// SafeExamBrowser.Runtime.Operations.Session.DisclaimerOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_DisclaimerOperation {
    void* field__data0; // +0x0 (idx=69)
};

// SafeExamBrowser.Runtime.Operations.Session.DisplayMonitorOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_DisplayMonitorOperation {
    void* field_sentinel; // +0x0 (idx=70)
    void* field_erverFailureActionReplyMessage; // +0x8 (idx=71)
};

// SafeExamBrowser.Runtime.Operations.Session.KioskModeOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_KioskModeOperation {
    void* field_yClass5_0; // +0x0 (idx=72)
    void* field__data1; // +0x8 (idx=73)
    void* field_essage; // +0x10 (idx=74)
    void* field_yClass5_0; // +0x18 (idx=75)
    void* field_messageBox; // +0x20 (idx=76)
    void* field_et_ClientBridge; // +0x28 (idx=77)
    void* field_yClass5_0; // +0x30 (idx=78)
    void* field__data7; // +0x38 (idx=79)
};

// SafeExamBrowser.Runtime.Operations.Session.RemoteSessionOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_RemoteSessionOperation {
    void* field_age; // +0x0 (idx=80)
    void* field_yClass5_0; // +0x8 (idx=81)
};

// SafeExamBrowser.Runtime.Operations.Session.SessionOperationSequence
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_SessionOperationSequence {
    void* field_StatusChanged; // +0x0 (idx=82)
};

// SafeExamBrowser.Runtime.Operations.Session.ServerOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_ServerOperation {
    void* field_erverFailureActionReplyMessage; // +0x0 (idx=83)
    void* field__data1; // +0x8 (idx=84)
    void* field_splashScreen; // +0x10 (idx=85)
};

// SafeExamBrowser.Runtime.Operations.Session.ServiceOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_ServiceOperation {
    void* field_ridge; // +0x0 (idx=86)
    void* field__data1; // +0x8 (idx=87)
    void* field_runtimeHost; // +0x10 (idx=88)
    void* field_essage; // +0x18 (idx=89)
    void* field__data4; // +0x20 (idx=90)
    void* field_ClientDisconnected; // +0x28 (idx=91)
    void* field_ientBridge; // +0x30 (idx=92)
};

// SafeExamBrowser.Runtime.Operations.Session.SessionIntegrityOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_SessionIntegrityOperation {
    void* field__data0; // +0x0 (idx=93)
    void* field_MessageBoxReplyReceived; // +0x8 (idx=94)
};

// SafeExamBrowser.Runtime.Operations.Session.Dependencies
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_Dependencies {
    void* field_numerable; // +0x0 (idx=95)
    void* field__data1; // +0x8 (idx=96)
    void* field_ShutdownRequested; // +0x10 (idx=97)
    void* field_ypeHandle; // +0x18 (idx=98)
    void* field_DisplayClass4_0; // +0x20 (idx=99)
    void* field_terminatedEvent; // +0x28 (idx=100)
};

// SafeExamBrowser.Runtime.Operations.Session.SessionOperation
// Flags: 0x100080
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_SessionOperation {
    void* field_eeded; // +0x0 (idx=101)
    void* field___32854_; // +0x8 (idx=102)
    void* field_CommandLine; // +0x10 (idx=103)
    void* field_ndle; // +0x18 (idx=104)
    void* field___32854_; // +0x20 (idx=105)
    void* field_exam; // +0x28 (idx=106)
};

// SafeExamBrowser.Runtime.Operations.Session.SessionInitializationOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_SessionInitializationOperation {
    void* field_peFromHandle; // +0x0 (idx=107)
    void* field__data1; // +0x8 (idx=108)
    void* field_requestId; // +0x10 (idx=109)
};

// SafeExamBrowser.Runtime.Operations.Session.VersionRestrictionOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_VersionRestrictionOperation {
    void* field_IsFile; // +0x0 (idx=110)
};

// SafeExamBrowser.Runtime.Operations.Session.VirtualMachineOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Session_VirtualMachineOperation {
    void* field_DisplayClass4_0; // +0x0 (idx=111)
    void* field_response; // +0x8 (idx=112)
};

// SafeExamBrowser.Runtime.Operations.Bootstrap.BootstrapOperationSequence
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Bootstrap_BootstrapOperationSequence {
    void* field_ypeHandle; // +0x0 (idx=113)
};

// SafeExamBrowser.Runtime.Operations.Bootstrap.ApplicationIntegrityOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Operations_Bootstrap_ApplicationIntegrityOperation {
    void* field_DisplayClass4_0; // +0x0 (idx=114)
    void* field_responseEvent; // +0x8 (idx=115)
    void* field__unk2; // +0x10 (idx=116)
};

// SafeExamBrowser.Runtime.Communication.ClientBridge
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Communication_ClientBridge {
    void* field_DisplayClass4_0; // +0x0 (idx=117)
    void* field__unk1; // +0x8 (idx=118)
};

// SafeExamBrowser.Runtime.Communication.RuntimeHost
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Runtime_Communication_RuntimeHost {
    void* field_DisplayClass4_0; // +0x0 (idx=119)
    void* field__unk1; // +0x8 (idx=120)
    void* field__data2; // +0x10 (idx=121)
    void* field_dateRestrictions_b__9_0; // +0x18 (idx=122)
    void* field_RemoteSessionOperation; // +0x20 (idx=123)
    void* field_StartApplication; // +0x28 (idx=124)
    void* field__unk6; // +0x30 (idx=125)
    void* field_title; // +0x38 (idx=126)
    void* field__unk8; // +0x40 (idx=127)
    void* field__data9; // +0x48 (idx=128)
    void* field_isplayClass19_0; // +0x50 (idx=129)
};

// UriSource
// Flags: 0x0104
struct /* class */ UriSource {
    void* field__unk0; // +0x0 (idx=134)
    void* field__data1; // +0x8 (idx=135)
    void* field_th; // +0x10 (idx=136)
    void* field_rityOperation; // +0x18 (idx=137)
    void* field_get_RuntimeController; // +0x20 (idx=138)
    void* field__unk5; // +0x28 (idx=139)
    void* field_tegrityModule; // +0x30 (idx=140)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_isplayClass19_0; // +0x0 (idx=143)
    void* field_layConfiguration; // +0x8 (idx=144)
};

// Method count by type:
//   SafeExamBrowser.Runtime.Communication.RuntimeHost: 25 methods
//   SafeExamBrowser.Runtime.Operations.Session.ConfigurationOperation: 22 methods
//   SafeExamBrowser.Runtime.Operations.Session.ServerOperation: 15 methods
//   SafeExamBrowser.Runtime.Operations.Session.ClientOperation: 14 methods
//   SafeExamBrowser.Runtime.Operations.Session.VersionRestrictionOperation: 13 methods
//   SafeExamBrowser.Runtime.CompositionRoot: 12 methods
//   SafeExamBrowser.Runtime.Operations.Session.ServiceOperation: 12 methods
//   SafeExamBrowser.Runtime.Operations.Session.SessionOperation: 12 methods
//   SafeExamBrowser.Runtime.RuntimeContext: 11 methods
//   SafeExamBrowser.Runtime.Operations.Session.SessionIntegrityOperation: 11 methods
//   SafeExamBrowser.Runtime.Operations.Session.KioskModeOperation: 10 methods
//   SafeExamBrowser.Runtime.App: 9 methods
//   SafeExamBrowser.Runtime.Responsibilities.RuntimeResponsibility: 9 methods
//   SafeExamBrowser.Runtime.Responsibilities.SessionResponsibility: 8 methods
//   SafeExamBrowser.Runtime.Operations.Session.DisplayMonitorOperation: 8 methods
//   SafeExamBrowser.Runtime.Operations.Session.SessionActivationOperation: 8 methods
//   SafeExamBrowser.Runtime.Operations.Session.SessionInitializationOperation: 8 methods
//   SafeExamBrowser.Runtime.Responsibilities.CommunicationResponsibility: 7 methods
//   SafeExamBrowser.Runtime.Operations.Session.DisclaimerOperation: 7 methods
//   SafeExamBrowser.Runtime.Operations.Session.Dependencies: 7 methods
//   SafeExamBrowser.Runtime.Operations.Session.VirtualMachineOperation: 7 methods
//   SafeExamBrowser.Runtime.Responsibilities.ClientResponsibility: 6 methods
//   SafeExamBrowser.Runtime.Communication.ClientBridge: 6 methods
//   SafeExamBrowser.Runtime.Responsibilities.ServiceResponsibility: 5 methods
//   SafeExamBrowser.Runtime.Operations.Session.ConfigurationBaseOperation: 5 methods
//   SafeExamBrowser.Runtime.RuntimeController: 4 methods
//   SafeExamBrowser.Runtime.Responsibilities.ErrorMessageResponsibility: 4 methods
//   SafeExamBrowser.Runtime.Properties.Resources: 4 methods
//   SafeExamBrowser.Runtime.Operations.Session.ClientTerminationOperation: 4 methods
//   SafeExamBrowser.Runtime.Operations.Session.RemoteSessionOperation: 4 methods
//   SafeExamBrowser.Runtime.Operations.Bootstrap.ApplicationIntegrityOperation: 4 methods
//   SafeExamBrowser.Runtime.Properties.Settings: 3 methods
//   SafeExamBrowser.Runtime.Operations.Session.SessionOperationSequence: 3 methods
//   SafeExamBrowser.Runtime.Operations.Bootstrap.BootstrapOperationSequence: 3 methods
//   <>c: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods

} // namespace safeexambrowser

// ── SafeExamBrowser.I18n.Contracts.dll ──
namespace safeexambrowser_i18n_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.I18n.Contracts.TextKey
// Flags: 0x0101
struct SafeExamBrowser_I18n_Contracts_TextKey {
    void* field_oskMode; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_Browser_BlockedContentMessage; // +0x10 (idx=4)
    void* field_Mode; // +0x18 (idx=5)
    void* field___32854_; // +0x20 (idx=6)
    void* field_Browser_LoadErrorMessage; // +0x28 (idx=7)
    void* field_Mode; // +0x30 (idx=8)
    void* field___32854_; // +0x38 (idx=9)
    void* field_Browser_Tooltip; // +0x40 (idx=10)
    void* field_Mode; // +0x48 (idx=11)
    void* field___32854_; // +0x50 (idx=12)
    void* field_BrowserWindow_Downloading; // +0x58 (idx=13)
    void* field_Mode; // +0x60 (idx=14)
    void* field___32854_; // +0x68 (idx=15)
    void* field_BrowserWindow_FindCaseSensitive; // +0x70 (idx=16)
    void* field_Mode; // +0x78 (idx=17)
    void* field___32854_; // +0x80 (idx=18)
    void* field_BrowserWindow_MenuButton; // +0x88 (idx=19)
    void* field_Mode; // +0x90 (idx=20)
    void* field___32854_; // +0x98 (idx=21)
    void* field_BrowserWindow_SearchTextBox; // +0xA0 (idx=22)
    void* field_Mode; // +0xA8 (idx=23)
    void* field___32854_; // +0xB0 (idx=24)
    void* field_BrowserWindow_ZoomMenuMinus; // +0xB8 (idx=25)
    void* field_Mode; // +0xC0 (idx=26)
    void* field___32854_; // +0xC8 (idx=27)
    void* field_CredentialsDialog_UsernameLabel; // +0xD0 (idx=28)
    void* field_Mode; // +0xD8 (idx=29)
    void* field___32854_; // +0xE0 (idx=30)
    void* field_ExamSelectionDialog_Cancel; // +0xE8 (idx=31)
    void* field_Mode; // +0xF0 (idx=32)
    void* field___32854_; // +0xF8 (idx=33)
    void* field_FileSystemDialog_Cancel; // +0x100 (idx=34)
    void* field_Mode; // +0x108 (idx=35)
    void* field___32854_; // +0x110 (idx=36)
    void* field_FileSystemDialog_OpenFolderMessage; // +0x118 (idx=37)
    void* field_Mode; // +0x120 (idx=38)
    void* field___32854_; // +0x128 (idx=39)
    void* field_FileSystemDialog_SaveFileMessage; // +0x130 (idx=40)
    void* field_Mode; // +0x138 (idx=41)
    void* field___32854_; // +0x140 (idx=42)
    void* field_FolderDialog_ApplicationLocation; // +0x148 (idx=43)
    void* field_Mode; // +0x150 (idx=44)
    void* field___32854_; // +0x158 (idx=45)
    void* field_LockScreen_ApplicationsTerminateOption; // +0x160 (idx=46)
    void* field_Mode; // +0x168 (idx=47)
    void* field___32854_; // +0x170 (idx=48)
    void* field_LockScreen_DisplayConfigurationContinueOption; // +0x178 (idx=49)
    void* field_Mode; // +0x180 (idx=50)
    void* field___32854_; // +0x188 (idx=51)
    void* field_LockScreen_EaseOfAccessMessage; // +0x190 (idx=52)
    void* field_Mode; // +0x198 (idx=53)
    void* field___32854_; // +0x1A0 (idx=54)
    void* field_LockScreen_StickyKeysContinueOption; // +0x1A8 (idx=55)
    void* field_Mode; // +0x1B0 (idx=56)
    void* field___32854_; // +0x1B8 (idx=57)
    void* field_LockScreen_UserSessionContinueOption; // +0x1C0 (idx=58)
    void* field_Mode; // +0x1C8 (idx=59)
    void* field___32854_; // +0x1D0 (idx=60)
    void* field_LogWindow_AlwaysOnTop; // +0x1D8 (idx=61)
    void* field_Mode; // +0x1E0 (idx=62)
    void* field___32854_; // +0x1E8 (idx=63)
    void* field_MessageBox_ApplicationAutoTerminationQuestion; // +0x1F0 (idx=64)
    void* field_Mode; // +0x1F8 (idx=65)
    void* field___32854_; // +0x200 (idx=66)
    void* field_MessageBox_ApplicationInitializationFailure; // +0x208 (idx=67)
    void* field_Mode; // +0x210 (idx=68)
    void* field___32854_; // +0x218 (idx=69)
    void* field_MessageBox_ApplicationTerminationFailure; // +0x220 (idx=70)
    void* field_Mode; // +0x228 (idx=71)
    void* field___32854_; // +0x230 (idx=72)
    void* field_MessageBox_BrowserNavigationBlocked; // +0x238 (idx=73)
    void* field_Mode; // +0x240 (idx=74)
    void* field___32854_; // +0x248 (idx=75)
    void* field_MessageBox_CancelButton; // +0x250 (idx=76)
    void* field_Mode; // +0x258 (idx=77)
    void* field___32854_; // +0x260 (idx=78)
    void* field_MessageBox_ClientConfigurationQuestionTitle; // +0x268 (idx=79)
    void* field_Mode; // +0x270 (idx=80)
    void* field___32854_; // +0x278 (idx=81)
    void* field_MessageBox_DisplayConfigurationErrorTitle; // +0x280 (idx=82)
    void* field_Mode; // +0x288 (idx=83)
    void* field___32854_; // +0x290 (idx=84)
    void* field_MessageBox_DownloadNotAllowedTitle; // +0x298 (idx=85)
    void* field_Mode; // +0x2A0 (idx=86)
    void* field___32854_; // +0x2A8 (idx=87)
    void* field_MessageBox_InvalidHomePasswordTitle; // +0x2B0 (idx=88)
    void* field_Mode; // +0x2B8 (idx=89)
    void* field___32854_; // +0x2C0 (idx=90)
    void* field_MessageBox_InvalidQuitPasswordTitle; // +0x2C8 (idx=91)
    void* field_Mode; // +0x2D0 (idx=92)
    void* field___32854_; // +0x2D8 (idx=93)
    void* field_MessageBox_NotSupportedConfigurationResource; // +0x2E0 (idx=94)
    void* field_Mode; // +0x2E8 (idx=95)
    void* field___32854_; // +0x2F0 (idx=96)
    void* field_MessageBox_PageLeaveConfirmationTitle; // +0x2F8 (idx=97)
    void* field_Mode; // +0x300 (idx=98)
    void* field___32854_; // +0x308 (idx=99)
    void* field_MessageBox_QuitTitle; // +0x310 (idx=100)
    void* field_Mode; // +0x318 (idx=101)
    void* field___32854_; // +0x320 (idx=102)
    void* field_MessageBox_ReconfigurationDeniedTitle; // +0x328 (idx=103)
    void* field_Mode; // +0x330 (idx=104)
    void* field___32854_; // +0x338 (idx=105)
    void* field_MessageBox_RemoteSessionNotAllowedTitle; // +0x340 (idx=106)
    void* field_Mode; // +0x348 (idx=107)
    void* field___32854_; // +0x350 (idx=108)
    void* field_MessageBox_ServiceUnavailableErrorTitle; // +0x358 (idx=109)
    void* field_Mode; // +0x360 (idx=110)
    void* field___32854_; // +0x368 (idx=111)
    void* field_MessageBox_SessionStartErrorTitle; // +0x370 (idx=112)
    void* field_Mode; // +0x378 (idx=113)
    void* field___32854_; // +0x380 (idx=114)
    void* field_MessageBox_StartupErrorTitle; // +0x388 (idx=115)
    void* field_Mode; // +0x390 (idx=116)
    void* field___32854_; // +0x398 (idx=117)
    void* field_MessageBox_UploadNotAllowedTitle; // +0x3A0 (idx=118)
    void* field_Mode; // +0x3A8 (idx=119)
    void* field___32854_; // +0x3B0 (idx=120)
    void* field_MessageBox_VideoProctoringDisclaimer; // +0x3B8 (idx=121)
    void* field_Mode; // +0x3C0 (idx=122)
    void* field___32854_; // +0x3C8 (idx=123)
    void* field_MessageBox_YesButton; // +0x3D0 (idx=124)
    void* field_Mode; // +0x3D8 (idx=125)
    void* field___32854_; // +0x3E0 (idx=126)
    void* field_Notification_LogTooltip; // +0x3E8 (idx=127)
    void* field_Mode; // +0x3F0 (idx=128)
    void* field___32854_; // +0x3F8 (idx=129)
    void* field_Notification_ProctoringInactiveTooltip; // +0x400 (idx=130)
    void* field_Mode; // +0x408 (idx=131)
    void* field___32854_; // +0x410 (idx=132)
    void* field_OperationStatus_FinalizeApplications; // +0x418 (idx=133)
    void* field_Mode; // +0x420 (idx=134)
    void* field___32854_; // +0x428 (idx=135)
    void* field_OperationStatus_FinalizeSystemEvents; // +0x430 (idx=136)
    void* field_Mode; // +0x438 (idx=137)
    void* field___32854_; // +0x440 (idx=138)
    void* field_OperationStatus_InitializeConfiguration; // +0x448 (idx=139)
    void* field_Mode; // +0x450 (idx=140)
    void* field___32854_; // +0x458 (idx=141)
    void* field_OperationStatus_InitializeRuntimeConnection; // +0x460 (idx=142)
    void* field_Mode; // +0x468 (idx=143)
    void* field___32854_; // +0x470 (idx=144)
    void* field_OperationStatus_InitializeShell; // +0x478 (idx=145)
    void* field_Mode; // +0x480 (idx=146)
    void* field___32854_; // +0x488 (idx=147)
    void* field_OperationStatus_RestartCommunicationHost; // +0x490 (idx=148)
    void* field_Mode; // +0x498 (idx=149)
    void* field___32854_; // +0x4A0 (idx=150)
    void* field_OperationStatus_StartCommunicationHost; // +0x4A8 (idx=151)
    void* field_Mode; // +0x4B0 (idx=152)
    void* field___32854_; // +0x4B8 (idx=153)
    void* field_OperationStatus_StopCommunicationHost; // +0x4C0 (idx=154)
    void* field_Mode; // +0x4C8 (idx=155)
    void* field___32854_; // +0x4D0 (idx=156)
    void* field_OperationStatus_TerminateProctoring; // +0x4D8 (idx=157)
    void* field_Mode; // +0x4E0 (idx=158)
    void* field___32854_; // +0x4E8 (idx=159)
    void* field_OperationStatus_ValidateVersionRestrictions; // +0x4F0 (idx=160)
    void* field_Mode; // +0x4F8 (idx=161)
    void* field___32854_; // +0x500 (idx=162)
    void* field_OperationStatus_WaitDisclaimerConfirmation; // +0x508 (idx=163)
    void* field_Mode; // +0x510 (idx=164)
    void* field___32854_; // +0x518 (idx=165)
    void* field_OperationStatus_WaitRuntimeDisconnection; // +0x520 (idx=166)
    void* field_Mode; // +0x528 (idx=167)
    void* field___32854_; // +0x530 (idx=168)
    void* field_PasswordDialog_Confirm; // +0x538 (idx=169)
    void* field_Mode; // +0x540 (idx=170)
    void* field___32854_; // +0x548 (idx=171)
    void* field_PasswordDialog_LocalSettingsPasswordRequiredTitle; // +0x550 (idx=172)
    void* field_Mode; // +0x558 (idx=173)
    void* field___32854_; // +0x560 (idx=174)
    void* field_PasswordDialog_SettingsPasswordRequiredTitle; // +0x568 (idx=175)
    void* field_Mode; // +0x570 (idx=176)
    void* field___32854_; // +0x578 (idx=177)
    void* field_ProctoringFinalizationDialog_InfoMessage; // +0x580 (idx=178)
    void* field_Mode; // +0x588 (idx=179)
    void* field___32854_; // +0x590 (idx=180)
    void* field_ProctoringFinalizationDialog_StatusWaiting; // +0x598 (idx=181)
    void* field_Mode; // +0x5A0 (idx=182)
    void* field___32854_; // +0x5A8 (idx=183)
    void* field_ServerFailureDialog_Abort; // +0x5B0 (idx=184)
    void* field_Mode; // +0x5B8 (idx=185)
    void* field___32854_; // +0x5C0 (idx=186)
    void* field_ServerFailureDialog_Title; // +0x5C8 (idx=187)
    void* field_Mode; // +0x5D0 (idx=188)
    void* field___32854_; // +0x5D8 (idx=189)
    void* field_SystemControl_AudioDeviceMuteTooltip; // +0x5E0 (idx=190)
    void* field_Mode; // +0x5E8 (idx=191)
    void* field___32854_; // +0x5F0 (idx=192)
    void* field_SystemControl_BatteryCharging; // +0x5F8 (idx=193)
    void* field_Mode; // +0x600 (idx=194)
    void* field___32854_; // +0x608 (idx=195)
    void* field_SystemControl_KeyboardLayoutTooltip; // +0x610 (idx=196)
    void* field_Mode; // +0x618 (idx=197)
    void* field___32854_; // +0x620 (idx=198)
    void* field_SystemControl_NetworkWirelessConnected; // +0x628 (idx=199)
    void* field_Mode; // +0x630 (idx=200)
    void* field_Box_ConfigurationDownloadError; // +0x638 (idx=201)
    void* field__ctor; // +0x640 (idx=202)
    void* field__unk201; // +0x648 (idx=203)
    void* field_IDictionary_2; // +0x650 (idx=204)
    void* field__unk203; // +0x658 (idx=205)
    void* field_IDictionary_2; // +0x660 (idx=206)
    void* field_wser_BlockedPageMessage; // +0x668 (idx=207)
    void* field__unk206; // +0x670 (idx=208)
    void* field_LoadText; // +0x678 (idx=209)
    void* field_IDictionary_2; // +0x680 (idx=210)
    void* field_IDictionary_2; // +0x688 (idx=211)
    void* field_alue__; // +0x690 (idx=212)
    void* field__ctor; // +0x698 (idx=213)
    void* field_Module_; // +0x6A0 (idx=214)
    void* field_a; // +0x6A8 (idx=215)
    void* field__ctor; // +0x6B0 (idx=216)
    void* field_e_; // +0x6B8 (idx=217)
    void* field_ingArea; // +0x6C0 (idx=218)
    void* field__ctor; // +0x6C8 (idx=219)
    void* field_Module_; // +0x6D0 (idx=220)
    void* field_rlib; // +0x6D8 (idx=221)
    void* field__ctor; // +0x6E0 (idx=222)
    void* field_Status_RestoreWorkingArea; // +0x6E8 (idx=223)
    void* field_nary_2; // +0x6F0 (idx=224)
    void* field_value__; // +0x6F8 (idx=225)
    void* field_gArea; // +0x700 (idx=226)
    void* field_nary_2; // +0x708 (idx=227)
    void* field_nStatus_RestoreWorkingArea; // +0x710 (idx=228)
    void* field_s_InitializeWorkingArea; // +0x718 (idx=229)
    void* field_nary_2; // +0x720 (idx=230)
    void* field_orkingArea; // +0x728 (idx=231)
    void* field_rea; // +0x730 (idx=232)
    void* field_nary_2; // +0x738 (idx=233)
    void* field_tionStatus_InitializeWorkingArea; // +0x740 (idx=234)
    void* field_idConfigurationData; // +0x748 (idx=235)
    void* field_nary_2; // +0x750 (idx=236)
    void* field_alizeWorkingArea; // +0x758 (idx=237)
    void* field_mscorlib; // +0x760 (idx=238)
    void* field_nary_2; // +0x768 (idx=239)
    void* field__unk238; // +0x770 (idx=240)
    void* field_ections_Generic; // +0x778 (idx=241)
    void* field_nary_2; // +0x780 (idx=242)
    void* field_lidConfigurationData; // +0x788 (idx=243)
    void* field_emControl_BatteryCharged; // +0x790 (idx=244)
    void* field_nary_2; // +0x798 (idx=245)
    void* field_Data; // +0x7A0 (idx=246)
    void* field_rged; // +0x7A8 (idx=247)
    void* field_nary_2; // +0x7B0 (idx=248)
    void* field_stem_Collections_Generic; // +0x7B8 (idx=249)
    void* field_nfigurationDenied; // +0x7C0 (idx=250)
    void* field_nary_2; // +0x7C8 (idx=251)
    void* field__Generic; // +0x7D0 (idx=252)
    void* field_ssageBox_BrowserNavigationBlocked; // +0x7D8 (idx=253)
    void* field_nary_2; // +0x7E0 (idx=254)
    void* field_ontrol_BatteryCharged; // +0x7E8 (idx=255)
    void* field_gationBlocked; // +0x7F0 (idx=256)
    void* field_nary_2; // +0x7F8 (idx=257)
    void* field_arged; // +0x800 (idx=258)
    void* field_rWindow_DownloadCancelled; // +0x808 (idx=259)
    void* field_nary_2; // +0x810 (idx=260)
    void* field__data259; // +0x818 (idx=261)
    void* field_elled; // +0x820 (idx=262)
    void* field_nary_2; // +0x828 (idx=263)
    void* field_Denied; // +0x830 (idx=264)
    void* field_roctoringHandLowered; // +0x838 (idx=265)
    void* field_nary_2; // +0x840 (idx=266)
    void* field_x_BrowserNavigationBlocked; // +0x848 (idx=267)
};

// Method count by type:
//   SafeExamBrowser.I18n.Contracts.IText: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.I18n.Contracts.ITextResource: 1 methods

} // namespace safeexambrowser_i18n_contracts

// ── SafeExamBrowser.I18n.dll ──
namespace safeexambrowser_i18n {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.I18n.Text
// Flags: 0x100001
struct SafeExamBrowser_I18n_Text {
    void* field_Parse; // +0x0 (idx=2)
    void* field_IEnumerable_1; // +0x8 (idx=3)
};

// SafeExamBrowser.I18n.XmlTextResource
// Flags: 0x100001
struct SafeExamBrowser_I18n_XmlTextResource {
    void* field__unk0; // +0x0 (idx=4)
};

// Method count by type:
//   SafeExamBrowser.I18n.XmlTextResource: 1 methods

} // namespace safeexambrowser_i18n

// ── SafeExamBrowser.Logging.Contracts.dll ──
namespace safeexambrowser_logging_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

} // namespace safeexambrowser_logging_contracts

// ── SafeExamBrowser.Logging.dll ──
namespace safeexambrowser_logging {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Logging.LogFileWriter
// Flags: 0x100001
struct SafeExamBrowser_Logging_LogFileWriter {
    void* field_ace; // +0x0 (idx=2)
    void* field_rable_1; // +0x8 (idx=3)
    void* field_lock; // +0x10 (idx=4)
};

// SafeExamBrowser.Logging.Logger
// Flags: 0x100001
struct SafeExamBrowser_Logging_Logger {
    void* field__data0; // +0x0 (idx=5)
    void* field___9__13_0; // +0x8 (idx=6)
    void* field__data2; // +0x10 (idx=7)
    void* field_Message; // +0x18 (idx=8)
};

// SafeExamBrowser.Logging.LogMessage
// Flags: 0x100001
struct SafeExamBrowser_Logging_LogMessage {
    void* field___9__13_0; // +0x0 (idx=9)
    void* field__data1; // +0x8 (idx=10)
    void* field_essage; // +0x10 (idx=11)
    void* field___9__13_0; // +0x18 (idx=12)
};

// SafeExamBrowser.Logging.LogText
// Flags: 0x100001
struct SafeExamBrowser_Logging_LogText {
    void* field__data0; // +0x0 (idx=13)
};

// SafeExamBrowser.Logging.ModuleLogger
// Flags: 0x100001
struct SafeExamBrowser_Logging_ModuleLogger {
    void* field_ge; // +0x0 (idx=14)
    void* field___8264_; // +0x8 (idx=15)
};

// SafeExamBrowser.Logging.ThreadInfo
// Flags: 0x100001
struct SafeExamBrowser_Logging_ThreadInfo {
    void* field__ctor; // +0x0 (idx=16)
    void* field__unk1; // +0x8 (idx=17)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field___9__13_0; // +0x0 (idx=18)
    void* field__unk1; // +0x8 (idx=19)
};

// Method count by type:
//   <>c: 2 methods

} // namespace safeexambrowser_logging

// ── SafeExamBrowser.Monitoring.Contracts.dll ──
namespace safeexambrowser_monitoring_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Monitoring.Contracts.System.Events.SentinelEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_Contracts_System_Events_SentinelEventArgs {
    void* field_ystem_Collections_Generic; // +0x0 (idx=2)
};

// SafeExamBrowser.Monitoring.Contracts.Display.ValidationResult
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_Contracts_Display_ValidationResult {
    void* field_IEnumerable_1; // +0x0 (idx=3)
    void* field__data1; // +0x8 (idx=4)
    void* field_em_Collections_Generic; // +0x10 (idx=5)
};

// SafeExamBrowser.Monitoring.Contracts.Applications.ActiveApplication
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_Contracts_Applications_ActiveApplication {
    void* field_Win32; // +0x0 (idx=6)
    void* field__data1; // +0x8 (idx=7)
};

// SafeExamBrowser.Monitoring.Contracts.Applications.RunningApplication
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_Contracts_Applications_RunningApplication {
    void* field_ric; // +0x0 (idx=8)
    void* field___8264_; // +0x8 (idx=9)
};

// SafeExamBrowser.Monitoring.Contracts.Applications.InitializationResult
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_Contracts_Applications_InitializationResult {
    void* field__ctor; // +0x0 (idx=10)
    void* field__unk1; // +0x8 (idx=11)
};

// Method count by type:
//   SafeExamBrowser.Monitoring.Contracts.Applications.Events.ExplorerStartedEventHandler: 2 methods

} // namespace safeexambrowser_monitoring_contracts

// ── SafeExamBrowser.Monitoring.dll ──
namespace safeexambrowser_monitoring {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Monitoring.Clipboard
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_Clipboard {
    void* field_e_SessionEnded; // +0x0 (idx=2)
    void* field___10_0; // +0x8 (idx=3)
    void* field_policy; // +0x10 (idx=4)
    void* field_e_SessionEnded; // +0x18 (idx=5)
};

// SafeExamBrowser.Monitoring.RemoteSessionDetector
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_RemoteSessionDetector {
    void* field___32849_; // +0x0 (idx=6)
};

// SafeExamBrowser.Monitoring.VirtualMachineDetector
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_VirtualMachineDetector {
    void* field_VIRTUALBOX_MAC_PREFIX; // +0x0 (idx=7)
    void* field_ystemEvents_SessionEnded; // +0x8 (idx=8)
    void* field_layClass10_0; // +0x10 (idx=9)
    void* field_integrityModule; // +0x18 (idx=10)
    void* field_e_SessionEnded; // +0x20 (idx=11)
    void* field___10_0; // +0x28 (idx=12)
    void* field_cursors; // +0x30 (idx=13)
    void* field_nded; // +0x38 (idx=14)
    void* field___10_0; // +0x40 (idx=15)
    void* field_CursorChanged; // +0x48 (idx=16)
};

// SafeExamBrowser.Monitoring.System.SystemSentinel
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_System_SystemSentinel {
    void* field_nged; // +0x0 (idx=17)
    void* field_get_AllowF10; // +0x8 (idx=18)
    void* field_SYSTEM_PATH; // +0x10 (idx=19)
    void* field_ce_b__0; // +0x18 (idx=20)
    void* field___10_0; // +0x20 (idx=21)
    void* field_CursorChanged; // +0x28 (idx=22)
    void* field_e_SessionEnded; // +0x30 (idx=23)
    void* field_get_AllowF10; // +0x38 (idx=24)
};

// SafeExamBrowser.Monitoring.System.Components.Cursors
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Monitoring_System_Components_Cursors {
    void* field_logger; // +0x0 (idx=25)
    void* field_ssionEnded; // +0x8 (idx=26)
    void* field_get_AllowF10; // +0x10 (idx=27)
    void* field_Changed; // +0x18 (idx=28)
    void* field_e_SessionEnded; // +0x20 (idx=29)
};

// SafeExamBrowser.Monitoring.System.Components.EaseOfAccess
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Monitoring_System_Components_EaseOfAccess {
    void* field_get_AllowF10; // +0x0 (idx=30)
    void* field_logger; // +0x8 (idx=31)
    void* field_ssionEnded; // +0x10 (idx=32)
};

// SafeExamBrowser.Monitoring.System.Components.StickyKeys
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Monitoring_System_Components_StickyKeys {
    void* field_get_AllowF10; // +0x0 (idx=33)
    void* field_logger; // +0x8 (idx=34)
    void* field_ssionEnded; // +0x10 (idx=35)
    void* field_get_AllowF10; // +0x18 (idx=36)
    void* field__data4; // +0x20 (idx=37)
};

// SafeExamBrowser.Monitoring.System.Components.SystemEvents
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Monitoring_System_Components_SystemEvents {
    void* field_Area; // +0x0 (idx=38)
    void* field_get_AllowF10; // +0x8 (idx=39)
};

// SafeExamBrowser.Monitoring.Mouse.MouseInterceptor
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_Mouse_MouseInterceptor {
    void* field__data0; // +0x0 (idx=40)
    void* field_Changed; // +0x8 (idx=41)
    void* field___10_0; // +0x10 (idx=42)
    void* field_nativeMethods; // +0x18 (idx=43)
};

// SafeExamBrowser.Monitoring.Keyboard.KeyboardInterceptor
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_Keyboard_KeyboardInterceptor {
    void* field_SessionEnded; // +0x0 (idx=44)
    void* field_get_AllowF10; // +0x8 (idx=45)
    void* field_value__; // +0x10 (idx=46)
    void* field_Changed; // +0x18 (idx=47)
};

// SafeExamBrowser.Monitoring.Display.Bounds
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Monitoring_Display_Bounds {
    void* field___32854_; // +0x0 (idx=48)
    void* field_SVideo; // +0x8 (idx=49)
    void* field_Changed; // +0x10 (idx=50)
    void* field___32854_; // +0x18 (idx=51)
};

// SafeExamBrowser.Monitoring.Display.Display
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Monitoring_Display_Display {
    void* field_HDMI; // +0x0 (idx=52)
    void* field_Changed; // +0x8 (idx=53)
    void* field___32854_; // +0x10 (idx=54)
};

// SafeExamBrowser.Monitoring.Display.DisplayMonitor
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_Display_DisplayMonitor {
    void* field_DisplayPortExternal; // +0x0 (idx=55)
    void* field_Changed; // +0x8 (idx=56)
    void* field___32854_; // +0x10 (idx=57)
    void* field_SDTVDongle; // +0x18 (idx=58)
    void* field_Changed; // +0x20 (idx=59)
    void* field___32854_; // +0x28 (idx=60)
};

// SafeExamBrowser.Monitoring.Display.VideoOutputTechnology
// Flags: 0x0100
struct /* class */ SafeExamBrowser_Monitoring_Display_VideoOutputTechnology {
    void* field_SVideo4Pin; // +0x0 (idx=61)
    void* field_Changed; // +0x8 (idx=62)
    void* field___32854_; // +0x10 (idx=63)
    void* field_BNC; // +0x18 (idx=64)
    void* field__2; // +0x20 (idx=65)
    void* field___10_0; // +0x28 (idx=66)
    void* field_logger; // +0x30 (idx=67)
    void* field_ssionEnded; // +0x38 (idx=68)
    void* field___10_0; // +0x40 (idx=69)
    void* field_whitelist; // +0x48 (idx=70)
    void* field_nged; // +0x50 (idx=71)
    void* field_get_AllowF10; // +0x58 (idx=72)
    void* field_activeWindow; // +0x60 (idx=73)
    void* field_eferenceChanged; // +0x68 (idx=74)
    void* field_get_AllowF10; // +0x70 (idx=75)
    void* field_device; // +0x78 (idx=76)
    void* field__unk16; // +0x80 (idx=77)
    void* field_llowF10; // +0x88 (idx=78)
    void* field_args; // +0x90 (idx=79)
    void* field_ce_b__0; // +0x98 (idx=80)
    void* field_llowF10; // +0xA0 (idx=81)
    void* field_args; // +0xA8 (idx=82)
    void* field_ce_b__0; // +0xB0 (idx=83)
    void* field_llowF10; // +0xB8 (idx=84)
    void* field_args; // +0xC0 (idx=85)
};

// SafeExamBrowser.Monitoring.Applications.Window
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Monitoring_Applications_Window {
    void* field__Changed; // +0x0 (idx=86)
    void* field_llowF10; // +0x8 (idx=87)
};

// SafeExamBrowser.Monitoring.Applications.ApplicationMonitor
// Flags: 0x100001
struct SafeExamBrowser_Monitoring_Applications_ApplicationMonitor {
    void* field___9; // +0x0 (idx=88)
    void* field_erModeChanged; // +0x8 (idx=89)
    void* field__0; // +0x10 (idx=90)
    void* field___9__13_3; // +0x18 (idx=91)
    void* field_ce_b__0; // +0x20 (idx=92)
    void* field__0; // +0x28 (idx=93)
    void* field___9__37_0; // +0x30 (idx=94)
    void* field_Changed; // +0x38 (idx=95)
    void* field_llowF10; // +0x40 (idx=96)
    void* field___4__this; // +0x48 (idx=97)
    void* field_mEvents_UserPreferenceChanged; // +0x50 (idx=98)
    void* field_llowF10; // +0x58 (idx=99)
    void* field___4__this; // +0x60 (idx=100)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_llowF10; // +0x0 (idx=102)
    void* field_name; // +0x8 (idx=103)
    void* field_readShutdown; // +0x10 (idx=117)
    void* field_SafeExamBrowser_SystemComponents_Contracts; // +0x18 (idx=118)
    void* field_IsRemoteSession; // +0x20 (idx=119)
    void* field__unk5; // +0x28 (idx=120)
    void* field_ts_TimeChanged; // +0x30 (idx=121)
    void* field__0; // +0x38 (idx=123)
    void* field__0; // +0x40 (idx=124)
    void* field_kyKeys; // +0x48 (idx=125)
    void* field_HasVirtualDevice; // +0x50 (idx=126)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_llowF10; // +0x0 (idx=102)
    void* field_name; // +0x8 (idx=103)
    void* field_readShutdown; // +0x10 (idx=117)
    void* field_SafeExamBrowser_SystemComponents_Contracts; // +0x18 (idx=118)
    void* field_IsRemoteSession; // +0x20 (idx=119)
    void* field__unk5; // +0x28 (idx=120)
    void* field_ts_TimeChanged; // +0x30 (idx=121)
    void* field__0; // +0x38 (idx=123)
    void* field__0; // +0x40 (idx=124)
    void* field_kyKeys; // +0x48 (idx=125)
    void* field_HasVirtualDevice; // +0x50 (idx=126)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_llowF10; // +0x0 (idx=102)
    void* field_name; // +0x8 (idx=103)
    void* field_readShutdown; // +0x10 (idx=117)
    void* field_SafeExamBrowser_SystemComponents_Contracts; // +0x18 (idx=118)
    void* field_IsRemoteSession; // +0x20 (idx=119)
    void* field__unk5; // +0x28 (idx=120)
    void* field_ts_TimeChanged; // +0x30 (idx=121)
    void* field__0; // +0x38 (idx=123)
    void* field__0; // +0x40 (idx=124)
    void* field_kyKeys; // +0x48 (idx=125)
    void* field_HasVirtualDevice; // +0x50 (idx=126)
};

// Method count by type:
//   SafeExamBrowser.Monitoring.Applications.ApplicationMonitor: 33 methods
//   SafeExamBrowser.Monitoring.System.SystemSentinel: 23 methods
//   SafeExamBrowser.Monitoring.Display.DisplayMonitor: 17 methods
//   <>c: 14 methods
//   SafeExamBrowser.Monitoring.System.Components.SystemEvents: 13 methods
//   SafeExamBrowser.Monitoring.System.Components.Cursors: 11 methods
//   SafeExamBrowser.Monitoring.System.Components.StickyKeys: 11 methods
//   SafeExamBrowser.Monitoring.VirtualMachineDetector: 10 methods
//   SafeExamBrowser.Monitoring.Display.Bounds: 9 methods
//   SafeExamBrowser.Monitoring.System.Components.EaseOfAccess: 8 methods
//   SafeExamBrowser.Monitoring.Display.Display: 8 methods
//   SafeExamBrowser.Monitoring.Applications.Window: 6 methods
//   SafeExamBrowser.Monitoring.Keyboard.KeyboardInterceptor: 5 methods
//   SafeExamBrowser.Monitoring.Clipboard: 4 methods
//   SafeExamBrowser.Monitoring.Mouse.MouseInterceptor: 4 methods
//   SafeExamBrowser.Monitoring.RemoteSessionDetector: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods

} // namespace safeexambrowser_monitoring

// ── SafeExamBrowser.Proctoring.Contracts.dll ──
namespace safeexambrowser_proctoring_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Proctoring.Contracts.Events.RemainingWorkUpdatedEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Proctoring_Contracts_Events_RemainingWorkUpdatedEventArgs {
    void* field_System_Collections_Generic; // +0x0 (idx=2)
    void* field_Nullable_1; // +0x8 (idx=3)
    void* field__data2; // +0x10 (idx=4)
    void* field_System_Collections_Generic; // +0x18 (idx=5)
    void* field_Nullable_1; // +0x20 (idx=6)
    void* field__data5; // +0x28 (idx=7)
    void* field__data6; // +0x30 (idx=8)
    void* field___8264_; // +0x38 (idx=9)
    void* field__ctor; // +0x40 (idx=10)
    void* field__unk9; // +0x48 (idx=11)
};

// Method count by type:
//   SafeExamBrowser.Proctoring.Contracts.Events.RemainingWorkUpdatedEventHandler: 2 methods

} // namespace safeexambrowser_proctoring_contracts

// ── SafeExamBrowser.Proctoring.dll ──
namespace safeexambrowser_proctoring {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Proctoring.ProctoringController
// Flags: 0x100001
struct SafeExamBrowser_Proctoring_ProctoringController {
    void* field_set_CaptureTime; // +0x0 (idx=2)
    void* field_playClass3_0; // +0x8 (idx=3)
    void* field_implementations; // +0x10 (idx=4)
    void* field_ureTime; // +0x18 (idx=5)
};

// SafeExamBrowser.Proctoring.ProctoringFactory
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ProctoringFactory {
    void* field_playClass3_0; // +0x0 (idx=6)
    void* field_fileSystem; // +0x8 (idx=7)
    void* field_CaptureTime; // +0x10 (idx=8)
    void* field_playClass3_0; // +0x18 (idx=9)
    void* field_uiFactory; // +0x20 (idx=10)
    void* field_sume; // +0x28 (idx=11)
    void* field___9__13_0; // +0x30 (idx=12)
    void* field_RemainingWorkUpdated; // +0x38 (idx=13)
};

// SafeExamBrowser.Proctoring.ProctoringImplementation
// Flags: 0x100080
struct /* class */ SafeExamBrowser_Proctoring_ProctoringImplementation {
    void* field__unk0; // +0x0 (idx=14)
    void* field_playClass3_0; // +0x8 (idx=15)
    void* field_logger; // +0x10 (idx=16)
    void* field_yer2x2; // +0x18 (idx=17)
    void* field_playClass3_0; // +0x20 (idx=18)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Buffer
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Buffer {
    void* field_directory; // +0x0 (idx=19)
    void* field_hine; // +0x8 (idx=20)
    void* field_playClass3_0; // +0x10 (idx=21)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Cache
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Cache {
    void* field_queue; // +0x0 (idx=22)
    void* field_ype; // +0x8 (idx=23)
    void* field___32849_; // +0x10 (idx=24)
    void* field_encryptionSecret; // +0x18 (idx=25)
    void* field_etType; // +0x20 (idx=26)
    void* field_playClass3_0; // +0x28 (idx=27)
    void* field_settings; // +0x30 (idx=28)
    void* field_et_ContentType; // +0x38 (idx=29)
    void* field_playClass3_0; // +0x40 (idx=30)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Encryptor
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Encryptor {
    void* field_applicationMonitor; // +0x0 (idx=31)
    void* field_DateTime; // +0x8 (idx=32)
    void* field_playClass3_0; // +0x10 (idx=33)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.ScreenProctoringImplementation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_ScreenProctoringImplementation {
    void* field_settings; // +0x0 (idx=34)
    void* field_ontentType; // +0x8 (idx=35)
    void* field___9__13_0; // +0x10 (idx=36)
    void* field_mouseHookId; // +0x18 (idx=37)
    void* field_pe; // +0x20 (idx=38)
    void* field___32849_; // +0x28 (idx=39)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.DataCollector
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_DataCollector {
    void* field_buffer; // +0x0 (idx=40)
    void* field_e; // +0x8 (idx=41)
    void* field_playClass3_0; // +0x10 (idx=42)
    void* field_random; // +0x18 (idx=43)
    void* field_pe; // +0x20 (idx=44)
    void* field___9__13_0; // +0x28 (idx=45)
    void* field_networkIssue; // +0x30 (idx=46)
    void* field_sume; // +0x38 (idx=47)
    void* field___9__13_0; // +0x40 (idx=48)
    void* field_token; // +0x48 (idx=49)
    void* field_yer2x2; // +0x50 (idx=50)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.TransmissionSpooler
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_TransmissionSpooler {
    void* field___9__13_0; // +0x0 (idx=51)
    void* field__data1; // +0x8 (idx=52)
    void* field_yer2x2; // +0x10 (idx=53)
    void* field_playClass3_0; // +0x18 (idx=54)
    void* field_logger; // +0x20 (idx=55)
    void* field__unk5; // +0x28 (idx=56)
    void* field___9__13_0; // +0x30 (idx=57)
    void* field__data7; // +0x38 (idx=58)
    void* field_yer2x2; // +0x40 (idx=59)
    void* field_playClass3_0; // +0x48 (idx=60)
    void* field_JSON; // +0x50 (idx=61)
    void* field_yer2x2; // +0x58 (idx=62)
    void* field___32851_; // +0x60 (idx=63)
    void* field_AUTHORIZATION; // +0x68 (idx=64)
    void* field_yer2x2; // +0x70 (idx=65)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Service.Api
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Service_Api {
    void* field___32851_; // +0x0 (idx=66)
    void* field_METADATA; // +0x8 (idx=67)
    void* field_yer2x2; // +0x10 (idx=68)
    void* field___32849_; // +0x18 (idx=69)
    void* field_oauth2Token; // +0x20 (idx=70)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Service.Parser
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Service_Parser {
    void* field_nature; // +0x0 (idx=71)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Service.ServiceProxy
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Service_ServiceProxy {
    void* field_yClass3_0; // +0x0 (idx=72)
    void* field_logger; // +0x8 (idx=73)
    void* field__unk2; // +0x10 (idx=74)
    void* field_b__13_0; // +0x18 (idx=75)
    void* field_value__; // +0x20 (idx=76)
    void* field_e; // +0x28 (idx=77)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Service.ServiceResponse
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Service_ServiceResponse {
    void* field___9__13_0; // +0x0 (idx=78)
    void* field__data1; // +0x8 (idx=79)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Service.ServiceResponse`1
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Service_ServiceResponse_1 {
    void* field_e; // +0x0 (idx=80)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Service.Requests.ContentType
// Flags: 0x100180
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Service_Requests_ContentType {
    void* field___9__13_0; // +0x0 (idx=81)
    void* field_logger; // +0x8 (idx=82)
    void* field__unk2; // +0x10 (idx=83)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Service.Requests.Header
// Flags: 0x100180
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Service_Requests_Header {
    void* field___9__13_0; // +0x0 (idx=84)
    void* field_data; // +0x8 (idx=85)
    void* field_e; // +0x10 (idx=86)
    void* field___9__13_0; // +0x18 (idx=87)
    void* field__data4; // +0x20 (idx=88)
    void* field_ase; // +0x28 (idx=89)
    void* field___9__13_0; // +0x30 (idx=90)
    void* field__data7; // +0x38 (idx=91)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Service.Requests.Request
// Flags: 0x100080
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Service_Requests_Request {
    void* field_yer2x2; // +0x0 (idx=92)
    void* field___9__13_0; // +0x8 (idx=93)
    void* field__data2; // +0x10 (idx=94)
    void* field_yer2x2; // +0x18 (idx=95)
    void* field___9__13_0; // +0x20 (idx=96)
    void* field__data5; // +0x28 (idx=97)
    void* field_ime; // +0x30 (idx=98)
    void* field_playClass3_0; // +0x38 (idx=99)
    void* field_settings; // +0x40 (idx=100)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Imaging.ProcessingOrder
// Flags: 0x0100
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Imaging_ProcessingOrder {
    void* field_yer2x2; // +0x0 (idx=101)
    void* field___9__13_0; // +0x8 (idx=102)
    void* field_triggerInfo; // +0x10 (idx=103)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Imaging.ScreenShot
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Imaging_ScreenShot {
    void* field_yer2x2; // +0x0 (idx=104)
    void* field___9__13_0; // +0x8 (idx=105)
    void* field_value; // +0x10 (idx=106)
    void* field_bine; // +0x18 (idx=107)
    void* field__0; // +0x20 (idx=108)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Imaging.ScreenShotProcessor
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Imaging_ScreenShotProcessor {
    void* field___9; // +0x0 (idx=109)
    void* field_arse; // +0x8 (idx=110)
    void* field__13_0; // +0x10 (idx=111)
    void* field_interval; // +0x18 (idx=112)
    void* field_e; // +0x20 (idx=113)
    void* field__13_0; // +0x28 (idx=114)
    void* field_content; // +0x30 (idx=115)
    void* field_yer2x2; // +0x38 (idx=116)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Data.IntervalTrigger
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Data_IntervalTrigger {
    void* field___32851_; // +0x0 (idx=117)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Data.KeyboardTrigger
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Data_KeyboardTrigger {
    void* field_TriggerInfo; // +0x0 (idx=118)
    void* field_yer2x2; // +0x8 (idx=119)
    void* field__0; // +0x10 (idx=120)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Data.MetaData
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Data_MetaData {
    void* field___9__13_1; // +0x0 (idx=121)
    void* field_legate; // +0x8 (idx=122)
    void* field__0; // +0x10 (idx=123)
    void* field___9; // +0x18 (idx=124)
    void* field__data4; // +0x20 (idx=125)
    void* field__13_0; // +0x28 (idx=126)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Data.MouseTrigger
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Data_MouseTrigger {
    void* field___1__state; // +0x0 (idx=127)
    void* field_Notifications_INotification_Terminate; // +0x8 (idx=128)
    void* field___9__13_0; // +0x10 (idx=129)
};

// SafeExamBrowser.Proctoring.ScreenProctoring.Data.MetaDataAggregator
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Proctoring_ScreenProctoring_Data_MetaDataAggregator {
    void* field__unk0; // +0x0 (idx=130)
    void* field___9__13_0; // +0x8 (idx=131)
    void* field__unk2; // +0x10 (idx=132)
    void* field___9__13_0; // +0x18 (idx=133)
    void* field_ationValue_k__BackingField; // +0x20 (idx=134)
    void* field_ntHandler; // +0x28 (idx=135)
    void* field_add_RemainingWorkUpdated; // +0x30 (idx=136)
    void* field__unk7; // +0x38 (idx=137)
    void* field_ate; // +0x40 (idx=138)
    void* field__unk9; // +0x48 (idx=139)
    void* field__9__13_0; // +0x50 (idx=140)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_HasRemainingWork; // +0x0 (idx=143)
    void* field__unk1; // +0x8 (idx=144)
    void* field_uttonState; // +0x10 (idx=145)
    void* field__unk3; // +0x18 (idx=146)
    void* field__3_0; // +0x20 (idx=159)
    void* field__unk5; // +0x28 (idx=160)
    void* field_c__DisplayClass3_0; // +0x30 (idx=161)
    void* field_onReceived; // +0x38 (idx=162)
    void* field_ingWorkUpdatedEventArgs; // +0x40 (idx=163)
    void* field_get_IconResource; // +0x48 (idx=164)
    void* field__unk10; // +0x50 (idx=165)
    void* field__data11; // +0x58 (idx=166)
    void* field__unk12; // +0x60 (idx=167)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_HasRemainingWork; // +0x0 (idx=143)
    void* field__unk1; // +0x8 (idx=144)
    void* field_uttonState; // +0x10 (idx=145)
    void* field__unk3; // +0x18 (idx=146)
    void* field__3_0; // +0x20 (idx=159)
    void* field__unk5; // +0x28 (idx=160)
    void* field_c__DisplayClass3_0; // +0x30 (idx=161)
    void* field_onReceived; // +0x38 (idx=162)
    void* field_ingWorkUpdatedEventArgs; // +0x40 (idx=163)
    void* field_get_IconResource; // +0x48 (idx=164)
    void* field__unk10; // +0x50 (idx=165)
    void* field__data11; // +0x58 (idx=166)
    void* field__unk12; // +0x60 (idx=167)
};

// Metadata
// Flags: 0x100185
struct Metadata {
    void* field__data0; // +0x0 (idx=154)
    void* field_ntType; // +0x8 (idx=155)
    void* field_s; // +0x10 (idx=156)
    void* field_get_CanActivate; // +0x18 (idx=157)
    void* field__unk4; // +0x20 (idx=158)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_HasRemainingWork; // +0x0 (idx=143)
    void* field__unk1; // +0x8 (idx=144)
    void* field_uttonState; // +0x10 (idx=145)
    void* field__unk3; // +0x18 (idx=146)
    void* field__3_0; // +0x20 (idx=159)
    void* field__unk5; // +0x28 (idx=160)
    void* field_c__DisplayClass3_0; // +0x30 (idx=161)
    void* field_onReceived; // +0x38 (idx=162)
    void* field_ingWorkUpdatedEventArgs; // +0x40 (idx=163)
    void* field_get_IconResource; // +0x48 (idx=164)
    void* field__unk10; // +0x50 (idx=165)
    void* field__data11; // +0x58 (idx=166)
    void* field__unk12; // +0x60 (idx=167)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_HasRemainingWork; // +0x0 (idx=143)
    void* field__unk1; // +0x8 (idx=144)
    void* field_uttonState; // +0x10 (idx=145)
    void* field__unk3; // +0x18 (idx=146)
    void* field__3_0; // +0x20 (idx=159)
    void* field__unk5; // +0x28 (idx=160)
    void* field_c__DisplayClass3_0; // +0x30 (idx=161)
    void* field_onReceived; // +0x38 (idx=162)
    void* field_ingWorkUpdatedEventArgs; // +0x40 (idx=163)
    void* field_get_IconResource; // +0x48 (idx=164)
    void* field__unk10; // +0x50 (idx=165)
    void* field__data11; // +0x58 (idx=166)
    void* field__unk12; // +0x60 (idx=167)
};

// <<Extract>b__0>d
// Flags: 0x100103
struct __Extract_b__0_d {
    void* field_ionReceived; // +0x0 (idx=169)
    void* field_BrowserUrls; // +0x8 (idx=170)
    void* field_add_NotificationChanged; // +0x10 (idx=171)
    void* field__unk3; // +0x18 (idx=172)
};

// Method count by type:
//   <>c: 10 methods
//   <<Extract>b__0>d: 1 methods

} // namespace safeexambrowser_proctoring

// ── SafeExamBrowser.Server.Contracts.dll ──
namespace safeexambrowser_server_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Server.Contracts.Events.Proctoring.InstructionMethod
// Flags: 0x0101
struct SafeExamBrowser_Server_Contracts_Events_Proctoring_InstructionMethod {
    void* field_wser_Server_Contracts_Data; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field__data2; // +0x10 (idx=4)
};

// SafeExamBrowser.Server.Contracts.Events.Proctoring.JitsiMeetInstruction
// Flags: 0x100001
struct SafeExamBrowser_Server_Contracts_Events_Proctoring_JitsiMeetInstruction {
    void* field_rver_Contracts_Data; // +0x0 (idx=5)
    void* field_IEnumerable_1; // +0x8 (idx=6)
    void* field__data2; // +0x10 (idx=7)
};

// SafeExamBrowser.Server.Contracts.Events.Proctoring.InstructionEventArgs
// Flags: 0x100081
struct SafeExamBrowser_Server_Contracts_Events_Proctoring_InstructionEventArgs {
    void* field_rver_Contracts_Data; // +0x0 (idx=8)
};

// SafeExamBrowser.Server.Contracts.Events.Proctoring.ScreenProctoringInstruction
// Flags: 0x100001
struct SafeExamBrowser_Server_Contracts_Events_Proctoring_ScreenProctoringInstruction {
    void* field_IEnumerable_1; // +0x0 (idx=9)
    void* field__data1; // +0x8 (idx=10)
    void* field_rver_Contracts_Data; // +0x10 (idx=11)
    void* field_IEnumerable_1; // +0x18 (idx=12)
    void* field__data4; // +0x20 (idx=13)
    void* field_rver_Contracts_Data; // +0x28 (idx=14)
};

// SafeExamBrowser.Server.Contracts.Events.Proctoring.ZoomInstruction
// Flags: 0x100001
struct SafeExamBrowser_Server_Contracts_Events_Proctoring_ZoomInstruction {
    void* field_IEnumerable_1; // +0x0 (idx=15)
    void* field__data1; // +0x8 (idx=16)
    void* field_rver_Contracts_Data; // +0x10 (idx=17)
    void* field_IEnumerable_1; // +0x18 (idx=18)
    void* field__data4; // +0x20 (idx=19)
    void* field_rver_Contracts_Data; // +0x28 (idx=20)
};

// SafeExamBrowser.Server.Contracts.Data.ConnectionInfo
// Flags: 0x100001
struct SafeExamBrowser_Server_Contracts_Data_ConnectionInfo {
    void* field_Module_; // +0x0 (idx=21)
    void* field__data1; // +0x8 (idx=22)
    void* field__unk2; // +0x10 (idx=23)
};

// SafeExamBrowser.Server.Contracts.Data.Exam
// Flags: 0x100001
struct SafeExamBrowser_Server_Contracts_Data_Exam {
    void* field___6278_; // +0x0 (idx=24)
    void* field___8272_; // +0x8 (idx=25)
    void* field__ctor; // +0x10 (idx=26)
    void* field__unk3; // +0x18 (idx=27)
};

// SafeExamBrowser.Server.Contracts.Data.ServerResponse
// Flags: 0x100001
struct SafeExamBrowser_Server_Contracts_Data_ServerResponse {
    void* field_ontracts_Data; // +0x0 (idx=28)
    void* field__unk1; // +0x8 (idx=29)
};

// SafeExamBrowser.Server.Contracts.Data.ServerResponse`1
// Flags: 0x100001
struct SafeExamBrowser_Server_Contracts_Data_ServerResponse_1 {
    void* field_IEnumerable_1; // +0x0 (idx=30)
};

// Method count by type:
//   SafeExamBrowser.Server.Contracts.IServerProxy: 23 methods
//   SafeExamBrowser.Server.Contracts.Events.Proctoring.ScreenProctoringInstruction: 13 methods
//   SafeExamBrowser.Server.Contracts.Events.Proctoring.ZoomInstruction: 11 methods
//   SafeExamBrowser.Server.Contracts.Data.Exam: 9 methods
//   SafeExamBrowser.Server.Contracts.IInvigilator: 8 methods
//   SafeExamBrowser.Server.Contracts.Events.Proctoring.JitsiMeetInstruction: 7 methods
//   SafeExamBrowser.Server.Contracts.Data.ConnectionInfo: 7 methods
//   SafeExamBrowser.Server.Contracts.Events.LockScreenRequestedEventHandler: 4 methods
//   SafeExamBrowser.Server.Contracts.Events.TerminationRequestedEventHandler: 4 methods
//   SafeExamBrowser.Server.Contracts.Events.Proctoring.ProctoringConfigurationReceivedEventHandler: 4 methods
//   SafeExamBrowser.Server.Contracts.Events.Proctoring.ProctoringInstructionReceivedEventHandler: 4 methods
//   SafeExamBrowser.Server.Contracts.Events.InvigilationEventHandler: 3 methods
//   SafeExamBrowser.Server.Contracts.Events.Proctoring.InstructionEventArgs: 3 methods
//   SafeExamBrowser.Server.Contracts.Events.ServerEventHandler: 2 methods
//   SafeExamBrowser.Server.Contracts.Data.ServerResponse: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Server.Contracts.Data.ServerResponse`1: 1 methods

} // namespace safeexambrowser_server_contracts

// ── SafeExamBrowser.Server.dll ──
namespace safeexambrowser_server {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Server.Invigilator
// Flags: 0x100001
struct SafeExamBrowser_Server_Invigilator {
    void* field_pend; // +0x0 (idx=2)
    void* field___9__63_0; // +0x8 (idx=3)
    void* field__data2; // +0x10 (idx=4)
    void* field__unk3; // +0x18 (idx=5)
    void* field_d_b__63_0; // +0x20 (idx=6)
    void* field_logger; // +0x28 (idx=7)
};

// SafeExamBrowser.Server.FileSystem
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Server_FileSystem {
    void* field_pend; // +0x0 (idx=8)
    void* field_d_b__63_0; // +0x8 (idx=9)
};

// SafeExamBrowser.Server.Parser
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Server_Parser {
    void* field_instructionConfirmations; // +0x0 (idx=10)
};

// SafeExamBrowser.Server.ServerProxy
// Flags: 0x100001
struct SafeExamBrowser_Server_ServerProxy {
    void* field_ionMethod; // +0x0 (idx=11)
    void* field_d_b__63_0; // +0x8 (idx=12)
    void* field_logTimer; // +0x10 (idx=13)
    void* field__unk3; // +0x18 (idx=14)
    void* field_d_b__63_0; // +0x20 (idx=15)
    void* field_sanitizer; // +0x28 (idx=16)
    void* field_assword; // +0x30 (idx=17)
    void* field_d_b__63_0; // +0x38 (idx=18)
    void* field_api; // +0x40 (idx=19)
    void* field_dd_StatusChanged; // +0x48 (idx=20)
    void* field___9__63_0; // +0x50 (idx=21)
    void* field_httpClient; // +0x58 (idx=22)
    void* field_dd_StatusChanged; // +0x60 (idx=23)
    void* field___9__63_0; // +0x68 (idx=24)
    void* field_powerSupplyValue; // +0x70 (idx=25)
    void* field_be; // +0x78 (idx=26)
    void* field___9__63_0; // +0x80 (idx=27)
    void* field_LockScreenConfirmed; // +0x88 (idx=28)
    void* field_tusCode; // +0x90 (idx=29)
    void* field___9__63_0; // +0x98 (idx=30)
    void* field_LockScreenRequested; // +0xA0 (idx=31)
    void* field_et_Password; // +0xA8 (idx=32)
    void* field_d_b__63_0; // +0xB0 (idx=33)
    void* field_userInfo; // +0xB8 (idx=34)
    void* field_nsubscribe; // +0xC0 (idx=35)
    void* field_d_b__63_0; // +0xC8 (idx=36)
    void* field_hadException; // +0xD0 (idx=37)
    void* field_be; // +0xD8 (idx=38)
    void* field___63_0; // +0xE0 (idx=39)
    void* field_settings; // +0xE8 (idx=40)
    void* field_nsubscribe; // +0xF0 (idx=41)
};

// SafeExamBrowser.Server.Requests.ApiRequest
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Server_Requests_ApiRequest {
    void* field___32851_; // +0x0 (idx=42)
};

// SafeExamBrowser.Server.Requests.AvailableExamsRequest
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Server_Requests_AvailableExamsRequest {
    void* field_APP_SIGNATURE_KEY_SALT; // +0x0 (idx=43)
    void* field_nsubscribe; // +0x8 (idx=44)
    void* field___32851_; // +0x10 (idx=45)
};

// SafeExamBrowser.Server.Requests.Request
// Flags: 0x100080
struct /* class */ SafeExamBrowser_Server_Requests_Request {
    void* field__data0; // +0x0 (idx=46)
    void* field_nsubscribe; // +0x8 (idx=47)
    void* field___9__63_0; // +0x10 (idx=48)
    void* field__data3; // +0x18 (idx=49)
    void* field_hod; // +0x20 (idx=50)
    void* field___9__63_0; // +0x28 (idx=51)
    void* field__data6; // +0x30 (idx=52)
    void* field_hod; // +0x38 (idx=53)
};

// SafeExamBrowser.Server.Requests.ContentType
// Flags: 0x100180
struct /* class */ SafeExamBrowser_Server_Requests_ContentType {
    void* field___9__63_0; // +0x0 (idx=54)
    void* field_value__; // +0x8 (idx=55)
};

// SafeExamBrowser.Server.Requests.Header
// Flags: 0x100180
struct /* class */ SafeExamBrowser_Server_Requests_Header {
    void* field_t_IsSuccessStatusCode; // +0x0 (idx=56)
    void* field___32854_; // +0x8 (idx=57)
    void* field_LOCK_SCREEN; // +0x10 (idx=58)
    void* field_nsubscribe; // +0x18 (idx=59)
    void* field___32851_; // +0x20 (idx=60)
};

// SafeExamBrowser.Server.Data.Api
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Server_Data_Api {
    void* field_QUIT; // +0x0 (idx=61)
    void* field_SuccessStatusCode; // +0x8 (idx=62)
    void* field_yClass3_0; // +0x10 (idx=63)
    void* field___9__63_0; // +0x18 (idx=64)
    void* field_leMode; // +0x20 (idx=65)
};

// SafeExamBrowser.Server.Data.Attributes
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Server_Data_Attributes {
    void* field__63_0; // +0x0 (idx=66)
    void* field__data1; // +0x8 (idx=67)
    void* field_e; // +0x10 (idx=68)
    void* field__63_0; // +0x18 (idx=69)
    void* field__data4; // +0x20 (idx=70)
    void* field__unk5; // +0x28 (idx=71)
    void* field_imeout; // +0x30 (idx=72)
};

// SafeExamBrowser.Server.Data.AttributeType
// Flags: 0x0100
struct /* class */ SafeExamBrowser_Server_Data_AttributeType {
    void* field__ctor; // +0x0 (idx=73)
    void* field__unk1; // +0x8 (idx=74)
    void* field__63_0; // +0x10 (idx=75)
    void* field__unk3; // +0x18 (idx=76)
};

// SafeExamBrowser.Server.Data.Instructions
// Flags: 0x100100
struct /* class */ SafeExamBrowser_Server_Data_Instructions {
    void* field___9__63_0; // +0x0 (idx=77)
    void* field__unk1; // +0x8 (idx=78)
    void* field_m_Text; // +0x10 (idx=79)
    void* field_add_HandLowered; // +0x18 (idx=80)
    void* field__unk4; // +0x20 (idx=81)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field___63_0; // +0x0 (idx=84)
    void* field_Name; // +0x8 (idx=85)
};

// <<TrySaveFile>b__0>d
// Flags: 0x100103
struct __TrySaveFile_b__0_d {
    void* field__unk0; // +0x0 (idx=88)
    void* field_Message; // +0x8 (idx=89)
    void* field__unk2; // +0x10 (idx=90)
    void* field__0; // +0x18 (idx=91)
};

// <<Extract>b__0>d
// Flags: 0x100103
struct __Extract_b__0_d {
    void* field__9; // +0x0 (idx=92)
    void* field___8923_; // +0x8 (idx=93)
    void* field_Server_HandConfirmed; // +0x10 (idx=94)
    void* field__unk3; // +0x18 (idx=95)
};

// Method count by type:
//   <>c: 2 methods
//   <<TrySaveFile>b__0>d: 2 methods
//   <<Extract>b__0>d: 2 methods

} // namespace safeexambrowser_server

// ── SafeExamBrowser.Settings.dll ──
namespace safeexambrowser_settings {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Settings.ConfigurationMode
// Flags: 0x0101
struct SafeExamBrowser_Settings_ConfigurationMode {
    void* field_llowF3; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_value__; // +0x10 (idx=4)
};

// SafeExamBrowser.Settings.SessionMode
// Flags: 0x0101
struct SafeExamBrowser_Settings_SessionMode {
    void* field_set_AllowF3; // +0x0 (idx=5)
    void* field_get_AllowF10; // +0x8 (idx=6)
    void* field__data2; // +0x10 (idx=7)
};

// SafeExamBrowser.Settings.AppSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_AppSettings {
    void* field_et_AllowAltF4; // +0x0 (idx=8)
    void* field_get_AllowF10; // +0x8 (idx=9)
    void* field__data2; // +0x10 (idx=10)
    void* field__unk3; // +0x18 (idx=11)
    void* field_get_AllowF10; // +0x20 (idx=12)
    void* field__data5; // +0x28 (idx=13)
    void* field_et_AllowF4; // +0x30 (idx=14)
    void* field_get_AllowF10; // +0x38 (idx=15)
    void* field__data8; // +0x40 (idx=16)
    void* field_et_AllowF4; // +0x48 (idx=17)
    void* field_get_AllowF10; // +0x50 (idx=18)
    void* field__data11; // +0x58 (idx=19)
    void* field_F4; // +0x60 (idx=20)
    void* field_get_AllowF10; // +0x68 (idx=21)
    void* field__data14; // +0x70 (idx=22)
    void* field_F4; // +0x78 (idx=23)
};

// SafeExamBrowser.Settings.UserInterface.ActionCenterSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_UserInterface_ActionCenterSettings {
    void* field_get_AllowF10; // +0x0 (idx=24)
    void* field__data1; // +0x8 (idx=25)
    void* field_F4; // +0x10 (idx=26)
    void* field_get_AllowF10; // +0x18 (idx=27)
    void* field__data4; // +0x20 (idx=28)
    void* field_F4; // +0x28 (idx=29)
    void* field___32854_; // +0x30 (idx=30)
};

// SafeExamBrowser.Settings.UserInterface.LockScreenSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_UserInterface_LockScreenSettings {
    void* field_Mobile; // +0x0 (idx=31)
};

// SafeExamBrowser.Settings.UserInterface.TaskbarSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_UserInterface_TaskbarSettings {
    void* field_owF5; // +0x0 (idx=32)
    void* field_get_AllowF10; // +0x8 (idx=33)
    void* field__data2; // +0x10 (idx=34)
    void* field_F4; // +0x18 (idx=35)
    void* field_get_AllowF10; // +0x20 (idx=36)
    void* field__data5; // +0x28 (idx=37)
    void* field_owF5; // +0x30 (idx=38)
};

// SafeExamBrowser.Settings.UserInterface.UserInterfaceMode
// Flags: 0x0101
struct SafeExamBrowser_Settings_UserInterface_UserInterfaceMode {
    void* field_gField; // +0x0 (idx=39)
    void* field_Mandatory; // +0x8 (idx=40)
    void* field__5; // +0x10 (idx=41)
};

// SafeExamBrowser.Settings.UserInterface.UserInterfaceSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_UserInterface_UserInterfaceSettings {
    void* field_get_AllowF10; // +0x0 (idx=42)
    void* field__data1; // +0x8 (idx=43)
    void* field_F4; // +0x10 (idx=44)
    void* field_get_AllowF10; // +0x18 (idx=45)
};

// SafeExamBrowser.Settings.System.SystemSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_System_SystemSettings {
    void* field__data0; // +0x0 (idx=46)
};

// SafeExamBrowser.Settings.SystemComponents.AudioSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_SystemComponents_AudioSettings {
    void* field_F4; // +0x0 (idx=47)
    void* field_get_AllowF10; // +0x8 (idx=48)
    void* field__data2; // +0x10 (idx=49)
};

// SafeExamBrowser.Settings.SystemComponents.PowerSupplySettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_SystemComponents_PowerSupplySettings {
    void* field_F4; // +0x0 (idx=50)
    void* field_get_AllowF10; // +0x8 (idx=51)
};

// SafeExamBrowser.Settings.Service.ServicePolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Service_ServicePolicy {
    void* field__data0; // +0x0 (idx=52)
    void* field__5; // +0x8 (idx=53)
    void* field_gField; // +0x10 (idx=54)
    void* field_Debug; // +0x18 (idx=55)
};

// SafeExamBrowser.Settings.Service.ServiceSettings
// Flags: 0x100001
struct SafeExamBrowser_Settings_Service_ServiceSettings {
    void* field__unk0; // +0x0 (idx=56)
    void* field___32854_; // +0x8 (idx=57)
    void* field__data2; // +0x10 (idx=58)
    void* field_F4; // +0x18 (idx=59)
    void* field_get_AllowF10; // +0x20 (idx=60)
    void* field__data5; // +0x28 (idx=61)
    void* field_get_AllowF5; // +0x30 (idx=62)
    void* field_get_AllowF10; // +0x38 (idx=63)
    void* field__data8; // +0x40 (idx=64)
    void* field_F4; // +0x48 (idx=65)
    void* field_get_AllowF10; // +0x50 (idx=66)
    void* field__data11; // +0x58 (idx=67)
    void* field_llowF3; // +0x60 (idx=68)
    void* field_gField; // +0x68 (idx=69)
    void* field_Allow; // +0x70 (idx=70)
    void* field_lowF6; // +0x78 (idx=71)
};

// SafeExamBrowser.Settings.Logging.LogLevel
// Flags: 0x0101
struct SafeExamBrowser_Settings_Logging_LogLevel {
    void* field_get_AllowF10; // +0x0 (idx=72)
    void* field__data1; // +0x8 (idx=73)
    void* field__6; // +0x10 (idx=74)
    void* field_get_AllowF10; // +0x18 (idx=75)
    void* field__data4; // +0x20 (idx=76)
};

// SafeExamBrowser.Settings.Server.InvigilationSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Server_InvigilationSettings {
    void* field_llowF3; // +0x0 (idx=77)
    void* field___32854_; // +0x8 (idx=78)
};

// SafeExamBrowser.Settings.Server.ServerSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Server_ServerSettings {
    void* field_DisableExplorerShell; // +0x0 (idx=79)
    void* field_get_AllowF5; // +0x8 (idx=80)
    void* field_get_AllowF10; // +0x10 (idx=81)
    void* field__data3; // +0x18 (idx=82)
    void* field_F4; // +0x20 (idx=83)
    void* field_get_AllowF10; // +0x28 (idx=84)
    void* field__data6; // +0x30 (idx=85)
    void* field_llowF6; // +0x38 (idx=86)
    void* field_get_AllowF10; // +0x40 (idx=87)
    void* field__data9; // +0x48 (idx=88)
    void* field_F4; // +0x50 (idx=89)
    void* field_get_AllowF10; // +0x58 (idx=90)
    void* field_value__; // +0x60 (idx=91)
};

// SafeExamBrowser.Settings.Security.ClipboardPolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Security_ClipboardPolicy {
    void* field_llowF7; // +0x0 (idx=92)
    void* field_gField; // +0x8 (idx=93)
    void* field_Bmp; // +0x10 (idx=94)
    void* field_F7; // +0x18 (idx=95)
};

// SafeExamBrowser.Settings.Security.VersionRestriction
// Flags: 0x102001
struct SafeExamBrowser_Settings_Security_VersionRestriction {
    void* field___32854_; // +0x0 (idx=96)
    void* field_value__; // +0x8 (idx=97)
    void* field_et_AllowF7; // +0x10 (idx=98)
    void* field___32854_; // +0x18 (idx=99)
    void* field_Color24bpp; // +0x20 (idx=100)
    void* field_et_AllowF7; // +0x28 (idx=101)
};

// SafeExamBrowser.Settings.Security.KioskMode
// Flags: 0x0101
struct SafeExamBrowser_Settings_Security_KioskMode {
    void* field___32854_; // +0x0 (idx=102)
    void* field__data1; // +0x8 (idx=103)
    void* field_F4; // +0x10 (idx=104)
    void* field_get_AllowF10; // +0x18 (idx=105)
};

// SafeExamBrowser.Settings.Security.SecuritySettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Security_SecuritySettings {
    void* field__data0; // +0x0 (idx=106)
    void* field_F4; // +0x8 (idx=107)
    void* field_get_AllowF10; // +0x10 (idx=108)
    void* field__data3; // +0x18 (idx=109)
    void* field_F4; // +0x20 (idx=110)
    void* field_get_AllowF10; // +0x28 (idx=111)
    void* field__data6; // +0x30 (idx=112)
    void* field_F7; // +0x38 (idx=113)
    void* field_get_AllowF10; // +0x40 (idx=114)
    void* field__data9; // +0x48 (idx=115)
    void* field_F7; // +0x50 (idx=116)
    void* field_get_AllowF10; // +0x58 (idx=117)
    void* field__data12; // +0x60 (idx=118)
    void* field_F4; // +0x68 (idx=119)
    void* field_get_AllowF10; // +0x70 (idx=120)
};

// SafeExamBrowser.Settings.Security.VirtualMachinePolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Security_VirtualMachinePolicy {
    void* field__data0; // +0x0 (idx=121)
    void* field_F4; // +0x8 (idx=122)
    void* field_get_AllowF10; // +0x10 (idx=123)
};

// SafeExamBrowser.Settings.Proctoring.ImageFormat
// Flags: 0x0101
struct SafeExamBrowser_Settings_Proctoring_ImageFormat {
    void* field__data0; // +0x0 (idx=124)
    void* field_F4; // +0x8 (idx=125)
    void* field_get_AllowF10; // +0x10 (idx=126)
    void* field__data3; // +0x18 (idx=127)
    void* field_F4; // +0x20 (idx=128)
};

// SafeExamBrowser.Settings.Proctoring.ImageQuantization
// Flags: 0x0101
struct SafeExamBrowser_Settings_Proctoring_ImageQuantization {
    void* field_get_AllowF10; // +0x0 (idx=129)
    void* field__data1; // +0x8 (idx=130)
    void* field_F4; // +0x10 (idx=131)
    void* field_get_AllowF10; // +0x18 (idx=132)
    void* field__data4; // +0x20 (idx=133)
    void* field_F4; // +0x28 (idx=134)
    void* field_get_AllowF10; // +0x30 (idx=135)
    void* field__data7; // +0x38 (idx=136)
};

// SafeExamBrowser.Settings.Proctoring.MetaDataSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Proctoring_MetaDataSettings {
    void* field_F4; // +0x0 (idx=137)
    void* field_get_AllowF10; // +0x8 (idx=138)
    void* field__data2; // +0x10 (idx=139)
};

// SafeExamBrowser.Settings.Proctoring.ProctoringSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Proctoring_ProctoringSettings {
    void* field_et_AllowF8; // +0x0 (idx=140)
    void* field_get_AllowF10; // +0x8 (idx=141)
    void* field__data2; // +0x10 (idx=142)
};

// SafeExamBrowser.Settings.Proctoring.ScreenProctoringSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Proctoring_ScreenProctoringSettings {
    void* field_F4; // +0x0 (idx=143)
    void* field_get_AllowF10; // +0x8 (idx=144)
    void* field__data2; // +0x10 (idx=145)
    void* field_F4; // +0x18 (idx=146)
    void* field_get_AllowF10; // +0x20 (idx=147)
    void* field__data5; // +0x28 (idx=148)
    void* field__AllowF8; // +0x30 (idx=149)
    void* field_get_AllowF10; // +0x38 (idx=150)
    void* field__data8; // +0x40 (idx=151)
    void* field_get_AllowF5; // +0x48 (idx=152)
    void* field_get_AllowF10; // +0x50 (idx=153)
    void* field__data11; // +0x58 (idx=154)
    void* field_get_AllowF5; // +0x60 (idx=155)
};

// SafeExamBrowser.Settings.Monitoring.DisplaySettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Monitoring_DisplaySettings {
    void* field_get_AllowF10; // +0x0 (idx=156)
    void* field__data1; // +0x8 (idx=157)
    void* field_F4; // +0x10 (idx=158)
    void* field_get_AllowF10; // +0x18 (idx=159)
};

// SafeExamBrowser.Settings.Monitoring.KeyboardSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Monitoring_KeyboardSettings {
    void* field__data0; // +0x0 (idx=160)
    void* field_get_AllowF9; // +0x8 (idx=161)
    void* field_get_AllowF10; // +0x10 (idx=162)
    void* field__data3; // +0x18 (idx=163)
    void* field_F4; // +0x20 (idx=164)
    void* field_get_AllowF10; // +0x28 (idx=165)
    void* field__data6; // +0x30 (idx=166)
    void* field_get_AllowF5; // +0x38 (idx=167)
    void* field_get_AllowF10; // +0x40 (idx=168)
    void* field__data9; // +0x48 (idx=169)
    void* field_get_AllowF5; // +0x50 (idx=170)
    void* field_get_AllowF10; // +0x58 (idx=171)
    void* field_value__; // +0x60 (idx=172)
    void* field__9; // +0x68 (idx=173)
    void* field___32854_; // +0x70 (idx=174)
    void* field_Never; // +0x78 (idx=175)
    void* field_llowF3; // +0x80 (idx=176)
    void* field___32854_; // +0x88 (idx=177)
    void* field_Right; // +0x90 (idx=178)
    void* field__6; // +0x98 (idx=179)
    void* field_get_AllowF10; // +0xA0 (idx=180)
    void* field__data21; // +0xA8 (idx=181)
};

// SafeExamBrowser.Settings.Monitoring.MouseSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Monitoring_MouseSettings {
    void* field_F4; // +0x0 (idx=182)
    void* field_get_AllowF10; // +0x8 (idx=183)
};

// SafeExamBrowser.Settings.Browser.FilterSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_FilterSettings {
    void* field__data0; // +0x0 (idx=184)
    void* field__AllowF9; // +0x8 (idx=185)
    void* field_get_AllowF10; // +0x10 (idx=186)
};

// SafeExamBrowser.Settings.Browser.BrowserSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_BrowserSettings {
    void* field__data0; // +0x0 (idx=187)
    void* field_F4; // +0x8 (idx=188)
    void* field_get_AllowF10; // +0x10 (idx=189)
    void* field__data3; // +0x18 (idx=190)
    void* field_llowF3; // +0x20 (idx=191)
    void* field___32854_; // +0x28 (idx=192)
    void* field_AllowSameHostAndWindow; // +0x30 (idx=193)
    void* field_get_AllowF9; // +0x38 (idx=194)
    void* field_get_AllowF10; // +0x40 (idx=195)
    void* field__data9; // +0x48 (idx=196)
    void* field_F4; // +0x50 (idx=197)
    void* field_get_AllowF10; // +0x58 (idx=198)
    void* field__data12; // +0x60 (idx=199)
    void* field_llowF3; // +0x68 (idx=200)
    void* field___32854_; // +0x70 (idx=201)
    void* field_value__; // +0x78 (idx=202)
    void* field_wCtrlC; // +0x80 (idx=203)
    void* field___32854_; // +0x88 (idx=204)
    void* field_Socks; // +0x90 (idx=205)
    void* field_get_AllowF5; // +0x98 (idx=206)
    void* field_get_AllowF10; // +0xA0 (idx=207)
    void* field__data21; // +0xA8 (idx=208)
    void* field_F4; // +0xB0 (idx=209)
    void* field_gField; // +0xB8 (idx=210)
    void* field_Allow; // +0xC0 (idx=211)
    void* field_C; // +0xC8 (idx=212)
    void* field_get_AllowF10; // +0xD0 (idx=213)
    void* field__data27; // +0xD8 (idx=214)
    void* field_llowF3; // +0xE0 (idx=215)
    void* field___32854_; // +0xE8 (idx=216)
    void* field__data30; // +0xF0 (idx=217)
    void* field_t_AllowCtrlV; // +0xF8 (idx=218)
    void* field_get_AllowF10; // +0x100 (idx=219)
    void* field__data33; // +0x108 (idx=220)
    void* field_F4; // +0x110 (idx=221)
    void* field_lowF11; // +0x118 (idx=222)
    void* field__data36; // +0x120 (idx=223)
    void* field_F4; // +0x128 (idx=224)
    void* field_get_AllowF10; // +0x130 (idx=225)
    void* field__data39; // +0x138 (idx=226)
    void* field_get_AllowF5; // +0x140 (idx=227)
    void* field_get_AllowF10; // +0x148 (idx=228)
};

// SafeExamBrowser.Settings.Browser.UrlPolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_UrlPolicy {
    void* field__data0; // +0x0 (idx=229)
    void* field_get_AllowF5; // +0x8 (idx=230)
    void* field_k__BackingField; // +0x10 (idx=231)
    void* field_eService; // +0x18 (idx=232)
    void* field__ctor; // +0x20 (idx=233)
};

// SafeExamBrowser.Settings.Browser.WindowPosition
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_WindowPosition {
    void* field__unk0; // +0x0 (idx=234)
    void* field_set_AllowCtrlV; // +0x8 (idx=235)
    void* field__unk2; // +0x10 (idx=236)
    void* field_get_AllowF10; // +0x18 (idx=237)
};

// SafeExamBrowser.Settings.Browser.WindowSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_WindowSettings {
    void* field_le_k__BackingField; // +0x0 (idx=238)
    void* field_Mode; // +0x8 (idx=239)
    void* field_set_Audio; // +0x10 (idx=240)
    void* field__unk3; // +0x18 (idx=241)
    void* field_CtrlX; // +0x20 (idx=242)
    void* field__unk5; // +0x28 (idx=243)
    void* field_t_AllowF10; // +0x30 (idx=244)
    void* field_le_k__BackingField; // +0x38 (idx=245)
    void* field_et_FullScreenMode; // +0x40 (idx=246)
    void* field_set_ConfigurationMode; // +0x48 (idx=247)
    void* field__unk10; // +0x50 (idx=248)
    void* field_ue__; // +0x58 (idx=249)
    void* field__unk12; // +0x60 (idx=250)
    void* field_AllowF10; // +0x68 (idx=251)
    void* field_le_k__BackingField; // +0x70 (idx=252)
    void* field_de; // +0x78 (idx=253)
};

// SafeExamBrowser.Settings.Browser.PopupPolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_PopupPolicy {
    void* field_set_Keyboard; // +0x0 (idx=254)
    void* field__unk1; // +0x8 (idx=255)
    void* field_MetaData; // +0x10 (idx=256)
    void* field__unk3; // +0x18 (idx=257)
    void* field_lowF10; // +0x20 (idx=258)
    void* field_le_k__BackingField; // +0x28 (idx=259)
};

// SafeExamBrowser.Settings.Browser.ProxySettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_ProxySettings {
    void* field__unk0; // +0x0 (idx=260)
    void* field_set_Mouse; // +0x8 (idx=261)
    void* field__unk2; // +0x10 (idx=262)
    void* field_icationData; // +0x18 (idx=263)
    void* field__unk4; // +0x20 (idx=264)
    void* field_wF10; // +0x28 (idx=265)
};

// SafeExamBrowser.Settings.Browser.Proxy.ProxyPolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_Proxy_ProxyPolicy {
    void* field_le_k__BackingField; // +0x0 (idx=266)
    void* field_rationMode; // +0x8 (idx=267)
    void* field_set_Proctoring; // +0x10 (idx=268)
};

// SafeExamBrowser.Settings.Browser.Proxy.ProxyProtocol
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_Proxy_ProxyProtocol {
    void* field__unk0; // +0x0 (idx=269)
    void* field_eApplicationData; // +0x8 (idx=270)
    void* field__unk2; // +0x10 (idx=271)
    void* field__10; // +0x18 (idx=272)
    void* field_le_k__BackingField; // +0x20 (idx=273)
};

// SafeExamBrowser.Settings.Browser.Proxy.ProxyConfiguration
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_Proxy_ProxyConfiguration {
    void* field_ge; // +0x0 (idx=274)
    void* field_set_Server; // +0x8 (idx=275)
    void* field__unk2; // +0x10 (idx=276)
    void* field_aptureBrowserData; // +0x18 (idx=277)
    void* field__unk4; // +0x20 (idx=278)
    void* field__unk5; // +0x28 (idx=279)
};

// SafeExamBrowser.Settings.Browser.Filter.FilterResult
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_Filter_FilterResult {
    void* field_le_k__BackingField; // +0x0 (idx=280)
    void* field_omeNavigationMessage; // +0x8 (idx=281)
    void* field_set_SessionMode; // +0x10 (idx=282)
};

// SafeExamBrowser.Settings.Browser.Filter.FilterRuleSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_Filter_FilterRuleSettings {
    void* field__unk0; // +0x0 (idx=283)
    void* field_CaptureBrowserData; // +0x8 (idx=284)
    void* field__unk2; // +0x10 (idx=285)
};

// SafeExamBrowser.Settings.Browser.Filter.FilterRuleType
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_Filter_FilterRuleType {
    void* field_et_AllowF10; // +0x0 (idx=286)
    void* field_le_k__BackingField; // +0x8 (idx=287)
    void* field_ationMessage; // +0x10 (idx=288)
};

// SafeExamBrowser.Settings.Applications.ApplicationSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Applications_ApplicationSettings {
    void* field_set_UserInterface; // +0x0 (idx=289)
    void* field__unk1; // +0x8 (idx=290)
};

// SafeExamBrowser.Settings.Applications.BlacklistApplication
// Flags: 0x102001
struct SafeExamBrowser_Settings_Applications_BlacklistApplication {
    void* field_get_AllowF10; // +0x0 (idx=291)
    void* field__unk1; // +0x8 (idx=292)
    void* field__AllowF10; // +0x10 (idx=293)
};

// SafeExamBrowser.Settings.Applications.WhitelistApplication
// Flags: 0x102001
struct SafeExamBrowser_Settings_Applications_WhitelistApplication {
    void* field_le_k__BackingField; // +0x0 (idx=294)
    void* field_cutableName; // +0x8 (idx=295)
    void* field_get_ShowApplicationInfo; // +0x10 (idx=296)
    void* field__unk3; // +0x18 (idx=297)
    void* field_owF10; // +0x20 (idx=298)
    void* field__unk5; // +0x28 (idx=299)
    void* field_llowF10; // +0x30 (idx=300)
    void* field_le_k__BackingField; // +0x38 (idx=301)
    void* field__data8; // +0x40 (idx=302)
    void* field_get_ShowAudio; // +0x48 (idx=303)
    void* field__unk10; // +0x50 (idx=304)
    void* field_owF10; // +0x58 (idx=305)
    void* field__unk12; // +0x60 (idx=306)
};

// Method count by type:
//   SafeExamBrowser.Settings.Applications.WhitelistApplication: 16 methods
//   SafeExamBrowser.Settings.Browser.Filter.FilterRuleSettings: 5 methods
//   SafeExamBrowser.Settings.Applications.BlacklistApplication: 5 methods
//   SafeExamBrowser.Settings.Applications.ApplicationSettings: 3 methods

} // namespace safeexambrowser_settings

// ── SafeExamBrowser.SystemComponents.Contracts.dll ──
namespace safeexambrowser_systemcomponents_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.SystemComponents.Contracts.OperatingSystem
// Flags: 0x0101
struct SafeExamBrowser_SystemComponents_Contracts_OperatingSystem {
    void* field_rkName; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_Windows8; // +0x10 (idx=4)
    void* field_ame; // +0x18 (idx=5)
    void* field___32854_; // +0x20 (idx=6)
    void* field_value__; // +0x28 (idx=7)
    void* field_get_DeviceFullName; // +0x30 (idx=8)
};

// SafeExamBrowser.SystemComponents.Contracts.PowerSupply.BatteryChargeStatus
// Flags: 0x0101
struct SafeExamBrowser_SystemComponents_Contracts_PowerSupply_BatteryChargeStatus {
    void* field___32854_; // +0x0 (idx=9)
    void* field_Okay; // +0x8 (idx=10)
    void* field_rkName; // +0x10 (idx=11)
    void* field___32854_; // +0x18 (idx=12)
    void* field_Wireless; // +0x20 (idx=13)
};

// SafeExamBrowser.SystemComponents.Contracts.Network.ConnectionType
// Flags: 0x0101
struct SafeExamBrowser_SystemComponents_Contracts_Network_ConnectionType {
    void* field_rkName; // +0x0 (idx=14)
    void* field___32854_; // +0x8 (idx=15)
    void* field_Connecting; // +0x10 (idx=16)
    void* field_ceFullName; // +0x18 (idx=17)
};

// SafeExamBrowser.SystemComponents.Contracts.Network.ConnectionStatus
// Flags: 0x0101
struct SafeExamBrowser_SystemComponents_Contracts_Network_ConnectionStatus {
    void* field_Windows10; // +0x0 (idx=18)
    void* field__data1; // +0x8 (idx=19)
    void* field_llName; // +0x10 (idx=20)
    void* field___32854_; // +0x18 (idx=21)
    void* field_EaseOfAccess_Name; // +0x20 (idx=22)
};

// SafeExamBrowser.SystemComponents.Contracts.Network.Events.CredentialsRequiredEventArgs
// Flags: 0x100001
struct SafeExamBrowser_SystemComponents_Contracts_Network_Events_CredentialsRequiredEventArgs {
    void* field_llName; // +0x0 (idx=23)
    void* field___32854_; // +0x8 (idx=24)
    void* field_Cursors_Arrow_Name; // +0x10 (idx=25)
    void* field_llName; // +0x18 (idx=26)
};

// MachineHive
// Flags: 0x100182
struct /* class */ MachineHive {
    void* field___32854_; // +0x0 (idx=27)
    void* field_Cursors_IBeam_Name; // +0x8 (idx=28)
    void* field_llName; // +0x10 (idx=29)
    void* field___32854_; // +0x18 (idx=30)
};

// UserHive
// Flags: 0x100182
struct /* class */ UserHive {
    void* field_Cursors_Pin_Name; // +0x0 (idx=31)
    void* field_llName; // +0x8 (idx=32)
    void* field___32854_; // +0x10 (idx=33)
    void* field_Cursors_SizeNWSE_Name; // +0x18 (idx=34)
    void* field_llName; // +0x20 (idx=35)
    void* field___32854_; // +0x28 (idx=36)
    void* field_DeviceCache_Key; // +0x30 (idx=37)
    void* field_llName; // +0x38 (idx=38)
    void* field___8264_; // +0x40 (idx=39)
    void* field__ctor; // +0x48 (idx=40)
    void* field__unk10; // +0x50 (idx=41)
    void* field_Windows10; // +0x58 (idx=42)
    void* field__unk12; // +0x60 (idx=43)
    void* field_Windows10; // +0x68 (idx=44)
    void* field_tribute; // +0x70 (idx=45)
    void* field__unk15; // +0x78 (idx=46)
    void* field_Save; // +0x80 (idx=47)
    void* field__unk17; // +0x88 (idx=48)
    void* field_ws10; // +0x90 (idx=49)
    void* field__unk19; // +0x98 (idx=50)
    void* field_ows10; // +0xA0 (idx=51)
};

// Method count by type:
//   SafeExamBrowser.SystemComponents.Contracts.Network.INetworkAdapter: 11 methods
//   SafeExamBrowser.SystemComponents.Contracts.ISystemInfo: 10 methods
//   SafeExamBrowser.SystemComponents.Contracts.Audio.IAudio: 9 methods
//   SafeExamBrowser.SystemComponents.Contracts.Network.Events.CredentialsRequiredEventArgs: 8 methods
//   SafeExamBrowser.SystemComponents.Contracts.Registry.IRegistry: 7 methods
//   SafeExamBrowser.SystemComponents.Contracts.Keyboard.IKeyboardLayout: 5 methods
//   SafeExamBrowser.SystemComponents.Contracts.Keyboard.Events.LayoutChangedEventHandler: 4 methods
//   SafeExamBrowser.SystemComponents.Contracts.PowerSupply.IPowerSupplyStatus: 4 methods
//   SafeExamBrowser.SystemComponents.Contracts.PowerSupply.Events.StatusChangedEventHandler: 4 methods
//   SafeExamBrowser.SystemComponents.Contracts.Network.Events.ChangedEventHandler: 4 methods
//   SafeExamBrowser.SystemComponents.Contracts.IFileSystem: 3 methods
//   SafeExamBrowser.SystemComponents.Contracts.PowerSupply.IPowerSupply: 3 methods
//   SafeExamBrowser.SystemComponents.Contracts.Registry.Events.RegistryValueChangedEventHandler: 3 methods
//   SafeExamBrowser.SystemComponents.Contracts.Network.IWirelessNetwork: 3 methods
//   SafeExamBrowser.SystemComponents.Contracts.Network.Events.CredentialsRequiredEventHandler: 3 methods
//   SafeExamBrowser.SystemComponents.Contracts.ISystemComponent: 2 methods
//   SafeExamBrowser.SystemComponents.Contracts.Audio.Events.VolumeChangedEventHandler: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.SystemComponents.Contracts.Keyboard.IKeyboard: 1 methods

} // namespace safeexambrowser_systemcomponents_contracts

// ── SafeExamBrowser.SystemComponents.dll ──
namespace safeexambrowser_systemcomponents {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.SystemComponents.SystemInfo
// Flags: 0x100001
struct SafeExamBrowser_SystemComponents_SystemInfo {
    void* field_ckingField; // +0x0 (idx=2)
    void* field__data1; // +0x8 (idx=3)
    void* field__data2; // +0x10 (idx=4)
    void* field_n_b__0; // +0x18 (idx=5)
    void* field__data4; // +0x20 (idx=6)
    void* field__data5; // +0x28 (idx=7)
    void* field_eld; // +0x30 (idx=8)
    void* field___32849_; // +0x38 (idx=9)
    void* field_logger; // +0x40 (idx=10)
    void* field_nc; // +0x48 (idx=11)
};

// SafeExamBrowser.SystemComponents.UserInfo
// Flags: 0x100001
struct SafeExamBrowser_SystemComponents_UserInfo {
    void* field_FilterAndOrder_b__0_0; // +0x0 (idx=12)
    void* field_timer; // +0x8 (idx=13)
};

// SafeExamBrowser.SystemComponents.Registry.Registry
// Flags: 0x100001
struct SafeExamBrowser_SystemComponents_Registry_Registry {
    void* field_el_k__BackingField; // +0x0 (idx=14)
    void* field_FilterAndOrder_b__0_0; // +0x8 (idx=15)
    void* field_critical; // +0x10 (idx=16)
    void* field_ingField; // +0x18 (idx=17)
    void* field__data4; // +0x20 (idx=18)
};

// SafeExamBrowser.SystemComponents.PowerSupply.PowerSupply
// Flags: 0x100001
struct SafeExamBrowser_SystemComponents_PowerSupply_PowerSupply {
    void* field_StatusChanged; // +0x0 (idx=19)
    void* field_ingField; // +0x8 (idx=20)
    void* field__data2; // +0x10 (idx=21)
    void* field__data3; // +0x18 (idx=22)
    void* field_em_k__BackingField; // +0x20 (idx=23)
    void* field_FilterAndOrder_b__0_0; // +0x28 (idx=24)
    void* field_nativeMethods; // +0x30 (idx=25)
};

// SafeExamBrowser.SystemComponents.PowerSupply.PowerSupplyStatus
// Flags: 0x100000
struct /* class */ SafeExamBrowser_SystemComponents_PowerSupply_PowerSupplyStatus {
    void* field_d; // +0x0 (idx=26)
    void* field__data1; // +0x8 (idx=27)
    void* field__data2; // +0x10 (idx=28)
    void* field_ingField; // +0x18 (idx=29)
};

// SafeExamBrowser.SystemComponents.Network.NetworkAdapter
// Flags: 0x100001
struct SafeExamBrowser_SystemComponents_Network_NetworkAdapter {
    void* field__data0; // +0x0 (idx=30)
    void* field__data1; // +0x8 (idx=31)
    void* field_n_b__0; // +0x10 (idx=32)
    void* field__data3; // +0x18 (idx=33)
    void* field__data4; // +0x20 (idx=34)
    void* field_n_b__0; // +0x28 (idx=35)
    void* field_FilterAndOrder_b__0_0; // +0x30 (idx=36)
    void* field__data7; // +0x38 (idx=37)
    void* field_n_b__0; // +0x40 (idx=38)
    void* field_FilterAndOrder_b__0_0; // +0x48 (idx=39)
    void* field_originalLanguage; // +0x50 (idx=40)
};

// SafeExamBrowser.SystemComponents.Network.WirelessNetwork
// Flags: 0x100000
struct /* class */ SafeExamBrowser_SystemComponents_Network_WirelessNetwork {
    void* field__data0; // +0x0 (idx=41)
    void* field_FilterAndOrder_b__0_0; // +0x8 (idx=42)
    void* field_audioDevice; // +0x10 (idx=43)
    void* field_n_b__0; // +0x18 (idx=44)
};

// SafeExamBrowser.SystemComponents.Keyboard.KeyboardLayout
// Flags: 0x100000
struct /* class */ SafeExamBrowser_SystemComponents_Keyboard_KeyboardLayout {
    void* field__data0; // +0x0 (idx=45)
    void* field_originalVolume; // +0x8 (idx=46)
    void* field_Ids_k__BackingField; // +0x10 (idx=47)
    void* field__unk3; // +0x18 (idx=48)
    void* field___9__0_0; // +0x20 (idx=49)
    void* field__data5; // +0x28 (idx=50)
};

// SafeExamBrowser.SystemComponents.Keyboard.Keyboard
// Flags: 0x100001
struct SafeExamBrowser_SystemComponents_Keyboard_Keyboard {
    void* field__unk0; // +0x0 (idx=51)
    void* field_name; // +0x8 (idx=52)
    void* field_tatus_k__BackingField; // +0x10 (idx=53)
    void* field_DisplayClass40_0; // +0x18 (idx=54)
};

// SafeExamBrowser.SystemComponents.Audio.Audio
// Flags: 0x100001
struct SafeExamBrowser_SystemComponents_Audio_Audio {
    void* field_network; // +0x0 (idx=55)
    void* field_tatus_k__BackingField; // +0x8 (idx=56)
    void* field__unk2; // +0x10 (idx=57)
    void* field___9__9_0; // +0x18 (idx=58)
    void* field_eld; // +0x20 (idx=59)
    void* field_his; // +0x28 (idx=60)
    void* field__ctor; // +0x30 (idx=61)
    void* field__unk7; // +0x38 (idx=62)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field__unk0; // +0x0 (idx=64)
    void* field__data1; // +0x8 (idx=65)
    void* field_umerable_1; // +0x10 (idx=66)
    void* field_works; // +0x18 (idx=67)
    void* field_Save; // +0x20 (idx=68)
    void* field__unk5; // +0x28 (idx=76)
    void* field_ss40_0; // +0x30 (idx=77)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field__unk0; // +0x0 (idx=64)
    void* field__data1; // +0x8 (idx=65)
    void* field_umerable_1; // +0x10 (idx=66)
    void* field_works; // +0x18 (idx=67)
    void* field_Save; // +0x20 (idx=68)
    void* field__unk5; // +0x28 (idx=76)
    void* field_ss40_0; // +0x30 (idx=77)
};

// Method count by type:
//   SafeExamBrowser.SystemComponents.SystemInfo: 29 methods
//   SafeExamBrowser.SystemComponents.Network.NetworkAdapter: 29 methods
//   SafeExamBrowser.SystemComponents.Audio.Audio: 19 methods
//   SafeExamBrowser.SystemComponents.Registry.Registry: 13 methods
//   SafeExamBrowser.SystemComponents.Keyboard.KeyboardLayout: 12 methods
//   SafeExamBrowser.SystemComponents.Keyboard.Keyboard: 10 methods
//   SafeExamBrowser.SystemComponents.PowerSupply.PowerSupplyStatus: 9 methods
//   SafeExamBrowser.SystemComponents.Network.WirelessNetwork: 9 methods
//   SafeExamBrowser.SystemComponents.UserInfo: 6 methods
//   SafeExamBrowser.SystemComponents.PowerSupply.PowerSupply: 6 methods
//   <>c: 6 methods
//   SafeExamBrowser.SystemComponents.FileSystem: 4 methods
//   SafeExamBrowser.SystemComponents.Network.Extensions: 4 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods

} // namespace safeexambrowser_systemcomponents

// ── SafeExamBrowser.UserInterface.Contracts.dll ──
namespace safeexambrowser_userinterface_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.UserInterface.Contracts.Windows.Data.CredentialsDialogPurpose
// Flags: 0x0101
struct SafeExamBrowser_UserInterface_Contracts_Windows_Data_CredentialsDialogPurpose {
    void* field_rowser_UserInterface_Contracts_Browser_Data; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field__data2; // +0x10 (idx=4)
};

// SafeExamBrowser.UserInterface.Contracts.Windows.Data.ExamSelectionDialogResult
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Contracts_Windows_Data_ExamSelectionDialogResult {
    void* field_Interface_Contracts_Browser_Data; // +0x0 (idx=5)
    void* field_Nullable_1; // +0x8 (idx=6)
};

// SafeExamBrowser.UserInterface.Contracts.Windows.Data.LockScreenOption
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Contracts_Windows_Data_LockScreenOption {
    void* field__data0; // +0x0 (idx=7)
    void* field_ontracts_Browser_Data; // +0x8 (idx=8)
};

// SafeExamBrowser.UserInterface.Contracts.Windows.Data.LockScreenResult
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Contracts_Windows_Data_LockScreenResult {
    void* field_Nullable_1; // +0x0 (idx=9)
    void* field__data1; // +0x8 (idx=10)
    void* field_e_Contracts_Browser_Data; // +0x10 (idx=11)
};

// SafeExamBrowser.UserInterface.Contracts.Windows.Data.CredentialsDialogResult
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Contracts_Windows_Data_CredentialsDialogResult {
    void* field_Nullable_1; // +0x0 (idx=12)
    void* field__data1; // +0x8 (idx=13)
    void* field_Interface_Contracts_Browser_Data; // +0x10 (idx=14)
};

// SafeExamBrowser.UserInterface.Contracts.Windows.Data.ServerFailureDialogResult
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Contracts_Windows_Data_ServerFailureDialogResult {
    void* field_Nullable_1; // +0x0 (idx=15)
    void* field_value__; // +0x8 (idx=16)
    void* field_rowser_Data; // +0x10 (idx=17)
    void* field_ckingField; // +0x18 (idx=18)
};

// SafeExamBrowser.UserInterface.Contracts.Windows.Data.PasswordDialogResult
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Contracts_Windows_Data_PasswordDialogResult {
    void* field_Ok; // +0x0 (idx=19)
    void* field_r_Data; // +0x8 (idx=20)
};

// SafeExamBrowser.UserInterface.Contracts.Shell.Location
// Flags: 0x0101
struct SafeExamBrowser_UserInterface_Contracts_Shell_Location {
    void* field_ckingField; // +0x0 (idx=21)
    void* field_Error; // +0x8 (idx=22)
    void* field_a; // +0x10 (idx=23)
};

// SafeExamBrowser.UserInterface.Contracts.MessageBox.MessageBoxAction
// Flags: 0x0101
struct SafeExamBrowser_UserInterface_Contracts_MessageBox_MessageBoxAction {
    void* field___32854_; // +0x0 (idx=24)
    void* field_value__; // +0x8 (idx=25)
    void* field_eExamBrowser_Server_Contracts_Data; // +0x10 (idx=26)
    void* field___32854_; // +0x18 (idx=27)
};

// SafeExamBrowser.UserInterface.Contracts.MessageBox.MessageBoxIcon
// Flags: 0x0101
struct SafeExamBrowser_UserInterface_Contracts_MessageBox_MessageBoxIcon {
    void* field_Ok; // +0x0 (idx=28)
    void* field_eExamBrowser_Server_Contracts_Data; // +0x8 (idx=29)
    void* field_Nullable_1; // +0x10 (idx=30)
    void* field_value__; // +0x18 (idx=31)
    void* field_Browser_Server_Contracts_Data; // +0x20 (idx=32)
};

// SafeExamBrowser.UserInterface.Contracts.MessageBox.MessageBoxResult
// Flags: 0x0101
struct SafeExamBrowser_UserInterface_Contracts_MessageBox_MessageBoxResult {
    void* field_ckingField; // +0x0 (idx=33)
    void* field_Open; // +0x8 (idx=34)
    void* field_er_Server_Contracts_Data; // +0x10 (idx=35)
    void* field_Nullable_1; // +0x18 (idx=36)
    void* field__data4; // +0x20 (idx=37)
    void* field_Interface_Contracts_Browser_Data; // +0x28 (idx=38)
};

// SafeExamBrowser.UserInterface.Contracts.FileSystemDialog.FileSystemDialogResult
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Contracts_FileSystemDialog_FileSystemDialogResult {
    void* field_Nullable_1; // +0x0 (idx=39)
    void* field__data1; // +0x8 (idx=40)
};

// SafeExamBrowser.UserInterface.Contracts.FileSystemDialog.FileSystemElement
// Flags: 0x0101
struct SafeExamBrowser_UserInterface_Contracts_FileSystemDialog_FileSystemElement {
    void* field_e_Contracts_Browser_Data; // +0x0 (idx=41)
    void* field_Nullable_1; // +0x8 (idx=42)
    void* field__data2; // +0x10 (idx=43)
};

// SafeExamBrowser.UserInterface.Contracts.FileSystemDialog.FileSystemOperation
// Flags: 0x0101
struct SafeExamBrowser_UserInterface_Contracts_FileSystemDialog_FileSystemOperation {
    void* field__unk0; // +0x0 (idx=44)
    void* field_Nullable_1; // +0x8 (idx=45)
    void* field_amBrowser_Logging_Contracts; // +0x10 (idx=46)
};

// SafeExamBrowser.UserInterface.Contracts.Browser.Data.DownloadItemState
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Contracts_Browser_Data_DownloadItemState {
    void* field__unk0; // +0x0 (idx=47)
    void* field__ctor; // +0x8 (idx=48)
    void* field__unk2; // +0x10 (idx=49)
    void* field_ble_1; // +0x18 (idx=50)
    void* field_llable_1; // +0x20 (idx=51)
    void* field_llable_1; // +0x28 (idx=52)
    void* field_move_AddressChanged; // +0x30 (idx=53)
    void* field__unk7; // +0x38 (idx=54)
};

// SafeExamBrowser.UserInterface.Contracts.Browser.Data.JavaScriptResult
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Contracts_Browser_Data_JavaScriptResult {
    void* field_Activate; // +0x0 (idx=55)
    void* field__unk1; // +0x8 (idx=56)
    void* field_ble_1; // +0x10 (idx=57)
};

// Method count by type:
//   SafeExamBrowser.UserInterface.Contracts.Windows.IWindow: 8 methods
//   SafeExamBrowser.UserInterface.Contracts.Browser.IBrowserWindow: 8 methods
//   SafeExamBrowser.UserInterface.Contracts.Shell.ITaskviewActivator: 6 methods
//   SafeExamBrowser.UserInterface.Contracts.Proctoring.IProctoringFinalizationDialog: 4 methods
//   SafeExamBrowser.UserInterface.Contracts.Browser.Events.AddressChangedEventHandler: 4 methods
//   SafeExamBrowser.UserInterface.Contracts.Browser.Events.FindRequestedEventHandler: 4 methods
//   SafeExamBrowser.UserInterface.Contracts.Browser.Events.LoadFailedEventHandler: 4 methods
//   SafeExamBrowser.UserInterface.Contracts.Browser.Data.JavaScriptResult: 4 methods
//   SafeExamBrowser.UserInterface.Contracts.Proctoring.IProctoringWindow: 3 methods
//   SafeExamBrowser.UserInterface.Contracts.Shell.ITerminationActivator: 2 methods
//   SafeExamBrowser.UserInterface.Contracts.Proctoring.IProctoringControl: 1 methods
//   SafeExamBrowser.UserInterface.Contracts.Browser.Data.DownloadItemState: 1 methods

} // namespace safeexambrowser_userinterface_contracts

// ── SafeExamBrowser.UserInterface.Desktop.dll ──
namespace safeexambrowser_userinterface_desktop {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.UserInterface.Desktop.ControlFactory
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_ControlFactory {
    void* field_alog_b__12_2; // +0x0 (idx=2)
};

// SafeExamBrowser.UserInterface.Desktop.WindowFactory
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_WindowFactory {
    void* field__unk0; // +0x0 (idx=3)
};

// SafeExamBrowser.UserInterface.Desktop.FileSystemDialogFactory
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Desktop_FileSystemDialogFactory {
    void* field_text; // +0x0 (idx=4)
    void* field_alog_b__12_2; // +0x8 (idx=5)
};

// SafeExamBrowser.UserInterface.Desktop.MessageBoxFactory
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Desktop_MessageBoxFactory {
    void* field__unk0; // +0x0 (idx=6)
};

// SafeExamBrowser.UserInterface.Desktop.UserInterfaceFactory
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Desktop_UserInterfaceFactory {
    void* field_windowFactory; // +0x0 (idx=7)
    void* field_tializeCredentialsDialog_b__12_2; // +0x8 (idx=8)
    void* field__data2; // +0x10 (idx=9)
};

// SafeExamBrowser.UserInterface.Desktop.ViewModels.DateTimeViewModel
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_ViewModels_DateTimeViewModel {
    void* field__data0; // +0x0 (idx=10)
    void* field___12_0; // +0x8 (idx=11)
    void* field__data2; // +0x10 (idx=12)
    void* field_scrollViewer; // +0x18 (idx=13)
    void* field_alsDialog_b__12_2; // +0x20 (idx=14)
    void* field__unk5; // +0x28 (idx=15)
};

// SafeExamBrowser.UserInterface.Desktop.ViewModels.LogViewModel
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_ViewModels_LogViewModel {
    void* field_busyTimer; // +0x0 (idx=16)
    void* field__unk1; // +0x8 (idx=17)
    void* field__data2; // +0x10 (idx=18)
    void* field_status; // +0x18 (idx=19)
};

// SafeExamBrowser.UserInterface.Desktop.ViewModels.ProgressIndicatorViewModel
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_ViewModels_ProgressIndicatorViewModel {
    void* field_zeCredentialsDialog_b__12_2; // +0x0 (idx=20)
    void* field__unk1; // +0x8 (idx=21)
    void* field_appConfig; // +0x10 (idx=22)
    void* field_alog_b__12_2; // +0x18 (idx=23)
    void* field__data4; // +0x20 (idx=24)
    void* field_VersionInfo; // +0x28 (idx=25)
    void* field_alsDialog_b__12_2; // +0x30 (idx=26)
};

// SafeExamBrowser.UserInterface.Desktop.ViewModels.RuntimeWindowViewModel
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_ViewModels_RuntimeWindowViewModel {
    void* field__data0; // +0x0 (idx=27)
    void* field_ApplicationPanel; // +0x8 (idx=28)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.AboutWindow
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_AboutWindow {
    void* field_InitializeRaiseHandControl_b__2; // +0x0 (idx=29)
    void* field_egisterEvents_b__88_10; // +0x8 (idx=30)
    void* field__data2; // +0x10 (idx=31)
    void* field___12_0; // +0x18 (idx=32)
    void* field__unk4; // +0x20 (idx=33)
    void* field_text; // +0x28 (idx=34)
    void* field_ontrol_b__2; // +0x30 (idx=35)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.ActionCenter
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_ActionCenter {
    void* field__data0; // +0x0 (idx=36)
    void* field_closing; // +0x8 (idx=37)
    void* field_pdateProgress_b__0; // +0x10 (idx=38)
    void* field__data3; // +0x18 (idx=39)
    void* field_AddressChanged; // +0x20 (idx=40)
    void* field_izeWirelessNetworkControl_b__2; // +0x28 (idx=41)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.BrowserWindow
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_BrowserWindow {
    void* field__data0; // +0x0 (idx=42)
    void* field_ForwardNavigationRequested; // +0x8 (idx=43)
    void* field_izeWirelessNetworkControl_b__2; // +0x10 (idx=44)
    void* field__data3; // +0x18 (idx=45)
    void* field_ZoomOutRequested; // +0x20 (idx=46)
    void* field_izeWirelessNetworkControl_b__2; // +0x28 (idx=47)
    void* field_egisterEvents_b__88_10; // +0x30 (idx=48)
    void* field_HomeButton; // +0x38 (idx=49)
    void* field_ntrol_b__2; // +0x40 (idx=50)
    void* field_egisterEvents_b__88_10; // +0x48 (idx=51)
    void* field_UrlTextBox; // +0x50 (idx=52)
    void* field_ntrol_b__2; // +0x58 (idx=53)
    void* field_egisterEvents_b__88_10; // +0x60 (idx=54)
    void* field_MenuButton; // +0x68 (idx=55)
    void* field__unk14; // +0x70 (idx=56)
    void* field_egisterEvents_b__88_10; // +0x78 (idx=57)
    void* field_ZoomInButton; // +0x80 (idx=58)
    void* field_ntrol_b__2; // +0x88 (idx=59)
    void* field_egisterEvents_b__88_10; // +0x90 (idx=60)
    void* field_FindMenuItem; // +0x98 (idx=61)
    void* field_alsDialog_b__12_2; // +0xA0 (idx=62)
    void* field_egisterEvents_b__88_10; // +0xA8 (idx=63)
    void* field_DeveloperConsoleText; // +0xB0 (idx=64)
    void* field_ntrol_b__2; // +0xB8 (idx=65)
    void* field_egisterEvents_b__88_10; // +0xC0 (idx=66)
    void* field_Findbar; // +0xC8 (idx=67)
    void* field__b__2; // +0xD0 (idx=68)
    void* field_egisterEvents_b__88_10; // +0xD8 (idx=69)
    void* field_FindCaseSensitiveCheckBox; // +0xE0 (idx=70)
    void* field_ntrol_b__2; // +0xE8 (idx=71)
    void* field__unk30; // +0xF0 (idx=72)
    void* field_Message; // +0xF8 (idx=73)
    void* field_ntrol_b__2; // +0x100 (idx=74)
    void* field_egisterEvents_b__88_10; // +0x108 (idx=75)
    void* field__data34; // +0x110 (idx=76)
    void* field__b__2; // +0x118 (idx=77)
    void* field__unk36; // +0x120 (idx=78)
    void* field_operation; // +0x128 (idx=79)
    void* field_tializeAudioControl_b__2; // +0x130 (idx=80)
    void* field__unk39; // +0x138 (idx=81)
    void* field_showElementPath; // +0x140 (idx=82)
    void* field_alog_b__12_2; // +0x148 (idx=83)
    void* field_egisterEvents_b__88_10; // +0x150 (idx=84)
    void* field_Message; // +0x158 (idx=85)
    void* field_ioControl_b__2; // +0x160 (idx=86)
    void* field_egisterEvents_b__88_10; // +0x168 (idx=87)
    void* field_NewElementLabel; // +0x170 (idx=88)
    void* field__b__2; // +0x178 (idx=89)
    void* field_egisterEvents_b__88_10; // +0x180 (idx=90)
    void* field__data49; // +0x188 (idx=91)
    void* field_trol_b__2; // +0x190 (idx=92)
    void* field__unk51; // +0x198 (idx=93)
    void* field_canceled; // +0x1A0 (idx=94)
    void* field__data53; // +0x1A8 (idx=95)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.ExamSelectionDialog
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Desktop_Windows_ExamSelectionDialog {
    void* field_egisterEvents_b__88_10; // +0x0 (idx=96)
    void* field_Options; // +0x8 (idx=97)
    void* field_eKeyboardLayoutControl_b__2; // +0x10 (idx=98)
    void* field__data3; // +0x18 (idx=99)
    void* field_logger; // +0x20 (idx=100)
    void* field_oardLayoutControl_b__2; // +0x28 (idx=101)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.FileSystemDialog
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_FileSystemDialog {
    void* field__data0; // +0x0 (idx=102)
    void* field_ScrollViewer; // +0x8 (idx=103)
    void* field_alsDialog_b__12_2; // +0x10 (idx=104)
    void* field__unk3; // +0x18 (idx=105)
    void* field_closed; // +0x20 (idx=106)
    void* field_vents_b__88_2; // +0x28 (idx=107)
    void* field_egisterEvents_b__88_10; // +0x30 (idx=108)
    void* field_UsernameLabel; // +0x38 (idx=109)
    void* field__b__2; // +0x40 (idx=110)
    void* field_egisterEvents_b__88_10; // +0x48 (idx=111)
    void* field_ConfirmButton; // +0x50 (idx=112)
    void* field_ntrol_b__2; // +0x58 (idx=113)
    void* field__unk12; // +0x60 (idx=114)
    void* field_closed; // +0x68 (idx=115)
    void* field_vents_b__88_2; // +0x70 (idx=116)
    void* field_egisterEvents_b__88_10; // +0x78 (idx=117)
    void* field_ConfirmButton; // +0x80 (idx=118)
    void* field_ntrol_b__2; // +0x88 (idx=119)
    void* field__unk18; // +0x90 (idx=120)
    void* field_text; // +0x98 (idx=121)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.LockScreen
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_LockScreen {
    void* field_sterEvents_b__88_2; // +0x0 (idx=122)
    void* field__data1; // +0x8 (idx=123)
    void* field_CancellationRequested; // +0x10 (idx=124)
    void* field_tializeApplicationControl_b__2; // +0x18 (idx=125)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=126)
    void* field_Percentage; // +0x28 (idx=127)
    void* field_alsDialog_b__12_2; // +0x30 (idx=128)
    void* field_egisterEvents_b__88_10; // +0x38 (idx=129)
    void* field_CachePath; // +0x40 (idx=130)
    void* field__8_2; // +0x48 (idx=131)
    void* field_egisterEvents_b__88_10; // +0x50 (idx=132)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.LogWindow
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_LogWindow {
    void* field_Password; // +0x0 (idx=133)
    void* field_ntrol_b__2; // +0x8 (idx=134)
    void* field__data2; // +0x10 (idx=135)
    void* field_closing; // +0x18 (idx=136)
    void* field_pdateProgress_b__0; // +0x20 (idx=137)
    void* field__unk5; // +0x28 (idx=138)
    void* field_allowClose; // +0x30 (idx=139)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.CredentialsDialog
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Desktop_Windows_CredentialsDialog {
    void* field_rol_b__2; // +0x0 (idx=140)
    void* field__data1; // +0x8 (idx=141)
    void* field_InfoTextBlock; // +0x10 (idx=142)
    void* field_zeApplicationControl_b__2; // +0x18 (idx=143)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=144)
    void* field_LogTextBlock; // +0x28 (idx=145)
    void* field_pdateProgress_b__0; // +0x30 (idx=146)
    void* field_egisterEvents_b__88_10; // +0x38 (idx=147)
    void* field_Info; // +0x40 (idx=148)
    void* field_ntrol_b__2; // +0x48 (idx=149)
    void* field_egisterEvents_b__88_10; // +0x50 (idx=150)
    void* field__data11; // +0x58 (idx=151)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.PasswordDialog
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_PasswordDialog {
    void* field_b__2; // +0x0 (idx=152)
    void* field__data1; // +0x8 (idx=153)
    void* field_allowClose; // +0x10 (idx=154)
    void* field_sterEvents_b__88_2; // +0x18 (idx=155)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=156)
    void* field_ProgressBar; // +0x28 (idx=157)
    void* field_alsDialog_b__12_2; // +0x30 (idx=158)
    void* field__unk7; // +0x38 (idx=159)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.ProctoringFinalizationDialog
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Desktop_Windows_ProctoringFinalizationDialog {
    void* field_controls; // +0x0 (idx=160)
    void* field_b__88_13; // +0x8 (idx=161)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=162)
    void* field__data3; // +0x18 (idx=163)
    void* field_ontrol_b__2; // +0x20 (idx=164)
    void* field__data5; // +0x28 (idx=165)
    void* field_isFirstChildFocusedAtKeyDown; // +0x30 (idx=166)
    void* field_sNetworkControl_b__2; // +0x38 (idx=167)
    void* field_egisterEvents_b__88_10; // +0x40 (idx=168)
    void* field_NotificationStackPanel; // +0x48 (idx=169)
    void* field__8_2; // +0x50 (idx=170)
    void* field_egisterEvents_b__88_10; // +0x58 (idx=171)
    void* field__data12; // +0x60 (idx=172)
    void* field_vents_b__88_23; // +0x68 (idx=173)
    void* field__data14; // +0x70 (idx=174)
    void* field_Indicator; // +0x78 (idx=175)
    void* field__88_23; // +0x80 (idx=176)
    void* field_egisterEvents_b__88_10; // +0x88 (idx=177)
    void* field__data18; // +0x90 (idx=178)
    void* field_alog_b__12_2; // +0x98 (idx=179)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.ProctoringWindow
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Desktop_Windows_ProctoringWindow {
    void* field_egisterEvents_b__88_10; // +0x0 (idx=180)
    void* field_Progress; // +0x8 (idx=181)
    void* field_alsDialog_b__12_2; // +0x10 (idx=182)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.RuntimeWindow
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_RuntimeWindow {
    void* field__data0; // +0x0 (idx=183)
    void* field_invigilator; // +0x8 (idx=184)
    void* field_Events_b__88_3; // +0x10 (idx=185)
    void* field__data3; // +0x18 (idx=186)
    void* field_RaisedIcon; // +0x20 (idx=187)
    void* field__unk5; // +0x28 (idx=188)
    void* field_egisterEvents_b__88_10; // +0x30 (idx=189)
    void* field_HandButtonText; // +0x38 (idx=190)
    void* field_ntrol_b__2; // +0x40 (idx=191)
    void* field__data9; // +0x48 (idx=192)
    void* field_application; // +0x50 (idx=193)
    void* field_s_b__88_23; // +0x58 (idx=194)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.ServerFailureDialog
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Desktop_Windows_ServerFailureDialog {
    void* field_egisterEvents_b__88_10; // +0x0 (idx=195)
    void* field_Button; // +0x8 (idx=196)
    void* field_ializeRaiseHandControl_b__3; // +0x10 (idx=197)
    void* field__data3; // +0x18 (idx=198)
    void* field_Button; // +0x20 (idx=199)
    void* field__88_23; // +0x28 (idx=200)
    void* field__data6; // +0x30 (idx=201)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.SplashScreen
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_SplashScreen {
    void* field_audio; // +0x0 (idx=202)
    void* field_alog_b__12_2; // +0x8 (idx=203)
    void* field__data2; // +0x10 (idx=204)
    void* field_NoDeviceIcon; // +0x18 (idx=205)
    void* field__unk4; // +0x20 (idx=206)
    void* field_egisterEvents_b__88_10; // +0x28 (idx=207)
    void* field_PopupIcon; // +0x30 (idx=208)
    void* field_eHandControl_b__3; // +0x38 (idx=209)
    void* field_egisterEvents_b__88_10; // +0x40 (idx=210)
    void* field__data9; // +0x48 (idx=211)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.Taskview
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_Taskview {
    void* field_Control_b__3; // +0x0 (idx=212)
    void* field_egisterEvents_b__88_10; // +0x8 (idx=213)
    void* field__data2; // +0x10 (idx=214)
    void* field_rol_b__3; // +0x18 (idx=215)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=216)
    void* field_IsCurrentTextBlock; // +0x28 (idx=217)
};

// SafeExamBrowser.UserInterface.Desktop.Windows.Taskbar
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Windows_Taskbar {
    void* field_alsDialog_b__12_2; // +0x0 (idx=218)
    void* field_egisterEvents_b__88_10; // +0x8 (idx=219)
    void* field__data2; // +0x10 (idx=220)
    void* field_InitializeWirelessNetworkControl_b__3; // +0x18 (idx=221)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=222)
    void* field_LayoutsScrollViewer; // +0x28 (idx=223)
    void* field__8_2; // +0x30 (idx=224)
    void* field_egisterEvents_b__88_10; // +0x38 (idx=225)
    void* field__data8; // +0x40 (idx=226)
    void* field_alizeWirelessNetworkControl_b__3; // +0x48 (idx=227)
    void* field__data10; // +0x50 (idx=228)
    void* field_initialBrush; // +0x58 (idx=229)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskview.WindowControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskview_WindowControl {
    void* field_pdateProgress_b__0; // +0x0 (idx=230)
    void* field__data1; // +0x8 (idx=231)
    void* field_powerSupply; // +0x10 (idx=232)
    void* field_alog_b__12_2; // +0x18 (idx=233)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=234)
    void* field_Button; // +0x28 (idx=235)
    void* field_ializeRaiseHandControl_b__3; // +0x30 (idx=236)
    void* field_egisterEvents_b__88_10; // +0x38 (idx=237)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Browser.DownloadItemControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Browser_DownloadItemControl {
    void* field__data0; // +0x0 (idx=238)
    void* field__b__88_2; // +0x8 (idx=239)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=240)
    void* field__data3; // +0x18 (idx=241)
    void* field_trol_b__3; // +0x20 (idx=242)
    void* field_egisterEvents_b__88_10; // +0x28 (idx=243)
    void* field_IsCurrentTextBlock; // +0x30 (idx=244)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.RaiseHandControl
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_RaiseHandControl {
    void* field_alsDialog_b__12_2; // +0x0 (idx=245)
    void* field__data1; // +0x8 (idx=246)
    void* field_adapter; // +0x10 (idx=247)
    void* field_alog_b__12_2; // +0x18 (idx=248)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=249)
    void* field_Button; // +0x28 (idx=250)
    void* field__data6; // +0x30 (idx=251)
    void* field_egisterEvents_b__88_10; // +0x38 (idx=252)
    void* field__data8; // +0x40 (idx=253)
    void* field_isterEvents_b__88_3; // +0x48 (idx=254)
    void* field__unk10; // +0x50 (idx=255)
    void* field_LoweredIcon; // +0x58 (idx=256)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.ApplicationControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_ApplicationControl {
    void* field_s_b__88_3; // +0x0 (idx=257)
    void* field_egisterEvents_b__88_10; // +0x8 (idx=258)
    void* field_Message; // +0x10 (idx=259)
    void* field_ntrol_b__2; // +0x18 (idx=260)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=261)
    void* field_Icon; // +0x28 (idx=262)
    void* field_alsDialog_b__12_2; // +0x30 (idx=263)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.ApplicationWindowButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_ApplicationWindowButton {
    void* field__unk0; // +0x0 (idx=264)
    void* field_ApplicationName; // +0x8 (idx=265)
    void* field__88_23; // +0x10 (idx=266)
    void* field__data3; // +0x18 (idx=267)
    void* field_application; // +0x20 (idx=268)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.AudioControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_AudioControl {
    void* field_s_b__88_23; // +0x0 (idx=269)
    void* field_egisterEvents_b__88_10; // +0x8 (idx=270)
    void* field_Icon; // +0x10 (idx=271)
    void* field_alsDialog_b__12_2; // +0x18 (idx=272)
    void* field__unk4; // +0x20 (idx=273)
    void* field_text; // +0x28 (idx=274)
    void* field_pdateProgress_b__0; // +0x30 (idx=275)
    void* field__data7; // +0x38 (idx=276)
    void* field_Grid; // +0x40 (idx=277)
    void* field__unk9; // +0x48 (idx=278)
    void* field_egisterEvents_b__88_10; // +0x50 (idx=279)
    void* field_PopupIcon; // +0x58 (idx=280)
    void* field_eHandControl_b__3; // +0x60 (idx=281)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.Clock
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_Clock {
    void* field_egisterEvents_b__88_10; // +0x0 (idx=282)
    void* field_Text; // +0x8 (idx=283)
    void* field_pdateProgress_b__0; // +0x10 (idx=284)
    void* field_egisterEvents_b__88_10; // +0x18 (idx=285)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.KeyboardLayoutButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_KeyboardLayoutButton {
    void* field_TimeTextBlock; // +0x0 (idx=286)
    void* field_alsDialog_b__12_2; // +0x8 (idx=287)
    void* field__unk2; // +0x10 (idx=288)
    void* field_LayoutSelected; // +0x18 (idx=289)
    void* field_ntrol_b__2; // +0x20 (idx=290)
    void* field_egisterEvents_b__88_10; // +0x28 (idx=291)
    void* field_CultureNameTextBlock; // +0x30 (idx=292)
    void* field_alsDialog_b__12_2; // +0x38 (idx=293)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.KeyboardLayoutControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_KeyboardLayoutControl {
    void* field__unk0; // +0x0 (idx=294)
    void* field_text; // +0x8 (idx=295)
    void* field_tializeApplicationControl_b__2; // +0x10 (idx=296)
    void* field_egisterEvents_b__88_10; // +0x18 (idx=297)
    void* field_Button; // +0x20 (idx=298)
    void* field_alsDialog_b__12_2; // +0x28 (idx=299)
    void* field__unk6; // +0x30 (idx=300)
    void* field_IconButton; // +0x38 (idx=301)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.NotificationButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_NotificationButton {
    void* field__88_23; // +0x0 (idx=302)
    void* field__data1; // +0x8 (idx=303)
    void* field_initialBrush; // +0x10 (idx=304)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.PowerSupplyControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_PowerSupplyControl {
    void* field_pdateProgress_b__0; // +0x0 (idx=305)
    void* field__data1; // +0x8 (idx=306)
    void* field_powerSupply; // +0x10 (idx=307)
    void* field_alog_b__12_2; // +0x18 (idx=308)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=309)
    void* field_PowerPlug; // +0x28 (idx=310)
    void* field_alsDialog_b__12_2; // +0x30 (idx=311)
    void* field__data7; // +0x38 (idx=312)
    void* field_Clicked; // +0x40 (idx=313)
    void* field_ntrol_b__2; // +0x48 (idx=314)
    void* field_egisterEvents_b__88_10; // +0x50 (idx=315)
    void* field__data11; // +0x58 (idx=316)
    void* field_trol_b__3; // +0x60 (idx=317)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.QuitButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_QuitButton {
    void* field_egisterEvents_b__88_10; // +0x0 (idx=318)
    void* field_IsCurrentTextBlock; // +0x8 (idx=319)
    void* field_alsDialog_b__12_2; // +0x10 (idx=320)
    void* field__data3; // +0x18 (idx=321)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.NetworkButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_NetworkButton {
    void* field_adapter; // +0x0 (idx=322)
    void* field_alog_b__12_2; // +0x8 (idx=323)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=324)
    void* field_WirelessNetworksStackPanel; // +0x18 (idx=325)
    void* field_ntrol_b__2; // +0x20 (idx=326)
    void* field_egisterEvents_b__88_10; // +0x28 (idx=327)
    void* field_NetworkStatusIcon; // +0x30 (idx=328)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.Taskbar.NetworkControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_Taskbar_NetworkControl {
    void* field_alsDialog_b__12_2; // +0x0 (idx=329)
    void* field_sterEvents_b__88_10; // +0x8 (idx=330)
    void* field_message; // +0x10 (idx=331)
    void* field_ializeApplicationControl_b__3; // +0x18 (idx=332)
    void* field_sterEvents_b__88_10; // +0x20 (idx=333)
    void* field___4__this; // +0x28 (idx=334)
    void* field_eApplicationControl_b__3; // +0x30 (idx=335)
    void* field_sterEvents_b__88_10; // +0x38 (idx=336)
    void* field___4__this; // +0x40 (idx=337)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.RaiseHandControl
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_RaiseHandControl {
    void* field___12_0; // +0x0 (idx=338)
    void* field_sterEvents_b__88_10; // +0x8 (idx=339)
    void* field___4__this; // +0x10 (idx=340)
    void* field__data3; // +0x18 (idx=341)
    void* field_sterEvents_b__88_10; // +0x20 (idx=342)
    void* field___4__this; // +0x28 (idx=343)
    void* field_l_b__2; // +0x30 (idx=344)
    void* field_sterEvents_b__88_10; // +0x38 (idx=345)
    void* field_logger; // +0x40 (idx=346)
    void* field__data9; // +0x48 (idx=347)
    void* field_sterEvents_b__88_10; // +0x50 (idx=348)
    void* field_title; // +0x58 (idx=349)
    void* field__data12; // +0x60 (idx=350)
    void* field_sterEvents_b__88_10; // +0x68 (idx=351)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.ApplicationControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_ApplicationControl {
    void* field_message; // +0x0 (idx=352)
    void* field___12_0; // +0x8 (idx=353)
    void* field_sterEvents_b__88_10; // +0x10 (idx=354)
    void* field_window; // +0x18 (idx=355)
    void* field__data4; // +0x20 (idx=356)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.ApplicationButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_ApplicationButton {
    void* field_sterEvents_b__88_10; // +0x0 (idx=357)
    void* field___9__1; // +0x8 (idx=358)
    void* field__data2; // +0x10 (idx=359)
    void* field_sterEvents_b__88_10; // +0x18 (idx=360)
    void* field___4__this; // +0x20 (idx=361)
    void* field__b__2; // +0x28 (idx=362)
    void* field_sterEvents_b__88_10; // +0x30 (idx=363)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.AudioControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_AudioControl {
    void* field_message; // +0x0 (idx=364)
    void* field___12_0; // +0x8 (idx=365)
    void* field_sterEvents_b__88_10; // +0x10 (idx=366)
    void* field_showElementPath; // +0x18 (idx=367)
    void* field_ontrol_b__3; // +0x20 (idx=368)
    void* field_sterEvents_b__88_10; // +0x28 (idx=369)
    void* field___4__this; // +0x30 (idx=370)
    void* field__3; // +0x38 (idx=371)
    void* field_sterEvents_b__88_10; // +0x40 (idx=372)
    void* field___4__this; // +0x48 (idx=373)
    void* field_eyboardLayoutControl_b__3; // +0x50 (idx=374)
    void* field_sterEvents_b__88_10; // +0x58 (idx=375)
    void* field_value; // +0x60 (idx=376)
    void* field_rdLayoutControl_b__3; // +0x68 (idx=377)
    void* field_sterEvents_b__88_10; // +0x70 (idx=378)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.Clock
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_Clock {
    void* field__data0; // +0x0 (idx=379)
    void* field_ontrol_b__3; // +0x8 (idx=380)
    void* field_sterEvents_b__88_10; // +0x10 (idx=381)
    void* field_value; // +0x18 (idx=382)
    void* field_ontrol_b__3; // +0x20 (idx=383)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.KeyboardLayoutButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_KeyboardLayoutButton {
    void* field_sterEvents_b__88_10; // +0x0 (idx=384)
    void* field_forward; // +0x8 (idx=385)
    void* field_ontrol_b__3; // +0x10 (idx=386)
    void* field_sterEvents_b__88_10; // +0x18 (idx=387)
    void* field___4__this; // +0x20 (idx=388)
    void* field_ontrol_b__3; // +0x28 (idx=389)
    void* field_sterEvents_b__88_10; // +0x30 (idx=390)
    void* field___4__this; // +0x38 (idx=391)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.KeyboardLayoutControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_KeyboardLayoutControl {
    void* field_pdateProgress_b__0; // +0x0 (idx=392)
    void* field_sterEvents_b__88_10; // +0x8 (idx=393)
    void* field___4__this; // +0x10 (idx=394)
    void* field___12_0; // +0x18 (idx=395)
    void* field_sterEvents_b__88_10; // +0x20 (idx=396)
    void* field_parent; // +0x28 (idx=397)
    void* field_nts_b__88_14; // +0x30 (idx=398)
    void* field_sterEvents_b__88_10; // +0x38 (idx=399)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.NotificationButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_NotificationButton {
    void* field_parent; // +0x0 (idx=400)
    void* field__data1; // +0x8 (idx=401)
    void* field_sterEvents_b__88_10; // +0x10 (idx=402)
    void* field_status; // +0x18 (idx=403)
    void* field_ts_b__88_24; // +0x20 (idx=404)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.PowerSupplyControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_PowerSupplyControl {
    void* field_sterEvents_b__88_10; // +0x0 (idx=405)
    void* field___4__this; // +0x8 (idx=406)
    void* field_pdateProgress_b__0; // +0x10 (idx=407)
    void* field_sterEvents_b__88_10; // +0x18 (idx=408)
    void* field___4__this; // +0x20 (idx=409)
    void* field_pdateProgress_b__0; // +0x28 (idx=410)
    void* field_sterEvents_b__88_10; // +0x30 (idx=411)
    void* field_parent; // +0x38 (idx=412)
    void* field_sterEvents_b__88_4; // +0x40 (idx=413)
    void* field_sterEvents_b__88_10; // +0x48 (idx=414)
    void* field___4__this; // +0x50 (idx=415)
    void* field_pdateProgress_b__0; // +0x58 (idx=416)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.QuitButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_QuitButton {
    void* field_sterEvents_b__88_10; // +0x0 (idx=417)
    void* field___4__this; // +0x8 (idx=418)
    void* field_pdateProgress_b__0; // +0x10 (idx=419)
    void* field_sterEvents_b__88_10; // +0x18 (idx=420)
    void* field___4__this; // +0x20 (idx=421)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.NetworkButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_NetworkButton {
    void* field___12_0; // +0x0 (idx=422)
    void* field_sterEvents_b__88_10; // +0x8 (idx=423)
    void* field_originalBrush; // +0x10 (idx=424)
    void* field__4; // +0x18 (idx=425)
    void* field_sterEvents_b__88_10; // +0x20 (idx=426)
    void* field___9__9; // +0x28 (idx=427)
    void* field_iseHandControl_b__4; // +0x30 (idx=428)
};

// SafeExamBrowser.UserInterface.Desktop.Controls.ActionCenter.NetworkControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Desktop_Controls_ActionCenter_NetworkControl {
    void* field_sterEvents_b__88_10; // +0x0 (idx=429)
    void* field___9__6; // +0x8 (idx=430)
    void* field_ndControl_b__4; // +0x10 (idx=431)
    void* field_sterEvents_b__88_10; // +0x18 (idx=432)
    void* field_icon; // +0x20 (idx=433)
    void* field_tializeWirelessNetworkControl_b__4; // +0x28 (idx=434)
    void* field_sterEvents_b__88_10; // +0x30 (idx=435)
    void* field_lastOpenedBySpacePress; // +0x38 (idx=436)
    void* field_WirelessNetworkControl_b__3; // +0x40 (idx=437)
    void* field_sterEvents_b__88_10; // +0x48 (idx=438)
    void* field___9__9; // +0x50 (idx=439)
};

// <<FocusBrowser>b__63_0>d
// Flags: 0x100103
struct __FocusBrowser_b__63_0_d {
    void* field_sterEvents_b__88_10; // +0x0 (idx=504)
    void* field___u__1; // +0x8 (idx=505)
    void* field__unk2; // +0x10 (idx=506)
    void* field__data3; // +0x18 (idx=507)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field__unk0; // +0x0 (idx=590)
    void* field_rol_b__10; // +0x8 (idx=591)
    void* field_elativeHeight_b__21_0; // +0x10 (idx=592)
};

// <<FocusToolbar>b__0>d
// Flags: 0x100103
struct __FocusToolbar_b__0_d {
    void* field__unk0; // +0x0 (idx=670)
    void* field_get_MaxProgress; // +0x8 (idx=671)
    void* field__unk2; // +0x10 (idx=672)
    void* field__data3; // +0x18 (idx=673)
};

// Method count by type:
//   <>c: 4 methods
//   <<FocusToolbar>b__0>d: 1 methods

} // namespace safeexambrowser_userinterface_desktop

// ── SafeExamBrowser.UserInterface.Mobile.dll ──
namespace safeexambrowser_userinterface_mobile {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.UserInterface.Mobile.ControlFactory
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_ControlFactory {
    void* field__b__13_2; // +0x0 (idx=2)
};

// SafeExamBrowser.UserInterface.Mobile.WindowFactory
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_WindowFactory {
    void* field__unk0; // +0x0 (idx=3)
};

// SafeExamBrowser.UserInterface.Mobile.FileSystemDialogFactory
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Mobile_FileSystemDialogFactory {
    void* field_text; // +0x0 (idx=4)
    void* field__b__13_2; // +0x8 (idx=5)
};

// SafeExamBrowser.UserInterface.Mobile.MessageBoxFactory
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Mobile_MessageBoxFactory {
    void* field__unk0; // +0x0 (idx=6)
};

// SafeExamBrowser.UserInterface.Mobile.UserInterfaceFactory
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Mobile_UserInterfaceFactory {
    void* field_windowFactory; // +0x0 (idx=7)
    void* field_rEvents_b__88_2; // +0x8 (idx=8)
    void* field__data2; // +0x10 (idx=9)
};

// SafeExamBrowser.UserInterface.Mobile.ViewModels.DateTimeViewModel
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_ViewModels_DateTimeViewModel {
    void* field__data0; // +0x0 (idx=10)
    void* field___22_0; // +0x8 (idx=11)
    void* field__data2; // +0x10 (idx=12)
    void* field_scrollViewer; // +0x18 (idx=13)
    void* field__unk4; // +0x20 (idx=14)
    void* field__unk5; // +0x28 (idx=15)
};

// SafeExamBrowser.UserInterface.Mobile.ViewModels.LogViewModel
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_ViewModels_LogViewModel {
    void* field_busyTimer; // +0x0 (idx=16)
    void* field_ss_b__0; // +0x8 (idx=17)
    void* field__data2; // +0x10 (idx=18)
    void* field_status; // +0x18 (idx=19)
};

// SafeExamBrowser.UserInterface.Mobile.ViewModels.ProgressIndicatorViewModel
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_ViewModels_ProgressIndicatorViewModel {
    void* field_ts_b__88_2; // +0x0 (idx=20)
    void* field__unk1; // +0x8 (idx=21)
    void* field_appConfig; // +0x10 (idx=22)
    void* field__b__13_2; // +0x18 (idx=23)
    void* field__data4; // +0x20 (idx=24)
    void* field_VersionInfo; // +0x28 (idx=25)
    void* field__unk6; // +0x30 (idx=26)
};

// SafeExamBrowser.UserInterface.Mobile.ViewModels.RuntimeWindowViewModel
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_ViewModels_RuntimeWindowViewModel {
    void* field__data0; // +0x0 (idx=27)
    void* field_ApplicationPanel; // +0x8 (idx=28)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.AboutWindow
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_AboutWindow {
    void* field_zeWirelessNetworkControl_b__2; // +0x0 (idx=29)
    void* field_egisterEvents_b__88_10; // +0x8 (idx=30)
    void* field__data2; // +0x10 (idx=31)
    void* field___22_0; // +0x18 (idx=32)
    void* field__unk4; // +0x20 (idx=33)
    void* field_text; // +0x28 (idx=34)
    void* field_trol_b__2; // +0x30 (idx=35)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.ActionCenter
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_ActionCenter {
    void* field__data0; // +0x0 (idx=36)
    void* field_closing; // +0x8 (idx=37)
    void* field_b__0; // +0x10 (idx=38)
    void* field__data3; // +0x18 (idx=39)
    void* field_AddressChanged; // +0x20 (idx=40)
    void* field_eApplicationControl_b__2; // +0x28 (idx=41)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.BrowserWindow
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_BrowserWindow {
    void* field__data0; // +0x0 (idx=42)
    void* field_ForwardNavigationRequested; // +0x8 (idx=43)
    void* field_eApplicationControl_b__2; // +0x10 (idx=44)
    void* field__data3; // +0x18 (idx=45)
    void* field_ZoomOutRequested; // +0x20 (idx=46)
    void* field_eApplicationControl_b__2; // +0x28 (idx=47)
    void* field_egisterEvents_b__88_10; // +0x30 (idx=48)
    void* field_HomeButton; // +0x38 (idx=49)
    void* field_b__2; // +0x40 (idx=50)
    void* field_egisterEvents_b__88_10; // +0x48 (idx=51)
    void* field_UrlTextBox; // +0x50 (idx=52)
    void* field_b__2; // +0x58 (idx=53)
    void* field_egisterEvents_b__88_10; // +0x60 (idx=54)
    void* field_MenuButton; // +0x68 (idx=55)
    void* field_ializeAudioControl_b__2; // +0x70 (idx=56)
    void* field_egisterEvents_b__88_10; // +0x78 (idx=57)
    void* field_ZoomInButton; // +0x80 (idx=58)
    void* field_b__2; // +0x88 (idx=59)
    void* field_egisterEvents_b__88_10; // +0x90 (idx=60)
    void* field_FindMenuItem; // +0x98 (idx=61)
    void* field__unk20; // +0xA0 (idx=62)
    void* field_egisterEvents_b__88_10; // +0xA8 (idx=63)
    void* field_DeveloperConsoleText; // +0xB0 (idx=64)
    void* field_b__2; // +0xB8 (idx=65)
    void* field_egisterEvents_b__88_10; // +0xC0 (idx=66)
    void* field_Findbar; // +0xC8 (idx=67)
    void* field__data26; // +0xD0 (idx=68)
    void* field_egisterEvents_b__88_10; // +0xD8 (idx=69)
    void* field_FindCaseSensitiveCheckBox; // +0xE0 (idx=70)
    void* field_b__2; // +0xE8 (idx=71)
    void* field__unk30; // +0xF0 (idx=72)
    void* field_Message; // +0xF8 (idx=73)
    void* field_InitializeKeyboardLayoutControl_b__2; // +0x100 (idx=74)
    void* field_egisterEvents_b__88_10; // +0x108 (idx=75)
    void* field__data34; // +0x110 (idx=76)
    void* field_alizeKeyboardLayoutControl_b__2; // +0x118 (idx=77)
    void* field__unk36; // +0x120 (idx=78)
    void* field_operation; // +0x128 (idx=79)
    void* field_ardLayoutControl_b__2; // +0x130 (idx=80)
    void* field__unk39; // +0x138 (idx=81)
    void* field_showElementPath; // +0x140 (idx=82)
    void* field__b__13_2; // +0x148 (idx=83)
    void* field_egisterEvents_b__88_10; // +0x150 (idx=84)
    void* field_Message; // +0x158 (idx=85)
    void* field_ontrol_b__2; // +0x160 (idx=86)
    void* field_egisterEvents_b__88_10; // +0x168 (idx=87)
    void* field_NewElementLabel; // +0x170 (idx=88)
    void* field__data47; // +0x178 (idx=89)
    void* field_egisterEvents_b__88_10; // +0x180 (idx=90)
    void* field__data49; // +0x188 (idx=91)
    void* field_l_b__2; // +0x190 (idx=92)
    void* field__unk51; // +0x198 (idx=93)
    void* field_canceled; // +0x1A0 (idx=94)
    void* field_c_2; // +0x1A8 (idx=95)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.ExamSelectionDialog
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Mobile_Windows_ExamSelectionDialog {
    void* field_egisterEvents_b__88_10; // +0x0 (idx=96)
    void* field_Options; // +0x8 (idx=97)
    void* field_terEvents_b__88_13; // +0x10 (idx=98)
    void* field__data3; // +0x18 (idx=99)
    void* field_logger; // +0x20 (idx=100)
    void* field_ents_b__88_13; // +0x28 (idx=101)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.FileSystemDialog
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_FileSystemDialog {
    void* field__data0; // +0x0 (idx=102)
    void* field_ScrollViewer; // +0x8 (idx=103)
    void* field__unk2; // +0x10 (idx=104)
    void* field__unk3; // +0x18 (idx=105)
    void* field_Image; // +0x20 (idx=106)
    void* field__unk5; // +0x28 (idx=107)
    void* field_egisterEvents_b__88_10; // +0x30 (idx=108)
    void* field_YesButton; // +0x38 (idx=109)
    void* field_b__2; // +0x40 (idx=110)
    void* field__unk9; // +0x48 (idx=111)
    void* field_closed; // +0x50 (idx=112)
    void* field__b__2; // +0x58 (idx=113)
    void* field_egisterEvents_b__88_10; // +0x60 (idx=114)
    void* field_UsernameLabel; // +0x68 (idx=115)
    void* field__data14; // +0x70 (idx=116)
    void* field_egisterEvents_b__88_10; // +0x78 (idx=117)
    void* field_ConfirmButton; // +0x80 (idx=118)
    void* field_b__2; // +0x88 (idx=119)
    void* field__unk18; // +0x90 (idx=120)
    void* field_closed; // +0x98 (idx=121)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.LockScreen
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_LockScreen {
    void* field__b__2; // +0x0 (idx=122)
    void* field_egisterEvents_b__88_10; // +0x8 (idx=123)
    void* field_ConfirmButton; // +0x10 (idx=124)
    void* field_b__2; // +0x18 (idx=125)
    void* field__unk4; // +0x20 (idx=126)
    void* field_text; // +0x28 (idx=127)
    void* field_ntrol_b__2; // +0x30 (idx=128)
    void* field__data7; // +0x38 (idx=129)
    void* field_CancellationRequested; // +0x40 (idx=130)
    void* field_eAudioControl_b__2; // +0x48 (idx=131)
    void* field_egisterEvents_b__88_10; // +0x50 (idx=132)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.LogWindow
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_LogWindow {
    void* field_Percentage; // +0x0 (idx=133)
    void* field__unk1; // +0x8 (idx=134)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=135)
    void* field_CachePath; // +0x18 (idx=136)
    void* field_tializeWirelessNetworkControl_b__2; // +0x20 (idx=137)
    void* field_egisterEvents_b__88_10; // +0x28 (idx=138)
    void* field_Password; // +0x30 (idx=139)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.MessageBoxDialog
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_MessageBoxDialog {
    void* field_b__2; // +0x0 (idx=140)
    void* field__data1; // +0x8 (idx=141)
    void* field_closing; // +0x10 (idx=142)
    void* field_b__0; // +0x18 (idx=143)
    void* field__unk4; // +0x20 (idx=144)
    void* field_allowClose; // +0x28 (idx=145)
    void* field_sterEvents_b__88_23; // +0x30 (idx=146)
    void* field__data7; // +0x38 (idx=147)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.CredentialsDialog
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_CredentialsDialog {
    void* field_InfoTextBlock; // +0x0 (idx=148)
    void* field_oControl_b__2; // +0x8 (idx=149)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=150)
    void* field_LogTextBlock; // +0x18 (idx=151)
    void* field_b__0; // +0x20 (idx=152)
    void* field_egisterEvents_b__88_10; // +0x28 (idx=153)
    void* field_Info; // +0x30 (idx=154)
    void* field_b__2; // +0x38 (idx=155)
    void* field_egisterEvents_b__88_10; // +0x40 (idx=156)
    void* field__data9; // +0x48 (idx=157)
    void* field_Events_b__88_23; // +0x50 (idx=158)
    void* field__data11; // +0x58 (idx=159)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.PasswordDialog
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_PasswordDialog {
    void* field_appConfig; // +0x0 (idx=160)
    void* field_ntrol_b__2; // +0x8 (idx=161)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=162)
    void* field_ProgressBar; // +0x18 (idx=163)
    void* field__unk4; // +0x20 (idx=164)
    void* field__data5; // +0x28 (idx=165)
    void* field_logger; // +0x30 (idx=166)
    void* field_b__0; // +0x38 (idx=167)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.ProctoringFinalizationDialog
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Mobile_Windows_ProctoringFinalizationDialog {
    void* field__data0; // +0x0 (idx=168)
    void* field_QuitButtonClicked; // +0x8 (idx=169)
    void* field_tializeWirelessNetworkControl_b__2; // +0x10 (idx=170)
    void* field_egisterEvents_b__88_10; // +0x18 (idx=171)
    void* field_Clock; // +0x20 (idx=172)
    void* field__88_23; // +0x28 (idx=173)
    void* field__unk6; // +0x30 (idx=174)
    void* field_controls; // +0x38 (idx=175)
    void* field__3; // +0x40 (idx=176)
    void* field_egisterEvents_b__88_10; // +0x48 (idx=177)
    void* field__data10; // +0x50 (idx=178)
    void* field_lizeRaiseHandControl_b__3; // +0x58 (idx=179)
    void* field__data12; // +0x60 (idx=180)
    void* field_Indicator; // +0x68 (idx=181)
    void* field__b__88_13; // +0x70 (idx=182)
    void* field_egisterEvents_b__88_10; // +0x78 (idx=183)
    void* field__data16; // +0x80 (idx=184)
    void* field__b__13_2; // +0x88 (idx=185)
    void* field_egisterEvents_b__88_10; // +0x90 (idx=186)
    void* field_Progress; // +0x98 (idx=187)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.ProctoringWindow
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Mobile_Windows_ProctoringWindow {
    void* field__unk0; // +0x0 (idx=188)
    void* field__data1; // +0x8 (idx=189)
    void* field_invigilator; // +0x10 (idx=190)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.RuntimeWindow
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_RuntimeWindow {
    void* field_l_b__3; // +0x0 (idx=191)
    void* field__data1; // +0x8 (idx=192)
    void* field_RaisedIcon; // +0x10 (idx=193)
    void* field_ializeAudioControl_b__2; // +0x18 (idx=194)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=195)
    void* field_HandButtonText; // +0x28 (idx=196)
    void* field_b__2; // +0x30 (idx=197)
    void* field__data7; // +0x38 (idx=198)
    void* field_application; // +0x40 (idx=199)
    void* field_RaiseHandControl_b__3; // +0x48 (idx=200)
    void* field_egisterEvents_b__88_10; // +0x50 (idx=201)
    void* field_Button; // +0x58 (idx=202)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.ServerFailureDialog
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Mobile_Windows_ServerFailureDialog {
    void* field_relessNetworkControl_b__3; // +0x0 (idx=203)
    void* field__data1; // +0x8 (idx=204)
    void* field_Button; // +0x10 (idx=205)
    void* field__b__88_13; // +0x18 (idx=206)
    void* field__data4; // +0x20 (idx=207)
    void* field_audio; // +0x28 (idx=208)
    void* field__b__13_2; // +0x30 (idx=209)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.SplashScreen
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_SplashScreen {
    void* field__data0; // +0x0 (idx=210)
    void* field_NoDeviceIcon; // +0x8 (idx=211)
    void* field_ializeAudioControl_b__2; // +0x10 (idx=212)
    void* field_egisterEvents_b__88_10; // +0x18 (idx=213)
    void* field_PopupIcon; // +0x20 (idx=214)
    void* field_orkControl_b__3; // +0x28 (idx=215)
    void* field_egisterEvents_b__88_10; // +0x30 (idx=216)
    void* field__data7; // +0x38 (idx=217)
    void* field_ntrol_b__3; // +0x40 (idx=218)
    void* field_egisterEvents_b__88_10; // +0x48 (idx=219)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.Taskbar
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_Taskbar {
    void* field__data0; // +0x0 (idx=220)
    void* field_l_b__3; // +0x8 (idx=221)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=222)
    void* field_IsCurrentTextBlock; // +0x18 (idx=223)
    void* field__unk4; // +0x20 (idx=224)
    void* field_egisterEvents_b__88_10; // +0x28 (idx=225)
    void* field__data6; // +0x30 (idx=226)
    void* field_itializeApplicationControl_b__3; // +0x38 (idx=227)
    void* field_egisterEvents_b__88_10; // +0x40 (idx=228)
    void* field_LayoutsScrollViewer; // +0x48 (idx=229)
    void* field_tializeWirelessNetworkControl_b__2; // +0x50 (idx=230)
    void* field_egisterEvents_b__88_10; // +0x58 (idx=231)
};

// SafeExamBrowser.UserInterface.Mobile.Windows.Taskview
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Windows_Taskview {
    void* field__data0; // +0x0 (idx=232)
    void* field_izeApplicationControl_b__3; // +0x8 (idx=233)
    void* field__data2; // +0x10 (idx=234)
    void* field_initialBrush; // +0x18 (idx=235)
    void* field_b__0; // +0x20 (idx=236)
    void* field__data5; // +0x28 (idx=237)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskview.WindowControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskview_WindowControl {
    void* field_powerSupply; // +0x0 (idx=238)
    void* field__b__13_2; // +0x8 (idx=239)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=240)
    void* field_Button; // +0x18 (idx=241)
    void* field_relessNetworkControl_b__3; // +0x20 (idx=242)
    void* field_egisterEvents_b__88_10; // +0x28 (idx=243)
    void* field__data6; // +0x30 (idx=244)
    void* field__unk7; // +0x38 (idx=245)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Browser.DownloadItemControl
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Mobile_Controls_Browser_DownloadItemControl {
    void* field_egisterEvents_b__88_10; // +0x0 (idx=246)
    void* field__data1; // +0x8 (idx=247)
    void* field___3; // +0x10 (idx=248)
    void* field_egisterEvents_b__88_10; // +0x18 (idx=249)
    void* field_IsCurrentTextBlock; // +0x20 (idx=250)
    void* field__unk5; // +0x28 (idx=251)
    void* field__data6; // +0x30 (idx=252)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.RaiseHandControl
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_RaiseHandControl {
    void* field_adapter; // +0x0 (idx=253)
    void* field__b__13_2; // +0x8 (idx=254)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=255)
    void* field_Button; // +0x18 (idx=256)
    void* field_alizeAudioControl_b__3; // +0x20 (idx=257)
    void* field_egisterEvents_b__88_10; // +0x28 (idx=258)
    void* field__data6; // +0x30 (idx=259)
    void* field_ontrol_b__3; // +0x38 (idx=260)
    void* field__unk8; // +0x40 (idx=261)
    void* field_LoweredIcon; // +0x48 (idx=262)
    void* field__3; // +0x50 (idx=263)
    void* field_egisterEvents_b__88_10; // +0x58 (idx=264)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.ApplicationControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_ApplicationControl {
    void* field_Message; // +0x0 (idx=265)
    void* field_b__2; // +0x8 (idx=266)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=267)
    void* field_Icon; // +0x18 (idx=268)
    void* field__unk4; // +0x20 (idx=269)
    void* field__unk5; // +0x28 (idx=270)
    void* field_window; // +0x30 (idx=271)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.ApplicationWindowButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_ApplicationWindowButton {
    void* field__3; // +0x0 (idx=272)
    void* field_egisterEvents_b__88_10; // +0x8 (idx=273)
    void* field_Text; // +0x10 (idx=274)
    void* field_b__0; // +0x18 (idx=275)
    void* field_egisterEvents_b__88_10; // +0x20 (idx=276)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.AudioControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_AudioControl {
    void* field_ApplicationButton; // +0x0 (idx=277)
    void* field_tializeWirelessNetworkControl_b__2; // +0x8 (idx=278)
    void* field__unk2; // +0x10 (idx=279)
    void* field_text; // +0x18 (idx=280)
    void* field_b__0; // +0x20 (idx=281)
    void* field__data5; // +0x28 (idx=282)
    void* field_Grid; // +0x30 (idx=283)
    void* field_ializeAudioControl_b__2; // +0x38 (idx=284)
    void* field_egisterEvents_b__88_10; // +0x40 (idx=285)
    void* field_PopupIcon; // +0x48 (idx=286)
    void* field_orkControl_b__3; // +0x50 (idx=287)
    void* field_egisterEvents_b__88_10; // +0x58 (idx=288)
    void* field_Text; // +0x60 (idx=289)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.Clock
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_Clock {
    void* field_b__0; // +0x0 (idx=290)
    void* field_egisterEvents_b__88_10; // +0x8 (idx=291)
    void* field_TimeTextBlock; // +0x10 (idx=292)
    void* field__unk3; // +0x18 (idx=293)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.KeyboardLayoutButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_KeyboardLayoutButton {
    void* field__unk0; // +0x0 (idx=294)
    void* field_LayoutSelected; // +0x8 (idx=295)
    void* field_b__2; // +0x10 (idx=296)
    void* field_egisterEvents_b__88_10; // +0x18 (idx=297)
    void* field_CultureNameTextBlock; // +0x20 (idx=298)
    void* field__unk5; // +0x28 (idx=299)
    void* field__unk6; // +0x30 (idx=300)
    void* field_text; // +0x38 (idx=301)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.KeyboardLayoutControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_KeyboardLayoutControl {
    void* field_eAudioControl_b__2; // +0x0 (idx=302)
    void* field_egisterEvents_b__88_10; // +0x8 (idx=303)
    void* field_Button; // +0x10 (idx=304)
    void* field__unk3; // +0x18 (idx=305)
    void* field__unk4; // +0x20 (idx=306)
    void* field_IconButton; // +0x28 (idx=307)
    void* field__b__88_13; // +0x30 (idx=308)
    void* field__data7; // +0x38 (idx=309)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.NotificationButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_NotificationButton {
    void* field_initialBrush; // +0x0 (idx=310)
    void* field_b__0; // +0x8 (idx=311)
    void* field__data2; // +0x10 (idx=312)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.PowerSupplyControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_PowerSupplyControl {
    void* field_powerSupply; // +0x0 (idx=313)
    void* field__b__13_2; // +0x8 (idx=314)
    void* field_egisterEvents_b__88_10; // +0x10 (idx=315)
    void* field_PowerPlug; // +0x18 (idx=316)
    void* field__unk4; // +0x20 (idx=317)
    void* field__data5; // +0x28 (idx=318)
    void* field_Clicked; // +0x30 (idx=319)
    void* field_b__2; // +0x38 (idx=320)
    void* field_egisterEvents_b__88_10; // +0x40 (idx=321)
    void* field__data9; // +0x48 (idx=322)
    void* field___3; // +0x50 (idx=323)
    void* field_egisterEvents_b__88_10; // +0x58 (idx=324)
    void* field_IsCurrentTextBlock; // +0x60 (idx=325)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.QuitButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_QuitButton {
    void* field__unk0; // +0x0 (idx=326)
    void* field__data1; // +0x8 (idx=327)
    void* field_adapter; // +0x10 (idx=328)
    void* field__b__13_2; // +0x18 (idx=329)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.NetworkButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_NetworkButton {
    void* field_egisterEvents_b__88_10; // +0x0 (idx=330)
    void* field_WirelessNetworksStackPanel; // +0x8 (idx=331)
    void* field_b__2; // +0x10 (idx=332)
    void* field_egisterEvents_b__88_10; // +0x18 (idx=333)
    void* field_NetworkStatusIcon; // +0x20 (idx=334)
    void* field__unk5; // +0x28 (idx=335)
    void* field_sterEvents_b__88_10; // +0x30 (idx=336)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.NetworkControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_Taskbar_NetworkControl {
    void* field_message; // +0x0 (idx=337)
    void* field_AudioControl_b__3; // +0x8 (idx=338)
    void* field_sterEvents_b__88_10; // +0x10 (idx=339)
    void* field___4__this; // +0x18 (idx=340)
    void* field_Control_b__3; // +0x20 (idx=341)
    void* field_sterEvents_b__88_10; // +0x28 (idx=342)
    void* field___4__this; // +0x30 (idx=343)
    void* field___22_0; // +0x38 (idx=344)
    void* field_sterEvents_b__88_10; // +0x40 (idx=345)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.RaiseHandControl
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_RaiseHandControl {
    void* field___4__this; // +0x0 (idx=346)
    void* field_andControl_b__2; // +0x8 (idx=347)
    void* field_sterEvents_b__88_10; // +0x10 (idx=348)
    void* field___4__this; // +0x18 (idx=349)
    void* field_b__2; // +0x20 (idx=350)
    void* field_sterEvents_b__88_10; // +0x28 (idx=351)
    void* field_logger; // +0x30 (idx=352)
    void* field_isterEvents_b__88_2; // +0x38 (idx=353)
    void* field_sterEvents_b__88_10; // +0x40 (idx=354)
    void* field_title; // +0x48 (idx=355)
    void* field_isterEvents_b__88_2; // +0x50 (idx=356)
    void* field_sterEvents_b__88_10; // +0x58 (idx=357)
    void* field_message; // +0x60 (idx=358)
    void* field___22_0; // +0x68 (idx=359)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.ApplicationButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_ApplicationButton {
    void* field_sterEvents_b__88_10; // +0x0 (idx=360)
    void* field_window; // +0x8 (idx=361)
    void* field_isterEvents_b__88_2; // +0x10 (idx=362)
    void* field_sterEvents_b__88_10; // +0x18 (idx=363)
    void* field___9__1; // +0x20 (idx=364)
    void* field_isterEvents_b__88_2; // +0x28 (idx=365)
    void* field_sterEvents_b__88_10; // +0x30 (idx=366)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.ApplicationControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_ApplicationControl {
    void* field___4__this; // +0x0 (idx=367)
    void* field_alizeKeyboardLayoutControl_b__2; // +0x8 (idx=368)
    void* field_sterEvents_b__88_10; // +0x10 (idx=369)
    void* field_message; // +0x18 (idx=370)
    void* field___22_0; // +0x20 (idx=371)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.AudioControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_AudioControl {
    void* field_sterEvents_b__88_10; // +0x0 (idx=372)
    void* field_showElementPath; // +0x8 (idx=373)
    void* field_rol_b__3; // +0x10 (idx=374)
    void* field_sterEvents_b__88_10; // +0x18 (idx=375)
    void* field_action; // +0x20 (idx=376)
    void* field__data5; // +0x28 (idx=377)
    void* field_sterEvents_b__88_10; // +0x30 (idx=378)
    void* field___4__this; // +0x38 (idx=379)
    void* field__b__88_14; // +0x40 (idx=380)
    void* field_sterEvents_b__88_10; // +0x48 (idx=381)
    void* field_value; // +0x50 (idx=382)
    void* field__8_14; // +0x58 (idx=383)
    void* field_sterEvents_b__88_10; // +0x60 (idx=384)
    void* field__data13; // +0x68 (idx=385)
    void* field_isterEvents_b__88_24; // +0x70 (idx=386)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.Clock
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_Clock {
    void* field_sterEvents_b__88_10; // +0x0 (idx=387)
    void* field_value; // +0x8 (idx=388)
    void* field_isterEvents_b__88_24; // +0x10 (idx=389)
    void* field_sterEvents_b__88_10; // +0x18 (idx=390)
    void* field_forward; // +0x20 (idx=391)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.KeyboardLayoutButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_KeyboardLayoutButton {
    void* field_isterEvents_b__88_24; // +0x0 (idx=392)
    void* field_sterEvents_b__88_10; // +0x8 (idx=393)
    void* field___4__this; // +0x10 (idx=394)
    void* field_isterEvents_b__88_24; // +0x18 (idx=395)
    void* field_sterEvents_b__88_10; // +0x20 (idx=396)
    void* field___4__this; // +0x28 (idx=397)
    void* field_b__0; // +0x30 (idx=398)
    void* field_sterEvents_b__88_10; // +0x38 (idx=399)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.KeyboardLayoutControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_KeyboardLayoutControl {
    void* field___4__this; // +0x0 (idx=400)
    void* field___22_0; // +0x8 (idx=401)
    void* field_sterEvents_b__88_10; // +0x10 (idx=402)
    void* field_parent; // +0x18 (idx=403)
    void* field_isterEvents_b__88_4; // +0x20 (idx=404)
    void* field_sterEvents_b__88_10; // +0x28 (idx=405)
    void* field_parent; // +0x30 (idx=406)
    void* field___88_4; // +0x38 (idx=407)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.NotificationButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_NotificationButton {
    void* field_sterEvents_b__88_10; // +0x0 (idx=408)
    void* field_status; // +0x8 (idx=409)
    void* field_alizeRaiseHandControl_b__4; // +0x10 (idx=410)
    void* field_sterEvents_b__88_10; // +0x18 (idx=411)
    void* field___4__this; // +0x20 (idx=412)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.PowerSupplyControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_PowerSupplyControl {
    void* field_b__0; // +0x0 (idx=413)
    void* field_sterEvents_b__88_10; // +0x8 (idx=414)
    void* field___4__this; // +0x10 (idx=415)
    void* field_b__0; // +0x18 (idx=416)
    void* field_sterEvents_b__88_10; // +0x20 (idx=417)
    void* field_parent; // +0x28 (idx=418)
    void* field_trol_b__4; // +0x30 (idx=419)
    void* field_sterEvents_b__88_10; // +0x38 (idx=420)
    void* field___4__this; // +0x40 (idx=421)
    void* field_b__0; // +0x48 (idx=422)
    void* field_sterEvents_b__88_10; // +0x50 (idx=423)
    void* field___4__this; // +0x58 (idx=424)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.QuitButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_QuitButton {
    void* field_b__0; // +0x0 (idx=425)
    void* field_sterEvents_b__88_10; // +0x8 (idx=426)
    void* field___4__this; // +0x10 (idx=427)
    void* field___22_0; // +0x18 (idx=428)
    void* field_sterEvents_b__88_10; // +0x20 (idx=429)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.NetworkButton
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_NetworkButton {
    void* field_originalBrush; // +0x0 (idx=430)
    void* field_lizeWirelessNetworkControl_b__4; // +0x8 (idx=431)
    void* field_sterEvents_b__88_10; // +0x10 (idx=432)
    void* field___9__9; // +0x18 (idx=433)
    void* field_workControl_b__4; // +0x20 (idx=434)
    void* field_sterEvents_b__88_10; // +0x28 (idx=435)
    void* field___9__6; // +0x30 (idx=436)
};

// SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.NetworkControl
// Flags: 0x100000
struct /* class */ SafeExamBrowser_UserInterface_Mobile_Controls_ActionCenter_NetworkControl {
    void* field_ontrol_b__4; // +0x0 (idx=437)
    void* field_sterEvents_b__88_10; // +0x8 (idx=438)
    void* field_icon; // +0x10 (idx=439)
    void* field_lizeApplicationControl_b__4; // +0x18 (idx=440)
    void* field_sterEvents_b__88_10; // +0x20 (idx=441)
    void* field_lastOpenedBySpacePress; // +0x28 (idx=442)
    void* field_plicationControl_b__3; // +0x30 (idx=443)
    void* field_sterEvents_b__88_10; // +0x38 (idx=444)
    void* field___9__9; // +0x40 (idx=445)
    void* field_irelessNetworkControl_b__4; // +0x48 (idx=446)
    void* field_sterEvents_b__88_10; // +0x50 (idx=447)
};

// <<FocusBrowser>b__63_0>d
// Flags: 0x100103
struct __FocusBrowser_b__63_0_d {
    void* field__unk0; // +0x0 (idx=512)
    void* field__data1; // +0x8 (idx=513)
    void* field_eyboardLayoutControl_b__9; // +0x10 (idx=514)
    void* field_sed; // +0x18 (idx=515)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field_se_b__61_0; // +0x0 (idx=598)
    void* field_XamlIconResource; // +0x8 (idx=599)
    void* field_CreateNotificationControl; // +0x10 (idx=600)
};

// <<FocusToolbar>b__0>d
// Flags: 0x100103
struct __FocusToolbar_b__0_d {
    void* field__unk0; // +0x0 (idx=678)
    void* field__b__88_10; // +0x8 (idx=679)
    void* field__unk2; // +0x10 (idx=680)
    void* field__data3; // +0x18 (idx=681)
};

// Method count by type:
//   SafeExamBrowser.UserInterface.Mobile.Windows.BrowserWindow: 93 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.ActionCenter: 31 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.Taskbar: 31 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.ProctoringFinalizationDialog: 27 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.RuntimeWindow: 25 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.ProctoringWindow: 24 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.SplashScreen: 22 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.Taskview: 22 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.PasswordDialog: 21 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.LockScreen: 20 methods
//   SafeExamBrowser.UserInterface.Mobile.UserInterfaceFactory: 19 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.FileSystemDialog: 17 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.CredentialsDialog: 17 methods
//   SafeExamBrowser.UserInterface.Mobile.WindowFactory: 16 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.AudioControl: 16 methods
//   SafeExamBrowser.UserInterface.Mobile.ViewModels.ProgressIndicatorViewModel: 14 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.LogWindow: 14 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.MessageBoxDialog: 14 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskview.WindowControl: 14 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.PowerSupplyControl: 14 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.AboutWindow: 13 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.AudioControl: 13 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.KeyboardLayoutControl: 12 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.ServerFailureDialog: 11 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.RaiseHandControl: 11 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.RaiseHandControl: 11 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.KeyboardLayoutControl: 11 methods
//   SafeExamBrowser.UserInterface.Mobile.ViewModels.DateTimeViewModel: 10 methods
//   SafeExamBrowser.UserInterface.Mobile.ViewModels.LogViewModel: 10 methods
//   SafeExamBrowser.UserInterface.Mobile.Windows.ExamSelectionDialog: 10 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.PowerSupplyControl: 10 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Browser.DownloadItemControl: 9 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.NetworkControl: 9 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.ApplicationButton: 9 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.KeyboardLayoutButton: 9 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.NetworkControl: 9 methods
//   SafeExamBrowser.UserInterface.Mobile.ControlFactory: 8 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.KeyboardLayoutButton: 8 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.NetworkButton: 8 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.NetworkButton: 8 methods
//   SafeExamBrowser.UserInterface.Mobile.ViewModels.RuntimeWindowViewModel: 7 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.ApplicationWindowButton: 7 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.QuitButton: 7 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.ApplicationControl: 7 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.NotificationButton: 7 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.QuitButton: 7 methods
//   XamlGeneratedNamespace.GeneratedInternalTypeHelper: 6 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.ApplicationControl: 6 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.NotificationButton: 6 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.Taskbar.Clock: 4 methods
//   SafeExamBrowser.UserInterface.Mobile.Controls.ActionCenter.Clock: 4 methods
//   <>c: 4 methods
//   SafeExamBrowser.UserInterface.Mobile.MessageBoxFactory: 3 methods
//   SafeExamBrowser.UserInterface.Mobile.FileSystemDialogFactory: 2 methods
//   <<FocusBrowser>b__63_0>d: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   <<FocusToolbar>b__0>d: 1 methods

} // namespace safeexambrowser_userinterface_mobile

// ── SafeExamBrowser.UserInterface.Shared.dll ──
namespace safeexambrowser_userinterface_shared {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.UserInterface.Shared.Guardable
// Flags: 0x100081
struct SafeExamBrowser_UserInterface_Shared_Guardable {
    void* field_id; // +0x0 (idx=2)
};

// SafeExamBrowser.UserInterface.Shared.WindowGuard
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Shared_WindowGuard {
    void* field_ss6_0; // +0x0 (idx=3)
    void* field_active; // +0x8 (idx=4)
    void* field__unk2; // +0x10 (idx=5)
};

// SafeExamBrowser.UserInterface.Shared.Utilities.IconLoader
// Flags: 0x100181
struct SafeExamBrowser_UserInterface_Shared_Utilities_IconLoader {
    void* field___32849_; // +0x0 (idx=6)
    void* field_SHGFI_SMALLICON; // +0x8 (idx=7)
    void* field__unk2; // +0x10 (idx=8)
    void* field___32854_; // +0x18 (idx=9)
};

// SafeExamBrowser.UserInterface.Shared.Utilities.Thumbnail
// Flags: 0x100181
struct SafeExamBrowser_UserInterface_Shared_Utilities_Thumbnail {
    void* field_S_OK; // +0x0 (idx=10)
    void* field__unk1; // +0x8 (idx=11)
    void* field___32849_; // +0x10 (idx=12)
    void* field_MF_GRAYED; // +0x18 (idx=13)
};

// SafeExamBrowser.UserInterface.Shared.Utilities.WindowExtensions
// Flags: 0x100181
struct SafeExamBrowser_UserInterface_Shared_Utilities_WindowExtensions {
    void* field__unk0; // +0x0 (idx=14)
    void* field___32849_; // +0x8 (idx=15)
    void* field_WS_SYSMENU; // +0x10 (idx=16)
    void* field_ED; // +0x18 (idx=17)
    void* field__data4; // +0x20 (idx=18)
    void* field_LeftWindows; // +0x28 (idx=19)
    void* field_oreground; // +0x30 (idx=20)
    void* field__data7; // +0x38 (idx=21)
    void* field_logger; // +0x40 (idx=22)
};

// SafeExamBrowser.UserInterface.Shared.Activators.ActionCenterKeyboardActivator
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Shared_Activators_ActionCenterKeyboardActivator {
    void* field_ound; // +0x0 (idx=23)
    void* field__data1; // +0x8 (idx=24)
    void* field_nativeMethods; // +0x10 (idx=25)
    void* field_t_Foreground; // +0x18 (idx=26)
};

// SafeExamBrowser.UserInterface.Shared.Activators.ActionCenterTouchActivator
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Shared_Activators_ActionCenterTouchActivator {
    void* field__data0; // +0x0 (idx=27)
    void* field_Activated; // +0x8 (idx=28)
    void* field_t_Foreground; // +0x10 (idx=29)
    void* field__data3; // +0x18 (idx=30)
    void* field_logger; // +0x20 (idx=31)
};

// SafeExamBrowser.UserInterface.Shared.Activators.KeyboardActivator
// Flags: 0x100081
struct SafeExamBrowser_UserInterface_Shared_Activators_KeyboardActivator {
    void* field_oreground; // +0x0 (idx=32)
    void* field__data1; // +0x8 (idx=33)
    void* field_logger; // +0x10 (idx=34)
};

// SafeExamBrowser.UserInterface.Shared.Activators.TaskbarKeyboardActivator
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Shared_Activators_TaskbarKeyboardActivator {
    void* field_t_Foreground; // +0x0 (idx=35)
    void* field__data1; // +0x8 (idx=36)
    void* field_Activated; // +0x10 (idx=37)
};

// SafeExamBrowser.UserInterface.Shared.Activators.TaskviewKeyboardActivator
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Shared_Activators_TaskviewKeyboardActivator {
    void* field_MoveToBackground; // +0x0 (idx=38)
    void* field_ocess_b__15_0; // +0x8 (idx=39)
    void* field_window; // +0x10 (idx=40)
    void* field_und; // +0x18 (idx=41)
    void* field_ess_b__15_0; // +0x20 (idx=42)
    void* field___4__this; // +0x28 (idx=43)
    void* field_ED; // +0x30 (idx=44)
};

// SafeExamBrowser.UserInterface.Shared.Activators.TerminationActivator
// Flags: 0x100001
struct SafeExamBrowser_UserInterface_Shared_Activators_TerminationActivator {
    void* field_ess_b__15_0; // +0x0 (idx=45)
    void* field_szDisplayName; // +0x8 (idx=46)
    void* field__unk2; // +0x10 (idx=47)
    void* field_ess_b__15_0; // +0x18 (idx=48)
    void* field_Source; // +0x20 (idx=49)
};

// SafeExamBrowser.UserInterface.Shared.Activators.TouchActivator
// Flags: 0x100081
struct SafeExamBrowser_UserInterface_Shared_Activators_TouchActivator {
    void* field_wGuard; // +0x0 (idx=50)
    void* field_ess_b__15_0; // +0x8 (idx=51)
    void* field_X; // +0x10 (idx=52)
};

// SHFILEINFO
// Flags: 0x10010B
struct SHFILEINFO {
    void* field___4__this; // +0x0 (idx=58)
    void* field__unk1; // +0x8 (idx=59)
    void* field___8264_; // +0x10 (idx=60)
    void* field__ctor; // +0x18 (idx=61)
    void* field__unk4; // +0x20 (idx=62)
};

// Properties
// Flags: 0x10010A
struct /* class */ Properties {
    void* field_cess_b__15_0; // +0x0 (idx=63)
    void* field__unk1; // +0x8 (idx=64)
    void* field__data2; // +0x10 (idx=65)
    void* field_Nullable_1; // +0x18 (idx=66)
    void* field___8328_; // +0x20 (idx=67)
    void* field__ctor; // +0x28 (idx=68)
};

// Size
// Flags: 0x10010A
struct /* class */ Size {
    void* field__unk0; // +0x0 (idx=69)
    void* field__data1; // +0x8 (idx=70)
};

// Rectangle
// Flags: 0x10010A
struct /* class */ Rectangle {
    void* field__unk0; // +0x0 (idx=71)
    void* field_ocess_b__15_0; // +0x8 (idx=72)
    void* field_OW; // +0x10 (idx=73)
    void* field___8536_; // +0x18 (idx=74)
};

// <<Process>b__15_0>d
// Flags: 0x100103
struct __Process_b__15_0_d {
    void* field_Guard; // +0x0 (idx=75)
    void* field__unk1; // +0x8 (idx=76)
    void* field_W; // +0x10 (idx=77)
    void* field__unk3; // +0x18 (idx=78)
    void* field_ss_b__15_0; // +0x20 (idx=79)
};

// Method count by type:
//   SafeExamBrowser.UserInterface.Shared.Utilities.WindowExtensions: 13 methods
//   SafeExamBrowser.UserInterface.Shared.Activators.ActionCenterTouchActivator: 11 methods
//   SafeExamBrowser.UserInterface.Shared.Activators.TaskviewKeyboardActivator: 10 methods
//   SafeExamBrowser.UserInterface.Shared.Activators.KeyboardActivator: 8 methods
//   SafeExamBrowser.UserInterface.Shared.Activators.ActionCenterKeyboardActivator: 7 methods
//   SafeExamBrowser.UserInterface.Shared.WindowGuard: 6 methods
//   SafeExamBrowser.UserInterface.Shared.Utilities.IconResourceLoader: 6 methods
//   SafeExamBrowser.UserInterface.Shared.Activators.TouchActivator: 6 methods
//   SafeExamBrowser.UserInterface.Shared.Utilities.IconLoader: 5 methods
//   SafeExamBrowser.UserInterface.Shared.Utilities.Thumbnail: 4 methods
//   SafeExamBrowser.UserInterface.Shared.Activators.TaskbarKeyboardActivator: 4 methods
//   SafeExamBrowser.UserInterface.Shared.Activators.TerminationActivator: 3 methods
//   SafeExamBrowser.UserInterface.Shared.Guardable: 2 methods
//   SafeExamBrowser.UserInterface.Shared.Utilities.VisualExtensions: 2 methods
//   <<Process>b__15_0>d: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.UserInterface.Shared.Utilities.Parser: 1 methods

} // namespace safeexambrowser_userinterface_shared

// ── SafeExamBrowser.WindowsApi.Contracts.dll ──
namespace safeexambrowser_windowsapi_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.WindowsApi.Contracts.Events.KeyModifier
// Flags: 0x0101
struct SafeExamBrowser_WindowsApi_Contracts_Events_KeyModifier {
    void* field___; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_Ctrl; // +0x10 (idx=4)
    void* field_GetWorkingArea; // +0x18 (idx=5)
    void* field___32854_; // +0x20 (idx=6)
};

// SafeExamBrowser.WindowsApi.Contracts.Events.KeyState
// Flags: 0x0101
struct SafeExamBrowser_WindowsApi_Contracts_Events_KeyState {
    void* field_Pressed; // +0x0 (idx=7)
    void* field_orkingArea; // +0x8 (idx=8)
    void* field___32854_; // +0x10 (idx=9)
    void* field_Auxiliary; // +0x18 (idx=10)
};

// SafeExamBrowser.WindowsApi.Contracts.Events.MouseButton
// Flags: 0x0101
struct SafeExamBrowser_WindowsApi_Contracts_Events_MouseButton {
    void* field_ngArea; // +0x0 (idx=11)
    void* field___32854_; // +0x8 (idx=12)
    void* field_value__; // +0x10 (idx=13)
    void* field_ea; // +0x18 (idx=14)
    void* field___32854_; // +0x20 (idx=15)
    void* field__data5; // +0x28 (idx=16)
};

// SafeExamBrowser.WindowsApi.Contracts.Events.MouseButtonState
// Flags: 0x0101
struct SafeExamBrowser_WindowsApi_Contracts_Events_MouseButtonState {
    void* field___; // +0x0 (idx=17)
    void* field___8264_; // +0x8 (idx=18)
    void* field__ctor; // +0x10 (idx=19)
    void* field__unk3; // +0x18 (idx=20)
};

// SafeExamBrowser.WindowsApi.Contracts.Events.MouseInformation
// Flags: 0x100001
struct SafeExamBrowser_WindowsApi_Contracts_Events_MouseInformation {
    void* field_IEnumerable_1; // +0x0 (idx=21)
    void* field__unk1; // +0x8 (idx=22)
    void* field_IEnumerable_1; // +0x10 (idx=23)
};

// Method count by type:
//   SafeExamBrowser.WindowsApi.Contracts.INativeMethods: 32 methods
//   SafeExamBrowser.WindowsApi.Contracts.IProcess: 11 methods
//   SafeExamBrowser.WindowsApi.Contracts.Events.MouseInformation: 6 methods
//   SafeExamBrowser.WindowsApi.Contracts.IBounds: 4 methods
//   SafeExamBrowser.WindowsApi.Contracts.IDesktop: 4 methods
//   SafeExamBrowser.WindowsApi.Contracts.IExplorerShell: 4 methods
//   SafeExamBrowser.WindowsApi.Contracts.Events.KeyboardHookCallback: 4 methods
//   SafeExamBrowser.WindowsApi.Contracts.Events.ProcessTerminatedEventHandler: 4 methods
//   SafeExamBrowser.WindowsApi.Contracts.IDesktopFactory: 3 methods
//   SafeExamBrowser.WindowsApi.Contracts.Events.MouseHookCallback: 3 methods
//   SafeExamBrowser.WindowsApi.Contracts.IDesktopMonitor: 2 methods
//   SafeExamBrowser.WindowsApi.Contracts.IStickyKeysState: 2 methods
//   SafeExamBrowser.WindowsApi.Contracts.Events.SystemEventCallback: 2 methods
//   SafeExamBrowser.WindowsApi.Contracts.Events.TerminationActivatorEventHandler: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.WindowsApi.Contracts.IProcessFactory: 1 methods

} // namespace safeexambrowser_windowsapi_contracts

// ── SafeExamBrowser.WindowsApi.dll ──
namespace safeexambrowser_windowsapi {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.WindowsApi.ExplorerShell
// Flags: 0x100001
struct SafeExamBrowser_WindowsApi_ExplorerShell {
    void* field__unk0; // +0x0 (idx=2)
    void* field__data1; // +0x8 (idx=3)
    void* field_KeyboardHooks; // +0x10 (idx=4)
};

// SafeExamBrowser.WindowsApi.NativeMethods
// Flags: 0x100001
struct SafeExamBrowser_WindowsApi_NativeMethods {
    void* field__unk0; // +0x0 (idx=5)
    void* field__data1; // +0x8 (idx=6)
    void* field__data2; // +0x10 (idx=7)
};

// SafeExamBrowser.WindowsApi.Types.Bounds
// Flags: 0x100000
struct /* class */ SafeExamBrowser_WindowsApi_Types_Bounds {
    void* field_registerMouseHook_b__0; // +0x0 (idx=8)
    void* field__unk1; // +0x8 (idx=9)
    void* field_AWAYMODE_REQUIRED; // +0x10 (idx=10)
    void* field_UP; // +0x18 (idx=11)
};

// SafeExamBrowser.WindowsApi.Types.EXECUTION_STATE
// Flags: 0x0101
struct SafeExamBrowser_WindowsApi_Types_EXECUTION_STATE {
    void* field___32854_; // +0x0 (idx=12)
    void* field_KeyCode; // +0x8 (idx=13)
    void* field_KEYUP; // +0x10 (idx=14)
    void* field_c__DisplayClass12_0; // +0x18 (idx=15)
    void* field_DwExtraInfo; // +0x20 (idx=16)
};

// SafeExamBrowser.WindowsApi.Types.KBDLLHOOKSTRUCT
// Flags: 0x100108
struct /* class */ SafeExamBrowser_WindowsApi_Types_KBDLLHOOKSTRUCT {
    void* field_registerMouseHook_b__0; // +0x0 (idx=17)
    void* field___32854_; // +0x8 (idx=18)
    void* field_LLKHF_INJECTED; // +0x10 (idx=19)
    void* field_M_KEYUP; // +0x18 (idx=20)
    void* field_c__DisplayClass12_0; // +0x20 (idx=21)
};

// SafeExamBrowser.WindowsApi.Types.KBDLLHOOKSTRUCTFlags
// Flags: 0x0100
struct /* class */ SafeExamBrowser_WindowsApi_Types_KBDLLHOOKSTRUCTFlags {
    void* field_MouseData; // +0x0 (idx=22)
    void* field_registerMouseHook_b__0; // +0x8 (idx=23)
    void* field_c__DisplayClass12_0; // +0x10 (idx=24)
    void* field_X; // +0x18 (idx=25)
    void* field_registerMouseHook_b__0; // +0x20 (idx=26)
    void* field_DisplayClass12_0; // +0x28 (idx=27)
};

// SafeExamBrowser.WindowsApi.Types.MSLLHOOKSTRUCT
// Flags: 0x100108
struct /* class */ SafeExamBrowser_WindowsApi_Types_MSLLHOOKSTRUCT {
    void* field_dwProcessId; // +0x0 (idx=28)
    void* field_registerMouseHook_b__0; // +0x8 (idx=29)
    void* field_c__DisplayClass12_0; // +0x10 (idx=30)
    void* field_Right; // +0x18 (idx=31)
    void* field_registerMouseHook_b__0; // +0x20 (idx=32)
};

// SafeExamBrowser.WindowsApi.Types.POINT
// Flags: 0x100108
struct /* class */ SafeExamBrowser_WindowsApi_Types_POINT {
    void* field_DisplayClass12_0; // +0x0 (idx=33)
    void* field_lpDesktop; // +0x8 (idx=34)
};

// SafeExamBrowser.WindowsApi.Types.PROCESS_INFORMATION
// Flags: 0x100108
struct /* class */ SafeExamBrowser_WindowsApi_Types_PROCESS_INFORMATION {
    void* field_ved2; // +0x0 (idx=35)
    void* field_DisplayClass12_0; // +0x8 (idx=36)
    void* field_dwXSize; // +0x10 (idx=37)
    void* field_registerMouseHook_b__0; // +0x18 (idx=38)
};

// SafeExamBrowser.WindowsApi.Types.RECT
// Flags: 0x100108
struct /* class */ SafeExamBrowser_WindowsApi_Types_RECT {
    void* field_DisplayClass12_0; // +0x0 (idx=39)
    void* field_dwFillAttribute; // +0x8 (idx=40)
    void* field_registerMouseHook_b__0; // +0x10 (idx=41)
    void* field_DisplayClass12_0; // +0x18 (idx=42)
};

// SafeExamBrowser.WindowsApi.Types.STARTUPINFO
// Flags: 0x100108
struct /* class */ SafeExamBrowser_WindowsApi_Types_STARTUPINFO {
    void* field_lpReserved2; // +0x0 (idx=43)
    void* field__unk1; // +0x8 (idx=44)
    void* field_DisplayClass12_0; // +0x10 (idx=45)
    void* field_cbSize; // +0x18 (idx=46)
    void* field_UP; // +0x20 (idx=47)
    void* field__data5; // +0x28 (idx=48)
    void* field__data6; // +0x30 (idx=49)
    void* field_GETDESKWALLPAPER; // +0x38 (idx=50)
    void* field__data8; // +0x40 (idx=51)
    void* field_length; // +0x48 (idx=52)
    void* field_registerMouseHook_b__0; // +0x50 (idx=53)
    void* field_DisplayClass12_0; // +0x58 (idx=54)
    void* field_ptMaxPosition; // +0x60 (idx=55)
    void* field_ALLPAPER; // +0x68 (idx=56)
    void* field_ayClass24_0; // +0x70 (idx=57)
    void* field_eventInitialized; // +0x78 (idx=58)
    void* field_ved2; // +0x80 (idx=59)
    void* field_ayClass24_0; // +0x88 (idx=60)
};

// SafeExamBrowser.WindowsApi.Types.STICKYKEYS
// Flags: 0x100108
struct /* class */ SafeExamBrowser_WindowsApi_Types_STICKYKEYS {
    void* field__data0; // +0x0 (idx=61)
    void* field_SETDESKWALLPAPER; // +0x8 (idx=62)
};

// SafeExamBrowser.WindowsApi.Types.StickyKeysState
// Flags: 0x100001
struct SafeExamBrowser_WindowsApi_Types_StickyKeysState {
    void* field__data0; // +0x0 (idx=63)
    void* field_callback; // +0x8 (idx=64)
    void* field__unk2; // +0x10 (idx=65)
    void* field__data3; // +0x18 (idx=66)
};

// SafeExamBrowser.WindowsApi.Types.Window
// Flags: 0x100108
struct /* class */ SafeExamBrowser_WindowsApi_Types_Window {
    void* field_callback; // +0x0 (idx=67)
    void* field_NDICATOR; // +0x8 (idx=68)
};

// SafeExamBrowser.WindowsApi.Types.WINDOWPLACEMENT
// Flags: 0x100108
struct /* class */ SafeExamBrowser_WindowsApi_Types_WINDOWPLACEMENT {
    void* field__data0; // +0x0 (idx=69)
    void* field_eventDelegate; // +0x8 (idx=70)
    void* field_KEYUP; // +0x10 (idx=71)
    void* field__data3; // +0x18 (idx=72)
    void* field_altPressed; // +0x20 (idx=73)
    void* field_GETDESKWALLPAPER; // +0x28 (idx=74)
};

// SafeExamBrowser.WindowsApi.Processes.Process
// Flags: 0x100000
struct /* class */ SafeExamBrowser_WindowsApi_Processes_Process {
    void* field__data0; // +0x0 (idx=75)
    void* field_hookDelegate; // +0x8 (idx=76)
    void* field_GFILTER; // +0x10 (idx=77)
    void* field__data3; // +0x18 (idx=78)
    void* field_logger; // +0x20 (idx=79)
    void* field__data5; // +0x28 (idx=80)
    void* field_ayClass24_0; // +0x30 (idx=81)
    void* field_desktop; // +0x38 (idx=82)
};

// SafeExamBrowser.WindowsApi.Processes.ProcessFactory
// Flags: 0x100001
struct SafeExamBrowser_WindowsApi_Processes_ProcessFactory {
    void* field__unk0; // +0x0 (idx=83)
    void* field___32851_; // +0x8 (idx=84)
};

// SafeExamBrowser.WindowsApi.Hooks.MouseHook
// Flags: 0x100000
struct /* class */ SafeExamBrowser_WindowsApi_Hooks_MouseHook {
    void* field_EVENT_SYSTEM_FOREGROUND; // +0x0 (idx=85)
    void* field_registerMouseHook_b__0; // +0x8 (idx=86)
    void* field___32851_; // +0x10 (idx=87)
    void* field_MIN_ALL; // +0x18 (idx=88)
};

// SafeExamBrowser.WindowsApi.Hooks.SystemHook
// Flags: 0x100000
struct /* class */ SafeExamBrowser_WindowsApi_Hooks_SystemHook {
    void* field_KEYUP; // +0x0 (idx=89)
    void* field___32851_; // +0x8 (idx=90)
    void* field_STANDARD_RIGHTS_REQUIRED; // +0x10 (idx=91)
    void* field_registerMouseHook_b__0; // +0x18 (idx=92)
    void* field___32851_; // +0x20 (idx=93)
    void* field_WM_GETICON; // +0x28 (idx=94)
    void* field_registerMouseHook_b__0; // +0x30 (idx=95)
    void* field___32851_; // +0x38 (idx=96)
};

// SafeExamBrowser.WindowsApi.Hooks.KeyboardHook
// Flags: 0x100000
struct /* class */ SafeExamBrowser_WindowsApi_Hooks_KeyboardHook {
    void* field_WM_LBUTTONUP; // +0x0 (idx=97)
    void* field_registerMouseHook_b__0; // +0x8 (idx=98)
    void* field___32851_; // +0x10 (idx=99)
    void* field_WM_MOUSEWHEEL; // +0x18 (idx=100)
    void* field_registerMouseHook_b__0; // +0x20 (idx=101)
    void* field___32851_; // +0x28 (idx=102)
};

// SafeExamBrowser.WindowsApi.Desktops.Desktop
// Flags: 0x100000
struct /* class */ SafeExamBrowser_WindowsApi_Desktops_Desktop {
    void* field_WM_SYSKEYDOWN; // +0x0 (idx=103)
    void* field_registerMouseHook_b__0; // +0x8 (idx=104)
};

// SafeExamBrowser.WindowsApi.Desktops.DesktopFactory
// Flags: 0x100001
struct SafeExamBrowser_WindowsApi_Desktops_DesktopFactory {
    void* field___32851_; // +0x0 (idx=105)
    void* field_value__; // +0x8 (idx=106)
};

// SafeExamBrowser.WindowsApi.Desktops.DesktopMonitor
// Flags: 0x100001
struct SafeExamBrowser_WindowsApi_Desktops_DesktopMonitor {
    void* field_CLASS; // +0x0 (idx=107)
    void* field___32854_; // +0x8 (idx=108)
    void* field_WH_GETMESSAGE; // +0x10 (idx=109)
};

// SafeExamBrowser.WindowsApi.Desktops.ObfuscatedDesktop
// Flags: 0x100000
struct /* class */ SafeExamBrowser_WindowsApi_Desktops_ObfuscatedDesktop {
    void* field_CLASS; // +0x0 (idx=110)
    void* field___32854_; // +0x8 (idx=111)
};

// SafeExamBrowser.WindowsApi.Constants.Constant
// Flags: 0x100180
struct /* class */ SafeExamBrowser_WindowsApi_Constants_Constant {
    void* field_WH_MOUSE; // +0x0 (idx=112)
    void* field_CLASS; // +0x8 (idx=113)
    void* field___32854_; // +0x10 (idx=114)
    void* field_WH_FOREGROUNDIDLE; // +0x18 (idx=115)
    void* field_CLASS; // +0x20 (idx=116)
    void* field___32854_; // +0x28 (idx=117)
    void* field_value__; // +0x30 (idx=118)
    void* field_UP; // +0x38 (idx=119)
    void* field___32854_; // +0x40 (idx=120)
    void* field_CONFIRMHOTKEY; // +0x48 (idx=121)
    void* field_UP; // +0x50 (idx=122)
    void* field___32854_; // +0x58 (idx=123)
    void* field_TRISTATE; // +0x60 (idx=124)
    void* field_UP; // +0x68 (idx=125)
    void* field___32854_; // +0x70 (idx=126)
    void* field_SUSPEND_RESUME; // +0x78 (idx=127)
    void* field__unk16; // +0x80 (idx=128)
    void* field___32854_; // +0x88 (idx=129)
    void* field_QUERY_INFORMATION; // +0x90 (idx=130)
    void* field__unk19; // +0x98 (idx=131)
    void* field___32854_; // +0xA0 (idx=132)
    void* field_value__; // +0xA8 (idx=133)
    void* field_TOP_READOBJECTS; // +0xB0 (idx=134)
    void* field___32854_; // +0xB8 (idx=135)
    void* field_LeftAlt; // +0xC0 (idx=136)
    void* field_TOP_READOBJECTS; // +0xC8 (idx=137)
    void* field___32854_; // +0xD0 (idx=138)
    void* field_RightControl; // +0xD8 (idx=139)
    void* field_KEYUP; // +0xE0 (idx=140)
};

// SafeExamBrowser.WindowsApi.Constants.HookType
// Flags: 0x0100
struct /* class */ SafeExamBrowser_WindowsApi_Constants_HookType {
    void* field___32854_; // +0x0 (idx=141)
    void* field_DESKTOP_CREATEWINDOW; // +0x8 (idx=142)
    void* field_EADOBJECTS; // +0x10 (idx=143)
    void* field___32854_; // +0x18 (idx=144)
    void* field_DESKTOP_JOURNALPLAYBACK; // +0x20 (idx=145)
    void* field_EADOBJECTS; // +0x28 (idx=146)
    void* field___32854_; // +0x30 (idx=147)
    void* field_GENERIC_ALL; // +0x38 (idx=148)
    void* field_registerMouseHook_b__0; // +0x40 (idx=149)
    void* field___32854_; // +0x48 (idx=150)
    void* field_ShowMinimized; // +0x50 (idx=151)
    void* field_JECTS; // +0x58 (idx=152)
    void* field___32854_; // +0x60 (idx=153)
    void* field_Show; // +0x68 (idx=154)
    void* field_JECTS; // +0x70 (idx=155)
    void* field___32854_; // +0x78 (idx=156)
};

// SafeExamBrowser.WindowsApi.Constants.StickyKeysFlags
// Flags: 0x0100
struct /* class */ SafeExamBrowser_WindowsApi_Constants_StickyKeysFlags {
    void* field_Restore; // +0x0 (idx=157)
    void* field_JECTS; // +0x8 (idx=158)
    void* field__unk2; // +0x10 (idx=159)
    void* field_CLOSE; // +0x18 (idx=160)
    void* field_KEYUP; // +0x20 (idx=161)
    void* field___32854_; // +0x28 (idx=162)
    void* field_GETWORKAREA; // +0x30 (idx=163)
    void* field_TOP_WRITEOBJECTS; // +0x38 (idx=164)
    void* field___32854_; // +0x40 (idx=165)
    void* field_value__; // +0x48 (idx=166)
};

// SafeExamBrowser.WindowsApi.Constants.ThreadAccess
// Flags: 0x0100
struct /* class */ SafeExamBrowser_WindowsApi_Constants_ThreadAccess {
    void* field_RITEOBJECTS; // +0x0 (idx=167)
    void* field___32854_; // +0x8 (idx=168)
    void* field_UPDATEANDCHANGE; // +0x10 (idx=169)
    void* field_KEYUP; // +0x18 (idx=170)
    void* field_DisplayClass12_0; // +0x20 (idx=171)
    void* field_callback; // +0x28 (idx=172)
    void* field_GFILTER; // +0x30 (idx=173)
    void* field_DisplayClass12_0; // +0x38 (idx=174)
    void* field_callback; // +0x40 (idx=175)
    void* field_GFILTER; // +0x48 (idx=176)
};

// SafeExamBrowser.WindowsApi.Constants.VirtualKeyCode
// Flags: 0x0100
struct /* class */ SafeExamBrowser_WindowsApi_Constants_VirtualKeyCode {
    void* field_DisplayClass12_0; // +0x0 (idx=177)
    void* field_callback; // +0x8 (idx=178)
    void* field_KEYUP; // +0x10 (idx=179)
    void* field_DisplayClass12_0; // +0x18 (idx=180)
    void* field_hookReadyEvent; // +0x20 (idx=181)
    void* field_GFILTER; // +0x28 (idx=182)
    void* field_DisplayClass12_0; // +0x30 (idx=183)
    void* field_process; // +0x38 (idx=184)
    void* field__unk8; // +0x40 (idx=185)
};

// SafeExamBrowser.WindowsApi.Constants.AccessMask
// Flags: 0x0100
struct /* class */ SafeExamBrowser_WindowsApi_Constants_AccessMask {
    void* field__data0; // +0x0 (idx=186)
    void* field_et_Bottom; // +0x8 (idx=187)
    void* field_rentProcess; // +0x10 (idx=188)
    void* field__ctor; // +0x18 (idx=189)
    void* field__unk4; // +0x20 (idx=190)
    void* field_DisplayClass12_0; // +0x28 (idx=191)
    void* field__unk6; // +0x30 (idx=192)
    void* field_c__DisplayClass12_0; // +0x38 (idx=193)
    void* field_ToInt32; // +0x40 (idx=194)
    void* field_howDefault; // +0x48 (idx=195)
    void* field_Terminate; // +0x50 (idx=196)
    void* field__unk11; // +0x58 (idx=197)
};

// SafeExamBrowser.WindowsApi.Constants.ShowWindowCommand
// Flags: 0x0100
struct /* class */ SafeExamBrowser_WindowsApi_Constants_ShowWindowCommand {
    void* field__data0; // +0x0 (idx=198)
    void* field__0; // +0x8 (idx=199)
    void* field__data2; // +0x10 (idx=200)
    void* field_s; // +0x18 (idx=201)
    void* field__unk4; // +0x20 (idx=202)
    void* field_GetCurrentThreadId; // +0x28 (idx=203)
    void* field__unk6; // +0x30 (idx=204)
    void* field_YS; // +0x38 (idx=205)
    void* field__0; // +0x40 (idx=206)
    void* field_ss12_0; // +0x48 (idx=207)
    void* field_s; // +0x50 (idx=208)
    void* field__unk11; // +0x58 (idx=209)
    void* field_SetThreadExecutionState; // +0x60 (idx=210)
    void* field__unk13; // +0x68 (idx=211)
};

// SafeExamBrowser.WindowsApi.Constants.SystemCommand
// Flags: 0x0100
struct /* class */ SafeExamBrowser_WindowsApi_Constants_SystemCommand {
    void* field__unk0; // +0x0 (idx=212)
    void* field__unk1; // +0x8 (idx=213)
};

// SafeExamBrowser.WindowsApi.Constants.SPI
// Flags: 0x0100
struct /* class */ SafeExamBrowser_WindowsApi_Constants_SPI {
    void* field__unk0; // +0x0 (idx=214)
    void* field_rKeyboardHook_b__0; // +0x8 (idx=215)
    void* field_y; // +0x10 (idx=216)
    void* field_ActivateWindow; // +0x18 (idx=217)
    void* field__unk4; // +0x20 (idx=218)
    void* field_RUCT; // +0x28 (idx=219)
    void* field__unk6; // +0x30 (idx=220)
};

// SafeExamBrowser.WindowsApi.Constants.SPIF
// Flags: 0x0100
struct /* class */ SafeExamBrowser_WindowsApi_Constants_SPIF {
    void* field__data0; // +0x0 (idx=221)
    void* field_ToInt32; // +0x8 (idx=222)
    void* field___10028_; // +0x10 (idx=223)
    void* field_DisableStickyKeys; // +0x18 (idx=224)
    void* field__unk4; // +0x20 (idx=225)
};

// Method count by type:
//   SafeExamBrowser.WindowsApi.User32: 33 methods
//   SafeExamBrowser.WindowsApi.Processes.Process: 19 methods
//   SafeExamBrowser.WindowsApi.Processes.ProcessFactory: 13 methods
//   SafeExamBrowser.WindowsApi.Hooks.MouseHook: 10 methods
//   SafeExamBrowser.WindowsApi.Kernel32: 9 methods
//   SafeExamBrowser.WindowsApi.Types.Bounds: 9 methods
//   SafeExamBrowser.WindowsApi.Types.StickyKeysState: 9 methods
//   SafeExamBrowser.WindowsApi.Desktops.Desktop: 8 methods
//   SafeExamBrowser.WindowsApi.ExplorerShell: 6 methods
//   SafeExamBrowser.WindowsApi.Desktops.DesktopFactory: 5 methods
//   SafeExamBrowser.WindowsApi.Types.Window: 4 methods
//   SafeExamBrowser.WindowsApi.Desktops.DesktopMonitor: 4 methods
//   SafeExamBrowser.WindowsApi.NativeMethods: 3 methods
//   SafeExamBrowser.WindowsApi.Delegates.EnumDesktopDelegate: 3 methods
//   SafeExamBrowser.WindowsApi.Delegates.EnumWindowsDelegate: 3 methods
//   SafeExamBrowser.WindowsApi.Delegates.HookDelegate: 3 methods
//   SafeExamBrowser.WindowsApi.Desktops.ObfuscatedDesktop: 2 methods
//   SafeExamBrowser.WindowsApi.Delegates.EventDelegate: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.WindowsApi.WinInet: 1 methods
//   SafeExamBrowser.WindowsApi.Types.RECT: 1 methods
//   SafeExamBrowser.WindowsApi.Hooks.SystemHook: 1 methods

} // namespace safeexambrowser_windowsapi

// ── SafeExamBrowser.Communication.Contracts.dll ──
namespace safeexambrowser_communication_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Communication.Contracts.Interlocutor
// Flags: 0x2101
struct SafeExamBrowser_Communication_Contracts_Interlocutor {
    void* field_xamBrowser_Communication_Contracts_Data; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_Runtime; // +0x10 (idx=4)
    void* field_ssId; // +0x18 (idx=5)
    void* field__data4; // +0x20 (idx=6)
};

// SafeExamBrowser.Communication.Contracts.Proxies.CommunicationResult
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Proxies_CommunicationResult {
    void* field__data0; // +0x0 (idx=7)
};

// SafeExamBrowser.Communication.Contracts.Proxies.CommunicationResult`1
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Proxies_CommunicationResult_1 {
    void* field_ocessId; // +0x0 (idx=8)
};

// SafeExamBrowser.Communication.Contracts.Events.ClientConfigurationEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ClientConfigurationEventArgs {
    void* field__data0; // +0x0 (idx=9)
};

// SafeExamBrowser.Communication.Contracts.Events.ExamSelectionReplyEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ExamSelectionReplyEventArgs {
    void* field__data0; // +0x0 (idx=10)
    void* field_ocessId; // +0x8 (idx=11)
    void* field__data2; // +0x10 (idx=12)
};

// SafeExamBrowser.Communication.Contracts.Events.ExamSelectionRequestEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ExamSelectionRequestEventArgs {
    void* field__data0; // +0x0 (idx=13)
    void* field_xamBrowser_Communication_Contracts_Data; // +0x8 (idx=14)
};

// SafeExamBrowser.Communication.Contracts.Events.MessageBoxReplyEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_MessageBoxReplyEventArgs {
    void* field__data0; // +0x0 (idx=15)
    void* field__data1; // +0x8 (idx=16)
};

// SafeExamBrowser.Communication.Contracts.Events.MessageBoxRequestEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_MessageBoxRequestEventArgs {
    void* field_sId; // +0x0 (idx=17)
    void* field__data1; // +0x8 (idx=18)
    void* field__data2; // +0x10 (idx=19)
    void* field_ocessId; // +0x18 (idx=20)
    void* field__data4; // +0x20 (idx=21)
};

// SafeExamBrowser.Communication.Contracts.Events.PasswordReplyEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_PasswordReplyEventArgs {
    void* field__data0; // +0x0 (idx=22)
    void* field__unk1; // +0x8 (idx=23)
    void* field__data2; // +0x10 (idx=24)
};

// SafeExamBrowser.Communication.Contracts.Events.PasswordRequestEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_PasswordRequestEventArgs {
    void* field__data0; // +0x0 (idx=25)
    void* field__unk1; // +0x8 (idx=26)
};

// SafeExamBrowser.Communication.Contracts.Events.ReconfigurationEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ReconfigurationEventArgs {
    void* field__data0; // +0x0 (idx=27)
    void* field__data1; // +0x8 (idx=28)
};

// SafeExamBrowser.Communication.Contracts.Events.ServerFailureActionReplyEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ServerFailureActionReplyEventArgs {
    void* field_xamBrowser_Communication_Contracts_Data; // +0x0 (idx=29)
    void* field__data1; // +0x8 (idx=30)
    void* field__data2; // +0x10 (idx=31)
    void* field_ssId; // +0x18 (idx=32)
};

// SafeExamBrowser.Communication.Contracts.Events.ServerFailureActionRequestEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_ServerFailureActionRequestEventArgs {
    void* field_c_b__0; // +0x0 (idx=33)
    void* field__data1; // +0x8 (idx=34)
    void* field__unk2; // +0x10 (idx=35)
};

// SafeExamBrowser.Communication.Contracts.Events.SessionStartEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_SessionStartEventArgs {
    void* field_c_b__0; // +0x0 (idx=36)
};

// SafeExamBrowser.Communication.Contracts.Events.SessionStopEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Communication_Contracts_Events_SessionStopEventArgs {
    void* field__data0; // +0x0 (idx=37)
};

// SafeExamBrowser.Communication.Contracts.Data.AuthenticationResponse
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_AuthenticationResponse {
    void* field_ocessId; // +0x0 (idx=38)
};

// SafeExamBrowser.Communication.Contracts.Data.ConfigurationResponse
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ConfigurationResponse {
    void* field__data0; // +0x0 (idx=39)
};

// SafeExamBrowser.Communication.Contracts.Data.ConnectionResponse
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ConnectionResponse {
    void* field__data0; // +0x0 (idx=40)
    void* field_sId; // +0x8 (idx=41)
};

// SafeExamBrowser.Communication.Contracts.Data.DisconnectionMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_DisconnectionMessage {
    void* field__data0; // +0x0 (idx=42)
};

// SafeExamBrowser.Communication.Contracts.Data.DisconnectionResponse
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_DisconnectionResponse {
    void* field__data0; // +0x0 (idx=43)
};

// SafeExamBrowser.Communication.Contracts.Data.ExamSelectionReplyMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ExamSelectionReplyMessage {
    void* field_ocessId; // +0x0 (idx=44)
    void* field__data1; // +0x8 (idx=45)
    void* field__data2; // +0x10 (idx=46)
};

// SafeExamBrowser.Communication.Contracts.Data.ExamSelectionRequestMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ExamSelectionRequestMessage {
    void* field_xamBrowser_Communication_Contracts_Data; // +0x0 (idx=47)
    void* field___32854_; // +0x8 (idx=48)
};

// SafeExamBrowser.Communication.Contracts.Data.Message
// Flags: 0x102081
struct SafeExamBrowser_Communication_Contracts_Data_Message {
    void* field_Settings; // +0x0 (idx=49)
};

// SafeExamBrowser.Communication.Contracts.Data.MessageBoxReplyMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_MessageBoxReplyMessage {
    void* field_sId; // +0x0 (idx=50)
    void* field__data1; // +0x8 (idx=51)
};

// SafeExamBrowser.Communication.Contracts.Data.MessageBoxRequestMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_MessageBoxRequestMessage {
    void* field__data0; // +0x0 (idx=52)
    void* field__unk1; // +0x8 (idx=53)
    void* field__data2; // +0x10 (idx=54)
    void* field__data3; // +0x18 (idx=55)
    void* field__unk4; // +0x20 (idx=56)
};

// SafeExamBrowser.Communication.Contracts.Data.PasswordReplyMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_PasswordReplyMessage {
    void* field_c_b__0; // +0x0 (idx=57)
    void* field__data1; // +0x8 (idx=58)
    void* field_estId; // +0x10 (idx=59)
};

// SafeExamBrowser.Communication.Contracts.Data.PasswordRequestMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_PasswordRequestMessage {
    void* field___32854_; // +0x0 (idx=60)
    void* field_ClientIsReady; // +0x8 (idx=61)
};

// SafeExamBrowser.Communication.Contracts.Data.PasswordRequestPurpose
// Flags: 0x0101
struct SafeExamBrowser_Communication_Contracts_Data_PasswordRequestPurpose {
    void* field_estId; // +0x0 (idx=62)
    void* field___32854_; // +0x8 (idx=63)
    void* field_RequestShutdown; // +0x10 (idx=64)
    void* field_estId; // +0x18 (idx=65)
};

// SafeExamBrowser.Communication.Contracts.Data.ReconfigurationDeniedMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ReconfigurationDeniedMessage {
    void* field__data0; // +0x0 (idx=66)
};

// SafeExamBrowser.Communication.Contracts.Data.ReconfigurationMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ReconfigurationMessage {
    void* field_value__; // +0x0 (idx=67)
    void* field__unk1; // +0x8 (idx=68)
};

// SafeExamBrowser.Communication.Contracts.Data.ServerFailureActionReplyMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ServerFailureActionReplyMessage {
    void* field___32854_; // +0x0 (idx=69)
    void* field_handler; // +0x8 (idx=70)
    void* field___; // +0x10 (idx=71)
    void* field_DisplayClass0_0; // +0x18 (idx=72)
};

// SafeExamBrowser.Communication.Contracts.Data.ServerFailureActionRequestMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_ServerFailureActionRequestMessage {
    void* field__data0; // +0x0 (idx=73)
    void* field_ClientConfigurationNeeded; // +0x8 (idx=74)
    void* field_DisplayClass0_0; // +0x10 (idx=75)
};

// SafeExamBrowser.Communication.Contracts.Data.SessionStartMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_SessionStartMessage {
    void* field__data0; // +0x0 (idx=76)
};

// SafeExamBrowser.Communication.Contracts.Data.SessionStopMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_SessionStopMessage {
    void* field___; // +0x0 (idx=77)
};

// SafeExamBrowser.Communication.Contracts.Data.SimpleMessage
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_SimpleMessage {
    void* field__data0; // +0x0 (idx=78)
};

// SafeExamBrowser.Communication.Contracts.Data.SimpleMessagePurport
// Flags: 0x2101
struct SafeExamBrowser_Communication_Contracts_Data_SimpleMessagePurport {
    void* field__unk0; // +0x0 (idx=79)
    void* field__data1; // +0x8 (idx=80)
    void* field__unk2; // +0x10 (idx=81)
    void* field__data3; // +0x18 (idx=82)
    void* field_Requested; // +0x20 (idx=83)
    void* field__unk5; // +0x28 (idx=84)
    void* field_Disconnect; // +0x30 (idx=85)
    void* field__unk7; // +0x38 (idx=86)
    void* field__unk8; // +0x40 (idx=87)
};

// SafeExamBrowser.Communication.Contracts.Data.SimpleResponse
// Flags: 0x102001
struct SafeExamBrowser_Communication_Contracts_Data_SimpleResponse {
    void* field__unk0; // +0x0 (idx=88)
};

// SafeExamBrowser.Communication.Contracts.Data.SimpleResponsePurport
// Flags: 0x2101
struct SafeExamBrowser_Communication_Contracts_Data_SimpleResponsePurport {
    void* field__data0; // +0x0 (idx=89)
    void* field_Requested; // +0x8 (idx=90)
    void* field__unk2; // +0x10 (idx=91)
    void* field_Stop; // +0x18 (idx=92)
};

// <InvokeAsync>d__0
// Flags: 0x100103
struct _InvokeAsync_d__0 {
    void* field__data0; // +0x0 (idx=96)
    void* field_ateMachineAttribute; // +0x8 (idx=97)
    void* field__unk2; // +0x10 (idx=98)
    void* field_Connect; // +0x18 (idx=99)
};

// <InvokeAsync>d__1`1
// Flags: 0x100103
struct _InvokeAsync_d__1_1 {
    void* field__unk0; // +0x0 (idx=100)
    void* field__unk1; // +0x8 (idx=101)
    void* field__unk2; // +0x10 (idx=102)
    void* field_splayClass0_0; // +0x18 (idx=103)
    void* field_kingField; // +0x20 (idx=104)
};

// Method count by type:
//   SafeExamBrowser.Communication.Contracts.Hosts.IClientHost: 18 methods
//   SafeExamBrowser.Communication.Contracts.Hosts.IRuntimeHost: 18 methods
//   SafeExamBrowser.Communication.Contracts.Events.MessageBoxRequestEventArgs: 11 methods
//   SafeExamBrowser.Communication.Contracts.Data.MessageBoxRequestMessage: 11 methods
//   SafeExamBrowser.Communication.Contracts.Events.ServerFailureActionReplyEventArgs: 9 methods
//   SafeExamBrowser.Communication.Contracts.Data.ServerFailureActionReplyMessage: 9 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.IClientProxy: 8 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.IRuntimeProxy: 8 methods
//   SafeExamBrowser.Communication.Contracts.Events.ExamSelectionReplyEventArgs: 7 methods
//   SafeExamBrowser.Communication.Contracts.Events.PasswordReplyEventArgs: 7 methods
//   SafeExamBrowser.Communication.Contracts.Events.ServerFailureActionRequestEventArgs: 7 methods
//   SafeExamBrowser.Communication.Contracts.Data.PasswordReplyMessage: 7 methods
//   SafeExamBrowser.Communication.Contracts.Data.ServerFailureActionRequestMessage: 6 methods
//   SafeExamBrowser.Communication.Contracts.ICommunicationProxy: 5 methods
//   SafeExamBrowser.Communication.Contracts.Events.ExamSelectionRequestEventArgs: 5 methods
//   SafeExamBrowser.Communication.Contracts.Events.MessageBoxReplyEventArgs: 5 methods
//   SafeExamBrowser.Communication.Contracts.Events.PasswordRequestEventArgs: 5 methods
//   SafeExamBrowser.Communication.Contracts.Events.ReconfigurationEventArgs: 5 methods
//   SafeExamBrowser.Communication.Contracts.Data.ConnectionResponse: 5 methods
//   SafeExamBrowser.Communication.Contracts.Data.MessageBoxReplyMessage: 5 methods
//   SafeExamBrowser.Communication.Contracts.Data.PasswordRequestMessage: 5 methods
//   SafeExamBrowser.Communication.Contracts.Data.ReconfigurationMessage: 5 methods
//   SafeExamBrowser.Communication.Contracts.Events.CommunicationEventHandler: 4 methods
//   SafeExamBrowser.Communication.Contracts.Events.CommunicationEventHandler`1: 4 methods
//   SafeExamBrowser.Communication.Contracts.Data.ExamSelectionReplyMessage: 4 methods
//   SafeExamBrowser.Communication.Contracts.Data.Message: 4 methods
//   SafeExamBrowser.Communication.Contracts.ICommunication: 3 methods
//   SafeExamBrowser.Communication.Contracts.ICommunicationHost: 3 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.CommunicationResult: 3 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.CommunicationResult`1: 3 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.IServiceProxy: 3 methods
//   SafeExamBrowser.Communication.Contracts.Hosts.IServiceHost: 3 methods
//   SafeExamBrowser.Communication.Contracts.Events.ClientConfigurationEventArgs: 3 methods
//   SafeExamBrowser.Communication.Contracts.Events.SessionStartEventArgs: 3 methods
//   SafeExamBrowser.Communication.Contracts.Events.SessionStopEventArgs: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.AuthenticationResponse: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.ConfigurationResponse: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.DisconnectionMessage: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.DisconnectionResponse: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.ExamSelectionRequestMessage: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.ReconfigurationDeniedMessage: 3 methods
//   SafeExamBrowser.Communication.Contracts.Data.SimpleMessage: 3 methods
//   SafeExamBrowser.Communication.Contracts.Events.CommunicationEventHandlerExtensions: 2 methods
//   SafeExamBrowser.Communication.Contracts.Data.Response: 2 methods
//   SafeExamBrowser.Communication.Contracts.Data.SessionStartMessage: 2 methods
//   SafeExamBrowser.Communication.Contracts.Data.SessionStopMessage: 2 methods
//   SafeExamBrowser.Communication.Contracts.Data.SimpleResponse: 2 methods
//   <InvokeAsync>d__1`1: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.IProxyFactory: 1 methods
//   SafeExamBrowser.Communication.Contracts.Proxies.IProxyObjectFactory: 1 methods
//   SafeExamBrowser.Communication.Contracts.Hosts.IHostObjectFactory: 1 methods
//   SafeExamBrowser.Communication.Contracts.Events.CommunicationEventArgs: 1 methods
//   <InvokeAsync>d__0: 1 methods

} // namespace safeexambrowser_communication_contracts

// ── SafeExamBrowser.Communication.dll ──
namespace safeexambrowser_communication {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Communication.Proxies.BaseProxy
// Flags: 0x100081
struct SafeExamBrowser_Communication_Proxies_BaseProxy {
    void* field__data0; // +0x0 (idx=2)
    void* field__data1; // +0x8 (idx=3)
    void* field_owner; // +0x10 (idx=4)
    void* field_gField; // +0x18 (idx=5)
    void* field__data4; // +0x20 (idx=6)
    void* field_timer; // +0x28 (idx=7)
    void* field_ckground; // +0x30 (idx=8)
    void* field__data7; // +0x38 (idx=9)
    void* field_logger; // +0x40 (idx=10)
    void* field__data9; // +0x48 (idx=11)
};

// SafeExamBrowser.Communication.Proxies.ProxyFactory
// Flags: 0x100001
struct SafeExamBrowser_Communication_Proxies_ProxyFactory {
    void* field__data0; // +0x0 (idx=12)
    void* field_factory; // +0x8 (idx=13)
};

// SafeExamBrowser.Communication.Hosts.BaseHost
// Flags: 0x100081
struct SafeExamBrowser_Communication_Hosts_BaseHost {
    void* field__unk0; // +0x0 (idx=14)
    void* field__data1; // +0x8 (idx=15)
    void* field__data2; // +0x10 (idx=16)
    void* field_rd; // +0x18 (idx=17)
    void* field_DisplayClass24_0; // +0x20 (idx=18)
    void* field__unk5; // +0x28 (idx=19)
    void* field_DisplayClass24_0; // +0x30 (idx=20)
    void* field__unk7; // +0x38 (idx=21)
};

// Method count by type:
//   SafeExamBrowser.Communication.Proxies.BaseProxy: 25 methods
//   SafeExamBrowser.Communication.Hosts.BaseHost: 21 methods
//   SafeExamBrowser.Communication.Proxies.ClientProxy: 9 methods
//   SafeExamBrowser.Communication.Proxies.RuntimeProxy: 9 methods
//   SafeExamBrowser.Communication.Proxies.ServiceProxy: 4 methods
//   SafeExamBrowser.Communication.Proxies.ProxyFactory: 2 methods
//   SafeExamBrowser.Communication.Proxies.ProxyObjectFactory: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Communication.Hosts.HostObjectFactory: 1 methods
//   Host: 1 methods

} // namespace safeexambrowser_communication

// ── SafeExamBrowser.Configuration.Contracts.dll ──
namespace safeexambrowser_configuration_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Configuration.Contracts.AppConfig
// Flags: 0x102001
struct SafeExamBrowser_Configuration_Contracts_AppConfig {
    void* field_rted; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_RUNTIME_MUTEX_NAME; // +0x10 (idx=4)
    void* field_rted; // +0x18 (idx=5)
    void* field_IDictionary_2; // +0x20 (idx=6)
    void* field__data5; // +0x28 (idx=7)
    void* field_rted; // +0x30 (idx=8)
    void* field_IDictionary_2; // +0x38 (idx=9)
    void* field__data8; // +0x40 (idx=10)
    void* field_t_UserSid; // +0x48 (idx=11)
    void* field_IDictionary_2; // +0x50 (idx=12)
    void* field__data11; // +0x58 (idx=13)
    void* field_rted; // +0x60 (idx=14)
    void* field_IDictionary_2; // +0x68 (idx=15)
    void* field__data14; // +0x70 (idx=16)
    void* field_rted; // +0x78 (idx=17)
    void* field_IDictionary_2; // +0x80 (idx=18)
    void* field__data17; // +0x88 (idx=19)
    void* field_rted; // +0x90 (idx=20)
    void* field_IDictionary_2; // +0x98 (idx=21)
    void* field__data20; // +0xA0 (idx=22)
    void* field_rted; // +0xA8 (idx=23)
    void* field_IDictionary_2; // +0xB0 (idx=24)
    void* field__data23; // +0xB8 (idx=25)
    void* field_rted; // +0xC0 (idx=26)
    void* field_IDictionary_2; // +0xC8 (idx=27)
    void* field__data26; // +0xD0 (idx=28)
    void* field_erSid; // +0xD8 (idx=29)
    void* field_IDictionary_2; // +0xE0 (idx=30)
    void* field_value__; // +0xE8 (idx=31)
    void* field_t_UserSid; // +0xF0 (idx=32)
    void* field___32854_; // +0xF8 (idx=33)
    void* field_PasswordNeeded; // +0x100 (idx=34)
    void* field_t_UserSid; // +0x108 (idx=35)
    void* field_Field; // +0x110 (idx=36)
    void* field_InvalidData; // +0x118 (idx=37)
};

// SafeExamBrowser.Configuration.Contracts.ClientConfiguration
// Flags: 0x102001
struct SafeExamBrowser_Configuration_Contracts_ClientConfiguration {
    void* field_erSid; // +0x0 (idx=38)
    void* field___32854_; // +0x8 (idx=39)
    void* field__data2; // +0x10 (idx=40)
};

// SafeExamBrowser.Configuration.Contracts.LoadStatus
// Flags: 0x0101
struct SafeExamBrowser_Configuration_Contracts_LoadStatus {
    void* field_t_UserSid; // +0x0 (idx=41)
    void* field_IDictionary_2; // +0x8 (idx=42)
    void* field__data2; // +0x10 (idx=43)
    void* field_erSid; // +0x18 (idx=44)
    void* field_IDictionary_2; // +0x20 (idx=45)
    void* field__data5; // +0x28 (idx=46)
    void* field_d; // +0x30 (idx=47)
};

// SafeExamBrowser.Configuration.Contracts.SaveStatus
// Flags: 0x0101
struct SafeExamBrowser_Configuration_Contracts_SaveStatus {
    void* field___32854_; // +0x0 (idx=48)
    void* field_Xml; // +0x8 (idx=49)
    void* field_id; // +0x10 (idx=50)
    void* field_IDictionary_2; // +0x18 (idx=51)
    void* field__data4; // +0x20 (idx=52)
};

// SafeExamBrowser.Configuration.Contracts.ServiceConfiguration
// Flags: 0x102001
struct SafeExamBrowser_Configuration_Contracts_ServiceConfiguration {
    void* field_a_k__BackingField; // +0x0 (idx=53)
    void* field_IDictionary_2; // +0x8 (idx=54)
    void* field__data2; // +0x10 (idx=55)
    void* field__data3; // +0x18 (idx=56)
    void* field_IDictionary_2; // +0x20 (idx=57)
};

// SafeExamBrowser.Configuration.Contracts.SessionConfiguration
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Contracts_SessionConfiguration {
    void* field__unk0; // +0x0 (idx=58)
    void* field_ionary_2; // +0x8 (idx=59)
    void* field__unk2; // +0x10 (idx=60)
    void* field_IDictionary_2; // +0x18 (idx=61)
    void* field_rviceEventName; // +0x20 (idx=62)
};

// SafeExamBrowser.Configuration.Contracts.DataFormats.FormatType
// Flags: 0x0101
struct SafeExamBrowser_Configuration_Contracts_DataFormats_FormatType {
    void* field___8295_; // +0x0 (idx=63)
    void* field_set_AppDataFilePath; // +0x8 (idx=64)
    void* field__unk2; // +0x10 (idx=65)
};

// SafeExamBrowser.Configuration.Contracts.DataFormats.ParseResult
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Contracts_DataFormats_ParseResult {
    void* field_d; // +0x0 (idx=66)
    void* field__unk1; // +0x8 (idx=67)
    void* field_Dictionary_2; // +0x10 (idx=68)
    void* field_rviceEventName; // +0x18 (idx=69)
};

// SafeExamBrowser.Configuration.Contracts.DataFormats.SerializeResult
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Contracts_DataFormats_SerializeResult {
    void* field___8329_; // +0x0 (idx=70)
    void* field_set_BrowserCachePath; // +0x8 (idx=71)
};

// SafeExamBrowser.Configuration.Contracts.Cryptography.PasswordParameters
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Contracts_Cryptography_PasswordParameters {
    void* field__unk0; // +0x0 (idx=72)
    void* field_Field; // +0x8 (idx=73)
};

// SafeExamBrowser.Configuration.Contracts.Cryptography.PublicKeyParameters
// Flags: 0x100001
struct SafeExamBrowser_Configuration_Contracts_Cryptography_PublicKeyParameters {
    void* field__unk0; // +0x0 (idx=74)
    void* field_ctionary_2; // +0x8 (idx=75)
    void* field_rviceEventName; // +0x10 (idx=76)
};

// Method count by type:
//   SafeExamBrowser.Configuration.Contracts.AppConfig: 62 methods
//   SafeExamBrowser.Configuration.Contracts.ServiceConfiguration: 11 methods
//   SafeExamBrowser.Configuration.Contracts.SessionConfiguration: 11 methods
//   SafeExamBrowser.Configuration.Contracts.IConfigurationRepository: 9 methods
//   SafeExamBrowser.Configuration.Contracts.DataFormats.ParseResult: 9 methods
//   SafeExamBrowser.Configuration.Contracts.ClientConfiguration: 7 methods
//   SafeExamBrowser.Configuration.Contracts.Integrity.IIntegrityModule: 7 methods
//   SafeExamBrowser.Configuration.Contracts.DataFormats.SerializeResult: 5 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.PublicKeyParameters: 5 methods
//   SafeExamBrowser.Configuration.Contracts.DataCompression.IDataCompressor: 4 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.IKeyGenerator: 4 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.PasswordParameters: 3 methods
//   SafeExamBrowser.Configuration.Contracts.DataResources.IResourceLoader: 2 methods
//   SafeExamBrowser.Configuration.Contracts.DataResources.IResourceSaver: 2 methods
//   SafeExamBrowser.Configuration.Contracts.DataFormats.IDataParser: 2 methods
//   SafeExamBrowser.Configuration.Contracts.DataFormats.IDataSerializer: 2 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.ICertificateStore: 2 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.IPasswordEncryption: 2 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.IPublicKeyEncryption: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.EncryptionParameters: 1 methods
//   SafeExamBrowser.Configuration.Contracts.Cryptography.IHashAlgorithm: 1 methods

} // namespace safeexambrowser_configuration_contracts

// ── SafeExamBrowser.Core.Contracts.dll ──
namespace safeexambrowser_core_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Core.Contracts.Resources.Icons.BitmapIconResource
// Flags: 0x100001
struct SafeExamBrowser_Core_Contracts_Resources_Icons_BitmapIconResource {
    void* field_Module_; // +0x0 (idx=2)
};

// SafeExamBrowser.Core.Contracts.Resources.Icons.EmbeddedIconResource
// Flags: 0x100001
struct SafeExamBrowser_Core_Contracts_Resources_Icons_EmbeddedIconResource {
    void* field_Nullable_1; // +0x0 (idx=3)
};

// SafeExamBrowser.Core.Contracts.Resources.Icons.NativeIconResource
// Flags: 0x100001
struct SafeExamBrowser_Core_Contracts_Resources_Icons_NativeIconResource {
    void* field__data0; // +0x0 (idx=4)
};

// SafeExamBrowser.Core.Contracts.Resources.Icons.XamlIconResource
// Flags: 0x100001
struct SafeExamBrowser_Core_Contracts_Resources_Icons_XamlIconResource {
    void* field__1; // +0x0 (idx=5)
};

// SafeExamBrowser.Core.Contracts.OperationModel.OperationResult
// Flags: 0x0101
struct SafeExamBrowser_Core_Contracts_OperationModel_OperationResult {
    void* field___32854_; // +0x0 (idx=6)
    void* field_Success; // +0x8 (idx=7)
    void* field_e__; // +0x10 (idx=8)
    void* field_Nullable_1; // +0x18 (idx=9)
};

// SafeExamBrowser.Core.Contracts.OperationModel.Events.ProgressChangedEventArgs
// Flags: 0x100001
struct SafeExamBrowser_Core_Contracts_OperationModel_Events_ProgressChangedEventArgs {
    void* field__data0; // +0x0 (idx=10)
    void* field_orlib; // +0x8 (idx=11)
    void* field___6278_; // +0x10 (idx=12)
    void* field___8272_; // +0x18 (idx=13)
    void* field__ctor; // +0x20 (idx=14)
};

// Method count by type:
//   SafeExamBrowser.Core.Contracts.OperationModel.Events.ProgressChangedEventArgs: 9 methods
//   SafeExamBrowser.Core.Contracts.Resources.Icons.BitmapIconResource: 3 methods
//   SafeExamBrowser.Core.Contracts.Resources.Icons.EmbeddedIconResource: 3 methods
//   SafeExamBrowser.Core.Contracts.Resources.Icons.NativeIconResource: 3 methods
//   SafeExamBrowser.Core.Contracts.Notifications.Events.NotificationChangedEventHandler: 2 methods
//   SafeExamBrowser.Core.Contracts.ResponsibilityModel.IResponsibility`1: 1 methods
//   SafeExamBrowser.Core.Contracts.ResponsibilityModel.IResponsibilityCollection`1: 1 methods
//   SafeExamBrowser.Core.Contracts.Resources.Icons.IconResource: 1 methods
//   SafeExamBrowser.Core.Contracts.Resources.Icons.XamlIconResource: 1 methods
//   SafeExamBrowser.Core.Contracts.OperationModel.IRepeatableOperation: 1 methods
//   SafeExamBrowser.Core.Contracts.OperationModel.IRepeatableOperationSequence: 1 methods

} // namespace safeexambrowser_core_contracts

// ── SafeExamBrowser.Core.dll ──
namespace safeexambrowser_core {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Core.ResponsibilityModel.ResponsibilityCollection`1
// Flags: 0x100001
struct SafeExamBrowser_Core_ResponsibilityModel_ResponsibilityCollection_1 {
    void* field_sChanged_b__0; // +0x0 (idx=2)
    void* field_yClass8_0; // +0x8 (idx=3)
};

// SafeExamBrowser.Core.Operations.CommunicationHostOperation
// Flags: 0x100001
struct SafeExamBrowser_Core_Operations_CommunicationHostOperation {
    void* field_logger; // +0x0 (idx=4)
    void* field_ompareExchange; // +0x8 (idx=5)
    void* field__data2; // +0x10 (idx=6)
};

// SafeExamBrowser.Core.Operations.LazyInitializationOperation
// Flags: 0x100001
struct SafeExamBrowser_Core_Operations_LazyInitializationOperation {
    void* field_StatusChangedImpl; // +0x0 (idx=7)
    void* field_sChanged_b__0; // +0x8 (idx=8)
    void* field_yClass8_0; // +0x10 (idx=9)
};

// SafeExamBrowser.Core.Operations.I18nOperation
// Flags: 0x100001
struct SafeExamBrowser_Core_Operations_I18nOperation {
    void* field_repeat; // +0x0 (idx=10)
    void* field_e; // +0x8 (idx=11)
};

// SafeExamBrowser.Core.Operations.DelegateOperation
// Flags: 0x100001
struct SafeExamBrowser_Core_Operations_DelegateOperation {
    void* field__data0; // +0x0 (idx=12)
    void* field_stack; // +0x8 (idx=13)
    void* field_peatableOperationSequence; // +0x10 (idx=14)
};

// SafeExamBrowser.Core.OperationModel.OperationSequence`1
// Flags: 0x100001
struct SafeExamBrowser_Core_OperationModel_OperationSequence_1 {
    void* field_DisplayClass7_0; // +0x0 (idx=15)
    void* field__unk1; // +0x8 (idx=16)
    void* field__data2; // +0x10 (idx=17)
    void* field__unk3; // +0x18 (idx=18)
};

// Method count by type:
//   SafeExamBrowser.Core.OperationModel.OperationSequence`1: 11 methods
//   SafeExamBrowser.Core.Operations.LazyInitializationOperation: 7 methods
//   SafeExamBrowser.Core.Operations.CommunicationHostOperation: 6 methods
//   SafeExamBrowser.Core.Operations.DelegateOperation: 6 methods
//   SafeExamBrowser.Core.Operations.I18nOperation: 5 methods
//   SafeExamBrowser.Core.OperationModel.RepeatableOperationSequence`1: 3 methods
//   SafeExamBrowser.Core.ResponsibilityModel.ResponsibilityCollection`1: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.Core.OperationModel.QueueExtensions: 1 methods

} // namespace safeexambrowser_core

// ── SafeExamBrowser.I18n.Contracts.dll ──
namespace safeexambrowser_i18n_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.I18n.Contracts.TextKey
// Flags: 0x0101
struct SafeExamBrowser_I18n_Contracts_TextKey {
    void* field_oskMode; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_Browser_BlockedContentMessage; // +0x10 (idx=4)
    void* field_Mode; // +0x18 (idx=5)
    void* field___32854_; // +0x20 (idx=6)
    void* field_Browser_LoadErrorMessage; // +0x28 (idx=7)
    void* field_Mode; // +0x30 (idx=8)
    void* field___32854_; // +0x38 (idx=9)
    void* field_Browser_Tooltip; // +0x40 (idx=10)
    void* field_Mode; // +0x48 (idx=11)
    void* field___32854_; // +0x50 (idx=12)
    void* field_BrowserWindow_Downloading; // +0x58 (idx=13)
    void* field_Mode; // +0x60 (idx=14)
    void* field___32854_; // +0x68 (idx=15)
    void* field_BrowserWindow_FindCaseSensitive; // +0x70 (idx=16)
    void* field_Mode; // +0x78 (idx=17)
    void* field___32854_; // +0x80 (idx=18)
    void* field_BrowserWindow_MenuButton; // +0x88 (idx=19)
    void* field_Mode; // +0x90 (idx=20)
    void* field___32854_; // +0x98 (idx=21)
    void* field_BrowserWindow_SearchTextBox; // +0xA0 (idx=22)
    void* field_Mode; // +0xA8 (idx=23)
    void* field___32854_; // +0xB0 (idx=24)
    void* field_BrowserWindow_ZoomMenuMinus; // +0xB8 (idx=25)
    void* field_Mode; // +0xC0 (idx=26)
    void* field___32854_; // +0xC8 (idx=27)
    void* field_CredentialsDialog_UsernameLabel; // +0xD0 (idx=28)
    void* field_Mode; // +0xD8 (idx=29)
    void* field___32854_; // +0xE0 (idx=30)
    void* field_ExamSelectionDialog_Cancel; // +0xE8 (idx=31)
    void* field_Mode; // +0xF0 (idx=32)
    void* field___32854_; // +0xF8 (idx=33)
    void* field_FileSystemDialog_Cancel; // +0x100 (idx=34)
    void* field_Mode; // +0x108 (idx=35)
    void* field___32854_; // +0x110 (idx=36)
    void* field_FileSystemDialog_OpenFolderMessage; // +0x118 (idx=37)
    void* field_Mode; // +0x120 (idx=38)
    void* field___32854_; // +0x128 (idx=39)
    void* field_FileSystemDialog_SaveFileMessage; // +0x130 (idx=40)
    void* field_Mode; // +0x138 (idx=41)
    void* field___32854_; // +0x140 (idx=42)
    void* field_FolderDialog_ApplicationLocation; // +0x148 (idx=43)
    void* field_Mode; // +0x150 (idx=44)
    void* field___32854_; // +0x158 (idx=45)
    void* field_LockScreen_ApplicationsTerminateOption; // +0x160 (idx=46)
    void* field_Mode; // +0x168 (idx=47)
    void* field___32854_; // +0x170 (idx=48)
    void* field_LockScreen_DisplayConfigurationContinueOption; // +0x178 (idx=49)
    void* field_Mode; // +0x180 (idx=50)
    void* field___32854_; // +0x188 (idx=51)
    void* field_LockScreen_EaseOfAccessMessage; // +0x190 (idx=52)
    void* field_Mode; // +0x198 (idx=53)
    void* field___32854_; // +0x1A0 (idx=54)
    void* field_LockScreen_StickyKeysContinueOption; // +0x1A8 (idx=55)
    void* field_Mode; // +0x1B0 (idx=56)
    void* field___32854_; // +0x1B8 (idx=57)
    void* field_LockScreen_UserSessionContinueOption; // +0x1C0 (idx=58)
    void* field_Mode; // +0x1C8 (idx=59)
    void* field___32854_; // +0x1D0 (idx=60)
    void* field_LogWindow_AlwaysOnTop; // +0x1D8 (idx=61)
    void* field_Mode; // +0x1E0 (idx=62)
    void* field___32854_; // +0x1E8 (idx=63)
    void* field_MessageBox_ApplicationAutoTerminationQuestion; // +0x1F0 (idx=64)
    void* field_Mode; // +0x1F8 (idx=65)
    void* field___32854_; // +0x200 (idx=66)
    void* field_MessageBox_ApplicationInitializationFailure; // +0x208 (idx=67)
    void* field_Mode; // +0x210 (idx=68)
    void* field___32854_; // +0x218 (idx=69)
    void* field_MessageBox_ApplicationTerminationFailure; // +0x220 (idx=70)
    void* field_Mode; // +0x228 (idx=71)
    void* field___32854_; // +0x230 (idx=72)
    void* field_MessageBox_BrowserNavigationBlocked; // +0x238 (idx=73)
    void* field_Mode; // +0x240 (idx=74)
    void* field___32854_; // +0x248 (idx=75)
    void* field_MessageBox_CancelButton; // +0x250 (idx=76)
    void* field_Mode; // +0x258 (idx=77)
    void* field___32854_; // +0x260 (idx=78)
    void* field_MessageBox_ClientConfigurationQuestionTitle; // +0x268 (idx=79)
    void* field_Mode; // +0x270 (idx=80)
    void* field___32854_; // +0x278 (idx=81)
    void* field_MessageBox_DisplayConfigurationErrorTitle; // +0x280 (idx=82)
    void* field_Mode; // +0x288 (idx=83)
    void* field___32854_; // +0x290 (idx=84)
    void* field_MessageBox_DownloadNotAllowedTitle; // +0x298 (idx=85)
    void* field_Mode; // +0x2A0 (idx=86)
    void* field___32854_; // +0x2A8 (idx=87)
    void* field_MessageBox_InvalidHomePasswordTitle; // +0x2B0 (idx=88)
    void* field_Mode; // +0x2B8 (idx=89)
    void* field___32854_; // +0x2C0 (idx=90)
    void* field_MessageBox_InvalidQuitPasswordTitle; // +0x2C8 (idx=91)
    void* field_Mode; // +0x2D0 (idx=92)
    void* field___32854_; // +0x2D8 (idx=93)
    void* field_MessageBox_NotSupportedConfigurationResource; // +0x2E0 (idx=94)
    void* field_Mode; // +0x2E8 (idx=95)
    void* field___32854_; // +0x2F0 (idx=96)
    void* field_MessageBox_PageLeaveConfirmationTitle; // +0x2F8 (idx=97)
    void* field_Mode; // +0x300 (idx=98)
    void* field___32854_; // +0x308 (idx=99)
    void* field_MessageBox_QuitTitle; // +0x310 (idx=100)
    void* field_Mode; // +0x318 (idx=101)
    void* field___32854_; // +0x320 (idx=102)
    void* field_MessageBox_ReconfigurationDeniedTitle; // +0x328 (idx=103)
    void* field_Mode; // +0x330 (idx=104)
    void* field___32854_; // +0x338 (idx=105)
    void* field_MessageBox_RemoteSessionNotAllowedTitle; // +0x340 (idx=106)
    void* field_Mode; // +0x348 (idx=107)
    void* field___32854_; // +0x350 (idx=108)
    void* field_MessageBox_ServiceUnavailableErrorTitle; // +0x358 (idx=109)
    void* field_Mode; // +0x360 (idx=110)
    void* field___32854_; // +0x368 (idx=111)
    void* field_MessageBox_SessionStartErrorTitle; // +0x370 (idx=112)
    void* field_Mode; // +0x378 (idx=113)
    void* field___32854_; // +0x380 (idx=114)
    void* field_MessageBox_StartupErrorTitle; // +0x388 (idx=115)
    void* field_Mode; // +0x390 (idx=116)
    void* field___32854_; // +0x398 (idx=117)
    void* field_MessageBox_UploadNotAllowedTitle; // +0x3A0 (idx=118)
    void* field_Mode; // +0x3A8 (idx=119)
    void* field___32854_; // +0x3B0 (idx=120)
    void* field_MessageBox_VideoProctoringDisclaimer; // +0x3B8 (idx=121)
    void* field_Mode; // +0x3C0 (idx=122)
    void* field___32854_; // +0x3C8 (idx=123)
    void* field_MessageBox_YesButton; // +0x3D0 (idx=124)
    void* field_Mode; // +0x3D8 (idx=125)
    void* field___32854_; // +0x3E0 (idx=126)
    void* field_Notification_LogTooltip; // +0x3E8 (idx=127)
    void* field_Mode; // +0x3F0 (idx=128)
    void* field___32854_; // +0x3F8 (idx=129)
    void* field_Notification_ProctoringInactiveTooltip; // +0x400 (idx=130)
    void* field_Mode; // +0x408 (idx=131)
    void* field___32854_; // +0x410 (idx=132)
    void* field_OperationStatus_FinalizeApplications; // +0x418 (idx=133)
    void* field_Mode; // +0x420 (idx=134)
    void* field___32854_; // +0x428 (idx=135)
    void* field_OperationStatus_FinalizeSystemEvents; // +0x430 (idx=136)
    void* field_Mode; // +0x438 (idx=137)
    void* field___32854_; // +0x440 (idx=138)
    void* field_OperationStatus_InitializeConfiguration; // +0x448 (idx=139)
    void* field_Mode; // +0x450 (idx=140)
    void* field___32854_; // +0x458 (idx=141)
    void* field_OperationStatus_InitializeRuntimeConnection; // +0x460 (idx=142)
    void* field_Mode; // +0x468 (idx=143)
    void* field___32854_; // +0x470 (idx=144)
    void* field_OperationStatus_InitializeShell; // +0x478 (idx=145)
    void* field_Mode; // +0x480 (idx=146)
    void* field___32854_; // +0x488 (idx=147)
    void* field_OperationStatus_RestartCommunicationHost; // +0x490 (idx=148)
    void* field_Mode; // +0x498 (idx=149)
    void* field___32854_; // +0x4A0 (idx=150)
    void* field_OperationStatus_StartCommunicationHost; // +0x4A8 (idx=151)
    void* field_Mode; // +0x4B0 (idx=152)
    void* field___32854_; // +0x4B8 (idx=153)
    void* field_OperationStatus_StopCommunicationHost; // +0x4C0 (idx=154)
    void* field_Mode; // +0x4C8 (idx=155)
    void* field___32854_; // +0x4D0 (idx=156)
    void* field_OperationStatus_TerminateProctoring; // +0x4D8 (idx=157)
    void* field_Mode; // +0x4E0 (idx=158)
    void* field___32854_; // +0x4E8 (idx=159)
    void* field_OperationStatus_ValidateVersionRestrictions; // +0x4F0 (idx=160)
    void* field_Mode; // +0x4F8 (idx=161)
    void* field___32854_; // +0x500 (idx=162)
    void* field_OperationStatus_WaitDisclaimerConfirmation; // +0x508 (idx=163)
    void* field_Mode; // +0x510 (idx=164)
    void* field___32854_; // +0x518 (idx=165)
    void* field_OperationStatus_WaitRuntimeDisconnection; // +0x520 (idx=166)
    void* field_Mode; // +0x528 (idx=167)
    void* field___32854_; // +0x530 (idx=168)
    void* field_PasswordDialog_Confirm; // +0x538 (idx=169)
    void* field_Mode; // +0x540 (idx=170)
    void* field___32854_; // +0x548 (idx=171)
    void* field_PasswordDialog_LocalSettingsPasswordRequiredTitle; // +0x550 (idx=172)
    void* field_Mode; // +0x558 (idx=173)
    void* field___32854_; // +0x560 (idx=174)
    void* field_PasswordDialog_SettingsPasswordRequiredTitle; // +0x568 (idx=175)
    void* field_Mode; // +0x570 (idx=176)
    void* field___32854_; // +0x578 (idx=177)
    void* field_ProctoringFinalizationDialog_InfoMessage; // +0x580 (idx=178)
    void* field_Mode; // +0x588 (idx=179)
    void* field___32854_; // +0x590 (idx=180)
    void* field_ProctoringFinalizationDialog_StatusWaiting; // +0x598 (idx=181)
    void* field_Mode; // +0x5A0 (idx=182)
    void* field___32854_; // +0x5A8 (idx=183)
    void* field_ServerFailureDialog_Abort; // +0x5B0 (idx=184)
    void* field_Mode; // +0x5B8 (idx=185)
    void* field___32854_; // +0x5C0 (idx=186)
    void* field_ServerFailureDialog_Title; // +0x5C8 (idx=187)
    void* field_Mode; // +0x5D0 (idx=188)
    void* field___32854_; // +0x5D8 (idx=189)
    void* field_SystemControl_AudioDeviceMuteTooltip; // +0x5E0 (idx=190)
    void* field_Mode; // +0x5E8 (idx=191)
    void* field___32854_; // +0x5F0 (idx=192)
    void* field_SystemControl_BatteryCharging; // +0x5F8 (idx=193)
    void* field_Mode; // +0x600 (idx=194)
    void* field___32854_; // +0x608 (idx=195)
    void* field_SystemControl_KeyboardLayoutTooltip; // +0x610 (idx=196)
    void* field_Mode; // +0x618 (idx=197)
    void* field___32854_; // +0x620 (idx=198)
    void* field_SystemControl_NetworkWirelessConnected; // +0x628 (idx=199)
    void* field_Mode; // +0x630 (idx=200)
    void* field_Box_ConfigurationDownloadError; // +0x638 (idx=201)
    void* field__ctor; // +0x640 (idx=202)
    void* field__unk201; // +0x648 (idx=203)
    void* field_IDictionary_2; // +0x650 (idx=204)
    void* field__unk203; // +0x658 (idx=205)
    void* field_IDictionary_2; // +0x660 (idx=206)
    void* field_wser_BlockedPageMessage; // +0x668 (idx=207)
    void* field__unk206; // +0x670 (idx=208)
    void* field_LoadText; // +0x678 (idx=209)
    void* field_IDictionary_2; // +0x680 (idx=210)
    void* field_IDictionary_2; // +0x688 (idx=211)
    void* field_alue__; // +0x690 (idx=212)
    void* field__ctor; // +0x698 (idx=213)
    void* field_Module_; // +0x6A0 (idx=214)
    void* field_a; // +0x6A8 (idx=215)
    void* field__ctor; // +0x6B0 (idx=216)
    void* field_e_; // +0x6B8 (idx=217)
    void* field_ingArea; // +0x6C0 (idx=218)
    void* field__ctor; // +0x6C8 (idx=219)
    void* field_Module_; // +0x6D0 (idx=220)
    void* field_rlib; // +0x6D8 (idx=221)
    void* field__ctor; // +0x6E0 (idx=222)
    void* field_Status_RestoreWorkingArea; // +0x6E8 (idx=223)
    void* field_nary_2; // +0x6F0 (idx=224)
    void* field_value__; // +0x6F8 (idx=225)
    void* field_gArea; // +0x700 (idx=226)
    void* field_nary_2; // +0x708 (idx=227)
    void* field_nStatus_RestoreWorkingArea; // +0x710 (idx=228)
    void* field_s_InitializeWorkingArea; // +0x718 (idx=229)
    void* field_nary_2; // +0x720 (idx=230)
    void* field_orkingArea; // +0x728 (idx=231)
    void* field_rea; // +0x730 (idx=232)
    void* field_nary_2; // +0x738 (idx=233)
    void* field_tionStatus_InitializeWorkingArea; // +0x740 (idx=234)
    void* field_idConfigurationData; // +0x748 (idx=235)
    void* field_nary_2; // +0x750 (idx=236)
    void* field_alizeWorkingArea; // +0x758 (idx=237)
    void* field_mscorlib; // +0x760 (idx=238)
    void* field_nary_2; // +0x768 (idx=239)
    void* field__unk238; // +0x770 (idx=240)
    void* field_ections_Generic; // +0x778 (idx=241)
    void* field_nary_2; // +0x780 (idx=242)
    void* field_lidConfigurationData; // +0x788 (idx=243)
    void* field_emControl_BatteryCharged; // +0x790 (idx=244)
    void* field_nary_2; // +0x798 (idx=245)
    void* field_Data; // +0x7A0 (idx=246)
    void* field_rged; // +0x7A8 (idx=247)
    void* field_nary_2; // +0x7B0 (idx=248)
    void* field_stem_Collections_Generic; // +0x7B8 (idx=249)
    void* field_nfigurationDenied; // +0x7C0 (idx=250)
    void* field_nary_2; // +0x7C8 (idx=251)
    void* field__Generic; // +0x7D0 (idx=252)
    void* field_ssageBox_BrowserNavigationBlocked; // +0x7D8 (idx=253)
    void* field_nary_2; // +0x7E0 (idx=254)
    void* field_ontrol_BatteryCharged; // +0x7E8 (idx=255)
    void* field_gationBlocked; // +0x7F0 (idx=256)
    void* field_nary_2; // +0x7F8 (idx=257)
    void* field_arged; // +0x800 (idx=258)
    void* field_rWindow_DownloadCancelled; // +0x808 (idx=259)
    void* field_nary_2; // +0x810 (idx=260)
    void* field__data259; // +0x818 (idx=261)
    void* field_elled; // +0x820 (idx=262)
    void* field_nary_2; // +0x828 (idx=263)
    void* field_Denied; // +0x830 (idx=264)
    void* field_roctoringHandLowered; // +0x838 (idx=265)
    void* field_nary_2; // +0x840 (idx=266)
    void* field_x_BrowserNavigationBlocked; // +0x848 (idx=267)
};

// Method count by type:
//   SafeExamBrowser.I18n.Contracts.IText: 2 methods
//   Microsoft.CodeAnalysis.EmbeddedAttribute: 1 methods
//   System.Runtime.CompilerServices.RefSafetyRulesAttribute: 1 methods
//   SafeExamBrowser.I18n.Contracts.ITextResource: 1 methods

} // namespace safeexambrowser_i18n_contracts

// ── SafeExamBrowser.Lockdown.Contracts.dll ──
namespace safeexambrowser_lockdown_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Lockdown.Contracts.FeatureConfigurationStatus
// Flags: 0x0101
struct SafeExamBrowser_Lockdown_Contracts_FeatureConfigurationStatus {
    void* field_neric; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_Enabled; // +0x10 (idx=4)
    void* field__unk3; // +0x18 (idx=5)
};

// Method count by type:
//   SafeExamBrowser.Lockdown.Contracts.ISystemConfigurationUpdate: 1 methods

} // namespace safeexambrowser_lockdown_contracts

// ── SafeExamBrowser.Lockdown.dll ──
namespace safeexambrowser_lockdown {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Lockdown.AutoRestoreMechanism
// Flags: 0x100001
struct SafeExamBrowser_Lockdown_AutoRestoreMechanism {
    void* field_erializedAttribute; // +0x0 (idx=2)
    void* field__data1; // +0x8 (idx=3)
    void* field_systemConfigurationUpdate; // +0x10 (idx=4)
    void* field_ute; // +0x18 (idx=5)
    void* field_yClass16_0; // +0x20 (idx=6)
    void* field_lock; // +0x28 (idx=7)
};

// SafeExamBrowser.Lockdown.FeatureConfigurationFactory
// Flags: 0x100001
struct SafeExamBrowser_Lockdown_FeatureConfigurationFactory {
    void* field_dAttribute; // +0x0 (idx=8)
};

// SafeExamBrowser.Lockdown.FeatureConfigurationBackup
// Flags: 0x100001
struct SafeExamBrowser_Lockdown_FeatureConfigurationBackup {
    void* field_yClass16_0; // +0x0 (idx=9)
    void* field_configurations; // +0x8 (idx=10)
    void* field_edAttribute; // +0x10 (idx=11)
};

// SafeExamBrowser.Lockdown.FeatureConfigurationMonitor
// Flags: 0x100001
struct SafeExamBrowser_Lockdown_FeatureConfigurationMonitor {
    void* field__data0; // +0x0 (idx=12)
    void* field_logger; // +0x8 (idx=13)
    void* field_edAttribute; // +0x10 (idx=14)
    void* field_yClass16_0; // +0x18 (idx=15)
    void* field_FIVE_SECONDS; // +0x20 (idx=16)
};

// SafeExamBrowser.Lockdown.SystemConfigurationUpdate
// Flags: 0x100001
struct SafeExamBrowser_Lockdown_SystemConfigurationUpdate {
    void* field_DeserializedAttribute; // +0x0 (idx=17)
};

// SafeExamBrowser.Lockdown.FeatureConfigurations.FeatureConfiguration
// Flags: 0x102080
struct /* class */ SafeExamBrowser_Lockdown_FeatureConfigurations_FeatureConfiguration {
    void* field_yClass16_0; // +0x0 (idx=18)
    void* field__data1; // +0x8 (idx=19)
    void* field_dAttribute; // +0x10 (idx=20)
};

// SafeExamBrowser.Lockdown.FeatureConfigurations.ServiceConfigurations.ServiceConfiguration
// Flags: 0x102080
struct /* class */ SafeExamBrowser_Lockdown_FeatureConfigurations_ServiceConfigurations_ServiceConfiguration {
    void* field__data0; // +0x0 (idx=21)
    void* field_value__; // +0x8 (idx=22)
    void* field_e; // +0x10 (idx=23)
};

// SafeExamBrowser.Lockdown.FeatureConfigurations.ServiceConfigurations.ServiceConfigurationItem
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Lockdown_FeatureConfigurations_ServiceConfigurations_ServiceConfigurationItem {
    void* field___32854_; // +0x0 (idx=24)
    void* field__data1; // +0x8 (idx=25)
    void* field_dAttribute; // +0x10 (idx=26)
};

// SafeExamBrowser.Lockdown.FeatureConfigurations.ServiceConfigurations.ServiceDataItem
// Flags: 0x102000
struct /* class */ SafeExamBrowser_Lockdown_FeatureConfigurations_ServiceConfigurations_ServiceDataItem {
    void* field_yClass16_0; // +0x0 (idx=27)
    void* field__data1; // +0x8 (idx=28)
};

// SafeExamBrowser.Lockdown.FeatureConfigurations.ServiceConfigurations.ServiceStatus
// Flags: 0x0100
struct /* class */ SafeExamBrowser_Lockdown_FeatureConfigurations_ServiceConfigurations_ServiceStatus {
    void* field_dAttribute; // +0x0 (idx=29)
    void* field__data1; // +0x8 (idx=30)
    void* field_itemsToRestore; // +0x10 (idx=31)
    void* field_dAttribute; // +0x18 (idx=32)
};

// SafeExamBrowser.Lockdown.FeatureConfigurations.RegistryConfigurations.RegistryDataItem
// Flags: 0x102000
struct /* class */ SafeExamBrowser_Lockdown_FeatureConfigurations_RegistryConfigurations_RegistryDataItem {
    void* field_DisplayClass4_0; // +0x0 (idx=33)
    void* field_groupId; // +0x8 (idx=34)
    void* field_ibute; // +0x10 (idx=35)
};

// SafeExamBrowser.Lockdown.FeatureConfigurations.RegistryConfigurations.RegistryConfigurationItem
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Lockdown_FeatureConfigurations_RegistryConfigurations_RegistryConfigurationItem {
    void* field___6278_; // +0x0 (idx=36)
    void* field___8272_; // +0x8 (idx=37)
    void* field__ctor; // +0x10 (idx=38)
    void* field__unk3; // +0x18 (idx=39)
};

// SafeExamBrowser.Lockdown.FeatureConfigurations.RegistryConfigurations.RegistryConfiguration
// Flags: 0x102080
struct /* class */ SafeExamBrowser_Lockdown_FeatureConfigurations_RegistryConfigurations_RegistryConfiguration {
    void* field_e; // +0x0 (idx=40)
    void* field__unk1; // +0x8 (idx=41)
};

// SafeExamBrowser.Lockdown.FeatureConfigurations.RegistryConfigurations.UserHive.UserHiveConfiguration
// Flags: 0x102080
struct /* class */ SafeExamBrowser_Lockdown_FeatureConfigurations_RegistryConfigurations_UserHive_UserHiveConfiguration {
    void* field__data0; // +0x0 (idx=42)
    void* field_sStopped; // +0x8 (idx=43)
};

// Method count by type:
//   SafeExamBrowser.Lockdown.FeatureConfigurations.RegistryConfigurations.UserHive.VmwareOverlayConfiguration: 1 methods

} // namespace safeexambrowser_lockdown

// ── SafeExamBrowser.Logging.Contracts.dll ──
namespace safeexambrowser_logging_contracts {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

} // namespace safeexambrowser_logging_contracts

// ── SafeExamBrowser.Logging.dll ──
namespace safeexambrowser_logging {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Logging.LogFileWriter
// Flags: 0x100001
struct SafeExamBrowser_Logging_LogFileWriter {
    void* field_ace; // +0x0 (idx=2)
    void* field_rable_1; // +0x8 (idx=3)
    void* field_lock; // +0x10 (idx=4)
};

// SafeExamBrowser.Logging.Logger
// Flags: 0x100001
struct SafeExamBrowser_Logging_Logger {
    void* field__data0; // +0x0 (idx=5)
    void* field___9__13_0; // +0x8 (idx=6)
    void* field__data2; // +0x10 (idx=7)
    void* field_Message; // +0x18 (idx=8)
};

// SafeExamBrowser.Logging.LogMessage
// Flags: 0x100001
struct SafeExamBrowser_Logging_LogMessage {
    void* field___9__13_0; // +0x0 (idx=9)
    void* field__data1; // +0x8 (idx=10)
    void* field_essage; // +0x10 (idx=11)
    void* field___9__13_0; // +0x18 (idx=12)
};

// SafeExamBrowser.Logging.LogText
// Flags: 0x100001
struct SafeExamBrowser_Logging_LogText {
    void* field__data0; // +0x0 (idx=13)
};

// SafeExamBrowser.Logging.ModuleLogger
// Flags: 0x100001
struct SafeExamBrowser_Logging_ModuleLogger {
    void* field_ge; // +0x0 (idx=14)
    void* field___8264_; // +0x8 (idx=15)
};

// SafeExamBrowser.Logging.ThreadInfo
// Flags: 0x100001
struct SafeExamBrowser_Logging_ThreadInfo {
    void* field__ctor; // +0x0 (idx=16)
    void* field__unk1; // +0x8 (idx=17)
};

// <>c
// Flags: 0x102103
struct __c {
    void* field___9__13_0; // +0x0 (idx=18)
    void* field__unk1; // +0x8 (idx=19)
};

// Method count by type:
//   <>c: 2 methods

} // namespace safeexambrowser_logging

// ── SafeExamBrowser.Service.exe ──
namespace safeexambrowser_service {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Service.CompositionRoot
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Service_CompositionRoot {
    void* field_Settings_Service; // +0x0 (idx=2)
    void* field_OperationSequence_1; // +0x8 (idx=3)
};

// SafeExamBrowser.Service.Installer
// Flags: 0x100001
struct SafeExamBrowser_Service_Installer {
    void* field_service; // +0x0 (idx=4)
    void* field_et_Service; // +0x8 (idx=5)
};

// SafeExamBrowser.Service.Service
// Flags: 0x100001
struct SafeExamBrowser_Service_Service {
    void* field_OperationSequence_1; // +0x0 (idx=6)
};

// SafeExamBrowser.Service.ServiceController
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Service_ServiceController {
    void* field_bootstrapSequence; // +0x0 (idx=7)
    void* field_vice; // +0x8 (idx=8)
    void* field_OperationSequence_1; // +0x10 (idx=9)
    void* field_systemConfigurationUpdate; // +0x18 (idx=10)
    void* field_nce; // +0x20 (idx=11)
    void* field_OperationSequence_1; // +0x28 (idx=12)
    void* field__data6; // +0x30 (idx=13)
    void* field_ce; // +0x38 (idx=14)
};

// SafeExamBrowser.Service.SessionContext
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Service_SessionContext {
    void* field_Enumerable_1; // +0x0 (idx=15)
    void* field_monitor; // +0x8 (idx=16)
    void* field_Settings_Service; // +0x10 (idx=17)
    void* field_Enumerable_1; // +0x18 (idx=18)
};

// SafeExamBrowser.Service.Operations.LockdownOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Service_Operations_LockdownOperation {
    void* field_logger; // +0x0 (idx=19)
    void* field_ityReference; // +0x8 (idx=20)
    void* field_Enumerable_1; // +0x10 (idx=21)
    void* field_logger; // +0x18 (idx=22)
    void* field_Settings_Service; // +0x20 (idx=23)
};

// SafeExamBrowser.Service.Operations.RestoreOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Service_Operations_RestoreOperation {
    void* field_OperationSequence_1; // +0x0 (idx=24)
    void* field_allowConnection; // +0x8 (idx=25)
    void* field_nce; // +0x10 (idx=26)
};

// SafeExamBrowser.Service.Operations.ServiceEventCleanupOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Service_Operations_ServiceEventCleanupOperation {
    void* field_OperationSequence_1; // +0x0 (idx=27)
    void* field__unk1; // +0x8 (idx=28)
};

// SafeExamBrowser.Service.Operations.SessionActivationOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Service_Operations_SessionActivationOperation {
    void* field_tionSequence_1; // +0x0 (idx=29)
};

// SafeExamBrowser.Service.Operations.SessionInitializationOperation
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Service_Operations_SessionInitializationOperation {
    void* field__unk0; // +0x0 (idx=30)
    void* field_OperationSequence_1; // +0x8 (idx=31)
};

// SafeExamBrowser.Service.Operations.SessionOperation
// Flags: 0x100080
struct /* class */ SafeExamBrowser_Service_Operations_SessionOperation {
    void* field_ce_exe; // +0x0 (idx=32)
};

// SafeExamBrowser.Service.Communication.ServiceHost
// Flags: 0x100000
struct /* class */ SafeExamBrowser_Service_Communication_ServiceHost {
    void* field___8295_; // +0x0 (idx=33)
    void* field_set_ServiceController; // +0x8 (idx=34)
    void* field__unk2; // +0x10 (idx=35)
    void* field_tionSequence_1; // +0x18 (idx=36)
};

// Method count by type:
//   SafeExamBrowser.Service.Communication.ServiceHost: 3 methods

} // namespace safeexambrowser_service

// ── SafeExamBrowser.Settings.dll ──
namespace safeexambrowser_settings {

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
// Flags: 0x100100
struct /* class */ System_Runtime_CompilerServices_RefSafetyRulesAttribute {
    void* field_Version; // +0x0 (idx=1)
};

// SafeExamBrowser.Settings.ConfigurationMode
// Flags: 0x0101
struct SafeExamBrowser_Settings_ConfigurationMode {
    void* field_llowF3; // +0x0 (idx=2)
    void* field___32854_; // +0x8 (idx=3)
    void* field_value__; // +0x10 (idx=4)
};

// SafeExamBrowser.Settings.SessionMode
// Flags: 0x0101
struct SafeExamBrowser_Settings_SessionMode {
    void* field_set_AllowF3; // +0x0 (idx=5)
    void* field_get_AllowF10; // +0x8 (idx=6)
    void* field__data2; // +0x10 (idx=7)
};

// SafeExamBrowser.Settings.AppSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_AppSettings {
    void* field_et_AllowAltF4; // +0x0 (idx=8)
    void* field_get_AllowF10; // +0x8 (idx=9)
    void* field__data2; // +0x10 (idx=10)
    void* field__unk3; // +0x18 (idx=11)
    void* field_get_AllowF10; // +0x20 (idx=12)
    void* field__data5; // +0x28 (idx=13)
    void* field_et_AllowF4; // +0x30 (idx=14)
    void* field_get_AllowF10; // +0x38 (idx=15)
    void* field__data8; // +0x40 (idx=16)
    void* field_et_AllowF4; // +0x48 (idx=17)
    void* field_get_AllowF10; // +0x50 (idx=18)
    void* field__data11; // +0x58 (idx=19)
    void* field_F4; // +0x60 (idx=20)
    void* field_get_AllowF10; // +0x68 (idx=21)
    void* field__data14; // +0x70 (idx=22)
    void* field_F4; // +0x78 (idx=23)
};

// SafeExamBrowser.Settings.UserInterface.ActionCenterSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_UserInterface_ActionCenterSettings {
    void* field_get_AllowF10; // +0x0 (idx=24)
    void* field__data1; // +0x8 (idx=25)
    void* field_F4; // +0x10 (idx=26)
    void* field_get_AllowF10; // +0x18 (idx=27)
    void* field__data4; // +0x20 (idx=28)
    void* field_F4; // +0x28 (idx=29)
    void* field___32854_; // +0x30 (idx=30)
};

// SafeExamBrowser.Settings.UserInterface.LockScreenSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_UserInterface_LockScreenSettings {
    void* field_Mobile; // +0x0 (idx=31)
};

// SafeExamBrowser.Settings.UserInterface.TaskbarSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_UserInterface_TaskbarSettings {
    void* field_owF5; // +0x0 (idx=32)
    void* field_get_AllowF10; // +0x8 (idx=33)
    void* field__data2; // +0x10 (idx=34)
    void* field_F4; // +0x18 (idx=35)
    void* field_get_AllowF10; // +0x20 (idx=36)
    void* field__data5; // +0x28 (idx=37)
    void* field_owF5; // +0x30 (idx=38)
};

// SafeExamBrowser.Settings.UserInterface.UserInterfaceMode
// Flags: 0x0101
struct SafeExamBrowser_Settings_UserInterface_UserInterfaceMode {
    void* field_gField; // +0x0 (idx=39)
    void* field_Mandatory; // +0x8 (idx=40)
    void* field__5; // +0x10 (idx=41)
};

// SafeExamBrowser.Settings.UserInterface.UserInterfaceSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_UserInterface_UserInterfaceSettings {
    void* field_get_AllowF10; // +0x0 (idx=42)
    void* field__data1; // +0x8 (idx=43)
    void* field_F4; // +0x10 (idx=44)
    void* field_get_AllowF10; // +0x18 (idx=45)
};

// SafeExamBrowser.Settings.System.SystemSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_System_SystemSettings {
    void* field__data0; // +0x0 (idx=46)
};

// SafeExamBrowser.Settings.SystemComponents.AudioSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_SystemComponents_AudioSettings {
    void* field_F4; // +0x0 (idx=47)
    void* field_get_AllowF10; // +0x8 (idx=48)
    void* field__data2; // +0x10 (idx=49)
};

// SafeExamBrowser.Settings.SystemComponents.PowerSupplySettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_SystemComponents_PowerSupplySettings {
    void* field_F4; // +0x0 (idx=50)
    void* field_get_AllowF10; // +0x8 (idx=51)
};

// SafeExamBrowser.Settings.Service.ServicePolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Service_ServicePolicy {
    void* field__data0; // +0x0 (idx=52)
    void* field__5; // +0x8 (idx=53)
    void* field_gField; // +0x10 (idx=54)
    void* field_Debug; // +0x18 (idx=55)
};

// SafeExamBrowser.Settings.Service.ServiceSettings
// Flags: 0x100001
struct SafeExamBrowser_Settings_Service_ServiceSettings {
    void* field__unk0; // +0x0 (idx=56)
    void* field___32854_; // +0x8 (idx=57)
    void* field__data2; // +0x10 (idx=58)
    void* field_F4; // +0x18 (idx=59)
    void* field_get_AllowF10; // +0x20 (idx=60)
    void* field__data5; // +0x28 (idx=61)
    void* field_get_AllowF5; // +0x30 (idx=62)
    void* field_get_AllowF10; // +0x38 (idx=63)
    void* field__data8; // +0x40 (idx=64)
    void* field_F4; // +0x48 (idx=65)
    void* field_get_AllowF10; // +0x50 (idx=66)
    void* field__data11; // +0x58 (idx=67)
    void* field_llowF3; // +0x60 (idx=68)
    void* field_gField; // +0x68 (idx=69)
    void* field_Allow; // +0x70 (idx=70)
    void* field_lowF6; // +0x78 (idx=71)
};

// SafeExamBrowser.Settings.Logging.LogLevel
// Flags: 0x0101
struct SafeExamBrowser_Settings_Logging_LogLevel {
    void* field_get_AllowF10; // +0x0 (idx=72)
    void* field__data1; // +0x8 (idx=73)
    void* field__6; // +0x10 (idx=74)
    void* field_get_AllowF10; // +0x18 (idx=75)
    void* field__data4; // +0x20 (idx=76)
};

// SafeExamBrowser.Settings.Server.InvigilationSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Server_InvigilationSettings {
    void* field_llowF3; // +0x0 (idx=77)
    void* field___32854_; // +0x8 (idx=78)
};

// SafeExamBrowser.Settings.Server.ServerSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Server_ServerSettings {
    void* field_DisableExplorerShell; // +0x0 (idx=79)
    void* field_get_AllowF5; // +0x8 (idx=80)
    void* field_get_AllowF10; // +0x10 (idx=81)
    void* field__data3; // +0x18 (idx=82)
    void* field_F4; // +0x20 (idx=83)
    void* field_get_AllowF10; // +0x28 (idx=84)
    void* field__data6; // +0x30 (idx=85)
    void* field_llowF6; // +0x38 (idx=86)
    void* field_get_AllowF10; // +0x40 (idx=87)
    void* field__data9; // +0x48 (idx=88)
    void* field_F4; // +0x50 (idx=89)
    void* field_get_AllowF10; // +0x58 (idx=90)
    void* field_value__; // +0x60 (idx=91)
};

// SafeExamBrowser.Settings.Security.ClipboardPolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Security_ClipboardPolicy {
    void* field_llowF7; // +0x0 (idx=92)
    void* field_gField; // +0x8 (idx=93)
    void* field_Bmp; // +0x10 (idx=94)
    void* field_F7; // +0x18 (idx=95)
};

// SafeExamBrowser.Settings.Security.VersionRestriction
// Flags: 0x102001
struct SafeExamBrowser_Settings_Security_VersionRestriction {
    void* field___32854_; // +0x0 (idx=96)
    void* field_value__; // +0x8 (idx=97)
    void* field_et_AllowF7; // +0x10 (idx=98)
    void* field___32854_; // +0x18 (idx=99)
    void* field_Color24bpp; // +0x20 (idx=100)
    void* field_et_AllowF7; // +0x28 (idx=101)
};

// SafeExamBrowser.Settings.Security.KioskMode
// Flags: 0x0101
struct SafeExamBrowser_Settings_Security_KioskMode {
    void* field___32854_; // +0x0 (idx=102)
    void* field__data1; // +0x8 (idx=103)
    void* field_F4; // +0x10 (idx=104)
    void* field_get_AllowF10; // +0x18 (idx=105)
};

// SafeExamBrowser.Settings.Security.SecuritySettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Security_SecuritySettings {
    void* field__data0; // +0x0 (idx=106)
    void* field_F4; // +0x8 (idx=107)
    void* field_get_AllowF10; // +0x10 (idx=108)
    void* field__data3; // +0x18 (idx=109)
    void* field_F4; // +0x20 (idx=110)
    void* field_get_AllowF10; // +0x28 (idx=111)
    void* field__data6; // +0x30 (idx=112)
    void* field_F7; // +0x38 (idx=113)
    void* field_get_AllowF10; // +0x40 (idx=114)
    void* field__data9; // +0x48 (idx=115)
    void* field_F7; // +0x50 (idx=116)
    void* field_get_AllowF10; // +0x58 (idx=117)
    void* field__data12; // +0x60 (idx=118)
    void* field_F4; // +0x68 (idx=119)
    void* field_get_AllowF10; // +0x70 (idx=120)
};

// SafeExamBrowser.Settings.Security.VirtualMachinePolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Security_VirtualMachinePolicy {
    void* field__data0; // +0x0 (idx=121)
    void* field_F4; // +0x8 (idx=122)
    void* field_get_AllowF10; // +0x10 (idx=123)
};

// SafeExamBrowser.Settings.Proctoring.ImageFormat
// Flags: 0x0101
struct SafeExamBrowser_Settings_Proctoring_ImageFormat {
    void* field__data0; // +0x0 (idx=124)
    void* field_F4; // +0x8 (idx=125)
    void* field_get_AllowF10; // +0x10 (idx=126)
    void* field__data3; // +0x18 (idx=127)
    void* field_F4; // +0x20 (idx=128)
};

// SafeExamBrowser.Settings.Proctoring.ImageQuantization
// Flags: 0x0101
struct SafeExamBrowser_Settings_Proctoring_ImageQuantization {
    void* field_get_AllowF10; // +0x0 (idx=129)
    void* field__data1; // +0x8 (idx=130)
    void* field_F4; // +0x10 (idx=131)
    void* field_get_AllowF10; // +0x18 (idx=132)
    void* field__data4; // +0x20 (idx=133)
    void* field_F4; // +0x28 (idx=134)
    void* field_get_AllowF10; // +0x30 (idx=135)
    void* field__data7; // +0x38 (idx=136)
};

// SafeExamBrowser.Settings.Proctoring.MetaDataSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Proctoring_MetaDataSettings {
    void* field_F4; // +0x0 (idx=137)
    void* field_get_AllowF10; // +0x8 (idx=138)
    void* field__data2; // +0x10 (idx=139)
};

// SafeExamBrowser.Settings.Proctoring.ProctoringSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Proctoring_ProctoringSettings {
    void* field_et_AllowF8; // +0x0 (idx=140)
    void* field_get_AllowF10; // +0x8 (idx=141)
    void* field__data2; // +0x10 (idx=142)
};

// SafeExamBrowser.Settings.Proctoring.ScreenProctoringSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Proctoring_ScreenProctoringSettings {
    void* field_F4; // +0x0 (idx=143)
    void* field_get_AllowF10; // +0x8 (idx=144)
    void* field__data2; // +0x10 (idx=145)
    void* field_F4; // +0x18 (idx=146)
    void* field_get_AllowF10; // +0x20 (idx=147)
    void* field__data5; // +0x28 (idx=148)
    void* field__AllowF8; // +0x30 (idx=149)
    void* field_get_AllowF10; // +0x38 (idx=150)
    void* field__data8; // +0x40 (idx=151)
    void* field_get_AllowF5; // +0x48 (idx=152)
    void* field_get_AllowF10; // +0x50 (idx=153)
    void* field__data11; // +0x58 (idx=154)
    void* field_get_AllowF5; // +0x60 (idx=155)
};

// SafeExamBrowser.Settings.Monitoring.DisplaySettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Monitoring_DisplaySettings {
    void* field_get_AllowF10; // +0x0 (idx=156)
    void* field__data1; // +0x8 (idx=157)
    void* field_F4; // +0x10 (idx=158)
    void* field_get_AllowF10; // +0x18 (idx=159)
};

// SafeExamBrowser.Settings.Monitoring.KeyboardSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Monitoring_KeyboardSettings {
    void* field__data0; // +0x0 (idx=160)
    void* field_get_AllowF9; // +0x8 (idx=161)
    void* field_get_AllowF10; // +0x10 (idx=162)
    void* field__data3; // +0x18 (idx=163)
    void* field_F4; // +0x20 (idx=164)
    void* field_get_AllowF10; // +0x28 (idx=165)
    void* field__data6; // +0x30 (idx=166)
    void* field_get_AllowF5; // +0x38 (idx=167)
    void* field_get_AllowF10; // +0x40 (idx=168)
    void* field__data9; // +0x48 (idx=169)
    void* field_get_AllowF5; // +0x50 (idx=170)
    void* field_get_AllowF10; // +0x58 (idx=171)
    void* field_value__; // +0x60 (idx=172)
    void* field__9; // +0x68 (idx=173)
    void* field___32854_; // +0x70 (idx=174)
    void* field_Never; // +0x78 (idx=175)
    void* field_llowF3; // +0x80 (idx=176)
    void* field___32854_; // +0x88 (idx=177)
    void* field_Right; // +0x90 (idx=178)
    void* field__6; // +0x98 (idx=179)
    void* field_get_AllowF10; // +0xA0 (idx=180)
    void* field__data21; // +0xA8 (idx=181)
};

// SafeExamBrowser.Settings.Monitoring.MouseSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Monitoring_MouseSettings {
    void* field_F4; // +0x0 (idx=182)
    void* field_get_AllowF10; // +0x8 (idx=183)
};

// SafeExamBrowser.Settings.Browser.FilterSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_FilterSettings {
    void* field__data0; // +0x0 (idx=184)
    void* field__AllowF9; // +0x8 (idx=185)
    void* field_get_AllowF10; // +0x10 (idx=186)
};

// SafeExamBrowser.Settings.Browser.BrowserSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_BrowserSettings {
    void* field__data0; // +0x0 (idx=187)
    void* field_F4; // +0x8 (idx=188)
    void* field_get_AllowF10; // +0x10 (idx=189)
    void* field__data3; // +0x18 (idx=190)
    void* field_llowF3; // +0x20 (idx=191)
    void* field___32854_; // +0x28 (idx=192)
    void* field_AllowSameHostAndWindow; // +0x30 (idx=193)
    void* field_get_AllowF9; // +0x38 (idx=194)
    void* field_get_AllowF10; // +0x40 (idx=195)
    void* field__data9; // +0x48 (idx=196)
    void* field_F4; // +0x50 (idx=197)
    void* field_get_AllowF10; // +0x58 (idx=198)
    void* field__data12; // +0x60 (idx=199)
    void* field_llowF3; // +0x68 (idx=200)
    void* field___32854_; // +0x70 (idx=201)
    void* field_value__; // +0x78 (idx=202)
    void* field_wCtrlC; // +0x80 (idx=203)
    void* field___32854_; // +0x88 (idx=204)
    void* field_Socks; // +0x90 (idx=205)
    void* field_get_AllowF5; // +0x98 (idx=206)
    void* field_get_AllowF10; // +0xA0 (idx=207)
    void* field__data21; // +0xA8 (idx=208)
    void* field_F4; // +0xB0 (idx=209)
    void* field_gField; // +0xB8 (idx=210)
    void* field_Allow; // +0xC0 (idx=211)
    void* field_C; // +0xC8 (idx=212)
    void* field_get_AllowF10; // +0xD0 (idx=213)
    void* field__data27; // +0xD8 (idx=214)
    void* field_llowF3; // +0xE0 (idx=215)
    void* field___32854_; // +0xE8 (idx=216)
    void* field__data30; // +0xF0 (idx=217)
    void* field_t_AllowCtrlV; // +0xF8 (idx=218)
    void* field_get_AllowF10; // +0x100 (idx=219)
    void* field__data33; // +0x108 (idx=220)
    void* field_F4; // +0x110 (idx=221)
    void* field_lowF11; // +0x118 (idx=222)
    void* field__data36; // +0x120 (idx=223)
    void* field_F4; // +0x128 (idx=224)
    void* field_get_AllowF10; // +0x130 (idx=225)
    void* field__data39; // +0x138 (idx=226)
    void* field_get_AllowF5; // +0x140 (idx=227)
    void* field_get_AllowF10; // +0x148 (idx=228)
};

// SafeExamBrowser.Settings.Browser.UrlPolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_UrlPolicy {
    void* field__data0; // +0x0 (idx=229)
    void* field_get_AllowF5; // +0x8 (idx=230)
    void* field_k__BackingField; // +0x10 (idx=231)
    void* field_eService; // +0x18 (idx=232)
    void* field__ctor; // +0x20 (idx=233)
};

// SafeExamBrowser.Settings.Browser.WindowPosition
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_WindowPosition {
    void* field__unk0; // +0x0 (idx=234)
    void* field_set_AllowCtrlV; // +0x8 (idx=235)
    void* field__unk2; // +0x10 (idx=236)
    void* field_get_AllowF10; // +0x18 (idx=237)
};

// SafeExamBrowser.Settings.Browser.WindowSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_WindowSettings {
    void* field_le_k__BackingField; // +0x0 (idx=238)
    void* field_Mode; // +0x8 (idx=239)
    void* field_set_Audio; // +0x10 (idx=240)
    void* field__unk3; // +0x18 (idx=241)
    void* field_CtrlX; // +0x20 (idx=242)
    void* field__unk5; // +0x28 (idx=243)
    void* field_t_AllowF10; // +0x30 (idx=244)
    void* field_le_k__BackingField; // +0x38 (idx=245)
    void* field_et_FullScreenMode; // +0x40 (idx=246)
    void* field_set_ConfigurationMode; // +0x48 (idx=247)
    void* field__unk10; // +0x50 (idx=248)
    void* field_ue__; // +0x58 (idx=249)
    void* field__unk12; // +0x60 (idx=250)
    void* field_AllowF10; // +0x68 (idx=251)
    void* field_le_k__BackingField; // +0x70 (idx=252)
    void* field_de; // +0x78 (idx=253)
};

// SafeExamBrowser.Settings.Browser.PopupPolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_PopupPolicy {
    void* field_set_Keyboard; // +0x0 (idx=254)
    void* field__unk1; // +0x8 (idx=255)
    void* field_MetaData; // +0x10 (idx=256)
    void* field__unk3; // +0x18 (idx=257)
    void* field_lowF10; // +0x20 (idx=258)
    void* field_le_k__BackingField; // +0x28 (idx=259)
};

// SafeExamBrowser.Settings.Browser.ProxySettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_ProxySettings {
    void* field__unk0; // +0x0 (idx=260)
    void* field_set_Mouse; // +0x8 (idx=261)
    void* field__unk2; // +0x10 (idx=262)
    void* field_icationData; // +0x18 (idx=263)
    void* field__unk4; // +0x20 (idx=264)
    void* field_wF10; // +0x28 (idx=265)
};

// SafeExamBrowser.Settings.Browser.Proxy.ProxyPolicy
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_Proxy_ProxyPolicy {
    void* field_le_k__BackingField; // +0x0 (idx=266)
    void* field_rationMode; // +0x8 (idx=267)
    void* field_set_Proctoring; // +0x10 (idx=268)
};

// SafeExamBrowser.Settings.Browser.Proxy.ProxyProtocol
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_Proxy_ProxyProtocol {
    void* field__unk0; // +0x0 (idx=269)
    void* field_eApplicationData; // +0x8 (idx=270)
    void* field__unk2; // +0x10 (idx=271)
    void* field__10; // +0x18 (idx=272)
    void* field_le_k__BackingField; // +0x20 (idx=273)
};

// SafeExamBrowser.Settings.Browser.Proxy.ProxyConfiguration
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_Proxy_ProxyConfiguration {
    void* field_ge; // +0x0 (idx=274)
    void* field_set_Server; // +0x8 (idx=275)
    void* field__unk2; // +0x10 (idx=276)
    void* field_aptureBrowserData; // +0x18 (idx=277)
    void* field__unk4; // +0x20 (idx=278)
    void* field__unk5; // +0x28 (idx=279)
};

// SafeExamBrowser.Settings.Browser.Filter.FilterResult
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_Filter_FilterResult {
    void* field_le_k__BackingField; // +0x0 (idx=280)
    void* field_omeNavigationMessage; // +0x8 (idx=281)
    void* field_set_SessionMode; // +0x10 (idx=282)
};

// SafeExamBrowser.Settings.Browser.Filter.FilterRuleSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Browser_Filter_FilterRuleSettings {
    void* field__unk0; // +0x0 (idx=283)
    void* field_CaptureBrowserData; // +0x8 (idx=284)
    void* field__unk2; // +0x10 (idx=285)
};

// SafeExamBrowser.Settings.Browser.Filter.FilterRuleType
// Flags: 0x0101
struct SafeExamBrowser_Settings_Browser_Filter_FilterRuleType {
    void* field_et_AllowF10; // +0x0 (idx=286)
    void* field_le_k__BackingField; // +0x8 (idx=287)
    void* field_ationMessage; // +0x10 (idx=288)
};

// SafeExamBrowser.Settings.Applications.ApplicationSettings
// Flags: 0x102001
struct SafeExamBrowser_Settings_Applications_ApplicationSettings {
    void* field_set_UserInterface; // +0x0 (idx=289)
    void* field__unk1; // +0x8 (idx=290)
};

// SafeExamBrowser.Settings.Applications.BlacklistApplication
// Flags: 0x102001
struct SafeExamBrowser_Settings_Applications_BlacklistApplication {
    void* field_get_AllowF10; // +0x0 (idx=291)
    void* field__unk1; // +0x8 (idx=292)
    void* field__AllowF10; // +0x10 (idx=293)
};

// SafeExamBrowser.Settings.Applications.WhitelistApplication
// Flags: 0x102001
struct SafeExamBrowser_Settings_Applications_WhitelistApplication {
    void* field_le_k__BackingField; // +0x0 (idx=294)
    void* field_cutableName; // +0x8 (idx=295)
    void* field_get_ShowApplicationInfo; // +0x10 (idx=296)
    void* field__unk3; // +0x18 (idx=297)
    void* field_owF10; // +0x20 (idx=298)
    void* field__unk5; // +0x28 (idx=299)
    void* field_llowF10; // +0x30 (idx=300)
    void* field_le_k__BackingField; // +0x38 (idx=301)
    void* field__data8; // +0x40 (idx=302)
    void* field_get_ShowAudio; // +0x48 (idx=303)
    void* field__unk10; // +0x50 (idx=304)
    void* field_owF10; // +0x58 (idx=305)
    void* field__unk12; // +0x60 (idx=306)
};

// Method count by type:
//   SafeExamBrowser.Settings.Applications.WhitelistApplication: 16 methods
//   SafeExamBrowser.Settings.Browser.Filter.FilterRuleSettings: 5 methods
//   SafeExamBrowser.Settings.Applications.BlacklistApplication: 5 methods
//   SafeExamBrowser.Settings.Applications.ApplicationSettings: 3 methods

} // namespace safeexambrowser_settings
