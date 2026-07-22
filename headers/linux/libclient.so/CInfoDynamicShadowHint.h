#pragma once

class CInfoDynamicShadowHint : public C_PointEntity /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    bool m_bDisabled; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x3]; // offset 0x76D
    float32 m_flRange; // offset 0x770, size 0x4, align 4
    int32 m_nImportance; // offset 0x774, size 0x4, align 4
    int32 m_nLightChoice; // offset 0x778, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLight; // offset 0x77C, size 0x4, align 4
};
