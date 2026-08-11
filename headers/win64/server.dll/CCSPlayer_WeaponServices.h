#pragma once

class CCSPlayer_WeaponServices : public CPlayer_WeaponServices /*0x0*/  // sizeof 0x1880, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    GameTime_t m_flNextAttack; // offset 0xC0, size 0x4, align 255
    CHandle< CBasePlayerWeapon > m_hSavedWeapon; // offset 0xC4, size 0x4, align 4
    int32 m_nTimeToMelee; // offset 0xC8, size 0x4, align 4
    int32 m_nTimeToSecondary; // offset 0xCC, size 0x4, align 4
    int32 m_nTimeToPrimary; // offset 0xD0, size 0x4, align 4
    int32 m_nTimeToSniperRifle; // offset 0xD4, size 0x4, align 4
    bool m_bIsBeingGivenItem; // offset 0xD8, size 0x1, align 1
    bool m_bIsPickingUpItemWithUse; // offset 0xD9, size 0x1, align 1
    bool m_bPickedUpWeapon; // offset 0xDA, size 0x1, align 1
    bool m_bDisableAutoDeploy; // offset 0xDB, size 0x1, align 1
    bool m_bIsPickingUpGroundWeapon; // offset 0xDC, size 0x1, align 1
    char _pad_00DD[0x1783]; // offset 0xDD
    CNetworkUtlVectorBase< uint8 > m_networkAnimTiming; // offset 0x1860, size 0x18, align 8
    bool m_bBlockInspectUntilNextGraphUpdate; // offset 0x1878, size 0x1, align 1
    char _pad_1879[0x7]; // offset 0x1879
};
