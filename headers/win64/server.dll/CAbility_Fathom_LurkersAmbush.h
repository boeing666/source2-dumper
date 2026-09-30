#pragma once

class CAbility_Fathom_LurkersAmbush : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1AD0]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // offset 0x1AD0, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // offset 0x1AE8, size 0x18, align 8
    bool m_bIsVisibleOnMinimap; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    GameTime_t m_flStoppedMovingStartTime; // offset 0x1B04, size 0x4, align 255
    VectorWS m_vLastPos; // offset 0x1B08, size 0xC, align 4
    float32 m_flDebuffDuration; // offset 0x1B14, size 0x4, align 4
    GameTime_t m_flChannelTimeStarted; // offset 0x1B18, size 0x4, align 255
    bool m_bWasLatchedWhenCast; // offset 0x1B1C, size 0x1, align 1
    char _pad_1B1D[0x3]; // offset 0x1B1D
    ParticleIndex_t m_ChargeUpParticle; // offset 0x1B20, size 0x4, align 255
    char _pad_1B24[0x4]; // offset 0x1B24
};
