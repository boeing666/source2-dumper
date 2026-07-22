#pragma once

class CCitadel_Modifier_MysticalPianoAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x318, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x110]; // offset 0x0
    ParticleIndex_t m_hRingEffect; // offset 0x110, size 0x4, align 255
    ParticleIndex_t m_hGroundEffect; // offset 0x114, size 0x4, align 255
    char _pad_0118[0x200]; // offset 0x118
};
