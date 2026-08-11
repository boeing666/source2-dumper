#pragma once

class CDOTA_Modifier_Largo_CatchyLick_Rune : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 pull_duration; // offset 0x1A78, size 0x4, align 4
    float32 pull_distance_ally; // offset 0x1A7C, size 0x4, align 4
    CHandle< CBaseEntity > m_hRune; // offset 0x1A80, size 0x4, align 4
    VectorWS m_vOriginalPos; // offset 0x1A84, size 0xC, align 4
    VectorWS m_vDestination; // offset 0x1A90, size 0xC, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
