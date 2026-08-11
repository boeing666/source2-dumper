#pragma once

class CInfoDynamicShadowHint : public CPointEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bDisabled; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    float32 m_flRange; // offset 0x78C, size 0x4, align 4
    int32 m_nImportance; // offset 0x790, size 0x4, align 4
    int32 m_nLightChoice; // offset 0x794, size 0x4, align 4
    CHandle< CBaseEntity > m_hLight; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
};
