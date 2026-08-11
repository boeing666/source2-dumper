#pragma once

class CInfoDynamicShadowHint : public CPointEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    bool m_bDisabled; // offset 0x4A0, size 0x1, align 1
    char _pad_04A1[0x3]; // offset 0x4A1
    float32 m_flRange; // offset 0x4A4, size 0x4, align 4
    int32 m_nImportance; // offset 0x4A8, size 0x4, align 4
    int32 m_nLightChoice; // offset 0x4AC, size 0x4, align 4
    CHandle< CBaseEntity > m_hLight; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
};
