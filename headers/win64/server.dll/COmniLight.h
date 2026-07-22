#pragma once

class COmniLight : public CBarnLight /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA68]; // offset 0x0
    float32 m_flInnerAngle; // offset 0xA68, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flOuterAngle; // offset 0xA6C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bShowLight; // offset 0xA70, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0A71[0x7]; // offset 0xA71
};
