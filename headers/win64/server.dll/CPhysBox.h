#pragma once

class CPhysBox : public CBreakable /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    int32 m_damageType; // offset 0x850, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0x854, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0x858, size 0x4, align 4
    Vector m_vHoverPosePosition; // offset 0x85C, size 0xC, align 4
    QAngle m_angHoverPoseAngles; // offset 0x868, size 0xC, align 4
    bool m_bNotSolidToWorld; // offset 0x874, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0x875, size 0x1, align 1
    HoverPoseFlags_t m_nHoverPoseFlags; // offset 0x876, size 0x1, align 1
    char _pad_0877[0x1]; // offset 0x877
    float32 m_flTouchOutputPerEntityDelay; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
    CUtlSymbolLarge m_iszCollisionGroup; // offset 0x880, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsAs; // offset 0x888, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsWith; // offset 0x890, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsExclude; // offset 0x898, size 0x8, align 8
    CEntityIOOutput m_OnDamaged; // offset 0x8A0, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0x8B8, size 0x18, align 255
    CEntityIOOutput m_OnMotionEnabled; // offset 0x8D0, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0x8E8, size 0x18, align 255
    CEntityIOOutput m_OnStartTouch; // offset 0x900, size 0x18, align 255
    char _pad_0918[0x18]; // offset 0x918
};
