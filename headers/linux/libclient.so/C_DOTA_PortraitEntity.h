#pragma once

class C_DOTA_PortraitEntity : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1C88, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1C40]; // offset 0x0
    CountdownTimer m_PetIdleTimer; // offset 0x1C40, size 0x18, align 8
    ParticleIndex_t m_nMouthFX; // offset 0x1C58, size 0x4, align 255
    int32 m_nMouthControlPoint; // offset 0x1C5C, size 0x4, align 4
    ParticleIndex_t m_iPortraitParticle; // offset 0x1C60, size 0x4, align 255
    int32 m_PortraitActivity; // offset 0x1C64, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_CustomActivityModifiers; // offset 0x1C68, size 0x18, align 8
    bool m_bIsSimulationActive; // offset 0x1C80, size 0x1, align 1
    char _pad_1C81[0x3]; // offset 0x1C81
    CEntityHandle m_hAppearanceFromNPC; // offset 0x1C84, size 0x4, align 4
};
