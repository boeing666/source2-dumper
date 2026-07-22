#pragma once

class C_OmniLight : public C_BarnLight /*0x0*/  // sizeof 0xCC8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCB8]; // offset 0x0
    float32 m_flInnerAngle; // offset 0xCB8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flOuterAngle; // offset 0xCBC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bShowLight; // offset 0xCC0, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0CC1[0x7]; // offset 0xCC1
};
