#pragma once

class CDOTA_Modifier_TutorialNPCBlocker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vecStart; // offset 0x1AF8, size 0xC, align 4
    VectorWS m_vecEnd; // offset 0x1B04, size 0xC, align 4
    VectorWS m_vecCenter; // offset 0x1B10, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B1C, size 0x4, align 255
    bool m_bHidden; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x7]; // offset 0x1B21
};
