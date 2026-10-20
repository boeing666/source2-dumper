#pragma once

class CCitadel_Ability_IcePath : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1840]; // offset 0x0
    bool m_bIcePathing; // offset 0x1840, size 0x1, align 1
    char _pad_1841[0x3]; // offset 0x1841
    QAngle m_qLastAngles; // offset 0x1844, size 0xC, align 4
    Vector m_vLastVelocity; // offset 0x1850, size 0xC, align 4
    bool m_bFirstMovementTick; // offset 0x185C, size 0x1, align 1
    char _pad_185D[0x3]; // offset 0x185D
    GameTime_t m_tLingerMovementControlUntilTime; // offset 0x1860, size 0x4, align 255
    char _pad_1864[0x4]; // offset 0x1864
};
