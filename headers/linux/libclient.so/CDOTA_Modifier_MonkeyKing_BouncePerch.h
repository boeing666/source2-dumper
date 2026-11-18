#pragma once

class CDOTA_Modifier_MonkeyKing_BouncePerch : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTree; // offset 0x1AF8, size 0x4, align 4
    bool m_bGroundToTree; // offset 0x1AFC, size 0x1, align 1
    bool m_bTreeToGround; // offset 0x1AFD, size 0x1, align 1
    bool m_bTreeToTree; // offset 0x1AFE, size 0x1, align 1
    char _pad_1AFF[0x1]; // offset 0x1AFF
    float32 perched_day_vision; // offset 0x1B00, size 0x4, align 4
    float32 perched_night_vision; // offset 0x1B04, size 0x4, align 4
    bool m_bAbilityIsStolen; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x7]; // offset 0x1B09
};
