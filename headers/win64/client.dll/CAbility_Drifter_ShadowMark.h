#pragma once

class CAbility_Drifter_ShadowMark : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x19B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTeleportTarget; // offset 0x16D8, size 0x4, align 4
    bool m_bTeleported; // offset 0x16DC, size 0x1, align 1
    char _pad_16DD[0x3]; // offset 0x16DD
    QAngle m_qPostTeleportAngles; // offset 0x16E0, size 0xC, align 4
    char _pad_16EC[0x4]; // offset 0x16EC
    GameTime_t m_flExpireTime; // offset 0x16F0, size 0x4, align 255
    GameTime_t m_flTeleportedTime; // offset 0x16F4, size 0x4, align 255
    char _pad_16F8[0x2C0]; // offset 0x16F8
};
