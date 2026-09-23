#pragma once

class CPhysBox : public CBreakable /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x928]; // offset 0x0
    int32 m_damageType; // offset 0x928, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0x92C, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0x930, size 0x4, align 4
    Vector m_vHoverPosePosition; // offset 0x934, size 0xC, align 4
    QAngle m_angHoverPoseAngles; // offset 0x940, size 0xC, align 4
    bool m_bNotSolidToWorld; // offset 0x94C, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0x94D, size 0x1, align 1
    HoverPoseFlags_t m_nHoverPoseFlags; // offset 0x94E, size 0x1, align 1
    char _pad_094F[0x1]; // offset 0x94F
    float32 m_flTouchOutputPerEntityDelay; // offset 0x950, size 0x4, align 4
    char _pad_0954[0x4]; // offset 0x954
    CUtlSymbolLarge m_iszCollisionGroup; // offset 0x958, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsAs; // offset 0x960, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsWith; // offset 0x968, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsExclude; // offset 0x970, size 0x8, align 8
    CEntityIOOutput m_OnDamaged; // offset 0x978, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0x990, size 0x18, align 255
    CEntityIOOutput m_OnMotionEnabled; // offset 0x9A8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0x9C0, size 0x18, align 255
    CEntityIOOutput m_OnStartTouch; // offset 0x9D8, size 0x18, align 255
    char _pad_09F0[0x18]; // offset 0x9F0
};
