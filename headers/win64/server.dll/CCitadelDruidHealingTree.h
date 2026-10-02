#pragma once

class CCitadelDruidHealingTree : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC90, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC60]; // offset 0x0
    CUtlString m_strFruitModelName; // offset 0xC60, size 0x8, align 8
    VectorWS m_vStartPos; // offset 0xC68, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xC74, size 0xC, align 4
    float32 m_flGrowDuration; // offset 0xC80, size 0x4, align 4
    char _pad_0C84[0xC]; // offset 0xC84
};
