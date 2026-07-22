#pragma once

class CInstancedSceneEntity : public CSceneEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E0]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0x7E0, size 0x4, align 4
    bool m_bHadOwner; // offset 0x7E4, size 0x1, align 1
    char _pad_07E5[0x3]; // offset 0x7E5
    float32 m_flPostSpeakDelay; // offset 0x7E8, size 0x4, align 4
    float32 m_flPreDelay; // offset 0x7EC, size 0x4, align 4
    bool m_bIsBackground; // offset 0x7F0, size 0x1, align 1
    bool m_bRemoveOnCompletion; // offset 0x7F1, size 0x1, align 1
    char _pad_07F2[0x2]; // offset 0x7F2
    CHandle< CBaseEntity > m_hTarget; // offset 0x7F4, size 0x4, align 4
};
