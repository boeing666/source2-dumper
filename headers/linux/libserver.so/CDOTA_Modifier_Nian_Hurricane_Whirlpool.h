#pragma once

class CDOTA_Modifier_Nian_Hurricane_Whirlpool : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 pull_switch_interval; // offset 0x1AF8, size 0x4, align 4
    int32 pull_speed; // offset 0x1AFC, size 0x4, align 4
    bool m_bForward; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    ParticleIndex_t m_nfxIndex; // offset 0x1B04, size 0x4, align 255
};
