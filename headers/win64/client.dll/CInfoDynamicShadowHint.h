#pragma once

class CInfoDynamicShadowHint : public C_PointEntity /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    bool m_bDisabled; // offset 0x5F0, size 0x1, align 1
    char _pad_05F1[0x3]; // offset 0x5F1
    float32 m_flRange; // offset 0x5F4, size 0x4, align 4
    int32 m_nImportance; // offset 0x5F8, size 0x4, align 4
    int32 m_nLightChoice; // offset 0x5FC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLight; // offset 0x600, size 0x4, align 4
    char _pad_0604[0x4]; // offset 0x604
};
