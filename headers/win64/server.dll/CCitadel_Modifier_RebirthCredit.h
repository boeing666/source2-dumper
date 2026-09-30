#pragma once

class CCitadel_Modifier_RebirthCredit : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    bool m_bActivated; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x3]; // offset 0x141
    ParticleIndex_t m_nFxIndex; // offset 0x144, size 0x4, align 255
};
