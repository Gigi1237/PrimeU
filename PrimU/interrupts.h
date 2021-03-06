#pragma once
#include <cstdint>


enum InterruptID : uint32_t
{
    SDKLIB_OSCreateThread = 0x10000,
    SDKLIB_OSTerminateThread = 0x10001,
    SDKLIB_OSSetThreadPriority = 0x10002,
    SDKLIB_OSGetThreadPriority = 0x10003,
    SDKLIB_OSSuspendThread = 0x10004,
    SDKLIB_OSResumeThread = 0x10005,
    SDKLIB_OSWakeUpThread = 0x10006,
    SDKLIB_OSExitThread = 0x10007,
    SDKLIB_OSSleep = 0x10008,
    SDKLIB_OSCreateSemaphore = 0x10009,
    SDKLIB_OSWaitForSemaphore = 0x1000A,
    SDKLIB_OSReleaseSemaphore = 0x1000B,
    SDKLIB_OSCloseSemaphore = 0x1000C,
    SDKLIB_OSCreateEvent = 0x1000D,
    SDKLIB_OSWaitForEvent = 0x1000E,
    SDKLIB_OSSetEvent = 0x1000F,
    SDKLIB_OSResetEvent = 0x10010,
    SDKLIB_OSCloseEvent = 0x10011,
    SDKLIB_OSInitCriticalSection = 0x10012,
    SDKLIB_OSEnterCriticalSection = 0x10013,
    SDKLIB_OSLeaveCriticalSection = 0x10014,
    SDKLIB_OSDeleteCriticalSection = 0x10015,
    SDKLIB_OSSetLastError = 0x10016,
    SDKLIB_OSGetLastError = 0x10017,
    SDKLIB_OSCreateMsgQue = 0x10018,
    SDKLIB_OSPostMsgQue = 0x10019,
    SDKLIB_OSSendMsgQue = 0x1001A,
    SDKLIB_OSPeekMsgQue = 0x1001B,
    SDKLIB_OSGetMsgQue = 0x1001C,
    SDKLIB_OSCloseMsgQue = 0x1001D,
    SDKLIB_InterruptInitialize = 0x1001E,
    SDKLIB_InterruptEnable = 0x1001F,
    SDKLIB_InterruptDisable = 0x10020,
    SDKLIB_InterruptDone = 0x10021,
    SDKLIB_InterruptSetMode = 0x10022,
    SDKLIB_DisableAutoSync = 0x10023,
    SDKLIB_EnableAutoSync = 0x10024,
    SDKLIB_getvect = 0x10025,
    SDKLIB_setvect = 0x10026,
    SDKLIB_GetLCDContrast = 0x10027,
    SDKLIB_SetLCDContrast = 0x10028,
    SDKLIB_LCDOn = 0x10029,
    SDKLIB_LCDOff = 0x1002A,
    SDKLIB_CheckLCDOn = 0x1002B,
    SDKLIB_Buzzer = 0x1002C,
    SDKLIB_KeyBeep = 0x1002D,
    SDKLIB_SetTimer1IntHandler = 0x1002E,
    SDKLIB_SetAutoPowerOff = 0x1002F,
    SDKLIB_GetTimer1IntHandler = 0x10030,
    SDKLIB_RemapMemory = 0x10031,
    SDKLIB_SysPowerOff = 0x10032,
    SDKLIB_SetSysKeyState = 0x10033,
    SDKLIB_GetSysKeyState = 0x10034,
    SDKLIB_GetBatteryType = 0x10035,
    SDKLIB_BatteryLowCheck = 0x10036,
    SDKLIB_lmalloc = 0x10037,
    SDKLIB_lcalloc = 0x10038,
    SDKLIB_lrealloc = 0x10039,
    SDKLIB__lfree = 0x1003A,
    SDKLIB_GetPenEvent = 0x1003B,
    SDKLIB_CheckPenEvent = 0x1003C,
    SDKLIB_ClearPenEvent = 0x1003D,
    SDKLIB_PutSystemEvent = 0x1003E,
    SDKLIB_GetEvent = 0x1003F,
    SDKLIB_GetPendEvent = 0x10040,
    SDKLIB_SetEventType = 0x10041,
    SDKLIB_GetEventType = 0x10042,
    SDKLIB_PutEvent = 0x10043,
    SDKLIB_PutEventExt = 0x10044,
    SDKLIB_GetLastEvent = 0x10045,
    SDKLIB_TestPendEvent = 0x10046,
    SDKLIB_ClearPendEvent = 0x10047,
    SDKLIB_ClearPenState = 0x10048,
    SDKLIB_ClearEvent = 0x10049,
    SDKLIB_ClearAllEvents = 0x1004A,
    SDKLIB_TestKeyEvent = 0x1004B,
    SDKLIB_SetSystemVariable = 0x1004C,
    SDKLIB_GetCharWidth = 0x1004D,
    SDKLIB_GetFontHeight = 0x1004E,
    SDKLIB_GetFontType = 0x1004F,
    SDKLIB_GetStringLength = 0x10050,
    SDKLIB_SetFontType = 0x10051,
    SDKLIB_WriteAlignString = 0x10052,
    SDKLIB_WriteChar = 0x10053,
    SDKLIB_WriteString = 0x10054,
    SDKLIB_WriteStringInWindow = 0x10055,
    SDKLIB_WriteStringInWindowEx = 0x10056,
    SDKLIB_Printf = 0x10057,
    SDKLIB_PrintfXY = 0x10058,
    SDKLIB_ShowGraphic = 0x10059,
    SDKLIB_SizeofGraphic = 0x1005A,
    SDKLIB_InitGraphic = 0x1005B,
    SDKLIB_CreateIcon = 0x1005C,
    SDKLIB_SetCursorSize = 0x1005D,
    SDKLIB_GetCursorSize = 0x1005E,
    SDKLIB_SetCursorPosition = 0x1005F,
    SDKLIB_GetCursorPosition = 0x10060,
    SDKLIB_SetCursorType = 0x10061,
    SDKLIB_GetCursorType = 0x10062,
    SDKLIB_CursorLock = 0x10063,
    SDKLIB_CursorUnlock = 0x10064,
    SDKLIB_SetTransparentColor = 0x10065,
    SDKLIB_GetTransparentColor = 0x10066,
    SDKLIB_rgbSetBkColor = 0x10067,
    SDKLIB_rgbSetColor = 0x10068,
    SDKLIB_rgbGetBkColor = 0x10069,
    SDKLIB_rgbGetColor = 0x1006A,
    SDKLIB_SetPenStyle = 0x1006B,
    SDKLIB_GetPenStyle = 0x1006C,
    SDKLIB_GetPenSize = 0x1006D,
    SDKLIB_SetPenSize = 0x1006E,
    SDKLIB_GetPixel = 0x1006F,
    SDKLIB_SetPixel = 0x10070,
    SDKLIB_GetImage = 0x10071,
    SDKLIB_PutImage = 0x10072,
    SDKLIB_SetDrawArea = 0x10073,
    SDKLIB_GetDrawArea = 0x10074,
    SDKLIB_DrawLine = 0x10075,
    SDKLIB_DrawRect = 0x10076,
    SDKLIB_FillRect = 0x10077,
    SDKLIB_DrawRoundRect = 0x10078,
    SDKLIB_DrawCircle = 0x10079,
    SDKLIB_FillCircle = 0x1007A,
    SDKLIB_DrawEllipse = 0x1007B,
    SDKLIB_FillEllipse = 0x1007C,
    SDKLIB_InverseSetArea = 0x1007D,
    SDKLIB_ClearScreen = 0x1007E,
    SDKLIB_ClearSetArea = 0x1007F,
    SDKLIB_ScrollDown = 0x10080,
    SDKLIB_ScrollLeft = 0x10081,
    SDKLIB_ScrollRight = 0x10082,
    SDKLIB_ScrollUp = 0x10083,
    SDKLIB_GetRealLCD = 0x10084,
    SDKLIB_SetToRealLCD = 0x10085,
    SDKLIB_SetToVirtualLCD = 0x10086,
    SDKLIB_CreateVirtualLCD = 0x10087,
    SDKLIB_DeleteVirtualLCD = 0x10088,
    SDKLIB__BitBlt = 0x10089,
    SDKLIB___fillrect = 0x1008A,
    SDKLIB_SetActiveLCD = 0x1008B,
    SDKLIB_SetRealLCD = 0x1008C,
    SDKLIB_GetActiveLCD = 0x1008D,
    SDKLIB_CreateCompatibleLCD = 0x1008E,
    SDKLIB_CreateCompatibleImage = 0x1008F,
    SDKLIB_DeleteLCD = 0x10090,
    SDKLIB_SelectLCDObject = 0x10091,
    SDKLIB_DeleteLCDObject = 0x10092,
    SDKLIB_SetDCObject = 0x10093,
    SDKLIB_GetWindowSize = 0x10094,
    SDKLIB_GetImageSize = 0x10095,
    SDKLIB_GetImageSizeExt = 0x10096,
    SDKLIB_ImageData = 0x10097,
    SDKLIB_SizeofImage = 0x10098,
    SDKLIB_FreeImage = 0x10099,
    SDKLIB_Delay = 0x1009A,
    SDKLIB_PenDelay = 0x1009B,
    SDKLIB_GetPenSilenceArea = 0x1009C,
    SDKLIB_SetPenSilenceArea = 0x1009D,
    SDKLIB_WarningBeep = 0x1009E,
    SDKLIB_LockSystem = 0x1009F,
    SDKLIB_UnlockSystem = 0x100A0,
    SDKLIB_CopyToClipBoard = 0x100A1,
    SDKLIB_CopyFromClipBoard = 0x100A2,
    SDKLIB_ClearClipBoard = 0x100A3,
    SDKLIB_GetClipBoardTextLength = 0x100A4,
    SDKLIB_GetSysTime = 0x100A5,
    SDKLIB_SetSysTime = 0x100A6,
    SDKLIB_PopupWaitingMsg = 0x100A7,
    SDKLIB_CloseWaitingMsg = 0x100A8,
    SDKLIB_GetLanguageType = 0x100A9,
    SDKLIB_SetLanguageType = 0x100AA,
    SDKLIB_SetChineseFont = 0x100AB,
    SDKLIB_GetChineseFont = 0x100AC,
    SDKLIB_SetShiftState = 0x100AD,
    SDKLIB_SetCapsState = 0x100AE,
    SDKLIB_GetShiftState = 0x100AF,
    SDKLIB_GetCapsState = 0x100B0,
    SDKLIB_Tradional2Simple = 0x100B1,
    SDKLIB_Simple2Tradional = 0x100B2,
    SDKLIB_SetEPTSLastChar = 0x100B3,
    SDKLIB_PlayAllVoice = 0x100B4,
    SDKLIB_StopAllVoice = 0x100B5,
    SDKLIB_PauseAllVoice = 0x100B6,
    SDKLIB_ContinueAllVoice = 0x100B7,
    SDKLIB_GetAllVoiceState = 0x100B8,
    SDKLIB_RecordVoiceEx = 0x100B9,
    SDKLIB_PlaybackVoiceEx = 0x100BA,
    SDKLIB_SetAudioHandler = 0x100BB,
    SDKLIB_ConvCharToUnicode = 0x100BC,
    SDKLIB_ConvStrToUnicode = 0x100BD,
    SDKLIB_CompSecretkey = 0x100BE,
    SDKLIB_ClearSecretkey = 0x100BF,
    SDKLIB_SetUserFontHandle = 0x100C0,
    SDKLIB_GetMasterIDInfo = 0x100C1,
    SDKLIB_ReadFollowMe = 0x100C2,
    SDKLIB_GetPrivateState = 0x100C3,
    SDKLIB_SetPrivateState = 0x100C4,
    SDKLIB__afnsplit = 0x100C5,
    SDKLIB__afnmerge = 0x100C6,
    SDKLIB__afcreate = 0x100C7,
    SDKLIB__afcreateSz = 0x100C8,
    SDKLIB__afopen = 0x100C9,
    SDKLIB__fclose = 0x100CA,
    SDKLIB__filesize = 0x100CB,
    SDKLIB___fflush = 0x100CC,
    SDKLIB__fflushall = 0x100CD,
    SDKLIB__rewind = 0x100CE,
    SDKLIB___fseek = 0x100CF,
    SDKLIB__ftell = 0x100D0,
    SDKLIB__feof = 0x100D1,
    SDKLIB__fgetc = 0x100D2,
    SDKLIB__fgets = 0x100D3,
    SDKLIB__fread = 0x100D4,
    SDKLIB__fputc = 0x100D5,
    SDKLIB__fputs = 0x100D6,
    SDKLIB__fwrite = 0x100D7,
    SDKLIB__afindfirst = 0x100D8,
    SDKLIB__afindnext = 0x100D9,
    SDKLIB__findclose = 0x100DA,
    SDKLIB__afgetattr = 0x100DB,
    SDKLIB__afsetattr = 0x100DC,
    SDKLIB__aremove = 0x100DD,
    SDKLIB__arename = 0x100DE,
    SDKLIB__afcopy = 0x100DF,
    SDKLIB__amkdir = 0x100E0,
    SDKLIB__armdir = 0x100E1,
    SDKLIB__achdir = 0x100E2,
    SDKLIB__agetcurdir = 0x100E3,
    SDKLIB__isformateddisk = 0x100E4,
    SDKLIB__getfattype = 0x100E5,
    SDKLIB__setdisk = 0x100E6,
    SDKLIB__getdisk = 0x100E7,
    SDKLIB__getdiskchar = 0x100E8,
    SDKLIB__setdiskchar = 0x100E9,
    SDKLIB__getdisknum = 0x100EA,
    SDKLIB_FSGetDiskRoomState = 0x100EB,
    SDKLIB__OpenFile = 0x100EC,
    SDKLIB__OpenFileEx = 0x100ED,
    SDKLIB__OpenFileW = 0x100EE,
    SDKLIB__CloseFile = 0x100EF,
    SDKLIB__ReadFile = 0x100F0,
    SDKLIB__FseekFile = 0x100F1,
    SDKLIB__FileSize = 0x100F2,
    SDKLIB__OpenSubFile = 0x100F3,
    SDKLIB__TellFile = 0x100F4,
    SDKLIB_DBSave = 0x100F5,
    SDKLIB_DBSaveAll = 0x100F6,
    SDKLIB_DBOpenUserFile = 0x100F7,
    SDKLIB_DBCreate = 0x100F8,
    SDKLIB_DBCreateSZ = 0x100F9,
    SDKLIB_DBOpen = 0x100FA,
    SDKLIB_DBClose = 0x100FB,
    SDKLIB_DBRemove = 0x100FC,
    SDKLIB_DBEmpty = 0x100FD,
    SDKLIB_DBOptimize = 0x100FE,
    SDKLIB_DBRepair = 0x100FF,
    SDKLIB_DBGetNewRecordPID = 0x10100,
    SDKLIB_DBGetNewRecordID = 0x10101,
    SDKLIB_DBCreateNewRecord = 0x10102,
    SDKLIB_DBInsertRecord = 0x10103,
    SDKLIB_DBModifyRecord = 0x10104,
    SDKLIB_DBRemoveRecord = 0x10105,
    SDKLIB_DBReadRecord = 0x10106,
    SDKLIB_DBGetRecordTime = 0x10107,
    SDKLIB_DBGetRecordDate = 0x10108,
    SDKLIB_DBGetRecordPid = 0x10109,
    SDKLIB_DBGetCurRecordCount = 0x1010A,
    SDKLIB_DBOverLoadSortFunc = 0x1010B,
    SDKLIB_DBGetRecPidState = 0x1010C,
    SDKLIB_DBGetDBState = 0x1010D,
    SDKLIB__GetSystemDirectory = 0x1010E,
    SDKLIB__GetTempPath = 0x1010F,
    SDKLIB__GetPrivateProfileInt = 0x10110,
    SDKLIB__GetPrivateProfileString = 0x10111,
    SDKLIB__WritePrivateProfileString = 0x10112,
    SDKLIB_GetTadCityNo = 0x10113,
    SDKLIB_RunApplicationA = 0x10114,
    SDKLIB_GetApplicationNameA = 0x10115,
    SDKLIB_LoadProgramA = 0x10116,
    SDKLIB_FreeProgram = 0x10117,
    SDKLIB_ExecuteProgram = 0x10118,
    SDKLIB_GetCurrentPathA = 0x10119,
    SDKLIB_ProgramIsRunningA = 0x1011A,
    SDKLIB_FindApplications = 0x1011B,
    SDKLIB_FreeFindApplications = 0x1011C,
    SDKLIB_GetApplicationInfo = 0x1011D,
    SDKLIB_CreateAppView = 0x1011E,
    SDKLIB_TextPicker = 0x1011F,
    SDKLIB_GetMonDays = 0x10120,
    SDKLIB_GetWeekDay = 0x10121,
    SDKLIB_ConvSolarToLunar = 0x10122,
    SDKLIB_ConvLunarToSolar = 0x10123,
    SDKLIB_GetLeapMonth = 0x10124,
    SDKLIB_CreateEdit = 0x10125,
    SDKLIB_EDInitEdit = 0x10126,
    SDKLIB_EDDraw = 0x10127,
    SDKLIB_EDDrawText = 0x10128,
    SDKLIB_EDHandleEvent = 0x10129,
    SDKLIB_InsertTextField = 0x1012A,
    SDKLIB_ReplaceEditBuffer = 0x1012B,
    SDKLIB_SetEditCmdFunc = 0x1012C,
    SDKLIB_GetEditCmdFunc = 0x1012D,
    SDKLIB_SetEditFunctionMenuState = 0x1012E,
    SDKLIB_DatePicker = 0x1012F,
    SDKLIB_CreateBoolDateField = 0x10130,
    SDKLIB_CreateBoolMenuField = 0x10131,
    SDKLIB_CreateBoolField = 0x10132,
    SDKLIB_CreateBoolTextField = 0x10133,
    SDKLIB_CreateTimeField = 0x10134,
    SDKLIB_CreateDateField = 0x10135,
    SDKLIB_CreateDoubleTimeField = 0x10136,
    SDKLIB_CreateNumericField = 0x10137,
    SDKLIB_PDATEFIELD_draw = 0x10138,
    SDKLIB_PDATEFIELD_handleEvent = 0x10139,
    SDKLIB_PDATEFIELD_setState = 0x1013A,
    SDKLIB_PNUMERICFIELD_handleEvent = 0x1013B,
    SDKLIB_PBOOLFIELD_draw = 0x1013C,
    SDKLIB_MessageBox = 0x1013D,
    SDKLIB_CreateMessageBox = 0x1013E,
    SDKLIB_NumericPicker = 0x1013F,
    SDKLIB_SetNumPkValidHandle = 0x10140,
    SDKLIB_CreateDetailView = 0x10141,
    SDKLIB_PDETAILVIEW_draw = 0x10142,
    SDKLIB_NumericToStr = 0x10143,
    SDKLIB_StrToNumeric = 0x10144,
    SDKLIB_AllocBlock = 0x10145,
    SDKLIB_FreeBlock = 0x10146,
    SDKLIB_RelatedKeyButton = 0x10147,
    SDKLIB_RelatedKeyButtonEx = 0x10148,
    SDKLIB_UnRelatedKeyButton = 0x10149,
    SDKLIB_CreateButton = 0x1014A,
    SDKLIB_ChangeButton = 0x1014B,
    SDKLIB_InsertButton = 0x1014C,
    SDKLIB_CreateStatic = 0x1014D,
    SDKLIB_PBUTTON_draw = 0x1014E,
    SDKLIB_InsertImageClip = 0x1014F,
    SDKLIB_CreatePageArrow = 0x10150,
    SDKLIB_InsertPgUpDn = 0x10151,
    SDKLIB_CreateHorPageArrow = 0x10152,
    SDKLIB_CreateControlMenu = 0x10153,
    SDKLIB_CreateMenuField = 0x10154,
    SDKLIB_CreateNumberSet = 0x10155,
    SDKLIB_CreateStackedList = 0x10156,
    SDKLIB_CreateSlider = 0x10157,
    SDKLIB_CreateProgress = 0x10158,
    SDKLIB_CreateRadioButton = 0x10159,
    SDKLIB_PPROGRESSetPos = 0x1015A,
    SDKLIB_PPROGRESSetRange = 0x1015B,
    SDKLIB_PSLIDER_SetPos = 0x1015C,
    SDKLIB_PSLIDER_SetRange = 0x1015D,
    SDKLIB_PSLIDER_handleEvent = 0x1015E,
    SDKLIB_IsRadioButtonCheck = 0x1015F,
    SDKLIB_CheckDeskRadioButton = 0x10160,
    SDKLIB_PNUMBERSET_handleEvent = 0x10161,
    SDKLIB_PMENUFIELD_draw = 0x10162,
    SDKLIB_PMENUFIELD_handleEvent = 0x10163,
    SDKLIB_PCONTROLMENU_draw = 0x10164,
    SDKLIB_PCONTROLMENU_handleEvent = 0x10165,
    SDKLIB_PVIEW_draw = 0x10166,
    SDKLIB_PVIEW_EraseBackGround = 0x10167,
    SDKLIB_PVIEW_handleEvent = 0x10168,
    SDKLIB_PVIEW_setState = 0x10169,
    SDKLIB_PGROUP_draw = 0x1016A,
    SDKLIB_PGROUP_handleEvent = 0x1016B,
    SDKLIB_PGROUP_insert = 0x1016C,
    SDKLIB_PGROUP_redraw = 0x1016D,
    SDKLIB_PGROUP_setCurrent = 0x1016E,
    SDKLIB_PGROUP_setState = 0x1016F,
    SDKLIB_PGROUP_execute = 0x10170,
    SDKLIB_PGROUP_preView = 0x10171,
    SDKLIB_CreateDeskBox = 0x10172,
    SDKLIB_PDESKBOX_draw = 0x10173,
    SDKLIB_PDESKBOX_drawTitle = 0x10174,
    SDKLIB_PDESKBOX_handleEvent = 0x10175,
    SDKLIB_PDESKBOX_redraw = 0x10176,
    SDKLIB_Destroy = 0x10177,
    SDKLIB_DeskBox_construct = 0x10178,
    SDKLIB_DrawDeskBoxBound = 0x10179,
    SDKLIB_ChangeCommandMenu = 0x1017A,
    SDKLIB_SetDeskBoxReturn = 0x1017B,
    SDKLIB_ExecView = 0x1017C,
    SDKLIB_SetExitWordVal = 0x1017D,
    SDKLIB_GetExitWordVal = 0x1017E,
    SDKLIB_SetCurModeWord = 0x1017F,
    SDKLIB_GetCurModeWord = 0x10180,
    SDKLIB_InsertTitleBarButton = 0x10181,
    SDKLIB_Delete = 0x10182,
    SDKLIB_DisableCommand = 0x10183,
    SDKLIB_EnableCommand = 0x10184,
    SDKLIB_InverseSetAreaArc = 0x10185,
    SDKLIB_InverseSetAreaColor = 0x10186,
    SDKLIB_InverseSetAreaArcColor = 0x10187,
    SDKLIB_SendMessage = 0x10188,
    SDKLIB_SendMessageExt = 0x10189,
    SDKLIB_GetPreView = 0x1018A,
    SDKLIB_SetFocuseItem = 0x1018B,
    SDKLIB_SetTabOrder = 0x1018C,
    SDKLIB_GetDeskEntry = 0x1018D,
    SDKLIB_GetDeskItem = 0x1018E,
    SDKLIB_QueryByCommand = 0x1018F,
    SDKLIB_GetMaxScrX = 0x10190,
    SDKLIB_GetMaxScrY = 0x10191,
    SDKLIB_GetDeskClientRect = 0x10192,
    SDKLIB_InvalidateRect = 0x10193,
    SDKLIB_InsertSplitViewFrame = 0x10194,
    SDKLIB_CreateSplitView = 0x10195,
    SDKLIB_InsertSplitView = 0x10196,
    SDKLIB_PSPLITVIEW_draw = 0x10197,
    SDKLIB_PSPLITVIEW_handleEvent = 0x10198,
    SDKLIB_PSPLITVIEW_setState = 0x10199,
    SDKLIB_InsertMultiPage = 0x1019A,
    SDKLIB_PPAGE_draw = 0x1019B,
    SDKLIB_PPAGE_handleEvent = 0x1019C,
    SDKLIB_PMPAGE_insertPage = 0x1019D,
    SDKLIB_PMPAGE_handleEvent = 0x1019E,
    SDKLIB_ConverNumToStr = 0x1019F,
    SDKLIB_ConverTimeToStr = 0x101A0,
    SDKLIB_DateToString = 0x101A1,
    SDKLIB_TimeToString = 0x101A2,
    SDKLIB_ZfxGetWeekDay = 0x101A3,
    SDKLIB_WriteNumber = 0x101A4,
    SDKLIB_ConverDateToStr = 0x101A5,
    SDKLIB_PopUpList = 0x101A6,
    SDKLIB_PressAtRange = 0x101A7,
    SDKLIB_PressAtButton = 0x101A8,
    SDKLIB_PressAtButtonInv = 0x101A9,
    SDKLIB_PressAtButtonIconAddr = 0x101AA,
    SDKLIB_PressAtButtonIcon = 0x101AB,
    SDKLIB_IsSystemItemID = 0x101AC,
    SDKLIB_WaitingMessageBox = 0x101AD,
    SDKLIB_CreateCalendar = 0x101AE,
    SDKLIB_PCALENDAR_draw = 0x101AF,
    SDKLIB_PCALENDAR_handleEvent = 0x101B0,
    SDKLIB_CreateScrollBar = 0x101B1,
    SDKLIB_InsertScrollBar = 0x101B2,
    SDKLIB_InsertScrollBarPosition = 0x101B3,
    SDKLIB_PSCROLLBAR_draw = 0x101B4,
    SDKLIB_PSCROLLBAR_redraw = 0x101B5,
    SDKLIB_PSCROLLBAR_handleEvent = 0x101B6,
    SDKLIB_ChangeScrollBarValue = 0x101B7,
    SDKLIB_ChangeScrollBarStep = 0x101B8,
    SDKLIB_SetScrollBarValue = 0x101B9,
    SDKLIB_SetScrollBarStep = 0x101BA,
    SDKLIB_CreateLister = 0x101BB,
    SDKLIB_PLISTER_draw = 0x101BC,
    SDKLIB_PLISTER_handleEvent = 0x101BD,
    SDKLIB_PLISTER_writeItem = 0x101BE,
    SDKLIB_PLISTER_penDownAct = 0x101BF,
    SDKLIB_PLISTER_changeFocuseAct = 0x101C0,
    SDKLIB_ChangeListRowHeight = 0x101C1,
    SDKLIB_ChangeListItemSum = 0x101C2,
    SDKLIB_CreateLongLister = 0x101C3,
    SDKLIB_PLONGLISTER_draw = 0x101C4,
    SDKLIB_PLONGLISTER_handleEvent = 0x101C5,
    SDKLIB_PLONGLISTER_changeFocuseAct = 0x101C6,
    SDKLIB_PLONGLISTER_writeItem = 0x101C7,
    SDKLIB_PLONGLISTER_penDownAct = 0x101C8,
    SDKLIB_ChangeLongListItemSum = 0x101C9,
    SDKLIB_ChangeLongListRowHeight = 0x101CA,
    SDKLIB_SetSysColorConfig = 0x101CB,
    SDKLIB_GetSysColorConfig = 0x101CC,
    SDKLIB_GetSysColor = 0x101CD,
    SDKLIB_SetSysColor = 0x101CE,
    SDKLIB_SetDefaultSysIconCfg = 0x101CF,
    SDKLIB_DrawGradientRect = 0x101D0,
    SDKLIB_TimePicker = 0x101D1,
    SDKLIB__GetOpenFileName = 0x101D2,
    SDKLIB__GetSaveFileName = 0x101D3,
    SDKLIB__GetNextFileName = 0x101D4,
    SDKLIB_InsertFileFilter = 0x101D5,
    SDKLIB_PFILEFILTER_draw = 0x101D6,
    SDKLIB_PFILEFILTER_handleEvent = 0x101D7,
    SDKLIB_PFILEFILTER_chgColumnText = 0x101D8,
    SDKLIB_PFILEFILTER_setPathInfo = 0x101D9,
    SDKLIB_PFILEFILTER_getFillMode = 0x101DA,
    SDKLIB_PFILEFILTER_setFillMode = 0x101DB,
    SDKLIB_PFILEFILTER_getItemName = 0x101DC,
    SDKLIB_PFILEFILTER_writeColumn0 = 0x101DD,
    SDKLIB_GetFileExecuteFunction = 0x101DE,
    SDKLIB__EditFileName = 0x101DF,
    SDKLIB_IME_GetHandActiveState = 0x101E0,
    SDKLIB_IME_GetCtrlSize = 0x101E1,
    SDKLIB_IME_ActiveCtrl = 0x101E2,
    SDKLIB_IME_IsActiveInputer = 0x101E3,
    SDKLIB_IME_SetDefault = 0x101E4,
    SDKLIB_IME_GetLXResult = 0x101E5,
    SDKLIB_IME_SetHandFilter = 0x101E6,
    SDKLIB_IME_GetHandFilter = 0x101E7,
    SDKLIB_IME_IsFuncKey = 0x101E8,
    SDKLIB_IME_SearchKeyMap = 0x101E9,
    SDKLIB_IME_IsSelectKey = 0x101EA,
    SDKLIB_IME_SaveUserInfo = 0x101EB,
    SDKLIB_IME_ReadUserInfo = 0x101EC,
    SDKLIB_IME_IsEmptyFont = 0x101ED,
    SDKLIB_IME_SetHandWrtConfig = 0x101EE,
    SDKLIB_IME_SetHandWrtStudyFlag = 0x101EF,
    SDKLIB_IME_SetRecognizeFlag = 0x101F0,
    SDKLIB_IME_GetCtrl = 0x101F1,
    SDKLIB_IME_GetCtrlState = 0x101F2,
    SDKLIB_IME_GetViewInfo = 0x101F3,
    SDKLIB_SCcorrection = 0x101F4,
    SDKLIB_SCwildcard = 0x101F5,
    SDKLIB_SCverify = 0x101F6,
    SDKLIB_InitialSpelling = 0x101F7,
    SDKLIB_SCopenDatabase = 0x101F8,
    SDKLIB_SCcloseDatabase = 0x101F9,
    SDKLIB_SCGetMaxWordLen = 0x101FA,
    SDKLIB_GetTotalItem = 0x101FB,
    SDKLIB_GetMaxBlockSize = 0x101FC,
    SDKLIB_GetKeyWord = 0x101FD,
    SDKLIB_GetAllContent = 0x101FE,
    SDKLIB_GetSaveAddress = 0x101FF,
    SDKLIB_GetAlpExit = 0x10200,
    SDKLIB_SetAlpExit = 0x10201,
    SDKLIB_SetDictFont = 0x10202,
    SDKLIB_GetDictFont = 0x10203,
    SDKLIB_UniversalCrossSearch = 0x10204,
    SDKLIB_UniversalDictList = 0x10205,
    SDKLIB_UniversalDictListForAll = 0x10206,
    SDKLIB_UniversalCardList = 0x10207,
    SDKLIB_SearchEveryWay = 0x10208,
    SDKLIB_GetAddDictPosInList = 0x10209,
    SDKLIB_GetCurrentCardDictNum = 0x1020A,
    SDKLIB_SearchCurrentCardDictInfo = 0x1020B,
    SDKLIB_ReleaseCardDictInfo = 0x1020C,
    SDKLIB_PRICHVIEW_SetBufferAttrib = 0x1020D,
    SDKLIB_PRICHVIEW_SpeechForRich = 0x1020E,
    SDKLIB_IsDictOuYu = 0x1020F,
    SDKLIB_CreateRichView = 0x10210,
    SDKLIB_AddScrollBarToRichview = 0x10211,
    SDKLIB_ChangeScrollBarToRichview = 0x10212,
    SDKLIB_ChangeScrollBarPos = 0x10213,
    SDKLIB_SetDisplayMode = 0x10214,
    SDKLIB_SetShowSearchLayer = 0x10215,
    SDKLIB_SetWindowState = 0x10216,
    SDKLIB_GetWindowState = 0x10217,
    SDKLIB_GetBaseLine = 0x10218,
    SDKLIB_SetBaseLine = 0x10219,
    SDKLIB_BackupWindowState = 0x1021A,
    SDKLIB_RestoreWindowState = 0x1021B,
    SDKLIB_PRICHVIEW_draw = 0x1021C,
    SDKLIB_PRICHVIEW_handleEvent = 0x1021D,
    SDKLIB_GetMarkString = 0x1021E,
    SDKLIB_GetRichWindowState = 0x1021F,
    SDKLIB_SetShowMode = 0x10220,
    SDKLIB_PRICHVIEW_ShowSearchLayer = 0x10221,
    SDKLIB_PRICHVIEW_SetStateForUser = 0x10222,
    SDKLIB_PRICHVIEW_WriteString = 0x10223,
    SDKLIB_RichViewSetColor = 0x10224,
    SDKLIB_SetTotalLine = 0x10225,
    SDKLIB_ShowRichContentOnly = 0x10226,
    SDKLIB_PRICHVIEW_SetCttsType = 0x10227,
    SDKLIB_SetDefLineEditorInfo = 0x10228,
    SDKLIB_LineEditor = 0x10229,
    SDKLIB_LineEditor_handleEvent = 0x1022A,
    SDKLIB_DictEditor_handleEvent = 0x1022B,
    SDKLIB_LEModuleForUser = 0x1022C,
    SDKLIB_LineEditor_ModuleForUser = 0x1022D,
    SDKLIB_LEDictWiseSearch = 0x1022E,
    SDKLIB_IsWildCard = 0x1022F,
    SDKLIB_LEditor_draw = 0x10230,
    SDKLIB_LINEEDITOR_changeFocuseAct = 0x10231,
    SDKLIB_LEDSK_handleEvent = 0x10232,
    SDKLIB_LineEditorCompareStr = 0x10233,
    SDKLIB_LineEditorWiseSearch = 0x10234,
    SDKLIB_SearchDict = 0x10235,
    SDKLIB_GetSearchDictShortName = 0x10236,
    SDKLIB_GetCurrentMainDictNum = 0x10237,
    SDKLIB_PRICHVIEW_OKSpeechForRich = 0x10238,
    SDKLIB_GetIndexHcaOffset = 0x10239,
    SDKLIB_GetIndexIconOffset = 0x1023A,
    SDKLIB_GetAppIndexIconOffset = 0x1023B,
    SDKLIB_LoadHCAToGraphicByIdx = 0x1023C,
    SDKLIB_LoadHCAToGraphicHeadByIdx = 0x1023D,
    SDKLIB_GetIndexHCAHeight = 0x1023E,
    SDKLIB_GetIndexHCAWidth = 0x1023F,
    SDKLIB_ShowHCAByOffset = 0x10240,
    SDKLIB_SetHCATransparentMode = 0x10241,
    SDKLIB_ReleaseHcaCache = 0x10242,
    SDKLIB_ResetCache = 0x10243,
    SDKLIB_SetLibDataindexOffset = 0x10244,
    SDKLIB_GetLibAddrFromID = 0x10245,
    SDKLIB_ShowBookProFromFile = 0x10246,
    SDKLIB_RunBook = 0x10247,
    SDKLIB_ShowBook = 0x10248,
    SDKLIB_ShowBookPreview = 0x10249,
    SDKLIB_ShowBookEx = 0x1024A,
    SDKLIB_USBMassStorageRun = 0x1024B,
    SDKLIB_SetPassThroughCallBack = 0x1024C,
    SDKLIB_ctts_predict = 0x1024D,
    SDKLIB_ctts_nounce = 0x1024E,
    SDKLIB_SetAllVoiceState = 0x1024F,
    SDKLIB_OpenPCMCodec = 0x10250,
    SDKLIB_ClosePCMCodec = 0x10251,
    SDKLIB_AudioPlayBackPause = 0x10252,
    SDKLIB_AudioPlayBackContinue = 0x10253,
    SDKLIB_PlayWaveData = 0x10254,
    SDKLIB_StopWaveDataPlay = 0x10255,
    SDKLIB_PauseWaveDataPlay = 0x10256,
    SDKLIB_ContinueWaveDataPlay = 0x10257,
    SDKLIB_RecordAdpcmEx = 0x10258,
    SDKLIB_StopADPCMRecord = 0x10259,
    SDKLIB_IsWaveDataPlayStopped = 0x1025A,
    SDKLIB_PlayMP3Data = 0x1025B,
    SDKLIB_StopMP3DataPlay = 0x1025C,
    SDKLIB_PausePlayMP3Data = 0x1025D,
    SDKLIB_ContinuePlayMP3Data = 0x1025E,
    SDKLIB_InitBestlkHandle = 0x1025F,
    SDKLIB_SetBestlkVoiceHandle = 0x10260,
    SDKLIB_IME_RegistInputer = 0x10261,
    SDKLIB_SetLanguageAttr = 0x10262,
    SDKLIB_SetDialectAttr = 0x10263,
    SDKLIB_SetLineEditorAttr = 0x10264,
    SDKLIB_SetBookLibDataHFile = 0x10265,
    SDKLIB_SetBookVocLibDataHFile = 0x10266,
    SDKLIB_IME_SetGlobalVar = 0x10267,
    SDKLIB_IME_Functions = 0x10268,
    SDKLIB_LE_SupportMultiLangFunc = 0x10269,
    SDKLIB_ShowBookFromHANDLE = 0x1026A,
    SDKLIB__wfnsplit = 0x1026B,
    SDKLIB__wfnmerge = 0x1026C,
    SDKLIB__wfcreate = 0x1026D,
    SDKLIB__wfcreateSz = 0x1026E,
    SDKLIB___wfopen = 0x1026F,
    SDKLIB__wfindfirst = 0x10270,
    SDKLIB__wfindnext = 0x10271,
    SDKLIB__wfgetattr = 0x10272,
    SDKLIB__wfsetattr = 0x10273,
    SDKLIB___wremove = 0x10274,
    SDKLIB__wrename = 0x10275,
    SDKLIB__wfcopy = 0x10276,
    SDKLIB__wmkdir = 0x10277,
    SDKLIB__wrmdir = 0x10278,
    SDKLIB__wchdir = 0x10279,
    SDKLIB__wgetcurdir = 0x1027A,
    SDKLIB__afsettime = 0x1027B,
    SDKLIB__wfsettime = 0x1027C,
    SDKLIB__afullpath = 0x1027D,
    SDKLIB__wfullpath = 0x1027E,
    SDKLIB_RunApplicationW = 0x1027F,
    SDKLIB_GetApplicationNameW = 0x10280,
    SDKLIB_LoadProgramW = 0x10281,
    SDKLIB_GetCurrentPathW = 0x10282,
    SDKLIB_ProgramIsRunningW = 0x10283,
    SDKLIB_LoadHFileProgramW = 0x10284,
    SDKLIB_LoadHFileProgramA = 0x10285,
    SDKLIB__LoadLibraryA = 0x10286,
    SDKLIB__GetModuleFileNameA = 0x10287,
    SDKLIB__GetModuleHandleA = 0x10288,
    SDKLIB_GetApplicationProcA = 0x10289,
    SDKLIB_StayResidentProgramA = 0x1028A,
    SDKLIB_UnStayResidentProgramA = 0x1028B,
    SDKLIB_CheckProgramIsStayResident = 0x1028C,
    SDKLIB__FindResourceA = 0x1028D,
    SDKLIB__FindResourceExA = 0x1028E,
    SDKLIB__LoadLibraryW = 0x1028F,
    SDKLIB__GetModuleFileNameW = 0x10290,
    SDKLIB__GetModuleHandleW = 0x10291,
    SDKLIB_GetApplicationProcW = 0x10292,
    SDKLIB__FindResourceW = 0x10293,
    SDKLIB__FindResourceExW = 0x10294,
    SDKLIB_StayResidentProgramW = 0x10295,
    SDKLIB_UnStayResidentProgramW = 0x10296,
    SDKLIB__FreeLibrary = 0x10297,
    SDKLIB__GetProcAddress = 0x10298,
    SDKLIB__SizeofResource = 0x10299,
    SDKLIB__OpenResourceItemFile = 0x1029A,
    SDKLIB__CloseResourceItemFile = 0x1029B,
    SDKLIB_GetCardSN = 0x1029C,
    SDKLIB_GetCardSize = 0x1029D,
    SDKLIB_GetThaiWord = 0x1029E,
    SDKLIB_LoadThaiGrammarLib = 0x1029F,
    SDKLIB_FreeThaiGrammarLib = 0x102A0,
    SDKLIB_WriteComDebugMsg = 0x102A1,
    SDKLIB_CreateIconButton = 0x102A2,
    SDKLIB_LoadImageFile = 0x102A3,
    SDKLIB_GetResourceCfg = 0x102A4,
    SDKLIB_GetSystemDefaultLangID = 0x102A5,
    SDKLIB_SetSystemDefaultLangID = 0x102A6,
    SDKLIB_CreateFile = 0x102A7,
    SDKLIB_DeleteFile = 0x102A8,
    SDKLIB_ReadFile = 0x102A9,
    SDKLIB_WriteFile = 0x102AA,
    SDKLIB_SetFilePointer = 0x102AB,
    SDKLIB_DeviceIoControl = 0x102AC,
    SDKLIB_CloseHandle = 0x102AD,
    SDKLIB_DictLastWord = 0x102AE,
    SDKLIB_GetTransBuffer = 0x102AF,
    SDKLIB_DictIsYuanYinPhonetic = 0x102B0,
    SDKLIB_InsertButtonTeam = 0x102B1,
    SDKLIB_CreateSearchInfo = 0x102B2,
    SDKLIB_FreeSearchInfo = 0x102B3,
    SDKLIB_DefProcessContent = 0x102B4,
    SDKLIB_DefInsertPic = 0x102B5,
    SDKLIB_DefGetWholeWord = 0x102B6,
    SDKLIB_DefAddALine = 0x102B7,
    SDKLIB_PRICHVIEW_GetFlagLength = 0x102B8,
    SDKLIB_PRICHVIEW_FilterMark = 0x102B9,
    SDKLIB_AddNewWord = 0x102BA,
    SDKLIB_GetMaxSearchLayer = 0x102BB,
    SDKLIB_FormatMessage = 0x102BC,
    SDKLIB_SetFont = 0x102BD,
    SDKLIB_GetFont = 0x102BE,
    SDKLIB_GetFontWidth = 0x102BF,
    SDKLIB_GetStringLengthEx = 0x102C0,
    SDKLIB_SetFontStyle = 0x102C1,
    SDKLIB_RegisterUserFont = 0x102C2,
    SDKLIB_UnRegisterUserFont = 0x102C3,
    SDKLIB_SetCurrentVideoDevice = 0x102C4,
    SDKLIB_SetSupportDoubleLCD = 0x102C5,
    SDKLIB__GetDriverType = 0x102C6,
    SDKLIB_EditControlFunc = 0x102C7,
    SDKLIB_GetMasterSerialNumber = 0x102C8,
    SDKLIB_GetMasterVendorInfo = 0x102C9,
    SDKLIB_PRICHVIEW_SetDisplayPosition = 0x102CA,
    SDKLIB_GetApplicationHeadInfoA = 0x102CB,
    SDKLIB_GetApplicationHeadInfoW = 0x102CC,
    SDKLIB__FreeFindResInfo = 0x102CD,
    SDKLIB_GetWholeWord = 0x102CE,
    SDKLIB_LoadWordGrammarLib = 0x102CF,
    SDKLIB_FreeWordGrammarLib = 0x102D0,
    SDKLIB_mount_file_disk = 0x102D1,
    SDKLIB_umount_file_disk = 0x102D2,
    SDKLIB___close = 0x102D3,
    SDKLIB___commit = 0x102D4,
    SDKLIB___creat = 0x102D5,
    SDKLIB___dup = 0x102D6,
    SDKLIB___wcreat = 0x102D7,
    SDKLIB___eof = 0x102D8,
    SDKLIB___get_errno = 0x102D9,
    SDKLIB___lseek = 0x102DA,
    SDKLIB___lseeki64 = 0x102DB,
    SDKLIB___open = 0x102DC,
    SDKLIB___wopen = 0x102DD,
    SDKLIB___read = 0x102DE,
    SDKLIB___set_errno = 0x102DF,
    SDKLIB___tell = 0x102E0,
    SDKLIB___telli64 = 0x102E1,
    SDKLIB___truncate = 0x102E2,
    SDKLIB___write = 0x102E3,
    SDKLIB__MultiByteToWideChar = 0x102E4,
    SDKLIB__WideCharToMultiByte = 0x102E5,
};
