#pragma once

class CDOTA_Modifier_Item_HydrasBreath_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 ground_duration; // offset 0x1A78, size 0x4, align 4
    float32 poison_duration; // offset 0x1A7C, size 0x4, align 4
    float32 damage; // offset 0x1A80, size 0x4, align 4
    float32 radius; // offset 0x1A84, size 0x4, align 4
    bool m_bAttackLanded; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    ParticleIndex_t m_nFXIndex; // offset 0x1A8C, size 0x4, align 255
};
