#pragma once

class CAbility_Fathom_LurkersAmbush : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x16B0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1658]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // offset 0x1658, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // offset 0x1670, size 0x18, align 8
    bool m_bIsVisibleOnMinimap; // offset 0x1688, size 0x1, align 1 | MNetworkEnable
    char _pad_1689[0x3]; // offset 0x1689
    GameTime_t m_flStoppedMovingStartTime; // offset 0x168C, size 0x4, align 255 | MNetworkEnable
    Vector m_vLastPos; // offset 0x1690, size 0xC, align 4
    float32 m_flDebuffDuration; // offset 0x169C, size 0x4, align 4
    GameTime_t m_flChannelTimeStarted; // offset 0x16A0, size 0x4, align 255
    bool m_bWasLatchedWhenCast; // offset 0x16A4, size 0x1, align 1
    char _pad_16A5[0x3]; // offset 0x16A5
    ParticleIndex_t m_ChargeUpParticle; // offset 0x16A8, size 0x4, align 255
    char _pad_16AC[0x4]; // offset 0x16AC
};
