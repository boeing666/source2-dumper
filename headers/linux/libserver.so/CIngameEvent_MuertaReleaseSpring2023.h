#pragma once

class CIngameEvent_MuertaReleaseSpring2023 : public CIngameEvent_Base /*0x0*/  // sizeof 0x1D80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D38]; // offset 0x0
    bool m_bMiniGameActive; // offset 0x1D38, size 0x1, align 1
    int8[10] m_vecTargetAssignments; // offset 0x1D39, size 0xA, align 1
    uint8[10] m_vecMiniGamePoints; // offset 0x1D43, size 0xA, align 1
    uint8[10] m_vecMiniGameKills; // offset 0x1D4D, size 0xA, align 1
    char _pad_1D57[0x11]; // offset 0x1D57
    CUtlVector< ParticleIndex_t > m_activeGravestones; // offset 0x1D68, size 0x18, align 8
};
