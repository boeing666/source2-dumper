#pragma once

class CCitadel_Modifier_MysticalPianoAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x448, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x180]; // offset 0x0
    ParticleIndex_t m_hRingEffect; // offset 0x180, size 0x4, align 255
    ParticleIndex_t m_hGroundEffect; // offset 0x184, size 0x4, align 255
    char _pad_0188[0x2C0]; // offset 0x188
};
