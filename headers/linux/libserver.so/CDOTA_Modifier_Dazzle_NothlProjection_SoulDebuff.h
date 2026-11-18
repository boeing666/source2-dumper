#pragma once

class CDOTA_Modifier_Dazzle_NothlProjection_SoulDebuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 ethereal_damage_bonus; // offset 0x1AF8, size 0x4, align 4
    bool m_bReturnInstantly; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
    int32 movement_slow; // offset 0x1B00, size 0x4, align 4
    CHandle< CBaseEntity > m_hPhysicalBody; // offset 0x1B04, size 0x4, align 4
    ParticleIndex_t m_nTetherFXIndex; // offset 0x1B08, size 0x4, align 255
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
