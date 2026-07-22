#pragma once

class CCitadel_Modifier_PunkgoatTethered : public CCitadelModifier /*0x0*/  // sizeof 0x5D8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    ParticleIndex_t m_nParticleRope1; // offset 0xC0, size 0x4, align 255
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0xC4, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0xC8, size 0x4, align 255
    char _pad_00CC[0x504]; // offset 0xCC
    CHandle< C_BaseEntity > m_hTetheredTo; // offset 0x5D0, size 0x4, align 4
    char _pad_05D4[0x4]; // offset 0x5D4
};
