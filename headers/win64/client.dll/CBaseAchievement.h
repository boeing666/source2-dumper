#pragma once

class CBaseAchievement  // sizeof 0xC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x18]; // offset 0x0
    char* m_pszName; // offset 0x18, size 0x8, align 8
    int32 m_iAchievementID; // offset 0x20, size 0x4, align 4
    int32 m_iFlags; // offset 0x24, size 0x4, align 4
    int32 m_iGoal; // offset 0x28, size 0x4, align 4
    int32 m_iProgressMsgIncrement; // offset 0x2C, size 0x4, align 4
    int32 m_iProgressMsgMinimum; // offset 0x30, size 0x4, align 4
    int32 m_iPointValue; // offset 0x34, size 0x4, align 4
    bool m_bHideUntilAchieved; // offset 0x38, size 0x1, align 1
    bool m_bStoreProgressInSteam; // offset 0x39, size 0x1, align 1
    char _pad_003A[0x6]; // offset 0x3A
    char* m_pInflictorClassNameFilter; // offset 0x40, size 0x8, align 8
    char* m_pInflictorEntityNameFilter; // offset 0x48, size 0x8, align 8
    char* m_pVictimClassNameFilter; // offset 0x50, size 0x8, align 8
    char* m_pAttackerClassNameFilter; // offset 0x58, size 0x8, align 8
    char* m_pMapNameFilter; // offset 0x60, size 0x8, align 8
    char* m_pGameDirFilter; // offset 0x68, size 0x8, align 8
    char** m_pszComponentNames; // offset 0x70, size 0x8, align 8
    char** m_pszComponentDisplayNames; // offset 0x78, size 0x8, align 8
    int32 m_iNumComponents; // offset 0x80, size 0x4, align 4
    char _pad_0084[0x4]; // offset 0x84
    char* m_pszComponentPrefix; // offset 0x88, size 0x8, align 8
    int32 m_iComponentPrefixLen; // offset 0x90, size 0x4, align 4
    bool m_bAchieved; // offset 0x94, size 0x1, align 1
    char _pad_0095[0x3]; // offset 0x95
    int32 m_iCount; // offset 0x98, size 0x4, align 4
    int32 m_iProgressShown; // offset 0x9C, size 0x4, align 4
    uint64 m_iComponentBits; // offset 0xA0, size 0x8, align 8
    char _pad_00A8[0x8]; // offset 0xA8
    int32 m_nUserSlot; // offset 0xB0, size 0x4, align 4
    int32 m_iDisplayOrder; // offset 0xB4, size 0x4, align 4
    bool m_bShowOnHUD; // offset 0xB8, size 0x1, align 1
    char _pad_00B9[0x3]; // offset 0xB9
    int32 m_iAssetAwardID; // offset 0xBC, size 0x4, align 4
};
