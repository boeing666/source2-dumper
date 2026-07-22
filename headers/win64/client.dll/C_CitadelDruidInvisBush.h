#pragma once

class C_CitadelDruidInvisBush : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xCD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    VectorWS m_vStartPos; // offset 0xCB0, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xCBC, size 0xC, align 4
    GameTime_t m_flStartGrowTime; // offset 0xCC8, size 0x4, align 255
    GameTime_t m_flEndGrowTime; // offset 0xCCC, size 0x4, align 255
};
