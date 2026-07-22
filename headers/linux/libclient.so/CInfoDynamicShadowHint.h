#pragma once

class CInfoDynamicShadowHint : public C_PointEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    bool m_bDisabled; // offset 0x77C, size 0x1, align 1
    char _pad_077D[0x3]; // offset 0x77D
    float32 m_flRange; // offset 0x780, size 0x4, align 4
    int32 m_nImportance; // offset 0x784, size 0x4, align 4
    int32 m_nLightChoice; // offset 0x788, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLight; // offset 0x78C, size 0x4, align 4
};
