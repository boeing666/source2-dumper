#pragma once

struct CGameScriptedMoveDef_t  // sizeof 0x30, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    Vector m_vDestOffset; // offset 0x0, size 0xC, align 4
    CHandle< CBaseEntity > m_hDestEntity; // offset 0xC, size 0x4, align 4
    QAngle m_angDest; // offset 0x10, size 0xC, align 4
    float32 m_flDuration; // offset 0x1C, size 0x4, align 4
    float32 m_flAngRate; // offset 0x20, size 0x4, align 4
    float32 m_flMoveSpeed; // offset 0x24, size 0x4, align 4
    bool m_bAimDisabled; // offset 0x28, size 0x1, align 1
    bool m_bIgnoreRotation; // offset 0x29, size 0x1, align 1
    char _pad_002A[0x2]; // offset 0x2A
    ForcedCrouchState_t m_nForcedCrouchState; // offset 0x2C, size 0x4, align 4
};
