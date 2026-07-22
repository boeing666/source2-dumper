#pragma once

class C_DOTA_PortraitEntity : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x19F8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    CountdownTimer m_PetIdleTimer; // offset 0x19B0, size 0x18, align 8
    ParticleIndex_t m_nMouthFX; // offset 0x19C8, size 0x4, align 255
    int32 m_nMouthControlPoint; // offset 0x19CC, size 0x4, align 4
    ParticleIndex_t m_iPortraitParticle; // offset 0x19D0, size 0x4, align 255
    int32 m_PortraitActivity; // offset 0x19D4, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_CustomActivityModifiers; // offset 0x19D8, size 0x18, align 8
    bool m_bIsSimulationActive; // offset 0x19F0, size 0x1, align 1
    char _pad_19F1[0x3]; // offset 0x19F1
    CEntityHandle m_hAppearanceFromNPC; // offset 0x19F4, size 0x4, align 4
};
