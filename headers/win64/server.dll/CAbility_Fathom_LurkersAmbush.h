#pragma once

class CAbility_Fathom_LurkersAmbush : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1448, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x13F0]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // offset 0x13F0, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // offset 0x1408, size 0x18, align 8
    bool m_bIsVisibleOnMinimap; // offset 0x1420, size 0x1, align 1 | MNetworkEnable
    char _pad_1421[0x3]; // offset 0x1421
    GameTime_t m_flStoppedMovingStartTime; // offset 0x1424, size 0x4, align 255 | MNetworkEnable
    Vector m_vLastPos; // offset 0x1428, size 0xC, align 4
    float32 m_flDebuffDuration; // offset 0x1434, size 0x4, align 4
    GameTime_t m_flChannelTimeStarted; // offset 0x1438, size 0x4, align 255
    bool m_bWasLatchedWhenCast; // offset 0x143C, size 0x1, align 1
    char _pad_143D[0x3]; // offset 0x143D
    ParticleIndex_t m_ChargeUpParticle; // offset 0x1440, size 0x4, align 255
    char _pad_1444[0x4]; // offset 0x1444
};
