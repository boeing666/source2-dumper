#pragma once

class CDOTA_Modifier_MonkeyKing_BouncePerch : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTree; // offset 0x1AA8, size 0x4, align 4
    bool m_bGroundToTree; // offset 0x1AAC, size 0x1, align 1
    bool m_bTreeToGround; // offset 0x1AAD, size 0x1, align 1
    bool m_bTreeToTree; // offset 0x1AAE, size 0x1, align 1
    char _pad_1AAF[0x1]; // offset 0x1AAF
    float32 perched_day_vision; // offset 0x1AB0, size 0x4, align 4
    float32 perched_night_vision; // offset 0x1AB4, size 0x4, align 4
    bool m_bAbilityIsStolen; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x7]; // offset 0x1AB9
};
