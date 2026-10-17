#pragma once

class CDOTA_Modifier_Centaur_Cart : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hUnit; // offset 0x1AA8, size 0x4, align 4
    bool m_bWasMoving; // offset 0x1AAC, size 0x1, align 1
    bool m_bSpawnDone; // offset 0x1AAD, size 0x1, align 1
    char _pad_1AAE[0x2]; // offset 0x1AAE
    Vector m_vecOldForward; // offset 0x1AB0, size 0xC, align 4
    int32 break_distance; // offset 0x1ABC, size 0x4, align 4
    VectorWS m_vecPreviousLocation; // offset 0x1AC0, size 0xC, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
