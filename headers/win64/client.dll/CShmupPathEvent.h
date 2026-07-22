#pragma once

class CShmupPathEvent  // sizeof 0x18, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    EShmupPathEventType m_type; // offset 0x0, size 0x4, align 4
    int32 m_nBulletPatternIndex; // offset 0x4, size 0x4, align 4
    float32 m_flTime; // offset 0x8, size 0x4, align 4
    float32 m_flSpeed; // offset 0xC, size 0x4, align 4 | MPropertySuppressExpr
    char _pad_0010[0x8]; // offset 0x10
};
