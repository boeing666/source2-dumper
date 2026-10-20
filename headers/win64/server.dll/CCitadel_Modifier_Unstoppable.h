#pragma once

class CCitadel_Modifier_Unstoppable : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    ParticleIndex_t m_nPlayerShieldFXIndex; // offset 0x150, size 0x4, align 255
    ParticleIndex_t m_nShieldFXIndex; // offset 0x154, size 0x4, align 255
    bool m_bInCheckState; // offset 0x158, size 0x1, align 1
    char _pad_0159[0x7]; // offset 0x159
};
