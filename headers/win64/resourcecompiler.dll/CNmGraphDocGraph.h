#pragma once

class CNmGraphDocGraph  // sizeof 0x50, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    V_uuid_t m_ID; // offset 0x8, size 0x10, align 4
    char _pad_0018[0x8]; // offset 0x18
    CUtlVector< CNmGraphDocNode* > m_nodes; // offset 0x20, size 0x18, align 8
    NmGraphDocGraphType_t m_graphType; // offset 0x38, size 0x4, align 4
    Vector2D m_viewOffset; // offset 0x3C, size 0x8, align 4
    float32 m_flViewZoom; // offset 0x44, size 0x4, align 4
    char _pad_0048[0x8]; // offset 0x48
};
