#pragma once

class CInstancedSceneEntity : public CSceneEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0x790, size 0x4, align 4
    bool m_bHadOwner; // offset 0x794, size 0x1, align 1
    char _pad_0795[0x3]; // offset 0x795
    float32 m_flPostSpeakDelay; // offset 0x798, size 0x4, align 4
    float32 m_flPreDelay; // offset 0x79C, size 0x4, align 4
    bool m_bIsBackground; // offset 0x7A0, size 0x1, align 1
    bool m_bRemoveOnCompletion; // offset 0x7A1, size 0x1, align 1
    char _pad_07A2[0x2]; // offset 0x7A2
    CHandle< CBaseEntity > m_hTarget; // offset 0x7A4, size 0x4, align 4
};
