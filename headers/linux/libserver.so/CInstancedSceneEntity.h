#pragma once

class CInstancedSceneEntity : public CSceneEntity /*0x0*/  // sizeof 0xAD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0xAC0, size 0x4, align 4
    bool m_bHadOwner; // offset 0xAC4, size 0x1, align 1
    char _pad_0AC5[0x3]; // offset 0xAC5
    float32 m_flPostSpeakDelay; // offset 0xAC8, size 0x4, align 4
    float32 m_flPreDelay; // offset 0xACC, size 0x4, align 4
    bool m_bIsBackground; // offset 0xAD0, size 0x1, align 1
    bool m_bRemoveOnCompletion; // offset 0xAD1, size 0x1, align 1
    char _pad_0AD2[0x2]; // offset 0xAD2
    CHandle< CBaseEntity > m_hTarget; // offset 0xAD4, size 0x4, align 4
};
