#pragma once

class C_PlayerPing : public C_BaseEntity /*0x0*/  // sizeof 0x650, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x630]; // offset 0x0
    CHandle< C_CSPlayerPawn > m_hPlayer; // offset 0x630, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPingedEntity; // offset 0x634, size 0x4, align 4
    int32 m_iType; // offset 0x638, size 0x4, align 4
    bool m_bUrgent; // offset 0x63C, size 0x1, align 1
    char[18] m_szPlaceName; // offset 0x63D, size 0x12, align 1
    char _pad_064F[0x1]; // offset 0x64F
};
