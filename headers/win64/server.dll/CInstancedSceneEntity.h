#pragma once

class CInstancedSceneEntity : public CSceneEntity /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x818]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0x818, size 0x4, align 4
    bool m_bHadOwner; // offset 0x81C, size 0x1, align 1
    char _pad_081D[0x3]; // offset 0x81D
    float32 m_flPostSpeakDelay; // offset 0x820, size 0x4, align 4
    float32 m_flPreDelay; // offset 0x824, size 0x4, align 4
    bool m_bIsBackground; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x3]; // offset 0x829
    CHandle< CBaseEntity > m_hTarget; // offset 0x82C, size 0x4, align 4
};
