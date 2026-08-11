#pragma once

class CCitadel_Modifier_StickyBombOnGround : public CCitadel_Modifier_StickyBombAttached /*0x0*/  // sizeof 0x2E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2E0]; // offset 0x0
    GameTime_t m_tLastStopTime; // offset 0x2E0, size 0x4, align 255
    char _pad_02E4[0x4]; // offset 0x2E4
};
