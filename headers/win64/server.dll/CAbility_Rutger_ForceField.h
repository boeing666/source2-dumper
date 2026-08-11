#pragma once

class CAbility_Rutger_ForceField : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1310, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ParticleIndex_t m_hChargingParticle; // offset 0xF70, size 0x4, align 255
    ParticleIndex_t m_hExplodeParticle; // offset 0xF74, size 0x4, align 255
    Vector m_vSpawnPos; // offset 0xF78, size 0xC, align 4
    GameTime_t m_fTimeToDestroyForceField; // offset 0xF84, size 0x4, align 255
    bool m_bFirstThink; // offset 0xF88, size 0x1, align 1
    char _pad_0F89[0x387]; // offset 0xF89
};
