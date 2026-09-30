#pragma once

class C_CitadelDruidInvisBush : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xDC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    VectorWS m_vStartPos; // offset 0xDA8, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xDB4, size 0xC, align 4
    GameTime_t m_flStartGrowTime; // offset 0xDC0, size 0x4, align 255
    GameTime_t m_flEndGrowTime; // offset 0xDC4, size 0x4, align 255
};
