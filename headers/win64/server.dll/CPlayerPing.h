#pragma once

class CPlayerPing : public CBaseEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CHandle< CCSPlayerPawn > m_hPlayer; // offset 0x4B0, size 0x4, align 4
    CHandle< CBaseEntity > m_hPingedEntity; // offset 0x4B4, size 0x4, align 4
    int32 m_iType; // offset 0x4B8, size 0x4, align 4
    bool m_bUrgent; // offset 0x4BC, size 0x1, align 1
    char[18] m_szPlaceName; // offset 0x4BD, size 0x12, align 1
    char _pad_04CF[0x1]; // offset 0x4CF
};
