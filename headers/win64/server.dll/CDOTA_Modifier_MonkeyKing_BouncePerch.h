#pragma once

class CDOTA_Modifier_MonkeyKing_BouncePerch : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTree; // offset 0x1A78, size 0x4, align 4
    bool m_bGroundToTree; // offset 0x1A7C, size 0x1, align 1
    bool m_bTreeToGround; // offset 0x1A7D, size 0x1, align 1
    bool m_bTreeToTree; // offset 0x1A7E, size 0x1, align 1
    char _pad_1A7F[0x1]; // offset 0x1A7F
    float32 perched_day_vision; // offset 0x1A80, size 0x4, align 4
    float32 perched_night_vision; // offset 0x1A84, size 0x4, align 4
    bool m_bAbilityIsStolen; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x7]; // offset 0x1A89
};
