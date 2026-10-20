#pragma once

class CCitadel_Ability_Fencer_ThrowBlade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2138, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    VectorWS m_vCastPosition; // offset 0x14A8, size 0xC, align 4
    QAngle m_qCastAngles; // offset 0x14B4, size 0xC, align 4
    ParticleIndex_t m_nMarkParticleIndex; // offset 0x14C0, size 0x4, align 255
    ParticleIndex_t m_nLingerParticleIndex; // offset 0x14C4, size 0x4, align 255
    ParticleIndex_t m_nExplodeParticleIndex; // offset 0x14C8, size 0x4, align 255
    bool m_bHitEnemyPlayer; // offset 0x14CC, size 0x1, align 1
    char _pad_14CD[0x3]; // offset 0x14CD
    GameTime_t m_tRecastEndTime; // offset 0x14D0, size 0x4, align 255
    char _pad_14D4[0xC64]; // offset 0x14D4
};
