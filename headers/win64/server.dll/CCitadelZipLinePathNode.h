#pragma once

class CCitadelZipLinePathNode : public CBaseEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B8]; // offset 0x0
    bool m_bCornerNode; // offset 0x4B8, size 0x1, align 1
    bool m_bDisableZippingToByPlayers; // offset 0x4B9, size 0x1, align 1
    bool m_bCapturable; // offset 0x4BA, size 0x1, align 1
    char _pad_04BB[0x5]; // offset 0x4BB
    CUtlSymbolLarge m_strGuardBossName; // offset 0x4C0, size 0x8, align 8
    CUtlSymbolLarge m_strGuardBossName2; // offset 0x4C8, size 0x8, align 8
    CUtlSymbolLarge m_strGuardBossName3; // offset 0x4D0, size 0x8, align 8
    char _pad_04D8[0x4]; // offset 0x4D8
    float32 m_flSpeedMultiplierToBaseBonus; // offset 0x4DC, size 0x4, align 4
    float32 m_flSpeedMultiplierFromBaseBonus; // offset 0x4E0, size 0x4, align 4
    char _pad_04E4[0x4]; // offset 0x4E4
};
