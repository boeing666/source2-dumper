#pragma once

class CCitadel_Modifier_MysticalPianoAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x458, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x190]; // offset 0x0
    ParticleIndex_t m_hRingEffect; // offset 0x190, size 0x4, align 255
    ParticleIndex_t m_hGroundEffect; // offset 0x194, size 0x4, align 255
    char _pad_0198[0x2C0]; // offset 0x198
};
