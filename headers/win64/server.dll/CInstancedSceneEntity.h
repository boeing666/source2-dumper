#pragma once

class CInstancedSceneEntity : public CSceneEntity /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x800]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0x800, size 0x4, align 4
    bool m_bHadOwner; // offset 0x804, size 0x1, align 1
    char _pad_0805[0x3]; // offset 0x805
    float32 m_flPostSpeakDelay; // offset 0x808, size 0x4, align 4
    float32 m_flPreDelay; // offset 0x80C, size 0x4, align 4
    bool m_bIsBackground; // offset 0x810, size 0x1, align 1
    char _pad_0811[0x3]; // offset 0x811
    CHandle< CBaseEntity > m_hTarget; // offset 0x814, size 0x4, align 4
};
