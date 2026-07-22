#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0xAC8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    float32 m_gravityScale; // offset 0xA78, size 0x4, align 4 | MNetworkEnable
    float32 m_linearLimit; // offset 0xA7C, size 0x4, align 4 | MNetworkEnable
    float32 m_linearDamping; // offset 0xA80, size 0x4, align 4 | MNetworkEnable
    float32 m_angularLimit; // offset 0xA84, size 0x4, align 4 | MNetworkEnable
    float32 m_angularDamping; // offset 0xA88, size 0x4, align 4 | MNetworkEnable
    float32 m_linearForce; // offset 0xA8C, size 0x4, align 4 | MNetworkEnable
    float32 m_flFrequency; // offset 0xA90, size 0x4, align 4 | MNetworkEnable
    float32 m_flDampingRatio; // offset 0xA94, size 0x4, align 4 | MNetworkEnable
    Vector m_vecLinearForcePointAt; // offset 0xA98, size 0xC, align 4 | MNetworkEnable
    bool m_bCollapseToForcePoint; // offset 0xAA4, size 0x1, align 1 | MNetworkEnable
    char _pad_0AA5[0x3]; // offset 0xAA5
    Vector m_vecLinearForcePointAtWorld; // offset 0xAA8, size 0xC, align 4 | MNetworkEnable
    Vector m_vecLinearForceDirection; // offset 0xAB4, size 0xC, align 4 | MNetworkEnable
    bool m_bConvertToDebrisWhenPossible; // offset 0xAC0, size 0x1, align 1 | MNetworkEnable
    char _pad_0AC1[0x7]; // offset 0xAC1
};
