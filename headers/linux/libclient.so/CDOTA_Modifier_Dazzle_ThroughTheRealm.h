#pragma once

class CDOTA_Modifier_Dazzle_ThroughTheRealm : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hSoul; // offset 0x1AF8, size 0x4, align 4
    float32 m_flSpeed; // offset 0x1AFC, size 0x4, align 4
    bool m_bReachedSoul; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x7]; // offset 0x1B01
};
