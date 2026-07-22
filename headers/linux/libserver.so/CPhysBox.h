#pragma once

class CPhysBox : public CBreakable /*0x0*/  // sizeof 0xC00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB24]; // offset 0x0
    int32 m_damageType; // offset 0xB24, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xB28, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xB2C, size 0x4, align 4
    Vector m_vHoverPosePosition; // offset 0xB30, size 0xC, align 4
    QAngle m_angHoverPoseAngles; // offset 0xB3C, size 0xC, align 4
    bool m_bNotSolidToWorld; // offset 0xB48, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xB49, size 0x1, align 1
    HoverPoseFlags_t m_nHoverPoseFlags; // offset 0xB4A, size 0x1, align 1
    char _pad_0B4B[0x1]; // offset 0xB4B
    float32 m_flTouchOutputPerEntityDelay; // offset 0xB4C, size 0x4, align 4
    CUtlSymbolLarge m_iszCollisionGroup; // offset 0xB50, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsAs; // offset 0xB58, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsWith; // offset 0xB60, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsExclude; // offset 0xB68, size 0x8, align 8
    CEntityIOOutput m_OnDamaged; // offset 0xB70, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xB88, size 0x18, align 255
    CEntityIOOutput m_OnMotionEnabled; // offset 0xBA0, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xBB8, size 0x18, align 255
    CEntityIOOutput m_OnStartTouch; // offset 0xBD0, size 0x18, align 255
    char _pad_0BE8[0x18]; // offset 0xBE8
};
