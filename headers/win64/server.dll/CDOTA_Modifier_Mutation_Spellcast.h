#pragma once

class CDOTA_Modifier_Mutation_Spellcast : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< CDOTABaseAbility* > m_vecAbilities; // offset 0x1A78, size 0x18, align 8
    float32 m_fNextCastTime; // offset 0x1A90, size 0x4, align 4
    float32 m_fCastInterval; // offset 0x1A94, size 0x4, align 4
    float32 m_fWarningTime; // offset 0x1A98, size 0x4, align 4
    int32 m_iNextAbility; // offset 0x1A9C, size 0x4, align 4
};
