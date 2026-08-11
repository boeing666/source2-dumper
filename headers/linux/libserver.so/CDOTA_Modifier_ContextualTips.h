#pragma once

class CDOTA_Modifier_ContextualTips : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bAllEnemiesBots; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    GameTime_t m_flGloblLastTipSendTime; // offset 0x1A7C, size 0x4, align 255
    GameTime_t m_flLastEnemyHeroDamageTime; // offset 0x1A80, size 0x4, align 255
    GameTime_t m_flLastEnemyHeroVisibleTime; // offset 0x1A84, size 0x4, align 255
    char _pad_1A88[0x70]; // offset 0x1A88
};
