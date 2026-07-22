#pragma once

class CShmupEventTime  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    float32 m_flDelay; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_strEventName; // offset 0x8, size 0x8, align 8
    bool m_bPathFlipped; // offset 0x10, size 0x1, align 1
    bool m_bInvertColors; // offset 0x11, size 0x1, align 1
    char _pad_0012[0x2]; // offset 0x12
    int32 m_nCount; // offset 0x14, size 0x4, align 4
    float32 m_flRepeatInterval; // offset 0x18, size 0x4, align 4
    Vector m_vOffset; // offset 0x1C, size 0xC, align 4
    Vector m_vRepeatOffset; // offset 0x28, size 0xC, align 4
    char _pad_0034[0x4]; // offset 0x34
    CUtlVector< CShmupEventTime > m_children; // offset 0x38, size 0x18, align 8
    char _pad_0050[0x10]; // offset 0x50
};
