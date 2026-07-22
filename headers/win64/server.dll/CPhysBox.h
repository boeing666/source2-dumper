#pragma once

class CPhysBox : public CBreakable /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    int32 m_damageType; // offset 0x858, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0x85C, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0x860, size 0x4, align 4
    Vector m_vHoverPosePosition; // offset 0x864, size 0xC, align 4
    QAngle m_angHoverPoseAngles; // offset 0x870, size 0xC, align 4
    bool m_bNotSolidToWorld; // offset 0x87C, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0x87D, size 0x1, align 1
    HoverPoseFlags_t m_nHoverPoseFlags; // offset 0x87E, size 0x1, align 1
    char _pad_087F[0x1]; // offset 0x87F
    float32 m_flTouchOutputPerEntityDelay; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x4]; // offset 0x884
    CEntityIOOutput m_OnDamaged; // offset 0x888, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0x8A0, size 0x18, align 255
    CEntityIOOutput m_OnMotionEnabled; // offset 0x8B8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0x8D0, size 0x18, align 255
    CEntityIOOutput m_OnStartTouch; // offset 0x8E8, size 0x18, align 255
    CHandle< CBasePlayerPawn > m_hCarryingPlayer; // offset 0x900, size 0x4, align 4
    char _pad_0904[0x1C]; // offset 0x904
};
