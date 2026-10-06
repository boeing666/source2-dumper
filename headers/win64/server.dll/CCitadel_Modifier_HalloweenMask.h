#pragma once

class CCitadel_Modifier_HalloweenMask : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    int32 m_nMaskToUse; // offset 0x148, size 0x4, align 4
    ParticleIndex_t m_nMaskFX; // offset 0x14C, size 0x4, align 255
};
