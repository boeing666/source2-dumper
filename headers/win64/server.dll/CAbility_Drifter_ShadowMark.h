#pragma once

class CAbility_Drifter_ShadowMark : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CBaseEntity > m_hTeleportTarget; // offset 0x14A8, size 0x4, align 4
    bool m_bTeleported; // offset 0x14AC, size 0x1, align 1
    char _pad_14AD[0x3]; // offset 0x14AD
    QAngle m_qPostTeleportAngles; // offset 0x14B0, size 0xC, align 4
    char _pad_14BC[0x4]; // offset 0x14BC
    GameTime_t m_flExpireTime; // offset 0x14C0, size 0x4, align 255
    GameTime_t m_flTeleportedTime; // offset 0x14C4, size 0x4, align 255
    char _pad_14C8[0x2C0]; // offset 0x14C8
};
