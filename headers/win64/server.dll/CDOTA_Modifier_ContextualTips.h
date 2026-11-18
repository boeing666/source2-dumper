#pragma once

class CDOTA_Modifier_ContextualTips : public CDOTA_Buff /*0x0*/  // sizeof 0x1B78, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bAllEnemiesBots; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    GameTime_t m_flGloblLastTipSendTime; // offset 0x1AFC, size 0x4, align 255
    GameTime_t m_flLastEnemyHeroDamageTime; // offset 0x1B00, size 0x4, align 255
    GameTime_t m_flLastEnemyHeroVisibleTime; // offset 0x1B04, size 0x4, align 255
    char _pad_1B08[0x70]; // offset 0x1B08
};
