#pragma once

class CCitadel_Modifier_ControlPointCapturerAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x110, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x108]; // offset 0x0
    ParticleIndex_t m_particle; // offset 0x108, size 0x4, align 255
    CHandle< CCitadelControlPointTrigger > m_hCP; // offset 0x10C, size 0x4, align 4
};
