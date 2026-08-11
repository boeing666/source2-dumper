#pragma once

class CPulseGameBlackboard : public CBaseEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlString m_strGraphName; // offset 0x4A8, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strStateBlob; // offset 0x4B0, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
};
