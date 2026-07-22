#pragma once

class CMonsterHunterHeroCodexDefinition  // sizeof 0x78, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CVDataLocalizedToken m_strLocHeroName; // offset 0x0, size 0x10, align 8
    CVDataLocalizedToken m_strLocFieldNotes; // offset 0x10, size 0x10, align 8
    CVDataLocalizedToken m_strLocNonHeroName; // offset 0x20, size 0x10, align 8
    CVDataLocalizedToken m_strLocPersonaFieldNotes; // offset 0x30, size 0x10, align 8
    CUtlString m_strNonHeroStickerName; // offset 0x40, size 0x8, align 8
    CUtlString m_strNonHeroStickerDisplayName; // offset 0x48, size 0x8, align 8
    bool m_bAlwaysUnlocked; // offset 0x50, size 0x1, align 1
    bool m_bIsHero; // offset 0x51, size 0x1, align 1
    bool m_bIsForeword; // offset 0x52, size 0x1, align 1
    char _pad_0053[0x1]; // offset 0x53
    int32 m_nUnlocksAtCodexCompletionCount; // offset 0x54, size 0x4, align 4
    char _pad_0058[0x14]; // offset 0x58
    EMonsterHunterCodexAuthor m_eAuthor; // offset 0x6C, size 0x4, align 4
    EMonsterHunterCodexAuthor m_ePersonaAuthor; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x4]; // offset 0x74
};
