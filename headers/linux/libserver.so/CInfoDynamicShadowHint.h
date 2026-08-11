#pragma once

class CInfoDynamicShadowHint : public CPointEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bDisabled; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    float32 m_flRange; // offset 0x77C, size 0x4, align 4
    int32 m_nImportance; // offset 0x780, size 0x4, align 4
    int32 m_nLightChoice; // offset 0x784, size 0x4, align 4
    CHandle< CBaseEntity > m_hLight; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
};
