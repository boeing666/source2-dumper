#pragma once

class CDOTA_Modifier_TutorialNPCBlocker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vecStart; // offset 0x1A78, size 0xC, align 4
    VectorWS m_vecEnd; // offset 0x1A84, size 0xC, align 4
    VectorWS m_vecCenter; // offset 0x1A90, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A9C, size 0x4, align 255
    bool m_bHidden; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x7]; // offset 0x1AA1
};
