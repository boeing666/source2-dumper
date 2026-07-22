#pragma once

class C_Citadel_DruidHealingTree : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xCF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCD0]; // offset 0x0
    CUtlString m_strFruitModelName; // offset 0xCD0, size 0x8, align 8
    VectorWS m_vStartPos; // offset 0xCD8, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xCE4, size 0xC, align 4
    float32 m_flGrowDuration; // offset 0xCF0, size 0x4, align 4
    char _pad_0CF4[0x4]; // offset 0xCF4
};
