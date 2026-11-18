#pragma once

class CDOTA_Modifier_Centaur_Cart : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hUnit; // offset 0x1AF8, size 0x4, align 4
    bool m_bWasMoving; // offset 0x1AFC, size 0x1, align 1
    bool m_bSpawnDone; // offset 0x1AFD, size 0x1, align 1
    char _pad_1AFE[0x2]; // offset 0x1AFE
    Vector m_vecOldForward; // offset 0x1B00, size 0xC, align 4
    int32 break_distance; // offset 0x1B0C, size 0x4, align 4
    VectorWS m_vecPreviousLocation; // offset 0x1B10, size 0xC, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
