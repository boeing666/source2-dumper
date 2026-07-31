#pragma once

class CDOTA_Modifier_Greevil_Miniboss_Blue_IceVortexThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    int32 movement_speed_pct; // offset 0x1A7C, size 0x4, align 4
    int32 spell_resist_pct; // offset 0x1A80, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A84, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_hChilledEntities; // offset 0x1A88, size 0x18, align 8
};
