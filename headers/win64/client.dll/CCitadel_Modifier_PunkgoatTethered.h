#pragma once

class CCitadel_Modifier_PunkgoatTethered : public CCitadelModifier /*0x0*/  // sizeof 0x830, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    ParticleIndex_t m_nParticleRope1; // offset 0x138, size 0x4, align 255
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x13C, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0x140, size 0x4, align 255
    char _pad_0144[0x6E4]; // offset 0x144
    CHandle< C_BaseEntity > m_hTetheredTo; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
};
