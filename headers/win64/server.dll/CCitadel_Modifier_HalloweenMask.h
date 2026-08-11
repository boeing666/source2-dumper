#pragma once

class CCitadel_Modifier_HalloweenMask : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    int32 m_nMaskToUse; // offset 0xD0, size 0x4, align 4
    ParticleIndex_t m_nMaskFX; // offset 0xD4, size 0x4, align 255
};
