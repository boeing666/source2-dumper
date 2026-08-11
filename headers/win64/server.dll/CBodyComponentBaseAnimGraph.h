#pragma once

class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance /*0x0*/  // sizeof 0xD00, align 0xFF [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CBaseAnimGraphController m_animationController; // offset 0x4A0, size 0x858, align 255 | MNetworkEnable
    char _pad_0CF8[0x8]; // offset 0xCF8
};
