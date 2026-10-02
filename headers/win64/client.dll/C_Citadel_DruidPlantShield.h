#pragma once

class C_Citadel_DruidPlantShield : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xE28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE00]; // offset 0x0
    bool m_bSolid; // offset 0xE00, size 0x1, align 1
    char _pad_0E01[0x3]; // offset 0xE01
    VectorWS m_vStartPos; // offset 0xE04, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xE10, size 0xC, align 4
    GameTime_t m_flStartGrowTime; // offset 0xE1C, size 0x4, align 255
    GameTime_t m_flEndGrowTime; // offset 0xE20, size 0x4, align 255
    char _pad_0E24[0x4]; // offset 0xE24
};
