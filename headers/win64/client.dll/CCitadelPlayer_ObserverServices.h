#pragma once

class CCitadelPlayer_ObserverServices : public CPlayer_ObserverServices /*0x0*/  // sizeof 0x190, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    int32 m_nLastLocalPlayerObservedTeam; // offset 0x60, size 0x4, align 4
    int32 m_nCurrentObservedTeam; // offset 0x64, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastObserverTarget; // offset 0x68, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPreviousTeamTarget; // offset 0x6C, size 0x4, align 4
    QAngle m_angTargetCamera; // offset 0x70, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    char _pad_007C[0x84]; // offset 0x7C
    Vector m_vTargetCameraPos; // offset 0x100, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    char _pad_010C[0x84]; // offset 0x10C
};
