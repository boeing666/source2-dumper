#pragma once

class CDOTAGameManager  // sizeof 0x2EB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x30, size 0x28, align 255 | MNotSaved
    char _pad_0058[0x15C0]; // offset 0x58
    bool m_bCustomGame; // offset 0x1618, size 0x1, align 1
    bool m_bEventGame; // offset 0x1619, size 0x1, align 1
    bool m_bGameModeWantsDefaultNeutralItemSchema; // offset 0x161A, size 0x1, align 1
    bool m_bGameModeFilteredAbilities; // offset 0x161B, size 0x1, align 1
    char[128] m_szAddOnGame; // offset 0x161C, size 0x80, align 1
    char[128] m_szAddOnMap; // offset 0x169C, size 0x80, align 1
    char _pad_171C[0x15AC]; // offset 0x171C
    KeyValues* m_pTutorialLessonKeyValues; // offset 0x2CC8, size 0x8, align 8
    KeyValues* m_pDivisionKeyValues; // offset 0x2CD0, size 0x8, align 8
    KeyValues* m_pMatchGroupsKeyValues; // offset 0x2CD8, size 0x8, align 8
    KeyValues* m_pAnimationStatues; // offset 0x2CE0, size 0x8, align 8
    KeyValues* m_pBotScriptsDedicatedServer; // offset 0x2CE8, size 0x8, align 8
    KeyValues* m_pkvWardPlacementLocations; // offset 0x2CF0, size 0x8, align 8
    KeyValues* m_pRegionKeyValues; // offset 0x2CF8, size 0x8, align 8
    KeyValues* m_pSurveyQuestionData; // offset 0x2D00, size 0x8, align 8
    KeyValues3 m_AddonInfoKeyValues; // offset 0x2D08, size 0x10, align 8
    char _pad_2D18[0xA0]; // offset 0x2D18
    bool[256] m_CurrentHeroAvailable; // offset 0x2DB8, size 0x100, align 1
};
