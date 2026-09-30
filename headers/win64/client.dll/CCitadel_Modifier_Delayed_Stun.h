#pragma once

class CCitadel_Modifier_Delayed_Stun : public CCitadelModifier /*0x0*/  // sizeof 0x138, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    ParticleIndex_t m_hRingEffect; // offset 0x130, size 0x4, align 255
    float32 m_flRadius; // offset 0x134, size 0x4, align 4
};
