#pragma once

class CShmupPathDefinition  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strNameInMap; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    float32 m_flSpeed; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    Vector m_vPathOffset; // offset 0x14, size 0xC, align 4
    CUtlVector< CShmupPathEvent > m_vecPathEvents; // offset 0x20, size 0x18, align 8
    char _pad_0038[0x8]; // offset 0x38
};
