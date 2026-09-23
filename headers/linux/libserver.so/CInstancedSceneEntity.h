#pragma once

class CInstancedSceneEntity : public CSceneEntity /*0x0*/  // sizeof 0xAF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0xAE0, size 0x4, align 4
    bool m_bHadOwner; // offset 0xAE4, size 0x1, align 1
    char _pad_0AE5[0x3]; // offset 0xAE5
    float32 m_flPostSpeakDelay; // offset 0xAE8, size 0x4, align 4
    float32 m_flPreDelay; // offset 0xAEC, size 0x4, align 4
    bool m_bIsBackground; // offset 0xAF0, size 0x1, align 1
    char _pad_0AF1[0x3]; // offset 0xAF1
    CHandle< CBaseEntity > m_hTarget; // offset 0xAF4, size 0x4, align 4
};
