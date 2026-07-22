#pragma once

class CShmupBossBodyPart  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_strAttachName; // offset 0x0, size 0x8, align 8
    float32 m_flRadius; // offset 0x8, size 0x4, align 4
    int32 m_nHitRegionIndex; // offset 0xC, size 0x4, align 4
    int32 m_nDamageMultiplier; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
