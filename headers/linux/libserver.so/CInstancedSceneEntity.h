#pragma once

class CInstancedSceneEntity : public CSceneEntity /*0x0*/  // sizeof 0xAE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAD0]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0xAD0, size 0x4, align 4
    bool m_bHadOwner; // offset 0xAD4, size 0x1, align 1
    char _pad_0AD5[0x3]; // offset 0xAD5
    float32 m_flPostSpeakDelay; // offset 0xAD8, size 0x4, align 4
    float32 m_flPreDelay; // offset 0xADC, size 0x4, align 4
    bool m_bIsBackground; // offset 0xAE0, size 0x1, align 1
    bool m_bRemoveOnCompletion; // offset 0xAE1, size 0x1, align 1
    char _pad_0AE2[0x2]; // offset 0xAE2
    CHandle< CBaseEntity > m_hTarget; // offset 0xAE4, size 0x4, align 4
};
