#pragma once

class CIngameEvent_MuertaReleaseSpring2023 : public C_IngameEvent_Base /*0x0*/  // sizeof 0x1A00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19B8]; // offset 0x0
    bool m_bMiniGameActive; // offset 0x19B8, size 0x1, align 1
    int8[10] m_vecTargetAssignments; // offset 0x19B9, size 0xA, align 1
    uint8[10] m_vecMiniGamePoints; // offset 0x19C3, size 0xA, align 1
    uint8[10] m_vecMiniGameKills; // offset 0x19CD, size 0xA, align 1
    char _pad_19D7[0x11]; // offset 0x19D7
    CUtlVector< ParticleIndex_t > m_activeGravestones; // offset 0x19E8, size 0x18, align 8
};
