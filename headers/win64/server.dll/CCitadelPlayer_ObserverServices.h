#pragma once

class CCitadelPlayer_ObserverServices : public CPlayer_ObserverServices /*0x0*/  // sizeof 0x80, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    int32 m_nCurrentObservedTeam; // offset 0x58, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastObserverTarget; // offset 0x5C, size 0x4, align 4
    CHandle< CBaseEntity > m_hPreviousTeamTarget; // offset 0x60, size 0x4, align 4
    QAngle m_angTargetCamera; // offset 0x64, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkUserGroup MNetworkBitCount MNetworkPriority
    Vector m_vTargetCameraPos; // offset 0x70, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkUserGroup MNetworkPriority
    char _pad_007C[0x4]; // offset 0x7C
};
