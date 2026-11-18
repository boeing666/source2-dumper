#pragma once

class CDOTA_Modifier_Mutation_Spellcast : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CUtlVector< CDOTABaseAbility* > m_vecAbilities; // offset 0x1AF8, size 0x18, align 8
    float32 m_fNextCastTime; // offset 0x1B10, size 0x4, align 4
    float32 m_fCastInterval; // offset 0x1B14, size 0x4, align 4
    float32 m_fWarningTime; // offset 0x1B18, size 0x4, align 4
    int32 m_iNextAbility; // offset 0x1B1C, size 0x4, align 4
};
