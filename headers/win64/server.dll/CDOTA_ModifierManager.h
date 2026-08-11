#pragma once

class CDOTA_ModifierManager  // sizeof 0x390, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x28]; // offset 0x0
    bool m_bCompactBuffListPending; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x351]; // offset 0x29
    uint16 m_nHasTruesightForTeam; // offset 0x37A, size 0x2, align 2
    uint16 m_nHasTruesightForTeamValid; // offset 0x37C, size 0x2, align 2
    uint16 m_nProvidesFOWPositionForTeam; // offset 0x37E, size 0x2, align 2
    uint16 m_nProvidesFOWPositionForTeamValid; // offset 0x380, size 0x2, align 2
    char _pad_0382[0x2]; // offset 0x382
    int32 m_iBuffIndex; // offset 0x384, size 0x4, align 4
    int32 m_iLockRefCount; // offset 0x388, size 0x4, align 4
    char _pad_038C[0x4]; // offset 0x38C
};
