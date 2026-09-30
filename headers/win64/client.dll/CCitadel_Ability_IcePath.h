#pragma once

class CCitadel_Ability_IcePath : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1838]; // offset 0x0
    bool m_bIcePathing; // offset 0x1838, size 0x1, align 1
    char _pad_1839[0x3]; // offset 0x1839
    QAngle m_qLastAngles; // offset 0x183C, size 0xC, align 4
    Vector m_vLastVelocity; // offset 0x1848, size 0xC, align 4
    bool m_bFirstMovementTick; // offset 0x1854, size 0x1, align 1
    char _pad_1855[0x3]; // offset 0x1855
    GameTime_t m_tLingerMovementControlUntilTime; // offset 0x1858, size 0x4, align 255
    char _pad_185C[0x4]; // offset 0x185C
};
