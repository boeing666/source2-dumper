#pragma once

class CDOTA_Modifier_Nian_Hurricane_Whirlpool : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 pull_switch_interval; // offset 0x1AA8, size 0x4, align 4
    int32 pull_speed; // offset 0x1AAC, size 0x4, align 4
    bool m_bForward; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    ParticleIndex_t m_nfxIndex; // offset 0x1AB4, size 0x4, align 255
};
