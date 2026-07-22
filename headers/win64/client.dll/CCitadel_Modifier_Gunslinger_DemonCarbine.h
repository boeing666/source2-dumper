#pragma once

class CCitadel_Modifier_Gunslinger_DemonCarbine : public CCitadelModifier /*0x0*/  // sizeof 0x3D0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    int32 m_nBulletCount; // offset 0xC0, size 0x4, align 4
    float32 m_flElapsedPct; // offset 0xC4, size 0x4, align 4
    ParticleIndex_t m_nFullyChargedParticle; // offset 0xC8, size 0x4, align 255
    char _pad_00CC[0x304]; // offset 0xCC
};
