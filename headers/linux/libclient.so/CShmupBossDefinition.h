#pragma once

class CShmupBossDefinition  // sizeof 0x48, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlVector< CShmupBossBodyPart > m_vecBodyParts; // offset 0x0, size 0x18, align 8
    float32 m_flIntroDuration; // offset 0x18, size 0x4, align 4
    float32 m_flMouthLaserChargeTime; // offset 0x1C, size 0x4, align 4
    float32 m_flMouthLaserDuration; // offset 0x20, size 0x4, align 4
    float32 m_flWingBarrageChargeTime; // offset 0x24, size 0x4, align 4
    float32 m_flWingBarrageDuration; // offset 0x28, size 0x4, align 4
    int32 m_nSplinterBlastCount; // offset 0x2C, size 0x4, align 4
    float32 m_fSplinterBlastChargeTime; // offset 0x30, size 0x4, align 4
    float32 m_flSplinterBlastDuration; // offset 0x34, size 0x4, align 4
    float32 m_flColdEmbraceDuration; // offset 0x38, size 0x4, align 4
    Vector2D m_vIdlePosition; // offset 0x3C, size 0x8, align 4
    char _pad_0044[0x4]; // offset 0x44
};
