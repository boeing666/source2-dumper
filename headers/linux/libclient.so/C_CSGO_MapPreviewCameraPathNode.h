#pragma once

class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CUtlSymbolLarge m_szParentPathUniqueID; // offset 0x780, size 0x8, align 8
    int32 m_nPathIndex; // offset 0x788, size 0x4, align 4
    Vector m_vInTangentLocal; // offset 0x78C, size 0xC, align 4
    Vector m_vOutTangentLocal; // offset 0x798, size 0xC, align 4
    float32 m_flFOV; // offset 0x7A4, size 0x4, align 4
    float32 m_flCameraSpeed; // offset 0x7A8, size 0x4, align 4
    float32 m_flEaseIn; // offset 0x7AC, size 0x4, align 4
    float32 m_flEaseOut; // offset 0x7B0, size 0x4, align 4
    Vector m_vInTangentWorld; // offset 0x7B4, size 0xC, align 4
    Vector m_vOutTangentWorld; // offset 0x7C0, size 0xC, align 4
    char _pad_07CC[0x4]; // offset 0x7CC
};
