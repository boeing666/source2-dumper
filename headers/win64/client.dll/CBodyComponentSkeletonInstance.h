#pragma once

class CBodyComponentSkeletonInstance : public CBodyComponent /*0x0*/  // sizeof 0x4D0, align 0xFF [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    CSkeletonInstance m_skeletonInstance; // offset 0x80, size 0x450, align 255 | MNetworkEnable
};
