#pragma once

class CInfoDynamicShadowHint : public C_PointEntity /*0x0*/  // sizeof 0x618, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool m_bDisabled; // offset 0x600, size 0x1, align 1
    char _pad_0601[0x3]; // offset 0x601
    float32 m_flRange; // offset 0x604, size 0x4, align 4
    int32 m_nImportance; // offset 0x608, size 0x4, align 4
    int32 m_nLightChoice; // offset 0x60C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLight; // offset 0x610, size 0x4, align 4
    char _pad_0614[0x4]; // offset 0x614
};
