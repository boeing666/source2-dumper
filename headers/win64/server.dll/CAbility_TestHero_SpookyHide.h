#pragma once

class CAbility_TestHero_SpookyHide : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1630, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1600]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // offset 0x1600, size 0x18, align 8
    bool m_bIsVisibleOnMinimap; // offset 0x1618, size 0x1, align 1
    char _pad_1619[0x3]; // offset 0x1619
    GameTime_t m_flStoppedMovingStartTime; // offset 0x161C, size 0x4, align 255
    VectorWS m_vLastPos; // offset 0x1620, size 0xC, align 4
    char _pad_162C[0x4]; // offset 0x162C
};
