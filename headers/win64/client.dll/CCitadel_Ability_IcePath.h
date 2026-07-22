#pragma once

class CCitadel_Ability_IcePath : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1300, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x12D8]; // offset 0x0
    bool m_bIcePathing; // offset 0x12D8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_12D9[0x3]; // offset 0x12D9
    QAngle m_qLastAngles; // offset 0x12DC, size 0xC, align 4 | MNetworkEnable
    Vector m_vLastVelocity; // offset 0x12E8, size 0xC, align 4 | MNetworkEnable
    bool m_bFirstMovementTick; // offset 0x12F4, size 0x1, align 1 | MNetworkEnable
    char _pad_12F5[0x3]; // offset 0x12F5
    GameTime_t m_tLingerMovementControlUntilTime; // offset 0x12F8, size 0x4, align 255
    char _pad_12FC[0x4]; // offset 0x12FC
};
