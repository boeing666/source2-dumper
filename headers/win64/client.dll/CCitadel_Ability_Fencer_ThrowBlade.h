#pragma once

class CCitadel_Ability_Fencer_ThrowBlade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2368, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    VectorWS m_vCastPosition; // offset 0x16D8, size 0xC, align 4
    QAngle m_qCastAngles; // offset 0x16E4, size 0xC, align 4
    ParticleIndex_t m_nMarkParticleIndex; // offset 0x16F0, size 0x4, align 255
    ParticleIndex_t m_nLingerParticleIndex; // offset 0x16F4, size 0x4, align 255
    ParticleIndex_t m_nExplodeParticleIndex; // offset 0x16F8, size 0x4, align 255
    bool m_bHitEnemyPlayer; // offset 0x16FC, size 0x1, align 1
    char _pad_16FD[0x3]; // offset 0x16FD
    GameTime_t m_tRecastEndTime; // offset 0x1700, size 0x4, align 255
    char _pad_1704[0xC64]; // offset 0x1704
};
