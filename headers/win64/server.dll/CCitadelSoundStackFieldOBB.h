#pragma once

class CCitadelSoundStackFieldOBB : public CBaseEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    Vector m_vMins; // offset 0x4A0, size 0xC, align 4 | MNetworkEnable
    Vector m_vMaxs; // offset 0x4AC, size 0xC, align 4 | MNetworkEnable
    uint32 m_nMaxDistance; // offset 0x4B8, size 0x4, align 4 | MNetworkEnable
    char _pad_04BC[0x4]; // offset 0x4BC
    CUtlString m_nStackName; // offset 0x4C0, size 0x8, align 8 | MNetworkEnable
    CUtlString m_nOperatorName; // offset 0x4C8, size 0x8, align 8 | MNetworkEnable
    CUtlString m_nOperatorFieldName; // offset 0x4D0, size 0x8, align 8 | MNetworkEnable
    uint32 m_nMusicState; // offset 0x4D8, size 0x4, align 4 | MNetworkEnable
    char _pad_04DC[0x4]; // offset 0x4DC
};
