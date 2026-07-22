#pragma once

class CDOTA_Modifier_Launchpad_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hNextNode; // offset 0x1A58, size 0x4, align 4
    Vector m_vDirection; // offset 0x1A5C, size 0xC, align 4
    float32 m_flDistance; // offset 0x1A68, size 0x4, align 4
    float32 radius; // offset 0x1A6C, size 0x4, align 4
    float32 vision_cone; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
