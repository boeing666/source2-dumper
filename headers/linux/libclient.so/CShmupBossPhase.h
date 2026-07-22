#pragma once

class CShmupBossPhase  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_strName; // offset 0x0, size 0x8, align 8
    float32 m_flChargeTime; // offset 0x8, size 0x4, align 4
    float32 m_flDuration; // offset 0xC, size 0x4, align 4
    Vector2D m_vPosition; // offset 0x10, size 0x8, align 4
};
