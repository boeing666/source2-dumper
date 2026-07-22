#pragma once

class CSkyCamera : public CBaseEntity /*0x0*/  // sizeof 0x540, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    sky3dparams_t m_skyboxData; // offset 0x4A0, size 0x90, align 255 | MNetworkEnable MNotSaved
    CUtlStringToken m_skyboxSlotToken; // offset 0x530, size 0x4, align 4 | MNetworkEnable
    bool m_bUseAngles; // offset 0x534, size 0x1, align 1
    char _pad_0535[0x3]; // offset 0x535
    CSkyCamera* m_pNext; // offset 0x538, size 0x8, align 8 | MNotSaved
};
