#pragma once

class CAbility_TestHero_SpookyHide : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1838]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // offset 0x1838, size 0x18, align 8
    bool m_bIsVisibleOnMinimap; // offset 0x1850, size 0x1, align 1
    char _pad_1851[0x3]; // offset 0x1851
    GameTime_t m_flStoppedMovingStartTime; // offset 0x1854, size 0x4, align 255
    VectorWS m_vLastPos; // offset 0x1858, size 0xC, align 4
    char _pad_1864[0x4]; // offset 0x1864
};
