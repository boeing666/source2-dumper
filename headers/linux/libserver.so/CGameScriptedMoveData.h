#pragma once

class CGameScriptedMoveData  // sizeof 0x74, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    Vector m_vAccumulatedRootMotion; // offset 0x0, size 0xC, align 4
    QAngle m_angAccumulatedRootMotionRotation; // offset 0xC, size 0xC, align 4
    VectorWS m_vSrc; // offset 0x18, size 0xC, align 4
    QAngle m_angSrc; // offset 0x24, size 0xC, align 4
    QAngle m_angCurrent; // offset 0x30, size 0xC, align 4
    float32 m_flLockedSpeed; // offset 0x3C, size 0x4, align 4
    float32 m_flAngRate; // offset 0x40, size 0x4, align 4
    float32 m_flDuration; // offset 0x44, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x48, size 0x4, align 255
    bool m_bActive; // offset 0x4C, size 0x1, align 1
    bool m_bTeleportOnEnd; // offset 0x4D, size 0x1, align 1
    bool m_bIgnoreRotation; // offset 0x4E, size 0x1, align 1
    bool m_bSuccess; // offset 0x4F, size 0x1, align 1
    ForcedCrouchState_t m_nForcedCrouchState; // offset 0x50, size 0x4, align 4
    bool m_bIgnoreCollisions; // offset 0x54, size 0x1, align 1
    char _pad_0055[0x3]; // offset 0x55
    Vector m_vDest; // offset 0x58, size 0xC, align 4
    QAngle m_angDst; // offset 0x64, size 0xC, align 4
    CHandle< CBaseEntity > m_hDestEntity; // offset 0x70, size 0x4, align 4
};
