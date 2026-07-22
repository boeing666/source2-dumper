#pragma once

struct PingMinimapIconInfo_t  // sizeof 0x24, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    int32 m_nIconID; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    float32 m_flSize; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    bool m_bAlignBottom; // offset 0x8, size 0x1, align 1
    bool m_bForceBaseIconWhite; // offset 0x9, size 0x1, align 1
    char _pad_000A[0x2]; // offset 0xA
    float32 m_flAnimStartSize; // offset 0xC, size 0x4, align 4
    float32 m_flAnimThrobSize; // offset 0x10, size 0x4, align 4
    float32 m_flAnimThrobRate; // offset 0x14, size 0x4, align 4
    float32 m_flAnimIntroDuration; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    float32 m_flAnimOutroDuration; // offset 0x1C, size 0x4, align 4 | MPropertyDescription
    EPingMinimapDrawCondition m_eDrawCondition; // offset 0x20, size 0x4, align 4
};
