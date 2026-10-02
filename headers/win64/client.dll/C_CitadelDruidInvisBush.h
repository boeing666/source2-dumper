#pragma once

class C_CitadelDruidInvisBush : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xE20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE00]; // offset 0x0
    VectorWS m_vStartPos; // offset 0xE00, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xE0C, size 0xC, align 4
    GameTime_t m_flStartGrowTime; // offset 0xE18, size 0x4, align 255
    GameTime_t m_flEndGrowTime; // offset 0xE1C, size 0x4, align 255
};
