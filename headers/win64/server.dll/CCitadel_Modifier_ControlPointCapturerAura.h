#pragma once

class CCitadel_Modifier_ControlPointCapturerAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x180, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x178]; // offset 0x0
    ParticleIndex_t m_particle; // offset 0x178, size 0x4, align 255
    CHandle< CCitadelControlPointTrigger > m_hCP; // offset 0x17C, size 0x4, align 4
};
