#pragma once

class CCitadel_Modifier_PunkgoatTethered : public CCitadelModifier /*0x0*/  // sizeof 0x828, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    ParticleIndex_t m_nParticleRope1; // offset 0x130, size 0x4, align 255
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x134, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0x138, size 0x4, align 255
    char _pad_013C[0x6E4]; // offset 0x13C
    CHandle< C_BaseEntity > m_hTetheredTo; // offset 0x820, size 0x4, align 4
    char _pad_0824[0x4]; // offset 0x824
};
