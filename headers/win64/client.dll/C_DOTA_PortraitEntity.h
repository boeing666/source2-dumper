#pragma once

class C_DOTA_PortraitEntity : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1B00, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    CountdownTimer m_PetIdleTimer; // offset 0x1AB8, size 0x18, align 8
    ParticleIndex_t m_nMouthFX; // offset 0x1AD0, size 0x4, align 255
    int32 m_nMouthControlPoint; // offset 0x1AD4, size 0x4, align 4
    ParticleIndex_t m_iPortraitParticle; // offset 0x1AD8, size 0x4, align 255
    int32 m_PortraitActivity; // offset 0x1ADC, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_CustomActivityModifiers; // offset 0x1AE0, size 0x18, align 8
    bool m_bIsSimulationActive; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    CEntityHandle m_hAppearanceFromNPC; // offset 0x1AFC, size 0x4, align 4
};
