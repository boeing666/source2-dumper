#pragma once

class CCitadel_Ability_Fencer_ThrowBlade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1B08, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11DC]; // offset 0x0
    Vector m_vCastPosition; // offset 0x11DC, size 0xC, align 4
    QAngle m_qCastAngles; // offset 0x11E8, size 0xC, align 4
    ParticleIndex_t m_nMarkParticleIndex; // offset 0x11F4, size 0x4, align 255
    ParticleIndex_t m_nLingerParticleIndex; // offset 0x11F8, size 0x4, align 255
    ParticleIndex_t m_nExplodeParticleIndex; // offset 0x11FC, size 0x4, align 255
    bool m_bHitEnemyPlayer; // offset 0x1200, size 0x1, align 1
    char _pad_1201[0x3]; // offset 0x1201
    GameTime_t m_tRecastEndTime; // offset 0x1204, size 0x4, align 255 | MNetworkEnable
    char _pad_1208[0x900]; // offset 0x1208
};
