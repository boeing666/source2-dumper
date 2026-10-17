#pragma once

class CDOTA_Modifier_Launchpad_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hNextNode; // offset 0x1AA8, size 0x4, align 4
    Vector m_vDirection; // offset 0x1AAC, size 0xC, align 4
    float32 m_flDistance; // offset 0x1AB8, size 0x4, align 4
    float32 radius; // offset 0x1ABC, size 0x4, align 4
    float32 vision_cone; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
