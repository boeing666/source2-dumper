#pragma once

class CCitadel_Ability_TurretClone : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1AA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1810]; // offset 0x0
    bool m_bHasTurretReady; // offset 0x1810, size 0x1, align 1
    char _pad_1811[0x3]; // offset 0x1811
    int32 m_iCurrentSwapCount; // offset 0x1814, size 0x4, align 4
    GameTime_t m_flTurretExpireTime; // offset 0x1818, size 0x4, align 255
    char _pad_181C[0x4]; // offset 0x181C
    CHandle< CCitadel_MagicianTurret > m_pActiveTurret; // offset 0x1820, size 0x4, align 4
    ParticleIndex_t m_nTurretFXIndex; // offset 0x1824, size 0x4, align 255
    char _pad_1828[0x280]; // offset 0x1828
};
