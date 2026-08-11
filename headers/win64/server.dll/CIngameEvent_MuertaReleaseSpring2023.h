#pragma once

class CIngameEvent_MuertaReleaseSpring2023 : public CIngameEvent_Base /*0x0*/  // sizeof 0x1AA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bMiniGameActive; // offset 0x1A58, size 0x1, align 1
    int8[10] m_vecTargetAssignments; // offset 0x1A59, size 0xA, align 1
    uint8[10] m_vecMiniGamePoints; // offset 0x1A63, size 0xA, align 1
    uint8[10] m_vecMiniGameKills; // offset 0x1A6D, size 0xA, align 1
    char _pad_1A77[0x11]; // offset 0x1A77
    CUtlVector< ParticleIndex_t > m_activeGravestones; // offset 0x1A88, size 0x18, align 8
};
