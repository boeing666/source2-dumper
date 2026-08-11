#pragma once

class CCitadel_Modifier_RebirthCredit : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bActivated; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    ParticleIndex_t m_nFxIndex; // offset 0xD4, size 0x4, align 255
};
