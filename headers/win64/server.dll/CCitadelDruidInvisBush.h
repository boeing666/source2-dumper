#pragma once

class CCitadelDruidInvisBush : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBF0]; // offset 0x0
    VectorWS m_vStartPos; // offset 0xBF0, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xBFC, size 0xC, align 4
    GameTime_t m_flStartGrowTime; // offset 0xC08, size 0x4, align 255
    GameTime_t m_flEndGrowTime; // offset 0xC0C, size 0x4, align 255
};
