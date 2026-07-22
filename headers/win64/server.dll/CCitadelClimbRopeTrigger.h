#pragma once

class CCitadelClimbRopeTrigger : public CBaseTrigger /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    bool m_bAlignCameraOnAutoDismount; // offset 0x8E0, size 0x1, align 1 | MNetworkEnable
    char _pad_08E1[0x3]; // offset 0x8E1
    CUtlStringToken m_tModifier; // offset 0x8E4, size 0x4, align 4
};
