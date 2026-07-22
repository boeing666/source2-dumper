#pragma once

class C_SkyCamera : public C_BaseEntity /*0x0*/  // sizeof 0x690, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    sky3dparams_t m_skyboxData; // offset 0x5F0, size 0x90, align 255 | MNetworkEnable MNotSaved
    CUtlStringToken m_skyboxSlotToken; // offset 0x680, size 0x4, align 4 | MNetworkEnable
    bool m_bUseAngles; // offset 0x684, size 0x1, align 1
    char _pad_0685[0x3]; // offset 0x685
    C_SkyCamera* m_pNext; // offset 0x688, size 0x8, align 8 | MNotSaved
};
