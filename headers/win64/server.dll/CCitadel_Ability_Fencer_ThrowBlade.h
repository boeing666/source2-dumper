#pragma once

class CCitadel_Ability_Fencer_ThrowBlade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x18A0, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vCastPosition; // offset 0xF70, size 0xC, align 4
    QAngle m_qCastAngles; // offset 0xF7C, size 0xC, align 4
    ParticleIndex_t m_nMarkParticleIndex; // offset 0xF88, size 0x4, align 255
    ParticleIndex_t m_nLingerParticleIndex; // offset 0xF8C, size 0x4, align 255
    ParticleIndex_t m_nExplodeParticleIndex; // offset 0xF90, size 0x4, align 255
    bool m_bHitEnemyPlayer; // offset 0xF94, size 0x1, align 1
    char _pad_0F95[0x3]; // offset 0xF95
    GameTime_t m_tRecastEndTime; // offset 0xF98, size 0x4, align 255 | MNetworkEnable
    char _pad_0F9C[0x904]; // offset 0xF9C
};
