#pragma once

class C_Citadel_DruidPlantShield : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xDD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    bool m_bSolid; // offset 0xDA8, size 0x1, align 1
    char _pad_0DA9[0x3]; // offset 0xDA9
    VectorWS m_vStartPos; // offset 0xDAC, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xDB8, size 0xC, align 4
    GameTime_t m_flStartGrowTime; // offset 0xDC4, size 0x4, align 255
    GameTime_t m_flEndGrowTime; // offset 0xDC8, size 0x4, align 255
    char _pad_0DCC[0x4]; // offset 0xDCC
};
