#pragma once

class CCitadel_Modifier_MysticalPianoAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x450, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x188]; // offset 0x0
    ParticleIndex_t m_hRingEffect; // offset 0x188, size 0x4, align 255
    ParticleIndex_t m_hGroundEffect; // offset 0x18C, size 0x4, align 255
    char _pad_0190[0x2C0]; // offset 0x190
};
