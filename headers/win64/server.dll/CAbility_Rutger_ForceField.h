#pragma once

class CAbility_Rutger_ForceField : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1990, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    ParticleIndex_t m_hChargingParticle; // offset 0x14A0, size 0x4, align 255
    ParticleIndex_t m_hExplodeParticle; // offset 0x14A4, size 0x4, align 255
    VectorWS m_vSpawnPos; // offset 0x14A8, size 0xC, align 4
    GameTime_t m_fTimeToDestroyForceField; // offset 0x14B4, size 0x4, align 255
    bool m_bFirstThink; // offset 0x14B8, size 0x1, align 1
    char _pad_14B9[0x4D7]; // offset 0x14B9
};
