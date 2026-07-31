#pragma once

class C_DOTA_PortraitEntity : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1B88, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1B40]; // offset 0x0
    CountdownTimer m_PetIdleTimer; // offset 0x1B40, size 0x18, align 8
    ParticleIndex_t m_nMouthFX; // offset 0x1B58, size 0x4, align 255
    int32 m_nMouthControlPoint; // offset 0x1B5C, size 0x4, align 4
    ParticleIndex_t m_iPortraitParticle; // offset 0x1B60, size 0x4, align 255
    int32 m_PortraitActivity; // offset 0x1B64, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_CustomActivityModifiers; // offset 0x1B68, size 0x18, align 8
    bool m_bIsSimulationActive; // offset 0x1B80, size 0x1, align 1
    char _pad_1B81[0x3]; // offset 0x1B81
    CEntityHandle m_hAppearanceFromNPC; // offset 0x1B84, size 0x4, align 4
};
