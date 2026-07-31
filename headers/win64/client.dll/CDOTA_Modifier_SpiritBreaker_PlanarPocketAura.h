#pragma once

class CDOTA_Modifier_SpiritBreaker_PlanarPocketAura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    float32 radius; // offset 0x1A7C, size 0x4, align 4
    int32 magic_resistance; // offset 0x1A80, size 0x4, align 4
    float32 break_distance; // offset 0x1A84, size 0x4, align 4
};
