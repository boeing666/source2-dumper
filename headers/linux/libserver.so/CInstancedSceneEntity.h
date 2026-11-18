#pragma once

class CInstancedSceneEntity : public CSceneEntity /*0x0*/  // sizeof 0xB40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB28]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0xB28, size 0x4, align 4
    bool m_bHadOwner; // offset 0xB2C, size 0x1, align 1
    char _pad_0B2D[0x3]; // offset 0xB2D
    float32 m_flPostSpeakDelay; // offset 0xB30, size 0x4, align 4
    float32 m_flPreDelay; // offset 0xB34, size 0x4, align 4
    bool m_bIsBackground; // offset 0xB38, size 0x1, align 1
    char _pad_0B39[0x3]; // offset 0xB39
    CHandle< CBaseEntity > m_hTarget; // offset 0xB3C, size 0x4, align 4
};
