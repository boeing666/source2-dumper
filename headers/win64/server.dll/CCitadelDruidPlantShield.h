#pragma once

class CCitadelDruidPlantShield : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBF0]; // offset 0x0
    bool m_bSolid; // offset 0xBF0, size 0x1, align 1
    char _pad_0BF1[0x3]; // offset 0xBF1
    VectorWS m_vStartPos; // offset 0xBF4, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xC00, size 0xC, align 4
    GameTime_t m_flStartGrowTime; // offset 0xC0C, size 0x4, align 255
    GameTime_t m_flEndGrowTime; // offset 0xC10, size 0x4, align 255
    char _pad_0C14[0xC]; // offset 0xC14
};
