#pragma once

class CFoWRevealerEntity : public CBaseEntity /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    uint32 m_unViewerTeam; // offset 0x778, size 0x4, align 4
    int32 m_nVisionRange; // offset 0x77C, size 0x4, align 4
};
