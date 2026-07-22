#pragma once

class C_Citadel_DruidPlantShield : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xCD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    bool m_bSolid; // offset 0xCB0, size 0x1, align 1
    char _pad_0CB1[0x3]; // offset 0xCB1
    VectorWS m_vStartPos; // offset 0xCB4, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xCC0, size 0xC, align 4
    GameTime_t m_flStartGrowTime; // offset 0xCCC, size 0x4, align 255
    GameTime_t m_flEndGrowTime; // offset 0xCD0, size 0x4, align 255
    char _pad_0CD4[0x4]; // offset 0xCD4
};
