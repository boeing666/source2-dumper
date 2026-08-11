#pragma once

class CDOTA_Modifier_VengefulSpirit_Nether_Swap_DamageReduction : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 damage_reduction; // offset 0x1A78, size 0x4, align 4
    ParticleIndex_t nFXIndex; // offset 0x1A7C, size 0x4, align 255
    float32 damage; // offset 0x1A80, size 0x4, align 4
    int32 m_nDamageAbsorbed; // offset 0x1A84, size 0x4, align 4
};
