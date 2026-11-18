#pragma once

class CDOTA_ModifierManager  // sizeof 0x3A0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x28]; // offset 0x0
    bool m_bCompactBuffListPending; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x361]; // offset 0x29
    uint16 m_nHasTruesightForTeam; // offset 0x38A, size 0x2, align 2
    uint16 m_nHasTruesightForTeamValid; // offset 0x38C, size 0x2, align 2
    uint16 m_nProvidesFOWPositionForTeam; // offset 0x38E, size 0x2, align 2
    uint16 m_nProvidesFOWPositionForTeamValid; // offset 0x390, size 0x2, align 2
    char _pad_0392[0x2]; // offset 0x392
    int32 m_iBuffIndex; // offset 0x394, size 0x4, align 4
    int32 m_iLockRefCount; // offset 0x398, size 0x4, align 4
    char _pad_039C[0x4]; // offset 0x39C
};
