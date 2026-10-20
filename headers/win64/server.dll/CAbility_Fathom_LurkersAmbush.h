#pragma once

class CAbility_Fathom_LurkersAmbush : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1AD8]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // offset 0x1AD8, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // offset 0x1AF0, size 0x18, align 8
    bool m_bIsVisibleOnMinimap; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x3]; // offset 0x1B09
    GameTime_t m_flStoppedMovingStartTime; // offset 0x1B0C, size 0x4, align 255
    VectorWS m_vLastPos; // offset 0x1B10, size 0xC, align 4
    float32 m_flDebuffDuration; // offset 0x1B1C, size 0x4, align 4
    GameTime_t m_flChannelTimeStarted; // offset 0x1B20, size 0x4, align 255
    bool m_bWasLatchedWhenCast; // offset 0x1B24, size 0x1, align 1
    char _pad_1B25[0x3]; // offset 0x1B25
    ParticleIndex_t m_ChargeUpParticle; // offset 0x1B28, size 0x4, align 255
    char _pad_1B2C[0x4]; // offset 0x1B2C
};
