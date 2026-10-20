#pragma once

class CCitadel_Ability_TurretClone : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1CE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A50]; // offset 0x0
    bool m_bHasTurretReady; // offset 0x1A50, size 0x1, align 1
    char _pad_1A51[0x3]; // offset 0x1A51
    int32 m_iCurrentSwapCount; // offset 0x1A54, size 0x4, align 4
    GameTime_t m_flTurretExpireTime; // offset 0x1A58, size 0x4, align 255
    char _pad_1A5C[0x4]; // offset 0x1A5C
    CHandle< CCitadel_MagicianTurret > m_pActiveTurret; // offset 0x1A60, size 0x4, align 4
    ParticleIndex_t m_nTurretFXIndex; // offset 0x1A64, size 0x4, align 255
    char _pad_1A68[0x280]; // offset 0x1A68
};
