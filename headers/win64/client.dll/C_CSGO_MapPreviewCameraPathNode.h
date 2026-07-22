#pragma once

class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity /*0x0*/  // sizeof 0x650, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CUtlSymbolLarge m_szParentPathUniqueID; // offset 0x600, size 0x8, align 8
    int32 m_nPathIndex; // offset 0x608, size 0x4, align 4
    Vector m_vInTangentLocal; // offset 0x60C, size 0xC, align 4
    Vector m_vOutTangentLocal; // offset 0x618, size 0xC, align 4
    float32 m_flFOV; // offset 0x624, size 0x4, align 4
    float32 m_flCameraSpeed; // offset 0x628, size 0x4, align 4
    float32 m_flEaseIn; // offset 0x62C, size 0x4, align 4
    float32 m_flEaseOut; // offset 0x630, size 0x4, align 4
    Vector m_vInTangentWorld; // offset 0x634, size 0xC, align 4
    Vector m_vOutTangentWorld; // offset 0x640, size 0xC, align 4
    char _pad_064C[0x4]; // offset 0x64C
};
