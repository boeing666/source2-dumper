#pragma once

class CCitadel_Modifier_ConeWaveProjectile : public CCitadel_Modifier_Intrinsic_Base /*0x0*/  // sizeof 0x358, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x340]; // offset 0x0
    VectorWS m_vInitialCastPosition; // offset 0x340, size 0xC, align 4
    float32 m_flProjectileSpeed; // offset 0x34C, size 0x4, align 4
    ParticleIndex_t m_iParticleEffect; // offset 0x350, size 0x4, align 255
    char _pad_0354[0x4]; // offset 0x354
};
