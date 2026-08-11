#pragma once

class CDOTA_AghsFort_BossPreview : public CBaseEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_strBossUnit; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_strModelName; // offset 0x780, size 0x8, align 8
    float32 m_flBossModelScale; // offset 0x788, size 0x4, align 4
    float32 m_flExtraModelScale; // offset 0x78C, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
};
