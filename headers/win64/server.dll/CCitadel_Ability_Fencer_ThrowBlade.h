#pragma once

class CCitadel_Ability_Fencer_ThrowBlade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2130, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    VectorWS m_vCastPosition; // offset 0x14A0, size 0xC, align 4
    QAngle m_qCastAngles; // offset 0x14AC, size 0xC, align 4
    ParticleIndex_t m_nMarkParticleIndex; // offset 0x14B8, size 0x4, align 255
    ParticleIndex_t m_nLingerParticleIndex; // offset 0x14BC, size 0x4, align 255
    ParticleIndex_t m_nExplodeParticleIndex; // offset 0x14C0, size 0x4, align 255
    bool m_bHitEnemyPlayer; // offset 0x14C4, size 0x1, align 1
    char _pad_14C5[0x3]; // offset 0x14C5
    GameTime_t m_tRecastEndTime; // offset 0x14C8, size 0x4, align 255
    char _pad_14CC[0xC64]; // offset 0x14CC
};
