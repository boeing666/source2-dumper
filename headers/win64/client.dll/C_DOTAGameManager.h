#pragma once

class C_DOTAGameManager  // sizeof 0x3340, align 0xFF [vtable] (client)
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
    char _pad_2D18[0x28]; // offset 0x2D18
    KeyValues* m_pCountryKeyValues; // offset 0x2D40, size 0x8, align 8
    char _pad_2D48[0x4D8]; // offset 0x2D48
    bool[9] m_bLoadedPortraits; // offset 0x3220, size 0x9, align 1
    char _pad_3229[0x7]; // offset 0x3229
    KeyValues* m_pControlGroupsKeyValues; // offset 0x3230, size 0x8, align 8
    KeyValues3* m_pItemSuggestPreferenceKeyValues; // offset 0x3238, size 0x8, align 8
    bool[256] m_CurrentHeroAvailable; // offset 0x3240, size 0x100, align 1
};
