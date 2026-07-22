#pragma once

class CDOTA_AghsFort_BossPreview : public C_BaseEntity /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CUtlSymbolLarge m_strBossUnit; // offset 0x5F0, size 0x8, align 8
    CUtlSymbolLarge m_strModelName; // offset 0x5F8, size 0x8, align 8
    float32 m_flBossModelScale; // offset 0x600, size 0x4, align 4
    float32 m_flExtraModelScale; // offset 0x604, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x608, size 0x4, align 4
    char _pad_060C[0x4]; // offset 0x60C
};
