#pragma once

class CDOTA_Modifier_MonkeyKing_BouncePerch : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTree; // offset 0x1A58, size 0x4, align 4
    bool m_bGroundToTree; // offset 0x1A5C, size 0x1, align 1
    bool m_bTreeToGround; // offset 0x1A5D, size 0x1, align 1
    bool m_bTreeToTree; // offset 0x1A5E, size 0x1, align 1
    char _pad_1A5F[0x1]; // offset 0x1A5F
    float32 perched_day_vision; // offset 0x1A60, size 0x4, align 4
    float32 perched_night_vision; // offset 0x1A64, size 0x4, align 4
    bool m_bAbilityIsStolen; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x7]; // offset 0x1A69
};
