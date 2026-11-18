#pragma once

class C_DOTA_PortraitEntity : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1D18, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1CD0]; // offset 0x0
    CountdownTimer m_PetIdleTimer; // offset 0x1CD0, size 0x18, align 8
    ParticleIndex_t m_nMouthFX; // offset 0x1CE8, size 0x4, align 255
    int32 m_nMouthControlPoint; // offset 0x1CEC, size 0x4, align 4
    ParticleIndex_t m_iPortraitParticle; // offset 0x1CF0, size 0x4, align 255
    int32 m_PortraitActivity; // offset 0x1CF4, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_CustomActivityModifiers; // offset 0x1CF8, size 0x18, align 8
    bool m_bIsSimulationActive; // offset 0x1D10, size 0x1, align 1
    char _pad_1D11[0x3]; // offset 0x1D11
    CEntityHandle m_hAppearanceFromNPC; // offset 0x1D14, size 0x4, align 4
};
