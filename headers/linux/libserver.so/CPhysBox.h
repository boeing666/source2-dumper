#pragma once

class CPhysBox : public CBreakable /*0x0*/  // sizeof 0xD50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC74]; // offset 0x0
    int32 m_damageType; // offset 0xC74, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xC78, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xC7C, size 0x4, align 4
    Vector m_vHoverPosePosition; // offset 0xC80, size 0xC, align 4
    QAngle m_angHoverPoseAngles; // offset 0xC8C, size 0xC, align 4
    bool m_bNotSolidToWorld; // offset 0xC98, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xC99, size 0x1, align 1
    HoverPoseFlags_t m_nHoverPoseFlags; // offset 0xC9A, size 0x1, align 1
    char _pad_0C9B[0x1]; // offset 0xC9B
    float32 m_flTouchOutputPerEntityDelay; // offset 0xC9C, size 0x4, align 4
    CUtlSymbolLarge m_iszCollisionGroup; // offset 0xCA0, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsAs; // offset 0xCA8, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsWith; // offset 0xCB0, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsExclude; // offset 0xCB8, size 0x8, align 8
    CEntityIOOutput m_OnDamaged; // offset 0xCC0, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xCD8, size 0x18, align 255
    CEntityIOOutput m_OnMotionEnabled; // offset 0xCF0, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xD08, size 0x18, align 255
    CEntityIOOutput m_OnStartTouch; // offset 0xD20, size 0x18, align 255
    char _pad_0D38[0x18]; // offset 0xD38
};
