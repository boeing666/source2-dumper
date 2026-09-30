#pragma once

class CAbility_Fathom_LurkersAmbush : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D08]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // offset 0x1D08, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // offset 0x1D20, size 0x18, align 8
    bool m_bIsVisibleOnMinimap; // offset 0x1D38, size 0x1, align 1
    char _pad_1D39[0x3]; // offset 0x1D39
    GameTime_t m_flStoppedMovingStartTime; // offset 0x1D3C, size 0x4, align 255
    VectorWS m_vLastPos; // offset 0x1D40, size 0xC, align 4
    float32 m_flDebuffDuration; // offset 0x1D4C, size 0x4, align 4
    GameTime_t m_flChannelTimeStarted; // offset 0x1D50, size 0x4, align 255
    bool m_bWasLatchedWhenCast; // offset 0x1D54, size 0x1, align 1
    char _pad_1D55[0x3]; // offset 0x1D55
    ParticleIndex_t m_ChargeUpParticle; // offset 0x1D58, size 0x4, align 255
    char _pad_1D5C[0x4]; // offset 0x1D5C
};
