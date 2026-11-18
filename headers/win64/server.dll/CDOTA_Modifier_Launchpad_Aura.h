#pragma once

class CDOTA_Modifier_Launchpad_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hNextNode; // offset 0x1AF8, size 0x4, align 4
    Vector m_vDirection; // offset 0x1AFC, size 0xC, align 4
    float32 m_flDistance; // offset 0x1B08, size 0x4, align 4
    float32 radius; // offset 0x1B0C, size 0x4, align 4
    float32 vision_cone; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
