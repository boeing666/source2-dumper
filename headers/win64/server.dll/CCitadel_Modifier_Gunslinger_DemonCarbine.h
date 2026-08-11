#pragma once

class CCitadel_Modifier_Gunslinger_DemonCarbine : public CCitadelModifier /*0x0*/  // sizeof 0x3E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    int32 m_nBulletCount; // offset 0xD0, size 0x4, align 4
    float32 m_flElapsedPct; // offset 0xD4, size 0x4, align 4
    ParticleIndex_t m_nFullyChargedParticle; // offset 0xD8, size 0x4, align 255
    char _pad_00DC[0x304]; // offset 0xDC
};
