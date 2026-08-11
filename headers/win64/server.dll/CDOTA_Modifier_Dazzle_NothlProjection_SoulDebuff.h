#pragma once

class CDOTA_Modifier_Dazzle_NothlProjection_SoulDebuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 ethereal_damage_bonus; // offset 0x1A78, size 0x4, align 4
    int32 movement_slow; // offset 0x1A7C, size 0x4, align 4
    CHandle< CBaseEntity > m_hPhysicalBody; // offset 0x1A80, size 0x4, align 4
    ParticleIndex_t m_nTetherFXIndex; // offset 0x1A84, size 0x4, align 255
};
