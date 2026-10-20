#pragma once

class CAbility_Drifter_ShadowMark : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x19C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CHandle< C_BaseEntity > m_hTeleportTarget; // offset 0x16E0, size 0x4, align 4
    bool m_bTeleported; // offset 0x16E4, size 0x1, align 1
    char _pad_16E5[0x3]; // offset 0x16E5
    QAngle m_qPostTeleportAngles; // offset 0x16E8, size 0xC, align 4
    char _pad_16F4[0x4]; // offset 0x16F4
    GameTime_t m_flExpireTime; // offset 0x16F8, size 0x4, align 255
    GameTime_t m_flTeleportedTime; // offset 0x16FC, size 0x4, align 255
    char _pad_1700[0x2C0]; // offset 0x1700
};
