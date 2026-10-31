#pragma once

struct CitadelEventEntityOverride_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strClassName; // offset 0x0, size 0x8, align 8
    CUtlString m_strTargetName; // offset 0x8, size 0x8, align 8
    bool m_bHidden; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    Vector m_vecOffset; // offset 0x14, size 0xC, align 4
    QAngle m_angRotation; // offset 0x20, size 0xC, align 4
    float32 m_flScale; // offset 0x2C, size 0x4, align 4
};
