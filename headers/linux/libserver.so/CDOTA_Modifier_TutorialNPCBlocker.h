#pragma once

class CDOTA_Modifier_TutorialNPCBlocker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS m_vecStart; // offset 0x1A58, size 0xC, align 4
    VectorWS m_vecEnd; // offset 0x1A64, size 0xC, align 4
    VectorWS m_vecCenter; // offset 0x1A70, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A7C, size 0x4, align 255
    bool m_bHidden; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
};
