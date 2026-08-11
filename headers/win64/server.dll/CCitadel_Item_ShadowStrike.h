#pragma once

class CCitadel_Item_ShadowStrike : public CCitadel_Item /*0x0*/  // sizeof 0xF80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    GameTime_t m_tAttackWindowStart; // offset 0xF78, size 0x4, align 255
    char _pad_0F7C[0x4]; // offset 0xF7C
};
